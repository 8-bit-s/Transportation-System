use super::handlers::*;
use actix_web::web::{self, route};

pub fn general_routes(cfg: &mut web::ServiceConfig) {
    cfg.route("/health", web::get().to(health_check_handler));
}

pub fn trip_routes(cfg: &mut web::ServiceConfig) {
    cfg.service(
        web::scope("/trip")
            .route("/", web::get().to(search_trip))
            .route("/", web::post().to(new_trip))
            .route("/", web::put().to(update_trip))
            .route("/", web::delete().to(delete_trip))
    );
}

pub fn city_routes(cfg: &mut web::ServiceConfig) {
    cfg.service(
        web::scope("/city")
            .route("/", web::get().to(search_city))
            .route("/", web::post().to(new_city))
            .route("/", web::put().to(update_city))
            .route("/", web::delete().to(delete_city))
    );
}