

// Conditionals and Loops lecture 4 codes...

#include<iostream>
using namespace std;

int main() {

    // Question number 1 .........// To check maggie banegi ya fir kurkure....

    // int balance ;
    // cout << "Enter balance : " ;
    // cin >> balance ;
    // if (balance >= 10){
    //     cout << "maggie ban sakti hai" << endl ;
    // }
    // else{
    //     cout << "Kurkure se kam chalana padega" ;
    // }


    // Question Number 2 ...  to check rectangle , triangle or pentagon.......
    
    // int side ;
    // cout << "Enter the value of side : " ;
    // cin >> side ;
    // if (side == 3){
    //     cout << "Triangle" ;
    // }
    // else if (side == 4){
    //     cout << "Rectangle" ;
    // }
    // else if (side == 5){
    //     cout << "Pentagon" ;
    // }
    // else{
    //     cout << "Don't know" ;
    // }

        // Question Number 3 ... To check positive or negative.......

        // int num ;
        // cout << "Enter Number : " ;
        // cin >> num ;
        // if (num > 0){
        //     cout << "The number is positive." << endl ;
        // }
        // else if (num < 0){
        //     cout << "The number is negative." << endl ;
        // }
        // else {
        //     cout << "The number is zero." << endl ;
        // }


        // Question Number 4 ... To check even or odd.......

        // int num ;
        // cout << "Enter number : " ;
        // cin >> num ;
        // if (num % 2 == 0){
        //     cout << "This is even number." << endl ;
        // }
        // else{
        //     cout << "This is odd number." << endl ;
        // }


          // Question Number 5......To print 1 to 10...........

        //   for (int i=1 ; i<=10 ; i=i+1){
        //     cout << i << endl ; 
        //   }


        // Question number 6 .......Nested loop example....

        for (int i=0 ; i<3 ; i=i+1){
            cout << endl << "Outer loop" << i << endl << endl ;

             for (int j=0 ; j<3 ; j=j+1){
            cout <<"Ineer loop" << j << endl ;   
        }

        }

    return 0 ;
}
