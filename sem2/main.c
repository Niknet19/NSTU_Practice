#include <stdio.h>
//28. Объект: Электронная книга.
//Характеристики объекта: Фирма-производитель, тип управления (кнопки или сенсор), цена.
#include "Ebook.h"

int main()
{	Ebook book1,book2;
	Ebook *book3,*book4;
	eBookInit(&book1, "DELL", 1, 1234.1);
	eBookInit(&book2, "POCKETBOOK", 0, 2500.0);
	getEBookInfo(&book1);
	getEBookInfo(&book2);
	eBookInitCopy(&book1,&book2);
	setEbookProducer(&book1,"ASUS");
	getEBookInfo(&book1);
	getEBookInfo(&book2);
	printf("\n\nDYNAMIC:");
	eBookDynamicInit(&book3,"SAMSUNG",1,4000.23);
	eBookDynamicInit(&book4,"XIAOMI",1,3560.23);
	getEBookInfo(book3);
	getEBookInfo(book4);
	eBookDynamicInitCopy(book3,&book4);
	getEBookInfo(book3);
	getEBookInfo(book4);
	setEbookProducer(book3,"ASUS");
	getEBookInfo(book3);
	eBookDynamicDelete(book3);
	eBookDynamicDelete(book4);
	getEBookInfo(book3);
	return 0;
}
