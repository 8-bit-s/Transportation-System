use std::collections::HashMap;
use crate::models::{Trip, City};
use super::db_access::*;
use super::state::AppState;
use actix_web::{web, HttpResponse};

pub async fn health_check_handler(
    app_state: web::Data<AppState>
) -> HttpResponse {
    let health_check_reponse = &app_state.health_check_response;//固定的欢迎/健康字符串
    let mut visit_count = app_state.visit_count.lock().unwrap();
    let response = format!("{} {} times", health_check_reponse, visit_count);
    *visit_count+=1;
    HttpResponse::Ok().json(&response)//Ok()?
}
//localhost:3000/index;stf=Shenzhen;arv=Wuhan;type=rail;dist=1.1;time=2-30;cost=3400
pub async fn new_trip(
    new_trip: web::Json<Trip>,
    app_state: web::Data<AppState>
) -> HttpResponse {
    let t = new_trip.into();
    new_trip_db(&app_state.pool, t).await;
    HttpResponse::Ok().json("Success")
}

pub async fn search_trip(
    params: web::Query<HashMap<String, String>>,
    app_state: web::Data<AppState>
) -> HttpResponse {
    let map = vec!["stf", "arv", "type", "dist", "time", "cost"];
    let mut args = HashMap::new();
    for s in map {
        args.insert(s, params.get(s));
    }
    let courses: Vec<Trip> = search_trip_db(&app_state.pool, &args).await;
    HttpResponse::Ok().json(courses)
}

pub async fn delete_trip(
    target_trip: web::Json<Trip>,
    app_state: web::Data<AppState>
) -> HttpResponse {
    let t = target_trip.into();
    delete_trip_db(&app_state.pool, t).await;
    HttpResponse::Ok().json("Success")
}

pub async fn update_trip(
    new_trip: web::Json<Trip>,
    app_state: web::Data<AppState>
) -> HttpResponse {
    let t = new_trip.into();
    update_trip_db(&app_state.pool, t).await;
    HttpResponse::Ok().json("Success")
}

//******************************************************** */

pub async fn new_city(
    new_city: web::Json<City>,
    app_state: web::Data<AppState>
) -> HttpResponse {
    let t = new_city.into();
    new_city_db(&app_state.pool, t).await;
    HttpResponse::Ok().json("Success")
}

pub async fn search_city(
    app_state: web::Data<AppState>
) -> HttpResponse {
    let courses: Vec<City> = search_city_db(&app_state.pool).await;
    HttpResponse::Ok().json(courses)
}

pub async fn delete_city(
    target_city: web::Json<City>,
    app_state: web::Data<AppState>
) -> HttpResponse {
    let t = target_city.into();
    delete_city_db(&app_state.pool, t).await;
    HttpResponse::Ok().json("Success")
}

pub async fn update_city(
    new_city: web::Json<City>,
    app_state: web::Data<AppState>
) -> HttpResponse {
    let t = new_city.into();
    update_city_db(&app_state.pool, t).await;
    HttpResponse::Ok().json("Success")
}