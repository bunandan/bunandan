#include<stdio.h>
typedef struct car
{
  char engine[50];
  char fuel_type[10];
  int fuel_tank_cap;
  int seating_cap;
  float city_mileage;
};
int main()
{
    car c1={"w","E",22,5,23.4};
    printf("%s %s %d %d %f",c1.engine,c1.fuel_type,c1.fuel_tank_cap,c1.seating_cap,c1.city_mileage);
    return 0;
}

