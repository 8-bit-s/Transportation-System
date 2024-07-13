use super::models::*;
use mysql::*;
use mysql::prelude::*;
use std::collections::HashMap;

pub async fn search_trip_db(pool: &Pool, params: &HashMap<&str, Option<&String>>) -> Vec<Trip> {
    let mut con = pool.get_conn().unwrap();
    let mut qry = String::from("SELECT * FROM trip_test WHERE");
    for i in params {
        if i.1.is_some() {
            qry.push_str(&format!("{}='{}' AND ", i.0, i.1.unwrap()));
        }
    }
    qry.pop();qry.pop();qry.pop();qry.pop();//delete useless 'AND'
    let res = con.query_map(
        qry,
        |(id, stf, stf_id, arv, arv_id, trip_type, dist, time, cost)| Trip {
            id: Some(id),
            stf: stf,
            stf_id: stf_id,
            arv: arv,
            arv_id: arv_id,
            trip_type: trip_type,
            dist: dist,
            time: time,
            cost: cost,
        },
    ).expect("Query failed.");
    res
}

//INSERT INTO '%s' (stfCity, arvCity, type, dist, time, cost) VALUES ('%s','%s',%d,%lf,'%s',%d)
pub async fn new_trip_db(pool: &Pool, nt: Trip) {
    let mut con = pool.get_conn().unwrap();
    //let mut qry = format!("INSERT INTO trip_menu (stfCity, arvCity, type, dist, time, cost) VALUES ('{}','{}', {}, {}, '{}', {})",
    //    nt.stf, nt.arv, nt.trip_type, nt.dist, nt.time, nt.cost);
    con.exec_drop(
        "INSERT INTO trip_test (stfCity, arvCity, type, dist, time, cost) VALUES (:a, :b, :c, :d, :e, :f)",
        params! {
            "a" => nt.stf,
            "b" =>  nt.arv,
            "c" => nt.trip_type,
            "d" => nt.dist,
            "e" => nt.time,
            "f" => nt.cost,
    }).unwrap();
}

pub async fn delete_trip_db(pool: &Pool, nt: Trip) {
    let mut con = pool.get_conn().unwrap();
    let stmt = con.prep("DELETE FROM trip_test WHERE id=:id").unwrap();
    con.exec_drop(stmt, params! {
        "id" => nt.id
    }).unwrap();
}

pub async fn update_trip_db(pool: &Pool, nt: Trip) {
    let mut con = pool.get_conn().unwrap();
    let stmt = con
        .prep("UPDATE trip_test SET stfCity=:a, stf_id = m, arvCity=:b, arv_id = n, type=:c, dist=:d, time=:e, cost=:f WHERE id=:id").unwrap();
    con.exec_drop(stmt,
        params! {
            "a" => nt.stf,
            "b" =>  nt.arv,
            "c" => nt.trip_type,
            "d" => nt.dist,
            "e" => nt.time,
            "f" => nt.cost,
            "id" => nt.id,
            "m" => nt.stf_id,
            "n" => nt.arv_id,
        }).unwrap();
}

/*****************************************************8 */

pub async fn search_city_db(pool: &Pool) -> Vec<City> {
    let mut con = pool.get_conn().unwrap();
    let qry = String::from("SELECT * FROM city_test");
    let res = con.query_map(
        qry,
        |(id, name)| City {
            id: id,
            name: name,
        },
    ).expect("Query failed.");
    res
}

pub async fn new_city_db(pool: &Pool, nt: City) {
    let mut con = pool.get_conn().unwrap();
    //let mut qry = format!("INSERT INTO trip_menu (stfCity, arvCity, type, dist, time, cost) VALUES ('{}','{}', {}, {}, '{}', {})",
    //    nt.stf, nt.arv, nt.trip_type, nt.dist, nt.time, nt.cost);
    con.exec_drop(
        "INSERT INTO city_test (name) VALUES (:a)",
        params! {
            "a" => nt.name
    }).unwrap();
}

pub async fn delete_city_db(pool: &Pool, nt: City) {
    let mut con = pool.get_conn().unwrap();
    let stmt = con.prep("DELETE FROM city_test WHERE id=:id").unwrap();
    con.exec_drop(stmt, params! {
        "id" => nt.id
    }).unwrap();
}

pub async fn update_city_db(pool: &Pool, nt: City) {
    let mut con = pool.get_conn().unwrap();
    let stmt = con
        .prep("UPDATE city_test SET name:=a WHERE id=:id").unwrap();
    con.exec_drop(stmt,
        params! {
            "a" => nt.name,
        }).unwrap();
}