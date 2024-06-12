#ifndef BOOK_H
#define BOOK_H

struct Book {
    char title[50];
    int price;
    char author[50];
    char ISBN[50];
    int rent;
    struct Book* next;
};

void ShowMenu();
void PurchaseBook();
void SearchBook();
void DeleteBook();
void PrintBook();

#endif
