#include <iostream>
#include <string>
#include "Post.hpp"

int main()
{
	using namespace std;
	// Get title
	string title;
	getline(cin, title);

	Post post;
	post.MakeFile(title);
	
	return 0;
}