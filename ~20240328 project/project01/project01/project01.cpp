/*
File: project01.cpp
Created: 24-03-13
Author: 허용민
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct UserInfo {
    char id[50];
    char password[50];
    char name[50];
    int age;
};

void SaveUserInfo() {
    FILE* fp = fopen("myinfo.txt", "w");
    if (fp == NULL) {
        printf("Open Error\n");
        return;
    }

    const char* m_id = "snrn1234";
    const char* m_password = "123456";

    struct UserInfo user_info;
    strcpy(user_info.id, m_id);
    strcpy(user_info.password, m_password);
    strcpy(user_info.name, "Heoyongmin");
    user_info.age = 27;

    fprintf(fp, "ID: %s\nPassword: %s\nName: %s\nAge: %d\n",
        user_info.id, user_info.password, user_info.name, user_info.age);

    fclose(fp);
    printf("Info saved success\n");
}

void OpenUserInfo(const char* input_id, const char* input_password) {
    const char* m_id = "snrn1234";
    const char* m_password = "123456";

    if (strcmp(input_id, m_id) == 0 && strcmp(input_password, m_password) == 0) {
        printf("ID: %s\n", m_id);
        printf("Password: %s\n", m_password);
        printf("Name: Heoyongmin\n");
        printf("Age: 27\n");
        SaveUserInfo(); 
    }
    else {
        printf("ID 또는 Password가 올바르지 않습니다.\n");
    }
}

int main() {
    char input_id[50];
    char input_password[50];

    printf("ID를 입력해주세요: ");
    scanf("%s", input_id);
    printf("Password를 입력해주세요: ");
    scanf("%s", input_password);

    OpenUserInfo(input_id, input_password);

    return 0;
}
