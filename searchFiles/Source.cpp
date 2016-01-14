#include <io.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
	_finddata_t file;
	long fptr = 0;
	string path;
	cin >> path;
	if ((fptr = _findfirst(path.c_str(), &file)) == -1L) {
		cout << "folder not found!";
	} else {
		cout << "file name list: " << endl;
		string name = file.name;
		cout << name.substr(0, name.find_last_of('.')) << endl;
		while (_findnext(fptr, &file) == 0) {
			cout << file.name << endl;
		}
	}
	_findclose(fptr);
	system("pause");
	return 0;
}