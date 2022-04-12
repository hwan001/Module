#include <iostream>
#include <fstream>
#include <json/json.h>

// json cpp 사용방법, 빌드(생긴건 리눅스 빌드 필요해 보임)

using namespace std;

void jsonWrite(string jsonfile_name) {
	ofstream json;
	json.open(jsonfile_name);

}

int main() {

	jsonWrite("c:/Users/hwan/Desktop/test.json");

	return 0;
}