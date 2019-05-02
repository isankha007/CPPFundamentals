/*
 * Complex.cpp
 *
 *  Created on: 02-May-2019
 *      Author: sankhadeepchatterjee
 */

#include "Complex.h"
using namespace sankha;
Complex::Complex():real(0),img(0) {
	// TODO Auto-generated constructor stub

}
Complex::Complex(double real,double img):real(real),img(img){
//	this->real=real;
//	this->img=img;
}
double Complex:: getImg(){
	return this->img;
}
double Complex:: getReal(){
	return this->real;
}

Complex::~Complex() {
	// TODO Auto-generated destructor stub
}

