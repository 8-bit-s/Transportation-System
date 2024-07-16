use actix_web::web::{self, Json};
//use chrono::NaiveDateTime;
use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct Trip {
    pub id: Option<i32>,
    pub stf: String,
    pub stf_id: i32,
    pub arv: String,
    pub arv_id: i32,
    pub trip_type: i32,
    pub dist: f64,
    pub time: String,
    pub cost: i32,
}

impl From<web::Json<Trip>> for Trip {
    fn from(trip: Json<Trip>
    ) -> Self {
        Trip {
            id: trip.id,
            stf: trip.stf.clone(),
            stf_id: trip.stf_id,
            arv: trip.arv.clone(),
            arv_id: trip.arv_id,
            trip_type: trip.trip_type,
            dist: trip.dist,
            time: trip.time.clone(),
            cost: trip.cost,
        }
    }
}

#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct City {
    pub name: String,
    pub id: i32,
}

impl From<web::Json<City>> for City {
    fn from(city: Json<City>) -> Self {
        City {
            name: city.name.clone(),
            id: city.id,
        }
    }
}