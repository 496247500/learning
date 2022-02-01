// ruler.cc -- using recursion to subdivide a ruler
#include <iostream>
const int len = 66;
const int Dive = 6;
void subdivide(char ar[], int low, int high, int level);
int main(){
  char ruler[len];
  int i;
  for(i = 1; i < len -2; i++){
    ruler[i] = ' ';
  }
  ruler[len -1] = '\0';
  int Max = len - 2;
  int min = 0;
  ruler[min] = ruler[Max] = '|';
  std::cout << ruler << std::endl;
  for(i = 1; i <= Dive; i++){
    subdivide(ruler, min, Max, i);
    std::cout << ruler << std::endl;
    for(int j = 1; j < len -2; j++){
      ruler[j] = ' ';
    }
  }
  return 0;
}
void subdivide(char ar[], int low, int high, int level){
  if(level == 0)
    return;
  int mid = (high + low) / 2;
  ar[mid] = '|';
  subdivide(ar, low, mid, level -1);
  subdivide(ar, mid, high, level -1);
}
