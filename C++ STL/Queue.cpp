// fifo=first in frist out
//tc=o(1)
void explainQueue()
{
    Queue<int> q;
    q.push(1);    //{1}
    q.push(2);    //{1,2}
    q.emplace(4); //(1,2,4)

    q.back() += 5

                cout
                << q.back(); // prints 9
    q.pop();                 //{2,9}
    cout << q.front();       // prints 2

    // size swap empty same as stack
}