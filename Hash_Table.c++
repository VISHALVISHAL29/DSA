#include <iostream>
#include <vector>
using namespace std;

class MyHashSet
{

    vector<int, int> hashset;

public:
    MyHashSet()
    {
    }

    void add(int key)
    {
        int count = 0;
        for (auto a : hashset)
        {
            if (a.second == key)
            {
                count++;
                return;
            }
        }
        if (count == 1)
        {
            return;
        }
        else
        {
        }
    }

    void remove(int key)
    {
    }

    bool contains(int key)
    {
        int count = 0;
        for (auto a : hashset)
        {
            if (a.second == key)
            {
                count++;
                return;
            }
        }
        if (count == 1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    MyHashSet *obj = new MyHashSet();
    // obj->add(5);
    // obj->remove(2);
    bool param_3 = obj->contains(1);

    cout<< param_3;
    return 0;
}