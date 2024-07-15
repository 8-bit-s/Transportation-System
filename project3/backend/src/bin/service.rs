use actix_web::{web, App, HttpServer};
use std::sync::Mutex;
use std::io;
use mysql::*;
use mysql::prelude::*;

#[path = "../handlers.rs"]
mod handlers;
#[path = "../state.rs"]
mod state;
#[path = "../routers.rs"]
mod routers;
#[path = "../models.rs"]
mod models;
#[path = "../db_access.rs"]
mod db_access;

use routers::*;
use state::AppState;

#[actix_rt::main]
async fn main() -> io::Result<()>{
    let database = "mysql://root:root@localhost:3306/db_test";
    let pool = Pool::new(database).unwrap();


    let shared_data = web::Data::new(AppState {
        health_check_response: "I'm OK.".to_string(),
        visit_count: Mutex::new(0),
        pool: pool,
    });
    let app = move || {
        App::new()
        .app_data(shared_data.clone())
        .configure(general_routes)
        .configure(trip_routes)
        .configure(city_routes)
    };

    HttpServer::new(app).bind("0.0.0.0:3000")?.run().await
}