
#void sum (int *Array, int lenght)
{

  int sum = 0;

  for (int i = 0; i < lenght; i++)
    {

      sum = sum + Array[i];


    }
  return sum;

}

int main ()
{
  int rArray[] = srand(100);
  int lenght = 100;

  printf ("Die Zahlen des Arrays sind %s\n", rArray);

  sum (rArray, lenght);
  for (int i = 0; i < lenght; i++)
    {
      printf ("Die Summe des Arrays ist %s\n", rArray[i]);
    }
  return 0;

}
