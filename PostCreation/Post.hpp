#pragma once

#include <string>
#include <fstream>

class Post
{
public:
	void MakeFile(std::string title);
private:
	std::string Time();
	std::string& Hyphenate(std::string& str);
	std::string Contents();
};

