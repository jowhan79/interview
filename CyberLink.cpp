// 這程式有些問題，跑起來會爆炸。設法找出問題並改善。

#include <stdio.h>
#include <string.h>

void getMemory(char* p, int size){
    p = new char[size];
}

void releaseMemory(char* p){
    delete p;
}

int main(){
    char src[] = "hello";
    char* str = NULL;
    getMemory(str,strlen(src)+1);
    strcpy(str,"hello");
    printf("%s",str);
    releaseMemory(str);
    return 1;
}
