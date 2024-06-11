#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Steps to be followed for printing these patterns
// 1. For the outer loop, count the no. of lines (No. of rows)
// 2. for the inner loop, focus on the columns and connect them somehow to rows
// 3. Print the required symbols/numbers inside the inner FOR loop
// 4. Observe symmetry (Optional)

void pattern1(){

    /*

    ****
    ****
    ****
    ****

    */

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern2(){

    /*

    *
    **
    ***
    ****
    *****

    */

    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern3(){

    /*

    1
    12
    123
    1234
    12345

    */

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}

void pattern4(){

    /*

    1
    22
    333
    4444
    55555

    */

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}

void pattern5(){

    /*

    *****
    ****
    ***
    **
    *

    */

    for(int i=1;i<=5;i++){
        for(int j=0;j<5-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern6(){

    /*

    12345
    1234
    123
    12
    1

    */

    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern7(){

    /*

        *
       ***
      *****
     *******    
    *********

    */

   // We will have three different FOR loops(Excluding the outer FOR loop), for printing [space,star,space]

    for(int i=0;i<5;i++){
        // space
        for(int j=0;j<5-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0; j<2*i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<5-i-1;j++){
            cout<<" ";
        }
        cout<< endl;
    }
}

void pattern8(){

    /*

    *********
     *******
      *****  
       ***
        *

    */

   // We will have three different FOR loops(Excluding the outer FOR loop), for printing [space,star,space]

    for(int i=0;i<5;i++){
        // space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star = Formula (2n - (2i+1)) = Here n is equal to 5
        for(int j=0; j<10-(2*i+1);j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<< endl;
    }
}

void pattern9(){

    /*
        *
       ***
      *****
     *******    
    *********
    *********
     *******
      *****  
       ***
        *

    */

   pattern7();
   pattern8();
}

void pattern10(){

    /*

    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *

    */

   // Observe symmetry for this pattern

    for(int i=1;i<=9;i++){ // formula is i<=2*n-1 ; here n = 5;
        int stars = i;
        if(i>5) stars = 10-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<< endl;
    }
}

int main(){
    pattern10();
    return 0;
}
