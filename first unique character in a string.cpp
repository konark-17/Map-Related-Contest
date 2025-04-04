#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        if(s.size()==1){
            return 0;
        }
        unordered_map<char,int> result;
        for(int i=0;i<s.size();i++){
            result[s[i]]++;
        }

        for(int i=0;i<s.size();i++){
           if(result[s[i]]==1){
            return i;
           }
        }
        return -1;
    }
};

int main(){
     string sentence;
    
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    Solution sol;

    cout<<"Index: "<<sol.firstUniqChar(sentence);
    return 0;
}
