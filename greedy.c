#include <cs50.h>
#include <stdio.h>

int main(void)
{

  float quarter = 25;
  float dime = 10;
  float nickel = 5;
  float penny = 1;
  
  float change = GetFloat();
  change = change * 100;
  int count = 0;
  if (change > 0)
    {
      while (change >= quarter)
      { 
        change = change - quarter;
        count ++;
      }
      while (change >= dime)
      {
        change = change - dime;
        count ++;
      }
      while (change >= nickel)
      {
        change = change - nickel;
        count ++;
      }
      while (change >= penny)
      {
        change = change - penny;
        printf("the change is: %f", change);
        count ++;
      }
      printf("You get this many coins back: %i", count);

    } //ends if block
}