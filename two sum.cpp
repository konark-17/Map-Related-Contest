#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int nums[n];
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    unordered_map<int, int> numMap; //  value[as key],index

    for (int i = 0; i < n; i++) {
        int otherNo = target - nums[i];
        
        if (numMap.find(otherNo) != numMap.end()) {
            cout <<"["<< numMap[otherNo] << "," << i <<"]"<< endl;
            break;
        }

        numMap[nums[i]] = i;
    }

    return 0;
}
