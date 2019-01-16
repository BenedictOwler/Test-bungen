#include <stdio.h>
void
createArray (int *array, int anz)
{
  srand (time (0));
  for (int i = 0; i < anz; i++)
    array[i] = rand () % 100;
  return 0;
}

void
showArray (int *array, int anz)
{

  for (int i = 0; i < anz; i++)
    {
      printf ("%d ", array[i]);
    }

}

void
reverseArray (int *array, int anz)
{
  for (int i = anz; i >= 1; i--)

    {
      printf ("%d ", array[i - 1]);
    }
}

int
sumArray (int *array, int anz)
{

  int sum = 0;

  for (int i = 0; i < anz; i++)
    {

      sum = sum + array[i];
    }
  return sum;
}

double avarageArray (int *array, int lenght)
{
  double sum = 0;
  for (int i = 0; i < lenght; i++)
    {
      sum = sum + array[i];
    }
  return sum / lenght;
}

void AvarageDifference (int *array, int lenght, double ava)
{
    for(int i = 0; i < lenght; i++) {
        
	  if ((ava * 0.8) > array[i] || (ava * 1.2) < array[i])
	  {

	    array[i] = ava;
	  }
    }
}



int main ()
{
  int anz = 10;
  int z[anz];
  double avarage;

  createArray (z, anz);
  printf ("\nArray mit %d zufaellige Zahlen \n", anz);
  showArray (z, anz);
  printf ("\nArray Vertauscht \n");
  reverseArray (z, anz);
  printf ("\nSumme des Arrays ist %d \n", sumArray (z, anz));
  avarage = avarageArray(z, anz);
  printf ("Mittelwert des Arrays ist %d \n",avarage);
  AvarageDifference (z, anz, avarage);
  printf("%d");
  showArray(z,anz) ;
  

  return 0;
}
