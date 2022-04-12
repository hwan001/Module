#pragma once

#define DLLEXPORT __declspec(dllexport)
#define DLLIMPORT __declspec(dllimport)

extern "C" DLLEXPORT double sum(double a, double b);
extern "C" DLLEXPORT double sub(double a, double b);