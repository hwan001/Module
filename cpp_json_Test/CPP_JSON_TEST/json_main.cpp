#include <iostream>
#include <fstream>
#include <json/json.h>

// json cpp �����, ����(����� ������ ���� �ʿ��� ����)

using namespace std;

void jsonWrite(string jsonfile_name) {
	ofstream json;
	json.open(jsonfile_name);

}

int main() {

	jsonWrite("c:/Users/hwan/Desktop/test.json");

	return 0;
}