#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool moveMin(vector<int>& in, vector<int>& out) {
    int a = in.size();
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - i - 1; j++)
        {
            if (in[j] > in[j + 1])
            {
                swap(in[j], in[j + 1]);

            }
        }
    }
    return true;
}

void testMoveMin(vector<int>& in, int N)
{
    vector<int>vec_sort;
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        vec_sort.push_back(rand() % 100 + 1);  //entering elements in a vector
    }
    // sort(vec_sort.begin(), vec_sort.end());    //sorting using in-built function sort 
    // vec_sort.push_back(rand() % 100 + 1);
    //cout << "Elements in this vector  will be: " << endl;
    for (int k = 0; k < vec_sort.size(); k++)
    {
        in.push_back(vec_sort[k]);
    }
}

int main() {
    vector<int>v1;
    vector<int>v2;
    vector<int>test1;
    vector<int>test2;
    //int No_of_elements; //number of elements
    //cout << "Enter number of elements in the vector: " << endl;
    //cin >> No_of_elements;
    testMoveMin(v1, 20);
    //v1.push_back(11);
    for (int i = 0; i < v1.size(); i++)
    {
        v2.push_back(v1[i]);
    }
    sort(v1.begin(), v1.end());
    moveMin(v2, test1);
    v1.push_back(11);
    test1.push_back(11);

    sort(v1.begin(), v1.end());
    moveMin(test1, test2);
    cout << "Sorting vector using sort() method: " << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";

    }
    cout << endl;
    cout << "Sorting vector using moveMin() method: " << endl;

    for (int i = 0; i < test2.size(); i++)
    {
        cout << test2.at(i) << " ";
        getchar();
    }
    cout << endl;

}
