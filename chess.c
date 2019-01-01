//
// Created by Administrator on 2019/1/1.
//
#include <stdio.h>
#include <stdlib.h>
int chesses[4][4];
int items[16];
enum item{
    mouse,
    cat,
    dog,
    wolf,
    leopard,
    tiger,
    lion,
    elephant,
    chess
};
void print_item(enum item);
void show();
void init();
void change_chess(int, int);

void init(){
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            chesses[i][j] = chess;
            items[i*4+j] = 0;
        }
    }
}

void play(){
    int i,j;
    init();
    while (1){
        show();
        printf("please input i and j:");
        scanf("%d", &i);
        scanf("%d", &j);
        if (i == 0 && j == 0)
            break;
        printf("you choose i = %d, j = %d\n", i--, j--);
        change_chess(i, j);
    }
}

void change_chess(int i, int j){
    if (chesses[i][j] == chess){
        int index = rand() % 8;
        chesses[i][j] = index;
    }
}

void show(){
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf(" | ");
            print_item(chesses[i][j]);
        }
        printf(" | ");
        printf("\n");
    }
}

void print_item(enum item item){
    switch (item){
        case mouse: printf("mouse");
            break;
        case cat: printf("cat  ");
            break;
        case dog: printf("dog  ");
            break;
        case wolf: printf("wolf ");
            break;
        case leopard: printf("leopard");
            break;
        case tiger: printf("tiger");
            break;
        case lion: printf("lion ");
            break;
        case elephant: printf("elephant");
            break;
        default:printf("chess");
    }
}
