#include <iostream>

using namespace std;


int i,j,c;
int a[10][20];
int main(){

  for(i=0;i<=10;i++){
    c=0;
    for(j=0;j<=20;j++){

      //c++;

      a[i][j]=c;

    }

  }

  for(i=0;i<=10;i++){

    //cout<<"+";

    for(j=0;j<=20;j++){

      cout<<a[i][j]<<" ";

    }

    cout<<endl;

  }

  cout<<endl;

  bool t;

  int x,y,move;

  t=1;

  x=0;

  y=0;

  a[x][y]=1;

  for(i=0;i<=10;i++){

    //cout<<"+";

    for(j=0;j<=20;j++){

      cout<<a[i][j]<<" ";

    }

    cout<<endl;

  }

  cout<<endl;



  while(t){

    cin>>move;

    if (move>0){

      if (move==4){//left

        if (y>0){

          a[x][y]=0;

          y--;

          a[x][y]=1;

        }

      }else if(move==6){//right

         if (y<20){

           a[x][y]=0;

           y++;

           a[x][y]=1;

         }

      }else if (move==8){//up

        if (x>0){

          a[x][y]=0;

          x--;

          a[x][y]=1;

        }



      }else if (move==2){//down

        if (x<10){

          a[x][y]=0;

          x++;

          a[x][y]=1;

        }



      }else{//stay



      }



      for(i=0;i<=10;i++){

        //cout<<"+";

        for(j=0;j<=20;j++){

          if (a[i][j]==0){

            cout<<".";

          }else{

            cout<<"+";

          }

          //cout<<a[i][j]<<" ";

        }

        cout<<endl;

      }

      cout<<endl;

    }else{

      t=0;

    }





  }//endwhile





  return 0;

}
