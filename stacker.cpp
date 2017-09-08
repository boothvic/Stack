/*
 * Author: Vic Lin   File Name: stacter.cpp
 * Created Time: 2017年09月08日 星期五 16时40分45秒
 *
 * Cpp source code - replace this with a description
 * of the code and write the code below this text
 *
 */


#include <iostream>
#include <cctype> //for toupper(),isalpha()
#include "stack.h"
using namespace std;

int main(int argc, char * argv[])
{
    Stack st;
    char ch;
    Item po;

    cout << "Enter A to add a purchase order:\n"
        << "P to process a Po, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q'){
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch)){
            cout << '\a';
            continue;
        }

        switch (ch){
            case 'a':
            case 'A':
                cout << "Enter po number to add: ";
                cin >> po;
                if (st.isfull())
                    cout << "------stack already full------\n";
                else
                    st.push(po);
                break;

            case 'p':
            case 'P':
                if (st.isempty())
                    cout << "------stack already empty-----\n";
                else{
                    st.pop(po);
                    cout << "PO #" << po << " popped\n";
                }
                break;
        }

        cout << "\nEnter A to add a purchase order:\n"
            << "P to process a Po, or Q to quit.\n";
    }
    return 0;
}
