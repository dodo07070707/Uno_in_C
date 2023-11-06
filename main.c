#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<stdbool.h>

struct Pair{
    int num;
    char color[10];
    bool isSpecial;
    char property[20];
}cards_set[50];

void gotoxy(int x, int y){
    COORD Pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}

void _setCommonCards(){
    // 0: ���� 0, 1~18 : ���� 1~9 2����,
    int idx = 0;
    //red set
    // ���� 0 ī��
    cards_set[idx].num = 0;
    strcpy(cards_set[idx].color, "red");
    cards_set[idx].isSpecial = false;
    idx++;
    //���� 1~9 ī��
    for(int i=1;i<=9;i++){
        cards_set[idx].num = i;
        strcpy(cards_set[idx].color, "red");
        cards_set[idx].isSpecial = false;
        idx++;
        cards_set[idx].num = i;
        strcpy(cards_set[idx].color, "red");
        cards_set[idx].isSpecial = false;
        idx++;
    }
    //+2 ī��
    strcpy(cards_set[idx].color, "red");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "+2");
    idx++;
    strcpy(cards_set[idx].color, "red");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "+2");
    idx++;
    //���� �ٲٱ�
    strcpy(cards_set[idx].color, "red");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "change_order");
    idx++;
    strcpy(cards_set[idx].color, "red");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "change_order");
    idx++;
    //�ǳʶٱ�
    strcpy(cards_set[idx].color, "red");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "skip");
    idx++;
    strcpy(cards_set[idx].color, "red");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "skip");
    idx++;

    //yellow set
    // ���� 0 ī��
    cards_set[idx].num = 0;
    strcpy(cards_set[idx].color, "yellow");
    cards_set[idx].isSpecial = false;
    idx++;
    //���� 1~9 ī��
    for(int i=1;i<=9;i++){
        cards_set[idx].num = i;
        strcpy(cards_set[idx].color, "yellow");
        cards_set[idx].isSpecial = false;
        idx++;
        cards_set[idx].num = i;
        strcpy(cards_set[idx].color, "yellow");
        cards_set[idx].isSpecial = false;
        idx++;
    }
    //+2 ī��
    strcpy(cards_set[idx].color, "yellow");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "+2");
    idx++;
    strcpy(cards_set[idx].color, "yellow");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "+2");
    idx++;
    //���� �ٲٱ�
    strcpy(cards_set[idx].color, "yellow");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "change_order");
    idx++;
    strcpy(cards_set[idx].color, "yellow");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "change_order");
    idx++;
    //�ǳʶٱ�
    strcpy(cards_set[idx].color, "yellow");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "skip");
    idx++;
    strcpy(cards_set[idx].color, "yellow");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "skip");
    idx++;

    //green set
    // ���� 0 ī��
    cards_set[idx].num = 0;
    strcpy(cards_set[idx].color, "green");
    cards_set[idx].isSpecial = false;
    idx++;
    //���� 1~9 ī��
    for(int i=1;i<=9;i++){
        cards_set[idx].num = i;
        strcpy(cards_set[idx].color, "green");
        cards_set[idx].isSpecial = false;
        idx++;
        cards_set[idx].num = i;
        strcpy(cards_set[idx].color, "green");
        cards_set[idx].isSpecial = false;
        idx++;
    }
    //+2 ī��
    strcpy(cards_set[idx].color, "green");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "+2");
    idx++;
    strcpy(cards_set[idx].color, "green");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "+2");
    idx++;
    //���� �ٲٱ�
    strcpy(cards_set[idx].color, "green");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "change_order");
    idx++;
    strcpy(cards_set[idx].color, "green");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "change_order");
    idx++;
    //�ǳʶٱ�
    strcpy(cards_set[idx].color, "green");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "skip");
    idx++;
    strcpy(cards_set[idx].color, "green");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "skip");
    idx++;

    //blue set
    // ���� 0 ī��
    cards_set[idx].num = 0;
    strcpy(cards_set[idx].color, "blue");
    cards_set[idx].isSpecial = false;
    idx++;
    //���� 1~9 ī��
    for(int i=1;i<=9;i++){
        cards_set[idx].num = i;
        strcpy(cards_set[idx].color, "blue");
        cards_set[idx].isSpecial = false;
        idx++;
        cards_set[idx].num = i;
        strcpy(cards_set[idx].color, "blue");
        cards_set[idx].isSpecial = false;
        idx++;
    }
    //+2 ī��
    strcpy(cards_set[idx].color, "blue");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "+2");
    idx++;
    strcpy(cards_set[idx].color, "blue");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "+2");
    idx++;
    //���� �ٲٱ�
    strcpy(cards_set[idx].color, "blue");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "change_order");
    idx++;
    strcpy(cards_set[idx].color, "blue");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "change_order");
    idx++;
    //�ǳʶٱ�
    strcpy(cards_set[idx].color, "blue");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "skip");
    idx++;
    strcpy(cards_set[idx].color, "blue");
    cards_set[idx].isSpecial = true;
    strcpy(cards_set[idx].property, "skip");
    idx++;

    //black card set

}

void _printtitle(){
    gotoxy(50,5);
    printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
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
    printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
    Sleep(1000);
    system("cls");
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
    gotoxy(45,17);
    printf("1. �� ������ Mattel�翡�� �������� Uno�� �⺻ ��Ģ�� �����ϴ�.");
    Sleep(500);
    gotoxy(55,19);
    printf("2. ���⿡ ���� ������ ���� �ƴϸ� ����");
    Sleep(500);
    gotoxy(65,21);
    printf("3. ������ ��⼼�� !");
    Sleep(500);
    system("cls");
}

int main(){
    system("title Uno_in_C"); // ���μ��� �̸�
    system("mode con: cols=200 lines=50"); // !�ܼ�â ũ��
    system("COLOR 0F"); //!����, ���ڻ�
    _setCommonCards();
    _printtitle();
    _printrules();

}
