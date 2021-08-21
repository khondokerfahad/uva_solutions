#ifdef ONLINE_JUDGE
#endif
#include<bits/stdc++.h>
#define ll long long
#define fio ios::sync_with_stdio(false);cin.tie(0);
using namespace std;

int  i , j , n;
char board[100][100];

bool safe(int x , int y){
    for(int i=0; i<x; i++){
            if(board[i][y] =='Q')
                return false;
    }
    //for right diagonal check
    i=x , j=y;
    while( i>=0 and j<n ){
        if(board[i][j] == 'Q')
            return false;
        i--;
        j++;
    }
    //for left diagonal check
    i=x , j=y;
    while( i>=0 and j>=0 ){
        if(board[i][j] == 'Q')
            return false;
        i--;
        j--;
    }
    return true;
}
//print N queesns in N*N board
void NQueens(int row){
    if( row == n ){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << board[i][j];
            }
            cout << endl;
        }
        cout << endl;
        return;
    }
    for(int col = 0; col < n; col++){
        if(safe(row , col)){
            board[row][col] = 'Q';
            NQueens(row+1);
            board[row][col] ='_'; //earsing Q for next pattern
        }
    }
}
//count how many patterns can be make to put N queens in n*n boards
int countNQueens(int row){
    if( row == n )
        return 1;
    int total = 0;
    for(int col=0 ;col<n; col++){
        if(safe(row , col)){
            board[row][col] = 'Q';
            total+=countNQueens(row+1);
            board[row][col] = '_';
        }
    }
    return total;
}
int main(){
	fio;
	#ifdef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	cin >> n;
	cout << countNQueens(0) << endl;
	NQueens(0);
}