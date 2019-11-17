/*
 * RestrictObjectCreation.cpp
 *
 *  Created on: 17-Nov-2019
 *      Author: sankhadeepchatterjee
 */

#include "RestrictObjectCreation.h"

//RestrictObjectCreation::RestrictObjectCreation() {
//	// TODO Auto-generated constructor stub
//   this->k=0;
//}

RestrictObjectCreation::~RestrictObjectCreation() {
	// TODO Auto-generated destructor stub
}
RestrictObjectCreation::RestrictObjectCreation(const RestrictObjectCreation &obj){

			this->k=obj.k;
}
RestrictObjectCreation::RestrictObjectCreation(int k){

			this->k=k;
}


