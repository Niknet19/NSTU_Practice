#ifndef EBOOK_H
#define EBOOK_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 20
#define ERROR 1
//28. Объект: Электронная книга.
//Характеристики объекта: Фирма-производитель, тип управления (кнопки или сенсор), цена.
typedef struct Ebook{
char producer[N];
short control_type;
double price;
}Ebook;

void eBookInit(Ebook*, char*, short, double);

void eBookInitCopy(Ebook* ebook, Ebook* newEBook);

int eBookDynamicInit(Ebook** ebook, char * produce, short control_type, double price);

int eBookDynamicInitCopy(Ebook* ebook, Ebook** newEBook);

int isCorrect(Ebook* ebook);

void getEBookInfo(Ebook* ebook);

int setEbookProducer(Ebook* ebook,char* producer);

void eBookDynamicDelete(Ebook* ebook);


#endif //EBOOK_H
