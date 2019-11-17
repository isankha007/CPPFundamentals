/*
 * RestrictObjectCreation.h
 *
 *  Created on: 17-Nov-2019
 *      Author: sankhadeepchatterjee
 */

#ifndef RESTRICTOBJECTCREATION_H_
#define RESTRICTOBJECTCREATION_H_


class RestrictObjectCreation {
public:
	int k;
	RestrictObjectCreation()=delete;
	RestrictObjectCreation(const RestrictObjectCreation &obj);
	RestrictObjectCreation(int k);
	virtual ~RestrictObjectCreation();
};

#endif /* RESTRICTOBJECTCREATION_H_ */

