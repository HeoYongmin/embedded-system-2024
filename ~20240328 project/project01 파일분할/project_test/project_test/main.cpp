#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "book.h"

int main() {
    int choice;

    while (1) {
        ShowMenu();
        printf("메뉴를 선택하세요: ");
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
            printf("프로그램을 종료합니다.\n");
            return 0;
        }
    }
}