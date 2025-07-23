#include <iostream>

#include <iomanip>

using namespace std;

double getCelsius(int);

const int TempMin = 0, TempMax = 20;

int main()
{
  cout << "Fahrenheit and Celsius Temperature table:" << endl << "_________________________________________" << endl;

  cout << "Fahrenheit\tCelsius" << endl;

  for (int counter = TempMin; counter <= TempMax; counter++)
    {
      cout << fixed << showpoint << setprecision(2) << counter << "\t\t" << getCelsius(counter) << endl;
    }
  return 0;
}

double getCelsius(int counter)
{
  return 5.0/9 * (counter - 32);
}