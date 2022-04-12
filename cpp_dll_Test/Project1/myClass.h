#pragma once
#include <iostream>

#define MYDLL_DECLSPEC __declspec(dllexport)


class Person {
public:
	Person(std::string name, int age, std::string address);
	void ShowInfo();

private:
	int age;
	std::string name;
	std::string address;
};

extern "C" {
	MYDLL_DECLSPEC Person* CreatePerson(char* name, int age, char* address);
	MYDLL_DECLSPEC void ShowInfo(Person* obj);
	MYDLL_DECLSPEC void DeletePerson(Person* obj);
}