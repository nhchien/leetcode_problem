#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Singly {
    int val;
    Singly* next;
    Singly() : val(0), next(nullptr) {}
    Singly(int x) : val(x), next(nullptr) {}
    Singly(int x, Singly* next) : val(x), next(next) {}
};
