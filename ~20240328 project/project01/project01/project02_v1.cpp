/*
File: project02_v1.cpp
Date: 24-03-27
Author: ����
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char title[50];
    int price;
    char author[50];
    char ISBN[50];
    struct Book* next;
};

struct Book* head = NULL; 

void ShowMenu() {
    printf("**** �޴� ****\n");
    printf("1. ���� ����(���)\n");
    printf("2. ���� �˻�\n");
    printf("3. ���� ����\n");
    printf("4. ���� ���\n");
    printf("0. ����\n");
}

void PurchaseBook() {
    struct Book* newBook = (struct Book*)malloc(sizeof(struct Book));
    if (newBook == NULL) {
        printf("�޸� �Ҵ� ����\n");
        return;
    }

    printf("���� ������ �Է��ϼ���: ");
    scanf(" %[^\n]s", newBook->title);
    printf("���� ���ڸ� �Է��ϼ���: ");
    scanf(" %[^\n]s", newBook->author);
    printf("���� ������ �Է��ϼ���: ");
    scanf("%d", &newBook->price);
    printf("���� ISBN�� �Է��ϼ���: ");
    scanf(" %[^\n]s", newBook->ISBN);

    newBook->next = head;   
    head = newBook;     

    printf("������ ���������� ��ϵǾ����ϴ�.\n");
}

void SearchBook() {
    char searchtitle[100];
    printf("�˻��� ���� ������ �Է��ϼ���: ");
    scanf(" %[^\n]", searchtitle);

    struct Book* curr = head;       
    int found = 0;
    while (curr != NULL) {
        if (strcmp(curr->title, searchtitle) == 0) {
            printf("������ ��ϵǾ� �ֽ��ϴ�.\n");
            found = 1;
            break;
        }
        curr = curr->next;
    }
    if (!found) {
        printf("�˻��� ������ ��ϵǾ� ���� �ʽ��ϴ�.\n");
    }
}

void DeleteBook() {
    char deletetitle[100];
    printf("������ ���� ������ �Է��ϼ���: ");
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
            printf("������ ���������� �����Ǿ����ϴ�.\n");
            found = 1;
            break;
        }
        prev = curr;        
        curr = curr->next;
    }

    if (!found) {
        printf("������ ������ ã�� �� �����ϴ�.\n");
    }
}

void PrintBook() {
    struct Book* curr = head;
    printf("**** ���� ��� ****\n");
    while (curr != NULL) {
        printf("���� ����: %s\n", curr->title);
        printf("���� ����: %s\n", curr->author);
        printf("���� ����: %d\n", curr->price);
        printf("���� ISBN: %s\n", curr->ISBN);
        printf("\n");
        curr = curr->next;
    }
}

int main() {
    int choice;

    while (1) {
        ShowMenu();
        printf("�޴��� �����ϼ���: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            PurchaseBook();
            break;
        case 2:
            SearchBook();
            break;
        case 3:
            DeleteBook();
            break;
        case 4:
            PrintBook();
            break;
        case 0:
            printf("���α׷��� �����մϴ�.\n");
            return 0;
        }
    }
}
