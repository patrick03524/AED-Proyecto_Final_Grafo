#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

#ifndef FUNC_H
#define FUNC_H

template <class T>
struct CLess{
    inline bool operator()(T a, T b){return a<b;}
} ;

template <class T>
struct CGreater{
    inline bool operator()(T a, T b){return a>b;}
} ;

#endif // FUNC_H
