#include<bits/stdc++.h>
using namespace std;

void rules(){
    cout<<"Player A : X \nPlayer B : O \nSelect the box and mark you turn\n\n";
}

void checkBoard(int board[][3]){
    
}

void showBoard(char board[][3]){
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

string winner(char ch){
    if(ch == 'X'){
        return "Player A";
    }else{
        return "Player B";
    }
}

int main(){
    rules();
    int turn = 1;

    while(turn){
        char board[3][3];
        int attempt = 1;
        int row, col;

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                board[i][j] = '-';
            }
        }

        cout<<"Reference board\n";
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cout<<i<<" "<<j<<"  ";
            }
            cout<<endl;
        }

        while(attempt <= 9){
            if(attempt & 1){
                cout<<"Player A select the box - Enter the row and column: \n";
                cin>>row>>col;

                if(board[row][col] == '-')
                    board[row][col] = 'X';
                else{
                    cout<<"Already Somone have marked select another box: \n";
                    cin>>row>>col;
                    board[row][col] = 'X';
                }

                showBoard(board);
            }else{
                cout<<"Player B select the box - Enter the row and column:\n";
                cin>>row>>col;

                if(board[row][col] == '-')
                    board[row][col] = 'O';
                else{
                    cout<<"Already Somone have marked select another box: \n";
                    cin>>row>>col;
                    board[row][col] = 'O';
                }

                showBoard(board);
            }
            attempt++;
        }

        cout<<"\nYour Match Board:\n\n";
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++){
                cout<<board[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<endl;

        if(board[0][0] != '-' && board[0][0] == board[0][1] && board[0][1] == board[0][2]){
            cout<<winner(board[0][0])<<" Won the match!!!"; return 0;
        }
        if(board[1][0] != '-' && board[1][0] == board[1][1] && board[1][1] == board[1][2]){
            cout<<winner(board[1][0])<<" Won the match!!!"; return 0;
        }
        if(board[2][0] != '-' && board[2][0] == board[2][1] && board[2][1] == board[2][2]){
            cout<<winner(board[2][0])<<" Won the match!!!"; return 0;
        }
        if(board[0][0] != '-' && board[0][0] == board[1][0] && board[1][0] == board[2][0]){
            cout<<winner(board[0][0])<<" Won the match!!!"; return 0;
        }
        if(board[0][1] != '-' && board[0][1] == board[1][1] && board[1][1] == board[2][1]){
            cout<<winner(board[0][1])<<" Won the match!!!"; return 0;
        }
        if(board[0][2] != '-' && board[0][2] == board[1][2] && board[1][2] == board[2][2]){
            cout<<winner(board[0][2])<<" Won the match!!!"; return 0;
        }
        if(board[0][0] != '-' && board[0][0] == board[1][1] && board[1][1] == board[2][2]){
            cout<<winner(board[0][0])<<" Won the match!!!"; return 0;
        }
        if(board[0][2] != '-' && board[0][2] == board[1][1] && board[1][1] == board[2][0]){
            cout<<winner(board[0][2])<<" Won the match!!!"; return 0;
        }

        cout<<"Opps!! It'a draw \nEnter 1 for re-match 0 to exit";
        cin>>turn;
    }

    return 0;
}
