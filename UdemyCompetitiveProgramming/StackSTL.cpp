#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> books;
    stack<int> st;
    books.push("C++");
    books.push("Java");
    books.push("Python");
    books.push("OS");
    books.push("R");

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);

    while (!books.empty())
    {
        cout << books.top() << endl;
        books.pop();
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
}