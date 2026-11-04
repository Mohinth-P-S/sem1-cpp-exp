import pipeline;
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0)
    {
        cout << "Invalid number of elements." << endl;
        return 0;
    }

    vector<int> data(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    vector<int> result = processData(data);

    cout << "\nOriginal Data: ";
    for (int value : data)
    {
        cout << value << " ";
    }

    cout << "\nProcessed Data: ";
    for (int value : result)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
