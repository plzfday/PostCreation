#include <ctime>
#include "Post.hpp"

void Post::MakeFile(std::string title)
{
	title = Time() + "-" + Hyphenate(title) + ".markdown";
	std::ofstream myfile;
	myfile.open(title);
	myfile << this->Contents();
	myfile.close();
}

std::string Post::Time()
{
	time_t now = time(0);
	char strFormat[100];
	time(&now);
#pragma warning(suppress : 4996)
	strftime(strFormat, 100, "%Y-%m-%d", localtime(&now));
	return strFormat;
}

std::string& Post::Hyphenate(std::string& str)
{
	for (auto& i : str)
		if (i == ' ')
			i = '-';
	return str;
}

std::string Post::Contents()
{
	time_t now = time(0);
	char strFormat[100];
	time(&now);
#pragma warning(suppress : 4996)
	strftime(strFormat, 100, "%Y-%m-%d %I:%M:%S", localtime(&now));
	std::string time(strFormat);
	std::string contents = "---\nlayout: post\ntitle: \"\"\ndate: " + time + " +0900\ncategories: \n---\n";
	return contents;
}
