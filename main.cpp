#include <iostream>

#include <string>

using namespace std;

void getRegInfo(string&, int&, int&);
bool IsLower(int, int&);
void showLowest(string, int);

int main()
{
  string name, lowestname;
  int num, counter, lowest = 100000000;
  bool low;

  for (counter = 0; counter < 5; counter ++)
    {
      getRegInfo(name, num, counter);
      
      low = IsLower(num, lowest);

      if (low == true)
      {
        lowestname = name;
      }
      
    }
  showLowest(lowestname, lowest);

  return 0;
}

// This function gets the name of the region and the number of accidents that occured there and checks that the value is positive. It then returns the name and value back to the main function.
void getRegInfo(string& name, int& num, int& counter)
{
  int num1;
  
  cout << "Please enter the region of the city and the number of accidents that occured there: " << endl;

  cin >> name >> num1;

  if(num1 > 0)
  {
    num = num1;
  }
  else
  {
    cerr << "Please enter a positive value." << endl;

    counter--;
  }
  
}
// This function checks to see if the number of accidents is less than the current lowest number of accidents. If it is, it returns a true value to the main function, and false if it is not.
bool IsLower(int num, int& lowest)
{
  if (num < lowest)
  {
    lowest = num;
    return true;
  }
  else
    return false;
}
//This function takes in the name of the region with the lowest number of accidents and the number of accidents that occured there. It then displays the information to the user.
void showLowest(string lowestname, int lowest)
{
  cout << "The region with the lowest number of accidents is " << lowestname << " with " << lowest << " accident(s)." << endl;
}