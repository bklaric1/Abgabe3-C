#ifndef LIST_H_
#define LIST_H_

#include <stdio.h>
#include <stdlib.h>

#include "myboolean.h"
#include "element.h"

struct List
{
	struct Element* head;
};
typedef struct List List;

//Aufgabe 1
List* listCreate();
void listPush(List* list, unsigned int value);
Element* listPop(List* list);
void listPrint(List* list);
void listFillRandom(List* list, int seed, int anzahlWerte, int min, int max);
//Aufgabe 2
Element* listFindElement(List* list, unsigned int value);
int listGetIndexOfElement(List* list, unsigned int value);
Element* listGetElementAtIndex(List* list, unsigned int index);
//Aufgabe 3
boolean listSwapElements(List* list, unsigned int aIndex, unsigned int bIndex);
boolean listDeleteElement(List* list, unsigned int value);

#endif /* LIST_H_ */
