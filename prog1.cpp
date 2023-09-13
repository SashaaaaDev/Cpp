#include <iostream>
#include <ctime>
using namespace std;

/*int main() {
    cout<<"Hello World\n";
    int b;
    b=2*5;
    int A[10];
    for (int i=0; i<10; i++) {
        A[i]=b;
        b++;
        cout<<"A["<<i<<"] = "<<A[i]<<"\n";
    }
    return 0;
}*/



/*
Program will generate random number from range that user sets
    5-top face of range(4)
    0-bottom face of range
*/
/*int main() {
    srand(time(0));
    for (int i = 1 ; i <= 100; i++) {
        int randNum = (rand() % 5) +0;
        cout<<randNum<<" ";
        if ((i%10==0) ) {
            cout<<'\n';
        }
    }
}*/


/* The game that generate a number and the user has to
guess that number. Program will help you writting some information 
about a number that you write,like how near your number to number that
you must guess.
*/
int main() {
    cout<<"Welcome!\nWrite a number for win this game!\n";
    
    int tries=0;
    int numss;

    srand(time(NULL));
    int num = (rand() % 101) + 0;
    cout<<"From 0 till 100\n";
    do
    {
        
        cin>>numss;
        tries++;
        if (numss>num) {
            cout<<"Your number is HIGHER than my."<<endl;
        }
        else if (numss<num) {
            cout<<"Your number is LOWER than my."<<endl;
        }
        else {
            cout<<"CONGRATULATIONS!\n";
            cout<<"You use "<<tries<<" tries!";
        }
    } while (numss!=num);
    system("pause");
}