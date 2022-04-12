#include <stdio.h>
#include <iostream>
#include "myClass.h"
#include "myMath.h"

using namespace std;

#pragma comment(lib, "hwan_dll_20220223.lib")


int main() {
	int a, b;
	cin >> a >> b;

	printf("%lf\n", sum(a, b));
	printf("%lf\n", sub(a, b));

	char name[] = "홍길동";
	char address[] = "서울시";

	Person* person1 = CreatePerson(name, 35, address);
	ShowInfo(person1);

	return 0;
}