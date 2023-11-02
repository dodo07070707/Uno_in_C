#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void gotoxy(int x, int y){
    COORD Pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}

int main(){
    system("Uno in C"); // !게임 이름
    system("mode con: cols=100, lines=100"); // !콘솔창 크기 
    system("COLOR 06"); //!배경색, 글자색
        
}
