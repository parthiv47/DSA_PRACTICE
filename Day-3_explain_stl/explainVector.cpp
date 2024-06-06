#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    //   vector<int> v(5,100);
    vector<int> v3;
    vector<int> v1(5, 20);
    vector<int> v2(v1); // we can copy like this
    v3.push_back(5);
    v3.push_back(54);
    v3.push_back(53);
    v3.push_back(53);
    v3.push_back(54);
    v3.push_back(55);
    // v3.push_back(5440);
    cout << v[0] << " " << v[1] << " " << v1[3] << " " << v3[4] << endl;
    // iterator in vector
    vector<int>::iterator it = v3.begin();
    // it++;
    cout << *(it) << endl;
    vector<int>::iterator it1 = v3.end();
    it1--;
    cout << *(it1) << endl;
    cout << v3.back() << " " << endl;

    for (auto it = v3.begin(); it != v3.end(); it++) // auto is used for automatically assign vector iterator
    {
        cout << *(it) << " ";
    }
    cout << endl;
    // another way is for each loop
    for (auto it : v3)
    {
        cout << it << " ";
    }
    cout << endl;
    // delete element
    v3.erase(v3.begin() + 2); // erase take argument as a address of element..
    for (auto it : v3)
    {
        cout << it << " ";
    }

    // insset element at any index..
    cout << "insert element at any index.." << endl;
    vector<int> v4(2, 100);
    v4.insert(v4.begin(), 300);
    // for size of vectore
    cout << v4.size() << endl;
    // delele element at the end of vector
    v4.pop_back();
    // swap the vector
    v4.swap(v3);
    // erases the entire vector
    v4.clear();
    // if vector is empty then it will print 1 otherwise print 0
    cout << v4.empty() << endl;
    //  for(auto it :v4)
    // {

    //     cout<< it <<" ";
    // }

    return 0;
}