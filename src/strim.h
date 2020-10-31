#pragma once

#include <vector>
#include <string>

namespace strim {
	std::vector<std::string> split(const std::string& s, const std::string& by);
	std::string trim(std::string s);
	std::string join(std::vector<std::string>& v, const std::string& by);
	std::string replace(std::string s, std::string substr, std::string newSubstr);
}