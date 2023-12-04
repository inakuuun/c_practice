# include <stdio.h>

//int main(void) {
//    int i = 10;
//    while (i < 100) {
//        if (i % 2) {
//            // カウンタ更新
//            i++;
//
//            // 次の反復処理へ
//            continue;
//        }
//
//        if (i > 50) {
//            // 反復処理終了
//            break;
//        }
//    }
//    return 0;
//}

//// 最大公倍数を求める①
//int main(void) {
//    unsigned long num1 = 12;
//    unsigned long num2 = 15;
//    unsigned long count = 1;
//
//    while (1) {
//        // カウントアップした値がnum1とnum2の両方であまりが0になる場合に結果を出力
//        // ※num1とnum2の両方であまりが0になるカウントが最大公約数となる
//        if (count % num1 == 0 && count % num2 == 0) {
//            printf("%d , %d ==> %d\n", num1, num2, count);
//            printf("%d , %d\n", count / num1, count / num2);
//            break;
//        }
//        // カウントアップ
//        count++;
//    }
//    return 0;
//}

//// 最大公倍数を求める②
//int main(void) {
//    unsigned long num1 = 24;
//    unsigned long num2 = 24;
//    unsigned long count = 1;
//
//    while (1) {
//        // カウントがnum1とnum2以上の場合
//        if (count >= num1 && count >= num2) {
//            // num1にカウント/num1の商を乗算した値とnum2にカウント/num2の商を乗算した値が一致した場合
//            if (num1 * (count / num1) == num2 * (count / num2)) {
//                // 結果を出力
//                printf("%d , %d ==> %d\n", num1, num2, count);
//                break;
//            }
//        }
//        // カウントアップ
//        count++;
//    }
//    return 0;
//}
