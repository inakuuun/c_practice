# include <stdio.h>

//int main(void) {
//    int i = 10;
//    while (i < 100) {
//        if (i % 2) {
//            // �J�E���^�X�V
//            i++;
//
//            // ���̔���������
//            continue;
//        }
//
//        if (i > 50) {
//            // ���������I��
//            break;
//        }
//    }
//    return 0;
//}

//// �ő���{�������߂�@
//int main(void) {
//    unsigned long num1 = 12;
//    unsigned long num2 = 15;
//    unsigned long count = 1;
//
//    while (1) {
//        // �J�E���g�A�b�v�����l��num1��num2�̗����ł��܂肪0�ɂȂ�ꍇ�Ɍ��ʂ��o��
//        // ��num1��num2�̗����ł��܂肪0�ɂȂ�J�E���g���ő���񐔂ƂȂ�
//        if (count % num1 == 0 && count % num2 == 0) {
//            printf("%d , %d ==> %d\n", num1, num2, count);
//            printf("%d , %d\n", count / num1, count / num2);
//            break;
//        }
//        // �J�E���g�A�b�v
//        count++;
//    }
//    return 0;
//}

//// �ő���{�������߂�A
//int main(void) {
//    unsigned long num1 = 24;
//    unsigned long num2 = 24;
//    unsigned long count = 1;
//
//    while (1) {
//        // �J�E���g��num1��num2�ȏ�̏ꍇ
//        if (count >= num1 && count >= num2) {
//            // num1�ɃJ�E���g/num1�̏�����Z�����l��num2�ɃJ�E���g/num2�̏�����Z�����l����v�����ꍇ
//            if (num1 * (count / num1) == num2 * (count / num2)) {
//                // ���ʂ��o��
//                printf("%d , %d ==> %d\n", num1, num2, count);
//                break;
//            }
//        }
//        // �J�E���g�A�b�v
//        count++;
//    }
//    return 0;
//}
