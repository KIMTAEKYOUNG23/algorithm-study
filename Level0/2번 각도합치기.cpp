#include <iostream>

using namespace std;

int main(void) {
    int angle1;
    int angle2;
    cin >> angle1 >> angle2;
    
    int sum_angle = (angle1 + angle2)-360*((angle1 + angle2)/360);
    cout << sum_angle << endl;
    return 0;
}//각도 합쳐서 동경에서의 각도 구하는 문제
