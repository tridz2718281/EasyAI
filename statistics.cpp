#include <vector>
#include <iostream>

using namespace std;

double mean(vector<double> D){
    double sum = 0;
    for (int i = 0; i < D.size(); i++)
        sum += D[i];
    return sum / D.size();
}

int main(){
    cout << mean({1, 2, 3, 4, 5}) << "\n";
    return 0;
}