/*
 * main.cpp
 *
 *  Created on: 17-Nov-2019
 *      Author: sankhadeepchatterjee
 */
#include <iostream>
#include "RestrictObjectCreation.h"

using namespace std;

int main(){
	int i=10;
//	RestrictObjectCreation obj;
//	obj.k=11;
	RestrictObjectCreation *obj2 =new RestrictObjectCreation(i);
	cout<<obj2->k<<endl;
	return 0;
}
