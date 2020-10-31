#include "strim.h"
#include <vector>
#include <string>

namespace strim {
	std::vector<std::string> split(const std::string& s, const std::string& by)
	{
		std::vector<std::string> result;
		int index = 0;
		int byLength = by.length();

		int pos = s.find(by, index);
		while (pos != std::string::npos)
		{
			result.push_back(s.substr(index, pos - index));
			index = pos + byLength;
			pos = s.find(by, index);
		}
		result.push_back(s.substr(index));

		return result;
	}
	std::string trim(std::string s)
	{
		while (s.back() == ' ')
			s.pop_back();
		while (s.front() == ' ')
			s = s.substr(1, s.length() - 1);
		return s;
	}
	std::string join(std::vector<std::string>& v, const std::string& by)
	{
		std::string res = "";
		for (std::string s : v)
		{
			res += s;
			if (s != v.back())
				res += by;
		}
		return res;
	}
	std::string replace(std::string s, std::string substr, std::string newSubstr)
	{
		int substrLength = substr.length();

		int pos = s.find(substr);
		while (pos != std::string::npos)
		{
			s.replace(pos, substrLength, newSubstr);
			pos = s.find(substr);
		}
		return s;
	}
}