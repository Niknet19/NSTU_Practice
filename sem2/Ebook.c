#include "Ebook.h"

int eBookDynamicInit(Ebook** ebook, char * produce, short control_type, double price){
	*ebook=(Ebook*)malloc(sizeof(Ebook));
	if(*ebook==NULL)return EXIT_FAILURE;
	strncpy((*ebook)->producer, produce, N);
	(*ebook)->control_type=control_type;
	(*ebook)->price=price;
	return EXIT_SUCCESS;
}

int isCorrect(Ebook *ebook)
{
	if (ebook->control_type != 1 && ebook->control_type != 0) return ERROR;
	if (ebook->price < 0)return ERROR;
	return EXIT_SUCCESS;
}

int eBookDynamicInitCopy(Ebook *ebook, Ebook **newEBook)
{
	*newEBook=(Ebook*)malloc(sizeof(Ebook));
	if(*newEBook==NULL)return EXIT_FAILURE;
	memmove((*newEBook)->producer, ebook->producer, N * sizeof(char));
	(*newEBook)->control_type=ebook->control_type;
	(*newEBook)->price=ebook->price;
	return EXIT_SUCCESS;
}

void getEBookInfo(Ebook *ebook)
{
	printf("\n\n%s\n",ebook->producer);
	printf("%d\n",ebook->control_type);
	printf("%f\n",ebook->price);
}
void eBookInit(Ebook *ebook, char *producer, short control_type, double price)
{
	strncpy(ebook->producer, producer, N);
	ebook->control_type=control_type;
	ebook->price=price;
}

void eBookInitCopy(Ebook *ebook, Ebook *newEBook)
{
	memmove(newEBook->producer, ebook->producer, N * sizeof(char));
	newEBook->control_type=ebook->control_type;
	newEBook->price=ebook->price;
}
int setEbookProducer(Ebook * ebook,char *producer)
{
	memmove(ebook->producer, producer, N * sizeof(char));
	return isCorrect(ebook);
}
void eBookDynamicDelete(Ebook *ebook)
{
	free(ebook);
}


