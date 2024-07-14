use super::models::*;
use mysql::*;
use mysql::prelude::*;
use std::collections::HashMap;

pub async fn search_trip_db(pool: &Pool, params: &HashMap<&str, Option<&String>>) -> Vec<Trip> {
    let mut con = pool.get_conn().unwrap();
    let mut qry = String::from("SELECT * FROM trip_test WHERE ");
    for i in params {
        if i.1.is_some() {
            let qry_sent = format!("{}='{}' AND ", i.0, i.1.unwrap());


            //println!("{qry_sent}");//?????? format string must be a string literal --if you use like println!(&qry_sent) and so on


            qry.push_str(&&qry_sent);
        }
    }
    qry.pop();qry.pop();qry.pop();qry.pop();//delete useless 'AND'
                                            //依赖bug运行，不知道为什么 SELECT * FROM trip_test WH 可以正常返回

    println!("{qry}");


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
        "INSERT INTO trip_test (stfCity, stf_id, arvCity, arv_id, type, dist, time, cost) VALUES (:a, :m, :b, :n, :c, :d, :e, :f)",
        params! {
            "a" => nt.stf,
            "b" =>  nt.arv,
            "c" => nt.trip_type,
            "d" => nt.dist,
            "e" => nt.time,
            "f" => nt.cost,
            "m" => nt.stf_id,
            "n" => nt.arv_id,
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
        .prep("UPDATE city_test SET name=:a WHERE id=:id").unwrap();
    con.exec_drop(stmt,
        params! {
            "a" => nt.name,
            "id" => nt.id,
        }).unwrap();
}