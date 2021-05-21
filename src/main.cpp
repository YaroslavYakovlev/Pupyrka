#include <iostream>
#include <vector>

const int  n = 12;
int countPop = n * n;

void fillingArray(bool (&arr)[n][n]){
  for (int i=0; i < n; i++){
    for (int j=0; j < n; j++) {
      arr[i][j] = true;
    }
  }
}
void printArr(bool (&arr)[n][n]){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(arr[i][j] == true){
        std::cout << 'O' << " ";
      }else{
        std::cout << 'X' << " ";
      }
    }
    std::cout << std::endl;
  }
}

// bool checkPop(int x, int y, bool (&arr)[n][n]){
//   if(x >= n || y >= n || arr[x][y] == false){
//     std::cout << "Error enter" << std::endl;
//     return false;
//   }else{
//     arr[x][y] = false;
//     std::cout << "POP!!!" << std::endl;
//     return true;
//   }
// }

bool checkPop(int begin_x, int begin_y, int end_x, int end_y, bool (&arr)[n][n]){
  if(begin_x >= n || begin_y >= n || end_x >= n || end_y >= n){
    std::cout << "Error enter" << std::endl;
    return false;
  }else{
    for(int i = begin_x; i <= end_x; i++){
      for(int j = begin_y; j <= end_y; j++){
        arr[i][j] = false;
        std::cout << "POP!!!" << std::endl;
        countPop--;
      }
    }
    return true;
  }
}

int main(){
  std::cout << "Pupyrka" << std::endl;

  int begin_x, begin_y, end_x, end_y;
  bool arrPup[n][n];

  fillingArray(arrPup);
  printArr(arrPup);

  while (countPop > 0)
  {
    std::cout << "Enter the coordinates start" << std::endl;
    std::cin >> begin_x >> begin_y;
    std::cout << "Enter the coordinates of the end" << std::endl;
    std::cin >> end_x >> end_y;

    if(checkPop(begin_x, begin_y, end_x, end_y, arrPup)){
      countPop--; 
      printArr(arrPup);
    }
  }
  std::cout << "Good" << std::endl;
  
  
  return 0;
}

// Можно просто сделать функцию вывода, которая будет 
// проходить по массиву bool. При обходе она будет проверять: 
// если true, выводить O, а иначе выводить X (или наоборот)