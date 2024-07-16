use std::sync::Mutex;
use mysql::*;

pub struct AppState {
    pub health_check_response: String,
    pub visit_count: Mutex<u32>,
    pub pool: Pool,
}