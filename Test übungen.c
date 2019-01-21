#include <stdio.h>

#include <stdio.h>

void createArray(int * array, int anz);
void showArray(int*array,int anz);
int SumArray(int*array, int anz);
double AvarageArray(int *array, int anz);
void AvarageDifference(int *array,int anz, double ava);
int maxArray(int*array, int anz);
int minArray(int*array, int anz);
void countNumberlenght(int * array, int * count, int anz, int counterlenght);



int main()
{
    int anz = 10;
    int z[anz];
    double avarage;
    
    createArray(z, anz);
    printf("Array mit %d zufälligen Zahlen\n", anz);
    showArray(z,anz);
    printf ("\nArray Vertauscht \n");
    ReverseArray (z, anz);
    

    return 0;
}


void createArray (int * array, int anz)
{
  srand (time (0));
  for(int i=0; i < anz; i++)
  array[i] = rand () % 100;
  return 0; 
}

void showArray (int * array, int anz)
{
 for (int i = 0; i < anz; i++)
    {
        printf("%d",array[i]);
    }
}

void ReverseArray (int * array, int anz)
{
 for (int i = 0; i >= 1; i--)
    {
        printf("%d",array[i-1]);
    }
    
    return 0;
}

int SumArray (int*array, int anz)
{
    int sum = 0; 
    for (int i = 0; i < anz; i++)
            {
            sum = sum + array[i];
            }
            
    return sum;
}

double AvarageArray (int*array, int anz)
{
double sum = 0;
for (int i=0; i < anz; i++)
    {
        sum = sum + array[i];
    }
    
    return sum/anz;
    
}

void AvarageDifference(int *array,int anz, double ava)
{
    for( int i = 0; i < anz; i++)
    {
            
            if ((ava * 0.8) > array[i] || (ava * 1.2) > array[i])
        {
            array[i] = ava;
        }
            
    }
}

int maxArray(int*array, int anz)
{
  int max = array[0];
  for(int i = 0; i < anz; i++)
  {
      if (array[i] > max)
        { 
            max = array[i];
            
        }
        return max;
  }
}

int minArray(int*array, int anz)
{
  int min = array[0];
  for(int i = 0; i < anz; i++)
  {
      if (array[i] < min)
        { 
            min = array[i];
            
        }
        return min;
  }
}
void countNumberlenght(int * array, int * count, int anz, int counterlenght)
{
    
    int sumnumlenght = 0;
    for (int i = 0; i < counterlenght; i++){
        count[i] = 0;
    }
    for (int i = 0; i < anz; i++) {
        sumnumlenght = log10(array[i]);
        count[sumnumlenght]++;
    }
    
}
