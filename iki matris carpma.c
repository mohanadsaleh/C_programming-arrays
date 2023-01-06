#include <stdio.h>
#define MAX_SIZE 100

int main() {
int n, A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE];
int min_element, max_element;
int i,j,k;

printf("Matrisin boyutunu girin: ");
scanf("%d", &n);

printf("Matrisin elemanlarýný girin: ");
for ( i = 0; i < n; i++) {
for ( j = 0; j < n; j++) {
scanf("%d", &A[i][j]);
}
}


for ( i = 0; i < n; i++) {
for ( j = 0; j < n; j++) {
B[i][j] = A[j][i];
}
}


for ( i = 0; i < n; i++) {
for ( j = 0; j < n; j++) {
B[i][j] = 0;
for ( k = 0; k < n; k++) {
B[i][j] += A[i][k] * A[k][j];
}
}
}

 
min_element = max_element = B[0][0];
for ( i = 0; i < n; i++) {
for ( j = 0; j < n; j++) {
if (B[i][j] < min_element) {
min_element = B[i][j];
}
if (B[i][j] > max_element) {
max_element = B[i][j];
}
}
}

printf("Matristeki minimum eleman: %d\n", min_element);
printf("Matristeki maksimum eleman is: %d\n", max_element);

return 0;
}
