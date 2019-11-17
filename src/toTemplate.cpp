/*
 * toTemplate.cpp
 *
 *  Created on: 19-Oct-2019
 *      Author: sankhadeepchatterjee
 */


/* Convert this program to C++

* change to C++ io

* change to one line comments

* change defines of constants to const

* change array to vector<>

* inline any short function

*/
/*

#include <stdio.h>

#define N 40

void sum(int*p, int n, int d[])

{

int i;

*p = 0;

for(i = 0; i < n; ++i)

*p = *p + d[i];

}

int main()

{

int i;

int accum = 0;

int data[N];

for(i = 0; i < N; ++i)

data[i] = i;

sum(&accum, N, data);

printf("sum is %d\n", accum);

return 0;

}*/

#include <iostream>
#include <vector>
using namespace std;
const int N = 40;

inline void sum(int*p, int n, vector<int> d)

{

int i;

*p = 0;

for(i = 0; i < n; ++i)

*p = *p + d[i];

}

int main()

{

int i;

int accum = 0;

vector<int> data(N);

for(i = 0; i < N; ++i)
   data[i] = i;

sum(&accum, N, data);
cout<<"sum is "<<accum<<endl;
//printf("sum is %d\n", accum);

return 0;

}

