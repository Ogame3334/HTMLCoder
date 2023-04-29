#pragma once

#include <string>
#include <fstream>
#include <vector>

class Content {
private:
	std::string tag = "p";
	std::string class_name = "";
	std::string sentence = "";
public:
	Content() {}
};

class HTMLCoder {
private:
	std::string indent = "";
	std::string file_name = "index";
	std::string title = "hoge";
	std::string icon_path = "./default_icon.png";

	std::vector<Content> hoge;

	void headgen(std::ofstream& writing_file);
	void bodygen(std::ofstream& writing_file);
public:
	HTMLCoder() = default;
	HTMLCoder(std::string _filename, std::string _title) : file_name(_filename), title(_title) {}
	HTMLCoder(std::string _title) : title(_title) {}

	void setFileName(std::string _name) { this->file_name = _name; }
	void setTitle(std::string _title) { this->title = _title; }

	void gen();
};