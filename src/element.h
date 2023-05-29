#ifndef ELEMENT_H_
#define ELEMENT_H_

#include <stdio.h>
#include <stdlib.h>

struct Element
{
	unsigned int value;
	void* pSuccessor;
};
typedef struct Element Element;

Element* elementCreate();

#endif /* ELEMENT_H_ */
