#include <iostream>

#include <iomanip>

using namespace std;

double getCelsius(int);

const int TempMin = 0, TempMax = 20;

int main()
{
  cout << "Fahrenheit and Celsius Temperature table:" << endl << "_________________________________________" << endl;

  cout << "Fahrenheit\tCelsius" << endl;
  
  cout << fixed << setprecision(2);

  for (int counter = TempMin; counter <= TempMax; counter++)
  {
    cout << counter << "\t\t" << getCelsius(counter) << endl;
  }
  return 0;
}
//This function takes the temperature in Fahrenheit and returns the temperature in Celsius.
double getCelsius(int counter)
{
  return 5.0 / 9 * (counter - 32);
}
