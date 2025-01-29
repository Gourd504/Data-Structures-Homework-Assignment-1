#include <iostream>
#include "AUList.h"
#include "LLSList.h"
using namespace std;


int main(int argc, char** argv) {
    AUList getMinTest;
    for (int i = 0; i < 10; i++) {
        getMinTest.PutItem(55 - i);
    }
    getMinTest.PrintList();
    getMinTest.getMin();
    /*
    AUList TestList;
    cout<<"Newly Created List: ";
    TestList.PrintList();
    for (int i=0; i<10; i++)
        TestList.PutItem(100-i*10);
    cout<<"List after 'PutItem' (100 down to 10) calls: ";
    TestList.PrintList();
    cout<<"Length after 'PutItem' calls: " <<TestList.GetLength() <<endl;
    cout<<"IsFull after 'PutItem' calls? " <<TestList.IsFull() <<endl;
    TestList.DeleteItem(50);
    cout<<"List after 'DeleteItem' (50) call: ";
    TestList.PrintList();
    cout<<"IsFull after 'DeleteItem' call? " <<TestList.IsFull() <<endl;
    cout<<"Index of value 80: "<<TestList.GetItem(80)<<endl;
    cout<<"Index of value 25: "<<TestList.GetItem(25)<<endl;
    TestList.MakeEmpty();
    cout<<"List after 'MakeEmpty': ";
    TestList.PrintList();
    return 0;
    */
    /*
    LLSList TestList;

    cout<<"Newly Created List: ";
    TestList.PrintList();
    for (int i=0; i<10; i++)
        TestList.PutItem(100-i*10);
    cout<<"List after 'PutItem' calls: ";
    TestList.PrintList();
    cout<<"Length after 'PutItem' calls: " <<TestList.GetLength() <<endl;
    cout<<"IsFull after 'PutItem' calls? " <<TestList.IsFull() <<endl;
    TestList.DeleteItem(50);
    cout<<"List after 'DeleteItem' call: ";
    TestList.PrintList();
    cout<<"IsFull after 'DeleteItem' call? " <<TestList.IsFull() <<endl;
    cout<<"Index of value 80: "<<TestList.GetItem(80)<<endl;
    cout<<"Index of value 25: "<<TestList.GetItem(25)<<endl;
    TestList.MakeEmpty();
    cout<<"List after 'MakeEmpty': ";
    TestList.PrintList();
    return 0;
    */
}