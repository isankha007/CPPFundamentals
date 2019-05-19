/*
 * Complex.cpp
 *
 *  Created on: 02-May-2019
 *      Author: sankhadeepchatterjee
 */

#include "Complex.h"
using namespace sankha;

ostream & operator << (ostream &out, const Complex &c){
	out<<"("<<c.getReal()<<","<<c.getImg()<<")"<<endl;
	return out;
}

Complex::Complex():real(0),img(0) {
	// TODO Auto-generated constructor stub

}
Complex::Complex(double real,double img):real(real),img(img){
//	this->real=real;
//	this->img=img;
}

Complex::Complex(const Complex &other){
//	cout<<"Copy..."<<endl;
	real=other.real;
	img=other.img;
}
double Complex:: getImg() const{
	return this->img;
}
double Complex:: getReal() const{
	return this->real;
}
const Complex &Complex::operator=(const Complex &other){
  real=other.real;
  img=other.img;
//  cout<<"Assingment..."<<endl;
  return *this;
}
Complex::~Complex() {
	// TODO Auto-generated destructor stub
}

