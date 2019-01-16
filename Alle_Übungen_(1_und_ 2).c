#include <stdio.h>
void createArray (int *array, int anz)
{
  srand (time(0));
  for (int i = 0; i < anz; i++)
    array[i] = rand()%100;
  return 0;
}
void showArray (int *array, int anz)
{

  for (int i = 0; i < anz; i++)
    {
        printf ("%d ", array[i]);
    }

}
void reverseArray (int * array, int anz) {
for (int i = anz; i >= 1; i--)

            {
             printf ("%d ", array[i-1]);
            }
}
int sumArray (int * array, int anz) {

int sum = 0; 

for (int i = 0; i < anz; i++) {
    
    sum =  sum + array[i];
}
return sum;
}

int avarageArray (int * array, int lenght) {
int sum = 0;
for (int i = 0; i < lenght; i++) {
sum = sum + array[i];  
}
return sum/lenght;
}


int main()
{
    int anz = 10;
  int z[anz];
  
  createArray (z, anz);
  printf ("\nArray mit %d zufaellige Zahlen \n", anz);
  showArray (z, anz);
  printf ("\nArray Vertauscht \n");
  reverseArray (z, anz);
  printf ("\nSumme des Arrays ist %d \n", sumArray(z, anz));
  printf("Mittelwert des Arrays ist %d \n", avarageArray(z, anz));
 
 return 0;
}
