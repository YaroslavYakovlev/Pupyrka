#include <iostream>
#include <vector>

const int  n = 5;

void fillingArray(bool (&arr)[n][n]){
  for (int i=0; i<n; i++){
    for (int j=0; j<n; j++) {
      arr[i][j] = true;
    }
  }
}
void printArr(bool (&arr)[n][n]){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      std::cout << std::boolalpha << arr[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

int main(){
  std::cout << "Pupyrka" << std::endl;

  bool arrPup[n][n];

  fillingArray(arrPup);
  printArr(arrPup);
  
  return 0;
}
