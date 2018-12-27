#include <stdio.h>

int count;
extern void write_extern();
void test_array();
void test_enum();

enum season{
    spring,
    summer,
    autumn,
    winter
};

int main() {
    //test_typeof();
    count = 5;
    //write_extern();
    //test_array();
    //test_enum();
    return 0;
}

void test_typeof(){
    printf("Hello, World!\n");
    printf("int sizeof: %lu \n", sizeof(int));
    printf("char sizeof: %lu \n \a", sizeof(char));
}

void test_enum(){
    enum season my_season;
    my_season = spring;
    switch (my_season){
        case spring: printf("spring\n");
            break;
        case summer: printf("summer\n");
            break;
        case autumn: printf("autumn\n");
            break;
        case winter: printf("winter\n");
            break;
        default:printf("error");
    }
}

void test_array(){
    int numbers[10];
    for (int i = 0; i < 10; ++i) {
        numbers[i] = i;
    }
    for (int j = 0; j < 10; ++j) {
        printf("number[%d]=%d\n", j, numbers[j]);
    }
}