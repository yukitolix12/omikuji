#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
int fortune_slip;

printf("おみくじを引こう!([enter]キーを押してね)\n");
getchar();
printf("今日の運勢は・・・\n");

srand((unsigned)time(NULL));
fortune_slip = rand() % 4;

if(fortune_slip == 0){
    printf("\nおみくじの結果: [大吉]です!!\n");
}else if(fortune_slip == 1){
    printf("\nおみくじの結果: [中吉]です!!\n");
}else if(fortune_slip == 2){
    printf("\nおみくじの結果: [小吉]です!!\n");
}else{
    printf("\nおみくじの結果: [吉]です!!\n");
}
}

