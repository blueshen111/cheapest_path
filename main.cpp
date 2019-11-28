#include <iostream>
#include <vector>

using namespace std;


int Pathfinder(vector<int> myVector){
//int i;
//int adder =
//int total = myVector.at(myVector.size() - 1);
//int sum = myVector.at(myVector.size() - 1);
//int sum = 0;
//int intital;
int total;
int i = myVector.size() - 1;
    //int current = myVector.at(myVector.size() - 1);
    if (myVector.at(i - 1) > myVector.at(i - 2)){


           total = myVector.at(i - 2) + myVector.at(i);
        }
        //else
    if (myVector.at(i - 1) < myVector.at(i - 2)){

          total = myVector.at(i - 1) + myVector.at(i);
        }

//cout << total;

    for (int i = myVector.size() - 2; i >= 0; i--){


    if (myVector.at(i - 1) > myVector.at(i - 2)){


        total = total + myVector.at(i - 2);
        }
        //else
        if (myVector.at(i - 1) < myVector.at(i - 2)){

        total = total + myVector.at(i - 1);
        }
return total;
    }
    //return total;
cout << total << endl;

}

//
//    int getSize(vector<int> stuff){
//
//        for (int i = 0; i = stuff.size(); i++){
//
//             cout << i << endl;
//        }
//    }



int main()
{
    //int myArray[] = {0, 12, 4, 6, 8, 2, 6, 14};
//    vector<int> yourVector{ 0, 2, 4, 10, 6, 8 };
//
//    vector<int> myVector(7);
//    myVector = {2, 0, 8, 4, 2, 6};
//
    vector<int> theVector;

    theVector.push_back(0);
    theVector.push_back(2);
    theVector.push_back(8);
    theVector.push_back(12);
    theVector.push_back(6);

//
//    for (int i = 0; i <= theVector.size(); i++){
//
//        cout << theVector.at(i);
//
//    }

    //cout << getSize(theVector);


 cout << Pathfinder(theVector);

    //cout << getSize(theVector);

    return 0;
}


