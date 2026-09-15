#include <stdio.h>
int main() {
    int score;
    int total=0;
    int pass = 0,fail = 0;
    int highest = 0;
    int lowest = 0;
    for (int i=1; i<=5; i++) {
        printf ("请输入第%d个学生的成绩：",i);
        do {
            scanf ("%d",&score);
            if (score >100||score <0)
            printf ("请重新输入（0~100之间）：");
        } while (score>100||score<0);
        if (i==1) {
            highest = lowest = score;
        }
        if (score > highest) {
            highest = score;
        }
        if (score < lowest) {
            lowest = score;
        }
        if (score >=60) {
            pass++;
        }
        else {
            fail++;
        }
        total = total+score;
    }
    printf ("总分：%d",total);
    printf ("\n");
    printf ("平均分：%.2f",total/5.0);
    printf ("\n");
    printf ("及格人数：%d",pass);
    printf ("\n");
    printf ("不及格人数：%d",fail);
    printf ("\n");
    printf ("最高分：%d",highest);
    printf ("\n");
    printf ("最低分：%d",lowest);
}
