#include<stdio.h>

int main() {
  int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}}; 
  int sum = 0;
  int sim;

  // Checkpoint 1 code goes here.
  sim = matrix[3][1];
  printf("%i\n",sim);

  // Checkpoint 2 code goes here.
int rowDimension = sizeof(matrix)/sizeof(matrix[0]);
int columnDimension = sizeof(matrix[0])/sizeof(int);

  for(int i = 0; i < rowDimension; i++){
   for(int j = 0; j < columnDimension; j++){
     int num = matrix[i][j];
     sum += num;
   // printf("%i\n", num);
  }
}
printf("%i",sum);

}