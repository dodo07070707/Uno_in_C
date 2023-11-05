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

void _printrules(){
    gotoxy(50,5);
    printf(".______       __    __   __       _______     _______.\n");
    gotoxy(50,6);
    printf("|   _  \\     |  |  |  | |  |     |   ____|   /       |\n");
    gotoxy(50,7);
    printf("|  |_)  |    |  |  |  | |  |     |  |__     |   (----`\n");
    gotoxy(50,8);
    printf("|      /     |  |  |  | |  |     |   __|     \\   \\    \n");
    gotoxy(50,9);
    printf("|  |\\  \\----.|  `--'  | |  `----.|  |____.----)   |   \n");
    gotoxy(50,10);
    printf("| _| `._____| \\______/  |_______||_______|_______/    \n");
    Sleep(1000);
    gotoxy(40,17);
    printf("1. 이 게임은 Mattel사에서 생산중인 Uno의 기본 규칙을 따릅니다.");
    Sleep(500);
    printf("2. ");
}

int main(){
    system("title Uno_in_C"); // 프로세스 이름
    system("mode con: cols=200 lines=50"); // !콘솔창 크기
    system("COLOR 0F"); //!배경색, 글자색
    _printtitle();
    Sleep(1000);
    system("cls");
    _printrules();
}
