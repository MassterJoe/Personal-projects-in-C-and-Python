#include <stdio.h>
#include <stdlib.h>

/*
  This code takes a student's scores as input and calculates the total and average of the scores,
  this will help a teacher become faster when creating a broadsheet
Author: Salawu O. Joseph (Master Joe)
*/

int average_calc()
{
  int MAX_SIZE;
  printf("How many scores do you wanna enter?\n");
  scanf("%d", &MAX_SIZE);
  int arr[MAX_SIZE];
  int data;
  printf("Okay\n");
  printf("Enter the scores\n");
  int i = 0;
  while(i < MAX_SIZE)
    {
  scanf("%d", &data);
  arr[i] = data;
  i = i + 1;
    }
  printf("The numbers you entered are: \n");
  float total = 0;
  int len = 0;
  for(i = 0; i<MAX_SIZE; i++)
    {  
  printf("%d\n",arr[i]);
  len = len + 1;
  total = total + arr[i];
    }
  printf("Total score is %.3f ", total);
  printf("\n");
  float average = (total/len);
  printf("Average score is %.3f", average);
  
}

int main()
{
  average_calc();
}
