#include <stdio.h>

struct Student {
    char name[50];
    int id;
    float grade;
};

int main() {
    struct Student s;

    printf("--- Systemi i Menaxhimit te Studenteve ---\n");
    printf("Shkruani emrin: ");
    scanf("%s", s.name);
    printf("Shkruani ID-ne: ");
    scanf("%d", &s.id);
    printf("Shkruani noten: ");
    scanf("%f", &s.grade);

    printf("\nStudenti u shtua me sukses!\n");
    printf("Emri: %s | ID: %d | Nota: %.2f\n", s.name, s.id, s.grade);

    return 0;
}
