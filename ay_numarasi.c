#include <stdio.h>
#include <string.h>

int main() {
    char ay[10];
    int ay_numarasi;

    printf("ay girinz: ");
    scanf("%s",ay);

    
    if (strcmp(ay, "Ocak") == 0) {
        ay_numarasi = 1;
    }
    else if (strcmp(ay, "Subat") == 0) {
        ay_numarasi = 2;
    }
    else if (strcmp(ay, "Mart") == 0) {
        ay_numarasi = 3;
    }
    else if (strcmp(ay, "Nisan") == 0) {
        ay_numarasi = 4;
    }
    else if (strcmp(ay, "Mayis") == 0) {
        ay_numarasi = 5;
    }
    else if (strcmp(ay, "Haziran") == 0) {
        ay_numarasi = 6;
    }
    else if (strcmp(ay, "Temmuz") == 0) {
        ay_numarasi = 7;
    }
    else if (strcmp(ay, "Agustos") == 0) {
        ay_numarasi = 8;
    }
    else if (strcmp(ay, "Eylul") == 0) {
        ay_numarasi = 9;
    }
    else if (strcmp(ay, "Ekim") == 0) {
        ay_numarasi = 10;
    }
    else if (strcmp(ay, "Kasim") == 0) {
        ay_numarasi = 11;
    }
    else if (strcmp(ay, "Aralik") == 0) {
        ay_numarasi = 12;
    }
    else {
       
       ay_numarasi = 0;
    }

    printf("ay numarasi : %d\n", ay_numarasi);

    return 0;
}
