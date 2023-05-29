#include "element.h"

//Aufgabe 0
/* a)
 * Die Funktion erzeugt ein leeres Element auf dem Heap und setzt
 * den Nachfolger pSuccessor auf nullptr und den value auf 0.
 * Anschließend ist der Zeiger auf das Element zurückzugeben.
 */

Element* elementCreate()
{
	Element* pElement = (Element*) malloc(sizeof(Element));
	pElement->pSuccessor = NULL;
	pElement->value = 0;
	return pElement;
}
