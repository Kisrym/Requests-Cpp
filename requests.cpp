#include "requests.hpp"
#include <iostream>

std::string Requests::get(std::string url, Retorno format) const {
	cpr::Response r = cpr::Get(cpr::Url{url});
	
	switch (format){
		case Status:
			return r.status_line;
		case Text:
			return r.text;
		case Json:
			return this->to_json(r.text).dump(4);
		default:
			return r.status_line;
	}
	
}

std::string Requests::post(std::string url, std::string data, Retorno format) const{
	cpr::Response r = cpr::Post(cpr::Url{url}, cpr::Body{data});
	
	switch (format){
		case Status:
			return r.status_line;
		case Text:
			return r.text;
		case Json:
			return this->to_json(r.text).dump(4);
		default:
			return r.status_line;
	}
}

std::string Requests::patch(std::string url, std::string data, Retorno format) const{
	cpr::Response r = cpr::Patch(cpr::Url{url}, cpr::Body{data});
	
	switch (format){
	case Status:
		return r.status_line;
	case Text:
		return r.text;
	case Json:
		return this->to_json(r.text).dump(4);
	default:
		return r.status_line;
	}
}

std::string Requests::remove(std::string url, Retorno format) const{
	cpr::Response r = cpr::Delete(cpr::Url{url});
	
	switch (format){
	case Status:
		return r.status_line;
	case Text:
		return r.text;
	case Json:
		return this->to_json(r.text).dump(4);
	default:
		return r.status_line;
	}
}

nlohmann::json Requests::to_json(std::string text) const{
	try {
		nlohmann::json value = nlohmann::json::parse(text);
		return value;
	}
	
	catch (nlohmann::json_abi_v3_11_2::detail::parse_error const&){
		std::cout << "O arquivo não é um Json válido." << std::endl;
		exit(-1);
	}
}