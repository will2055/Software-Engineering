/* Unit Testing */


#include <iostream>
#include <fstream>
//#include <string>
//#include <istream>

using namespace std;

class author {
	int id;
	fstream file;
	string first_name, last_name; /*email*/
	public:
		int file_test(){
			file.open("author_ut.csv");
			getline(file,id,',')>>id;
			getline(file,first_name,',')>>first_name;
			getline(file,last_name,',')>>last_name;
			cout<<"Data: "<<id<<", "<<first_name<<", "<<last_name<<endl;
			return 0;
		};
	
};

int main(){
	author a;
	a.file_test();
	return 0;
}
