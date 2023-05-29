#include "list.h"

//Aufgabe 4
/* a)
 * Die Funktion soll zunächst mit createList eine leere Liste anlegen und
 * initialisieren. Im Anschluss soll versucht werden die Liste mittels der
 * listPrint Funktion vorwärts auszugeben. Die Funktion soll nun 10 Knoten
 * mit den Werten 1-10 in aufsteigender Reihenfolge mittels listPush in die
 * leere Liste einfügen und einmal vorwärts mittels der listPrint Funktion
 * ausgeben.
 *
 * Ausgabe:
 * Liste leer!
 * 1 2 3 4 5 6 7 8 9
 * 9 8 7 6 5 4 3 2 1
 */

void test_pushPrint(void)
{
	printf("Ausgabe 4a):\n");
	List* list = listCreate();//eine leere Liste anlegend und initialisieren
	listPrint(list);//print die Liste raus

	for(int i = 1; i < 10; i++)
	//for(int i = 9; i > 0; i--)//Knoten 1-10
	{
		printf("%d ", i);
		listPush(list, i);//assigns the value to the head and goes to the
						  //element where head points to
	}
	printf("\n");
	listPrint(list);//prints the whole list, but from backwards,
					//because of pointers(x->x->x->x->x <<<<)
	printf("\n");
}

/* b)
 * Die Funktion soll zunächst mit createList eine leere Liste anlegen und
 * initialisieren. Im Anschluss soll in der leeren Liste nach dem Element
 * mit dem Wert 0 gesucht werden. Ist der Rückgabewert gleich NULL soll
 * „Korrekt“, sonst „Falsch“ jeweils mit Zeilenumbruch ausgegeben werden.
 * Nun ist die Liste mit Element mit den Werten 1 bis 10 in aufsteigender
 * Reihenfolge zu befüllen. Suchen Sie nun mit der Funktion listFindElement
 * nach dem Element mit dem Wert 5. Ist der Schlüsselwert des zurückgegebenen
 * Knotens gleich 5 soll „Korrekt“, sonst „Falsch“ jeweils mit Zeilenumbruch
 * ausgegeben werden. Im Abschlusstest sollen Sie nach dem Element mit Wert
 * 20 suchen. Ist der Rückgabewert der Funktion gleich NULL soll „Korrekt“,
 * sonst „Falsch“ jeweils mit Zeilenumbruch ausgegeben werden.
 *
 * Ausgabe:
 * Liste leer!
 * Korrekt
 * Korrekt
 * Korrekt
 */

void testListFindElement(void)
{
	printf("Ausgabe 4b):\n");
	List* list = listCreate();
	listPrint(list);
	Element* element = listFindElement(list, 0);//giving parameters to lFE function that
												//searches the list for the given element


	if(element == NULL)
	{
		printf("Korrekt\n");
	}
	else{
		printf("Falsch\n");
	}

	for(int i = 1; i < 10; i++)
	{
		listPush(list, i);
	}

	element = listFindElement(list, 5);

	if(element->value == 5)
	{
		printf("Korrekt\n");
	}
	else{
		printf("Falsch\n");
	}

	element = listFindElement(list, 20);

	if(element == NULL)
	{
		printf("Korrekt\n");
	}
	else{
		printf("Falsch\n");
	}
	printf("\n");
}

