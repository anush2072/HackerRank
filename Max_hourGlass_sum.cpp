//
//Given a Array of MxN size, Calculate the hourglass sum for every hourglass in A, then print the maximum hourglass sum
//
#include <vector>
#include <iostream>

using namespace std;

void print_2DArray(vector< vector<int> > arr, int rows, int cols){
   for(int arr_i = 0;arr_i < rows;arr_i++){
       for(int arr_j = 0;arr_j < cols;arr_j++){
          cout << arr[arr_i][arr_j] << " ";
       }
       cout << endl ;
    }
     
}

vector<int> cal_hg_sum(vector< vector<int> > arr, int rows, int cols){
    vector<int> sums;
    for(int arr_i = 0;arr_i < rows-2;arr_i++){
       for(int arr_j = 0;arr_j < cols-2;arr_j++){
           int row1_sum = arr[arr_i][arr_j] + arr[arr_i][arr_j+1] + arr[arr_i][arr_j+2];
           int row2_sum = arr[arr_i+1][arr_j+1];
           int row3_sum = arr[arr_i+2][arr_j] + arr[arr_i+2][arr_j+1] + arr[arr_i+2][arr_j+2];
           int sum = row1_sum + row2_sum + row3_sum;
           
           //add total to the list of hour glass sums
           sums.push_back(sum);
       }
    }
    return sums;
}

int main(){
    int n;
    //cin >> n;
    n = 6; //Here n = 6 => 6x6 array
    vector< vector<int> > arr(n,vector<int>(n));
    for(int arr_i = 0;arr_i < n;arr_i++){
       for(int arr_j = 0;arr_j < n;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    //print_2DArray(arr, n, n);

    //Calculate sum of every hour glass
    vector<int> hour_glass_sums = cal_hg_sum(arr, n, n);
    
      
    //calculate max sum
    int max = hour_glass_sums[0];
    for (int i=0; i<hour_glass_sums.size();i++){
        //print all sums
        //cout << hour_glass_sums[i] << " ";
        
        //calculate Max
        if(hour_glass_sums[i] > max){
            max = hour_glass_sums[i];
        }
    }
        
    cout << max;    
    return 0;
}
