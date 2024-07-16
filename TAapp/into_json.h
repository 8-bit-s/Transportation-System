#pragma once
#include <string>
#include <vector>
#include "TripTable.h"
#include "httplib.h"
#include "json.hpp"

nlohmann::json tripsToJson(const std::vector<Trip>& ts);

std::vector<Trip> jsonToTrips(const nlohmann::json& j);

nlohmann::json tripsToJson(const Trip& t_);

nlohmann::json cityToJson(const City& c);

City jsonToCity(const nlohmann::json& j);

nlohmann::json citiesToJson(const std::vector<City>& cities);

std::vector<City> jsonToCities(const nlohmann::json& j);