//Aufgabe 5
/* a)
 * Die Funktion soll zunächst mit createList eine leere Liste anlegen und
 * initialisieren. Suchen Sie nun mit der Funktion listGetIndexOfElement
 * nach dem Index des Elementes mit Schlüsselwert 0. Ist der Rückgabewert
 * der Funktion gleich -1 soll „Korrekt“, sonst „Falsch“ jeweils mit
 * Zeilenumbruch ausgegeben werden. Nun ist die Liste mit Elementen mit den
 * Werten 1 bis 10 in aufsteigender Reihenfolge zu befüllen. Suchen Sie mit
 * der Funktion listGetIndexOfElement nach dem Index des Elements mit
 * Schlüsselwert 1. Ist der Rückgabewert der Funktion gleich 0 soll „Korrekt“,
 * sonst „Falsch“ jeweils mit Zeilenumbruch ausgegeben werden. Führen Sie den
 * gleichen Test für den Schlüsselwert 4 durch und überprüfen Sie, ob der Index
 * mit 3 korrekt zurückgegeben wird. Im Abschlusstest sollen Sie nach dem
 * Element mit Wert 25 suchen. Ist der Rückgabewert der Funktion gleich -1 soll
 * „Korrekt“, sonst „Falsch“ jeweils mit Zeilenumbruch ausgegeben werden.
 *
 * Ausgabe:
 * Liste leer!
 * Korrekt
 * Korrekt
 * Korrekt
 * Korrekt
 */

void testListGetIndexOfElement(void)
{
	printf("Ausgabe 5a):\n");
	List* list = listCreate();
	listPrint(list);
	int index = listGetIndexOfElement(list, 0);

	if(index == -1)
	{
		printf("Korrekt\n");
	}
	else{
		printf("Falsch\n");
	}

	for(int i = 9; i > 0; i--) // Warum?? Vielleicht wegen Index statt Wert?
							  //Ja, weil bei 4b) wir nach Wert suchen, und hier
							 //nach Index.
	{
		listPush(list,i);
	}

	index = listGetIndexOfElement(list, 1);

	if(index == 0)
	{
		printf("Korrekt\n");
	}
	else{
		printf("Falsch\n");
	}

	index = listGetIndexOfElement(list, 4);

	if(index == 3)
	{
		printf("Korrekt\n");
	}
	else{
		printf("Falsch\n");
	}

	index = listGetIndexOfElement(list, 25);

	if(index == -1)
	{
		printf("Korrekt\n");
	}
	else{
		printf("Falsch\n");
	}
	printf("\n");
}


/* b)
 * Die Funktion soll zunächst eine leere Liste anlegen und mit der Funktion
 * init initialisieren. Versuchen Sie nun mit der Funktion listGetElementAtIndex
 * auf das Element an Index 5 zuzugreifen. Ist der Rückgabewert gleich NULL soll
 * „Korrekt“, sonst „Falsch“ jeweils mit Zeilenumbruch ausgegeben werden. Nun ist
 * die Liste mit Elementen mit den Werten 1 bis 10 in aufsteigender Reihenfolge zu
 * befüllen. Suchen Sie nun erneut nach dem Element an Index 5. Ist der Schlüsselwert
 * des zurückgegebenen Elementes gleich 6 soll „Korrekt“, sonst „Falsch“ jeweils mit
 * Zeilenumbruch ausgegeben werden. Suchen Sie jetzt erneut nach dem Element an Index
 * 15 für einen Überlauftest. Ist der Schlüsselwert des zurückgegebenen Elementes gleich
 * NULL soll „Korrekt“, sonst „Falsch“ jeweils mit Zeilenumbruch ausgegeben werden.
 *
 * Ausgabe: Liste leer!
 * Korrekt
 * Korrekt
 * Korrekt
 */

void testListGetElementAtIndex(void)
{
	printf("Ausgabe 5b):\n");
	List* list = listCreate();
	listPrint(list);

	Element* element = listGetElementAtIndex(list, 5);

	if(element == 0)
	{
		printf("Korrekt\n");
	}
	else{
		printf("Falsch\n");
	}

	for(int i = 9; i > 0; i--)
	{
		listPush(list, i);
	}

	element = listGetElementAtIndex(list, 5);

	if(element->value == 6)
	{
		printf("Korrekt\n");
	}
	else{
		printf("Falsch\n");
	}

	element = listGetElementAtIndex(list, 15);

	if(element == 0)
	{
		printf("Korrekt\n");
	}
	else{
		printf("Falsch\n");
	}
}
