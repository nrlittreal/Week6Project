#include <iostream>

#include <iomanip>

using namespace std;

double getScore();
bool IsLower(double, double);
bool IsHigher(double, double);
double CalcAve(double, double, double);

int main()
{
  double total, score, lowScore, highScore;

  total = 0, lowScore = 11, highScore = -1;

  for (int counter = 0; counter < 5; counter++)
    {
      score = getScore();

      while (score < 0 || score > 10)
      {
        cout << "Invalid Score" << endl;

        score = getScore();
      }
      total += score;

      if (IsLower(score, lowScore))
        {
          lowScore = score;
        }
      else if (IsHigher(score, highScore))
        {
          highScore = score;
        }
        
    }
  cout << fixed << showpoint << setprecision(1) << "The Average score is " << CalcAve(total, lowScore, highScore) << endl;

  return 0;
}
// This function asks for a score and then retuns it to the main function to be stored.
double getScore()
{
  double num;
  
  cout << "Please enter a score between 0 and 10: " << endl;

  cin >> num;

  return num;
}
// These two functions check to see if the score just inputted is the lowest or highest score. If it is highest or lowest, then the respective function will return true, and false if it is not.
bool IsLower(double score, double lowScore)
{
  if (score < lowScore)
  {
    return true;
  }
  else
  {
    return false;
  }
}
bool IsHigher(double score, double highScore)
{
  if (score > highScore)
  {
    return true;
  }
  else
  {
    return false;
  }
}
// This function calculates the average score after the lowest and highest scores have been removed.
double CalcAve(double total, double lowScore, double highScore)
{
  return (total - lowScore - highScore) / 3;
}