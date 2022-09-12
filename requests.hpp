#pragma once
#include <nlohmann/json.hpp>
#include <cpr/cpr.h>
#include <string>

enum Retorno : short int {Status, Text, Json};

class Requests {
private:
public:
	nlohmann::json to_json(std::string text) const;
	
	std::string get(std::string url, Retorno format = Status) const;
	std::string post(std::string url, std::string data, Retorno format = Status) const;
	std::string patch(std::string url, std::string data, Retorno format = Status) const;
	std::string remove(std::string url, Retorno format = Status) const;
};