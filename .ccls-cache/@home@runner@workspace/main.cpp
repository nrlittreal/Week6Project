#include <iostream>

#include <iomanip>

using namespace std;

void getLength_Width(double& length, double& width);
double CalcArea(double, double);
double CalcPerimeter(double, double);
void display(double, double);

int main()
{
  int choice;
  double length, width, area, perimeter;

  do
    {
      cout << "Please enter the length and width of the rectangle: " << endl;
      
      getLength_Width(length, width);

      if (length > 0 && width > 0)
      {
        CalcPerimeter(length, width);
     
        perimeter = CalcPerimeter(length, width);
      
        CalcArea(length, width);
      
        area = CalcArea(length, width);
      
        display(perimeter, area);
      
        cout << "If you would wish to calculate another rectangle press 1, if not, press 0: " << endl;

        cin >> choice;
      }
      else
      {
        cout << "Please enter positive values." << endl;

        choice = 1;
      }
    } while (choice == 1);
    
  return 0;
}

void getLength_Width(double& length, double& width)
{
  cin >> length >> width;
}
double CalcPerimeter(double length, double width)
{
  return 2 * (length + width);
}
double CalcArea(double length, double width)
{
  return length * width;
}
void display(double perimeter, double area)
{
  cout << fixed << showpoint << setprecision(2);
  
  cout << "The perimeter of the rectangle is: " << perimeter << endl;

  cout << "The area of the rectangle is: " << area << endl;
}