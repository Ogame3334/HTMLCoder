#include "HTMLCoder.h"

void HTMLCoder::bodygen(std::ofstream& writing_file) {
	writing_file << indent + "<body>\n";
	indent += "\t";
	writing_file << indent + "<h1>Hoge</h1>\n";
	indent.erase(0, 1);
	writing_file << indent + "</body>\n";
}
void HTMLCoder::headgen(std::ofstream& writing_file) {
	writing_file << indent + "<head>\n";
	indent += "\t";
	writing_file << indent + "<title>" + this->title + "</title>\n";
	writing_file << indent + "<link rel=\"icon\" href=\"favicon.ico\">\n";
	writing_file << indent + "<link type=\"image/png\" href=\"" + this->icon_path + "\">\n";
	indent.erase(0, 1);
	writing_file << indent + "</head>\n";
}
void HTMLCoder::gen() {
	std::ofstream writing_file;
	writing_file.open("./" + this->file_name + ".html", std::ios::out);
	writing_file << indent + "<html>\n";
	this->indent += "\t";
	this->headgen(writing_file);
	this->bodygen(writing_file);
	this->indent.erase(0, 1);
	writing_file << indent + "</html>\n";
	writing_file.close();
}