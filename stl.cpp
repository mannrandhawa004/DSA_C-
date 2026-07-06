#include <iostream>
#include <vector>
#include <deque>
#include <set>
using namespace std;

// Function to print vector elements
// A vector is a dynamic array provided by the STL(Standard Template library),unlinke normal arrays,vector can shrink nad grow at runtime
void vectorSTL(vector<int> v)
{
    cout << "Vector Elements: ";
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }

    // using iterator
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

/* deque(double ended queue) is a dynamic data-strucurein c++ STL
--insertion from both side end and front
--same in deletion
*/

void dequeSTL(deque<int> d)
{
    cout << "Deque elements:";
    for (int i : d)
    {
        cout << i << " ";
    }
}

/* set in cpp is used to store unique elems ,automatically in sorted array
 */
void setSTL(set<int> s)
{
    cout << "set elements:";
    for (int i : s)
    {
        cout << i << " ";
    }
}

int main()
{
    vector<int> nums;
    // inserting element in vetor
    nums.push_back(5);
    nums.push_back(4);
    nums.push_back(11);
    nums.push_back(9);

    // acessing elment
    // cout<<nums[0];
    // cout<<nums.at(2); 11

    // pop the last element from the array
    // nums.pop_back();

    // size and capacity
    // cout <<"size->means how many elements in the vector: "<< nums.size() << endl;
    // cout<<"capcity->how much elements it can store: "<<nums.capacity()<<endl;

    // removing all the elments
    // nums.clear();

    // vectorSTL(nums);

    deque<int> dq;
    dq.push_back(3);
    dq.push_front(4);
    dq.push_front(1);

    dq.pop_back();
    // dq.insert(dq.begin() + 1, 2);
    // cout<<"isEmpty:"<<dq.empty();

    // dequeSTL(dq);

    set<int> s;
    s.insert(6);
    s.insert(4);
    s.insert(4);
    s.insert(2);
    s.insert(1);

    setSTL(s);

    return 0;
}
