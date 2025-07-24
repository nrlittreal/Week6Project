#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int getRooms();
int getSqrtFeet(int, double&);
void CalcGals(int&, int);
double CalcHours(int);
void CalcCosts(double, double);

const double GPSF = 1.0/110, LPSF = 8.0/110, LCPH = 25.00;

int main()
{
  double TotGalCost = 0;
  int rooms = getRooms();
  int sqrFeet = getSqrtFeet(rooms, TotGalCost);
  int galReq = 0;
  CalcGals(galReq, sqrFeet);
  double TotalHours = CalcHours(sqrFeet);
  CalcCosts(TotGalCost, TotalHours);

  return 0;
}

// Gets the number of rooms to be painted.
int getRooms()
{
  int roomNum;
  
  cout << "Please enter the number of rooms to be painted: " << endl;

  cin >> roomNum;

  while(roomNum <= 1)
    {
      cout << "Please enter a number greater than 1: " << endl;

      cin >> roomNum;
    }

  return roomNum;
}

// Gets the square footage of each room and the cost of the paint per gallon for each room. It thens adds up the square footage and the cost of the paint.
int getSqrtFeet(int rooms, double& TotGalCost)
{
  double GalCostTot = 0.0;

  int sqrFeetTot = 0;

  int sqrFeet;

  double CostPerGal;

  double GalCost;
  
  for (int counter = 0; counter < rooms; counter++)
    {
      cout << "Please enter the square footage of a room: " << endl;

      cin >> sqrFeet;

      while (sqrFeet <= 0)
        {
          cout << "Please enter a number greater than 0: " << endl;

          cin >> sqrFeet;
        }
      
      cout << "Please enter the cost of the paint for that room: " << endl;

      cin >> CostPerGal;

      while (CostPerGal <= 10.00)
        {
          cout << "Please enter a cost greater than $10.00: " << endl;

          cin >> CostPerGal;
        }

      sqrFeetTot += sqrFeet;

      GalCost = ceil(sqrFeet * GPSF) * CostPerGal ;

      GalCostTot += GalCost;
    }
  TotGalCost = GalCostTot;

  return sqrFeetTot;
}

// Calculates the gallons of paint required to paint the total square footage.
void CalcGals(int& galReq, int sqrFeet)
{
  galReq = ceil(sqrFeet * GPSF);
  
  cout << "The number of gallons of paint required is: " << galReq << endl;
}

// Calculates the hours of labor required to paint the total square footage.
double CalcHours(int sqrFeet)
{
  return sqrFeet * LPSF;
}

// Calculates the cost of the paint and the labor and the total cost of the job.
void CalcCosts(double TotGalCost, double TotalHours)
{
  double LaborCost = TotalHours * LCPH;

  cout << fixed << setprecision(2);

  cout << "The total cost of the paint is $" << TotGalCost << endl;

  cout << "The total cost of the labor is $" << LaborCost << endl;

  cout << "The total cost of the job is $" << LaborCost + TotGalCost << endl;
}