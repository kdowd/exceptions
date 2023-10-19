#include<iostream>
#include<queue>
#include<stack>
using namespace std;



struct Customer {
    string firstName;
    string lastName;;
    string email;
    pair<string, string> address;
    string password;
    bool confirmed = false;

    Customer() {
        cout << "customer created" << endl;
    }

};


int main()
{
    std::stack<int> stackOfNumbers;

    stackOfNumbers.push(1);
    stackOfNumbers.push(2);
    stackOfNumbers.push(3);



    while (!stackOfNumbers.empty()) {
        std::cout << stackOfNumbers.top() << "\n" ;
        stackOfNumbers.pop();
    }

    cout << string(50, '+') << endl;
    cout << string(50, '+') << endl;


    std::queue<int> queueOfNumber;


    queueOfNumber.push(1);
    queueOfNumber.push(2);
    queueOfNumber.push(3);


    while (!queueOfNumber.empty()) {
        std::cout << queueOfNumber.front() << "\n";
        queueOfNumber.pop();
    }


    return 0;
}
