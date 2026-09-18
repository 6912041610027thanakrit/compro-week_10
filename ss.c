#include <stdio.h>
#include <string.h>

int main() {
    // อาร์เรย์ 2 มิติสำหรับเก็บชื่อนักศึกษา 3 คน (ความยาวไม่เกิน 49 อักขระ)
    char students[3][50];
    
    // อาร์เรย์ 2 มิติสำหรับเก็บคะแนน 3 วิชา (Math, Phy, Chem) ของนักศึกษา 3 คน
    float scores[3][3];
    
    // อาร์เรย์ 1 มิติสำหรับเก็บคะแนนเฉลี่ยแต่ละวิชา
    float subject_sum[3] = {0.0, 0.0, 0.0};

    // --- รับข้อมูลนักศึกษาและคะแนน ---
    for (int i = 0; i < 3; i++) {
        printf("--- นักศึกษาคนที %d ---\n", i + 1);
        printf("ป้อนชื่อ: ");
        scanf("%s", students[i]);
        
        printf("ป้อนคะแนน Math: ");
        scanf("%f", &scores[i][0]);
        
        printf("ป้อนคะแนน Phy: ");
        scanf("%f", &scores[i][1]);
        
        printf("ป้อนคะแนน Chem: ");
        scanf("%f", &scores[i][2]);
        printf("\n");
    }

    // --- คำนวณผลรวมคะแนนของแต่ละวิชา ---
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            subject_sum[j] += scores[i][j];
        }
    }

    // --- แสดงผลลัพธ์ในรูปแบบตาราง ---
    printf("=====================================================\n");
    printf("%-20s %-10s %-10s %-10s\n", "Student (length)", "Math", "Phy", "Chem");
    printf("=====================================================\n");

    for (int i = 0; i < 3; i++) {
        // ใช้ strlen() เพื่อนับจำนวนตัวอักษรในชื่อ
        char name_with_len[60];
        sprintf(name_with_len, "%s (%lu)", students[i], strlen(students[i]));
        
        printf("%-20s %-10.2f %-10.2f %-10.2f\n", 
               name_with_len, scores[i][0], scores[i][1], scores[i][2]);
    }

    printf("-----------------------------------------------------\n");
    printf("%-20s %-10.2f %-10.2f %-10.2f\n", 
           "Subject average", subject_sum[0] / 3.0, subject_sum[1] / 3.0, subject_sum[2] / 3.0);
    printf("=====================================================\n");

    return 0;
}