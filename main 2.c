#include <stdio.h>

int main() {
    char name[3][20];
    float score[3][3];
    float avg[3] = {0};

    // รับข้อมูลนักศึกษา 3 คน
    for (int i = 0; i < 3; i++) {
        printf("Enter student %d name: ", i + 1);
        scanf("%s", name[i]);

        printf("Enter Math score: ");
        scanf("%f", &score[i][0]);

        printf("Enter Phy score: ");
        scanf("%f", &score[i][1]);

        printf("Enter Chem score: ");
        scanf("%f", &score[i][2]);
    }

    // แสดงตาราง
    printf("\n");
    printf("Student (length)        Math       Phy       Chem\n");
    printf("------------------------------------------------------\n");

    for (int i = 0; i < 3; i++) {
        printf("%-20s %7.2f %9.2f %9.2f\n",
               name[i],
               score[i][0],
               score[i][1],
               score[i][2]);
    }

    // หาค่าเฉลี่ยแต่ละวิชา
    float mathAvg = 0, phyAvg = 0, chemAvg = 0;

    for (int i = 0; i < 3; i++) {
        mathAvg += score[i][0];
        phyAvg += score[i][1];
        chemAvg += score[i][2];
    }

    mathAvg /= 3;
    phyAvg /= 3;
    chemAvg /= 3;

    printf("------------------------------------------------------\n");
    printf("Subject average       %7.2f %9.2f %9.2f\n",
           mathAvg, phyAvg, chemAvg);
    printf("======================================================\n");

    return 0;
}