#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void gotoxy(int x, int y){
    COORD Pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}

void _printtitle(){
    gotoxy(50,5);
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    gotoxy(50,6);
    printf("| __    __  .__   __.   ______       __  .__   __.      ______ |\n");
    gotoxy(50,7);
    printf("||  |  |  | |  \\ |  |  /  __  \\     |  | |  \\ |  |     /      ||\n");
    gotoxy(50,8);
    printf("||  |  |  | |   \\|  | |  |  |  |    |  | |   \\|  |    |  ,----'|\n");
    gotoxy(50,9);
    printf("||  |  |  | |  . `  | |  |  |  |    |  | |  . `  |    |  |     |\n");
    gotoxy(50,10);
    printf("||  `--'  | |  |\\   | |  `--'  |    |  | |  |\\   |    |  `----.|\n");
    gotoxy(50,11);
    printf("| \\______/  |__| \\__|  \\______/     |__| |__| \\__|     \\______||\n");
    gotoxy(50,12);
    printf("|                                                              |\n");
    gotoxy(50,13);
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
}

int main(){
    system("title Uno_in_C"); // 프로세스 이름
    system("mode con: cols=200 lines=50"); // !콘솔창 크기
    system("COLOR 0F"); //!배경색, 글자색
    _printtitle();
}
