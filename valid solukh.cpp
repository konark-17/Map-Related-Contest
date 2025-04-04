#include <iostream>
#include <vector>

using namespace std;

bool checkSudokh(char arr[9][9]){
    //check rows
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            char count[9]={0};
            if(arr[i][j]!='.'){
                count[arr[i][j]-'1']++;
                if(count[arr[i][j]-'1']>1  || arr[i][j]=='0' || arr[i][j]>'9'){
                    return false;
                }
            }    
        }
    }
    //check columns
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            char count[9]={0};
            if(arr[j][i]!='.'){
                count[arr[j][i]-'1']++;
                if(count[arr[j][i]-'1']>1 || arr[j][i]=='0' || arr[j][i]>'9'){
                    return false;
                }
            }
        }
    }
    //check boxes
    for(int i=0;i<9;i+=3){
        for(int j=0;j<9;j+=3){
            char count[9]={0};
            for(int k=i;k<i+3;k++){
                for(int l=j;l<j+3;l++){
                    if(arr[k][l]!='.'){
                        count[arr[k][l]-'1']++;
                        if(count[arr[k][l]-'1']>1 ){
                            return false;
                        }
                    }
                }
            }
        }
    }
    return true;
}

int main(){
    char arr[9][9];
    cout<<"Enter the sudoku board (use '.' for empty cells): "<<endl;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>arr[i][j];
        }
    }
    if(checkSudokh(arr)){
        cout<<"The sudoku board is valid."<<endl;
    }else{
        cout<<"The sudoku board is invalid."<<endl;
    }
    return 0;
}
