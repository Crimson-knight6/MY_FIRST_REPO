#include<iostream>
#include<cmath>
using namespace std;
void correct(void){cout<<"    *"<<endl;
                   cout<<"*  * "<<endl;
                   cout<<" *  "<<endl;}

void str(){    cout<<"         |         |         "<<endl;
               cout<<"    1    |    2    |   3    "<<endl;
               cout<<"-----------------------------  "<<endl;
               cout<<"         |         |         "<<endl;
               cout<<"    4    |    5    |   6      "<<endl;
               cout<<"-----------------------------  " <<endl;
               cout<<"         |         |         "<<endl;
               cout<<"    7    |    8    |   9     "<<endl;
               cout<<"                             "<<endl;}

//boolean printing 
bool strr(int i,int j){ if(i%4 == 0){return true;}
                        if(j==10||j==20){return true;}
                        else{return false;}}
                       



bool correctr(int i , int j){if(i==1&&j==7){return true;}
                              if(i==2&&j==6){return true;}
                              if(i==2&&j==3){return true;}
                              if(i==3&&j==4){return true;}
                              else{return false;}
                              } 
/*"*   *"  ****           *
     *     ****          * *
  "*   *"  ****          * *
"          ****           *   */

bool crossr(int i,int j){if(i==1&&j==3){return true;}
                         if(i==1&&j==7){return true;}
                         if(i==2&&j==5){return true;}
                         if(i==3&&j==3){return true;}
                         if(i==3&&j==7){return true;}
                         else{return false;}
                          }                              
                

  



bool condt1(int i,int j,int arr[4][4]){
                 int i1 = i/4+1;
                 int j1 = j/10+1;
              if(arr[i1][j1] == 1){return correctr(i-4*(i1-1) , j-10*(j1-1));}
              if(arr[i1][j1] == 0){return crossr(i-4*(i1-1) , j-10*(j1-1));}
              else{return false;}
          
  }
  void display(int arr[4][4]){
  for(int i = 1; i<=11;i++){
  for(int j =1; j<=30; j++){
    if(strr(i,j)||condt1(i,j,arr)){cout<<"*";}
     else{cout<<" ";}
  }
  cout<<endl;
}}


int check(int arr[4][4]){
  for(int i = 1; i<=3; i++){
   if((arr[i][1]==arr[i][2])&&(arr[i][2]==arr[i][3])&& (arr[i][1]==0)){
    return 0;
   }   
  else if((arr[i][1]==arr[i][2])&&(arr[i][2]==arr[i][3])&& (arr[i][1]==1)){
    return 1;
   }                                              
}

 for(int i = 1; i<=3; i++){
   if((arr[1][i]==arr[2][i])&&(arr[2][i]==arr[3][i])&& (arr[1][i]==0)){
    return 0;
   }   
  else if((arr[1][i]==arr[2][i])&&(arr[2][i]==arr[3][i])&& (arr[1][i]==1)){
    
    return 1;
   }                                              
}

if((arr[1][1]==arr[2][2])&&(arr[2][2]==arr[3][3])&& (arr[1][1]==0)){
  
  return 0;
    }


else if((arr[1][1]==arr[2][2])&&(arr[2][2]==arr[3][3])&& (arr[1][1]==1)){
  
  return 1;
    }

if((arr[1][3]==arr[2][2])&&(arr[2][2]==arr[3][1])&& (arr[2][2]==0)){
  
  return 0;
    }


else if((arr[1][3]==arr[2][2])&&(arr[2][2]==arr[3][1])&& (arr[2][2]==1)){
  
  return 1;
}

return -1;
    }


int main() { 
cout<<"Entering the game ....\n";
cout<<"checking the environment ...\n\n";
cout<<"welcome players to the game! \n Here are some rules :-\n";
cout<<"first_player will have CORRECT symbol\n";
cout<<"second_player will have CROSS symbol \n ";
cout<<"for entering any place  enter corresponding number from the figure below\n\n";
str();
int arr[4][4] ={{0,0,0,0},
                {0,2,2,2},
                {0,2,2,2},
                {0,2,2,2}};

cout<<endl<<endl;

 
int x;
int t = 9;
while(t--){
  if(t%2 ==0){cout<<"FIRST_PERSON'S MOVE-- ";}
  else{cout<<"SECOND_PERSON'S MOVE-- ";}
   cin>>x;
   int i;
   if (x<=3&&x>=1){i = 1;}
   if (x<=6&&x>=4){i = 2;}
   if (x<=9&&x>=7){i = 3;}
   int j;
   if(x==1||(x==4)||(x==7)){j = 1;}
   if(x==2||(x==5||x==8)){j = 2;}
   if(x==3||(x==6||x==9)){j = 3;}
   arr[i][j] =((t+1)%2);
   display(arr);

   if(check(arr)==1){cout<<" FIRST_PLAYER WON!"; break;}
   else if(check(arr)==0){cout<<" SECOND_PLAYER WON!";break;}

   
    cout<<endl<<endl;


}



}
