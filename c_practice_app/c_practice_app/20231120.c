// 標準ライブラリの参照
#include <stdio.h>
#include <stdbool.h>

//// 起動
//int main(void)
//{
//    // 出力
//    // %dは数値を出力する時のバインド
//    printf("%d\n", 5 + 3);
//
//    // 標準入力
//    getchar();
//
//    printf("モノづくり\nC言語塾\n");
//
//
//    // 処理が正常に終了したことを意味
//    // ※C言語の文化的なもの
//    return 0;
//}


//int main(void)
//{
//    int calc;       //  途中計算結果
//    int result;     //  最終計算結果
//
//    calc = 10 * 20;
//
//    result = calc / 5;
//    printf("%d\n", result);
//
//    result = calc / 10;
//    printf("%d\n", result);
//
//    return 0;
//}

//// 変数定義は処理の前に定義する必要がある
//int main(void) {
//    // {の直後の変数定義はOK
//    char num;
//    // 処理語の変数定義
//    long tmp;
//
//    num = 100;
//    tmp = 50;
//
//    return 0;
//}

//int main(void)
//{
//    int number = 5;
//    number *= 10;
//    printf("%d\n", number);
//
//    return 0;
//}

//int main(void) {
//    unsigned char num;
//    num = 260;
//    printf("%d\n", num);
//    return 0;
//}

//int main(void) {
//    printf("加算：%d\n", 5 + 3);
//    printf("減算：%d\n", 5 - 3);
//    printf("乗算：%d\n", 5 * 3);
//    printf("除算：%d\n", 5 / 3);
//    printf("余り：%d\n", 5 % 3);
//    return 0;
//}

//int main(void) {
//    char tmp1 = 120;
//    short tmp2 = 23456;
//    long calc = tmp1 + tmp2;
//    printf("calc：%d\n", calc);
//    return 0;
//}

//int main(void) {
//    int self = 50;
//    self += 30;
//    printf("self:%d\n", self);
//}

//int main(void) {
//    unsigned char num1 = 254;
//    printf("%d\n", ++num1);
//    printf("%d\n", ++num1);
//}

//int main(void) {
//    unsigned char num1 = 1;
//    printf("%d\n", --num1);
//    printf("%d\n", --num1);
//    return 0;
//}

//int main(void) {
//    int number = 10;
//    if (number == 10) {
//        printf("条件式が成立：真");
//    }
//    else {
//        printf("条件式が成立：偽");
//    }
//    return 0;
//}

//int main(void) {
//    int number = 100;
//    printf("%d\n", number == 100);
//    printf("%d\n", number != 100);
//    return 0;
//}

//int main(void) {
//    char weather = 0;
//    char sun = 0;
//    char rain = 0;
//    char cloud = 0;
//
//    if (weather == sun) {
//
//    }
//    return 0;
//}
// 標準ライブラリの参照
#include <stdio.h>
#include <stdbool.h>

//// 起動
//int main(void)
//{
//    // 出力
//    // %dは数値を出力する時のバインド
//    printf("%d\n", 5 + 3);
//
//    // 標準入力
//    getchar();
//
//    printf("モノづくり\nC言語塾\n");
//
//
//    // 処理が正常に終了したことを意味
//    // ※C言語の文化的なもの
//    return 0;
//}


//int main(void)
//{
//    int calc;       //  途中計算結果
//    int result;     //  最終計算結果
//
//    calc = 10 * 20;
//
//    result = calc / 5;
//    printf("%d\n", result);
//
//    result = calc / 10;
//    printf("%d\n", result);
//
//    return 0;
//}

//// 変数定義は処理の前に定義する必要がある
//int main(void) {
//    // {の直後の変数定義はOK
//    char num;
//    // 処理語の変数定義
//    long tmp;
//
//    num = 100;
//    tmp = 50;
//
//    return 0;
//}

//int main(void)
//{
//    int number = 5;
//    number *= 10;
//    printf("%d\n", number);
//
//    return 0;
//}

//int main(void) {
//    unsigned char num;
//    num = 260;
//    printf("%d\n", num);
//    return 0;
//}

//int main(void) {
//    printf("加算：%d\n", 5 + 3);
//    printf("減算：%d\n", 5 - 3);
//    printf("乗算：%d\n", 5 * 3);
//    printf("除算：%d\n", 5 / 3);
//    printf("余り：%d\n", 5 % 3);
//    return 0;
//}

//int main(void) {
//    char tmp1 = 120;
//    short tmp2 = 23456;
//    long calc = tmp1 + tmp2;
//    printf("calc：%d\n", calc);
//    return 0;
//}

//int main(void) {
//    int self = 50;
//    self += 30;
//    printf("self:%d\n", self);
//}

//int main(void) {
//    unsigned char num1 = 254;
//    printf("%d\n", ++num1);
//    printf("%d\n", ++num1);
//}

//int main(void) {
//    unsigned char num1 = 1;
//    printf("%d\n", --num1);
//    printf("%d\n", --num1);
//    return 0;
//}

//int main(void) {
//    int number = 10;
//    if (number == 10) {
//        printf("条件式が成立：真");
//    }
//    else {
//        printf("条件式が成立：偽");
//    }
//    return 0;
//}

//int main(void) {
//    int number = 100;
//    printf("%d\n", number == 100);
//    printf("%d\n", number != 100);
//    return 0;
//}

//int main(void)
//{
//    char weather = 0;
//    char sun = 0;
//    char rain = 1;
//
//    if (weather == sun) 
//    {
//        printf("晴れ");
//    }
//    else if (weather == rain) 
//    {
//        printf("雨");
//    }
//    else 
//    {
//        printf("曇り");
//    }
//    return 0;
//}

//int main(void) {
//    int number = 58;
//    if (number % 2 == 0) {
//        printf("偶数：%d\n", number);
//    }
//    else {
//        printf("奇数：%d\n", number);
//    }
//}

//int main(void) {
//    char score = 120;
//
//    if (score == 100) 
//    {
//        printf("score:%d 素晴らしい!",score);
//    }
//    else if (score <= 99 && score >= 80)
//    {
//        printf("score:%d よくできました", score);
//    }
//    else if (score <= 79 && score >= 30)
//    {
//        printf("score:%d 頑張りましょう", score);
//    }
//    else if (score <= 29 && score >= 0)
//    {
//        printf("score:%d 勉強していませんね", score);
//    }
//    else {
//        printf("score:%d 異常な点数です", score);
//    }
//    return 0;
//}

//int main(void) {
//    long year = 2019;
//
//    if (year % 4 == 0) {
//        if (year % 100 == 0 && year % 400 != 0) {
//            printf("%d年：平年", year);
//        }
//        else 
//        {
//            printf("%d年：閏年", year);
//        }
//    }
//    else {
//        printf("%d年：平年", year);
//    }
//    return 0;
//}
