#include <iostream>
using namespace std;

int main(){
int n;
cout << "How many digits - ";
cin >> n;

double x, sum=0, max, min;
for (int i = 1; i <= n; i++) {
    cin >> x;
    sum = sum + x;
    if (i == 1){
        max = x;
        min = x;
    }
    if (x > max) max = x;
    if (x < min) min = x;
}
cout << "Summa: " << sum << endl;
cout << "Srednee: " << sum / n << endl;
cout << "Maximum: " << max << endl;
cout << "Minimum: " << min << endl;
return 0;
}