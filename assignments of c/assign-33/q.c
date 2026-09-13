// void f2(int c[][3],int,int);
// void f1(int d[][3],int,int);
// #include<stdio.h>




// int main(){
    
//     int a[3][3]; //first matrix
//     for(int i=0; i<=2;i++){
        
//         for(int j=0; j<=2;j++){
//             scanf("%d",&a[i][j]);
//         }
//         printf("\n");
//     }

//     f2(a,3,3);


// }


    

// //q1

// void f1(int d[][3],int y, int z){    
//     printf("second matrix");
//     int b[3][3];
//     for(int k=0;k<=2;k++){
//         printf("\n");
//         for(int l=0;l<=2;l++){
//             scanf("%d",&b[k][l]);
//             d[k][l]=d[k][l]+b[k][l];
//         }
//     }   
// }     
// //q2
// void f2(int c[][3], int y ,int z){    
//     printf("second matrix");
//     int b[3][3];
//     int d[3][3];
//     for(int k=0;k<=2;k++){
//         for(int l=0;l<=2;l++){
//             scanf("%d",&b[k][l]);
            
//         }
//         printf("\n");
//     }   
    
//     for(int m=0; m<=2; m++){

//         for(int n=0; n<=2; n++){
//             d[m][n]=0;

//             for(int o=0; o<=2; o++){

//                 d[m][n]= d[m][n]+ (c[m][o])*(b[o][n]);
//             }
//         }
//     }

    
//     for(int y=0;y<=2;y++){
//         for(int z=0;z<=2;z++){
//             printf("%d ",d[y][z]);
//         }
//         printf("\n");
//     }
// }     



//q4
// int score_board_after_eachmatch(int brr[][3], int, int);
// int display_score_board(int crr[][3],int ,int);

// #include<stdio.h>

// int main(){
//     int arr[4][3]={0,0,0,0,0,0,0,0,0,0,0,0,};
//     score_board_after_eachmatch(arr,4,3);

// }
// int score_board_after_eachmatch(int brr[][3],int a,int b){
//     int x=1,y;
//     printf("enter match no.");
//     scanf("%d",&y);
//     printf("score till match-%d\n",y);

//     for(int i=0; i<4; i++){
//         printf("player-%d",x);
//         for (int j=0; j<3; j++){
//             scanf("%d",&brr[i][j]);


//         }
//         printf("\n");
//         x++;
//     }
//     display_score_board(brr,4,3);
    
// }

// int display_score_board(int crr[][3],int p,int q){
//     for(int i=0; i<4; i++){
//         for(int j=0; j<3; j++){
//             printf("%d ",crr[i][j]);
//         }
//         printf("\n");
//     }


// }

// int score_for_player(int d[][3], int p, int q){
//     int no.;
//     printf("enter player no.");
//     scanf("%d",&no.);
//     for(int i=0; i<3; i++ ){
//         printf("%d ",drr[no.][i]);
//     }
// }
void sort_array()

h
void show_rank(int score_board[][4]){

}
int winner_of_tourn(int score_board[][4]){
    int player,score,winner,s1;
    player=0;
    score=score_of_player(player,score_board); //ek player ka score nikala using fucn call
    for(++player; player<=3; player++){          // har player ka score nikalke compare krre
        s1=score_of_player(player,score_board);
        if(s1>score){
            winner=player;
            score=s1;
        }
    }
}
int score_of_player(int player, int score_board[][4]){ //hume scoreboard and player lena padega
    int sum=0;
    for(int j=0; j<3 ;j++){
    
        sum= sum +score_board(player,j);

    }
    return sum; //ek specific player ka score return karega

}
void display_score_board(int score_board[][4]){
    printf("\n scoreboard\n");
    for(int i=0;i<=2; i++ ){
        for(int j=1 ;j<=2 ;j++){
            printf("%d",score_board[i][j]); 
        }
    }


}
void score_board_after_eachmatch(int score_board[][4] ,int y, int p1,int p2, int result){
    score_board[p1][p2]= result;
    score_board[p2][p1]= 2-result;
     
}
int f4(){
    int score_board[4][4]={0};


}