#include "exam.h"
#include <vector>

using namespace cs225;

int main() 
{
  PNG sample1;
  sample1.readFromFile("/workspaces/CS225/aglearning/cpp/imgPractice/data/alma.png");

  PNG result = rotate180(sample1);
  result.writeToFile("result.png");
  auto a = convertToVector(result);
  auto s = a.size();
  PNG result1 = rotate180(result.width(),result.height(),a);
  result1.writeToFile("result1.png");

  return 0;
}