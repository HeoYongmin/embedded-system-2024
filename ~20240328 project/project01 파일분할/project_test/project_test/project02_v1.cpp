/*
File: project02_v1.cpp
Date: 24-03-27
Author: 허용민
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "book.h"


struct Book* head = NULL;

void ShowMenu() {
    printf("**** 메뉴 ****\n");
    printf("1. 도서 구입(등록)\n");
    printf("2. 도서 검색\n");
    printf("3. 도서 삭제\n");
    printf("4. 도서 출력\n");
    printf("0. 종료\n");
}

void PurchaseBook() {
    struct Book* newBook = (struct Book*)malloc(sizeof(struct Book));
    if (newBook == NULL) {
        printf("메모리 할당 실패\n");
        return;
    }

    printf("도서 제목을 입력하세요: ");
    scanf(" %[^\n]s", newBook->title);
    printf("도서 저자를 입력하세요: ");
    scanf(" %[^\n]s", newBook->author);
    printf("도서 가격을 입력하세요: ");
    scanf("%d", &newBook->price);
    printf("도서 ISBN을 입력하세요: ");
    scanf(" %[^\n]s", newBook->ISBN);

    newBook->next = head;
    head = newBook;

    printf("도서가 성공적으로 등록되었습니다.\n");
}

void SearchBook() {
    char searchtitle[100];
    printf("검색할 도서 제목을 입력하세요: ");
    scanf(" %[^\n]", searchtitle);

    struct Book* curr = head;
    int found = 0;
    while (curr != NULL) {
        if (strcmp(curr->title, searchtitle) == 0) {
            printf("도서가 등록되어 있습니다.\n");
            found = 1;
            break;
        }
        curr = curr->next;
    }
    if (!found) {
        printf("검색한 도서가 등록되어 있지 않습니다.\n");
    }
}

void DeleteBook() {
    char deletetitle[100];
    printf("삭제할 도서 제목을 입력하세요: ");
    scanf(" %[^\n]", deletetitle);

    struct Book* curr = head;
    struct Book* prev = NULL;
    int found = 0;

    while (curr != NULL) {
        if (strcmp(curr->title, deletetitle) == 0) {
            if (prev != NULL) {
                prev->next = curr->next;
            }
            else {
                head = curr->next;
            }
            free(curr);
            printf("도서가 성공적으로 삭제되었습니다.\n");
            found = 1;
            break;
        }
        prev = curr;
        curr = curr->next;
    }

    if (!found) {
        printf("삭제할 도서를 찾을 수 없습니다.\n");
    }
}

void PrintBook() {
    struct Book* curr = head;
    printf("**** 도서 목록 ****\n");
    while (curr != NULL) {
        printf("도서 제목: %s\n", curr->title);
        printf("도서 저자: %s\n", curr->author);
        printf("도서 가격: %d\n", curr->price);
        printf("도서 ISBN: %s\n", curr->ISBN);
        printf("\n");
        curr = curr->next;
    }
}