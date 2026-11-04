#include <iostream>
#include <vector>
#include <ranges>
#include <concepts>

using namespace std;

template <typename T>
concept Numeric = std::integral<T> || std::floating_point<T>;

template <Numeric T>
std::vector<T> processData(const std::vector<T>& data)
{
    std::vector<T> result;
    auto pipeline = data
        | std::views::filter([](T value) {
            return value > 0;
        })
        | std::views::transform([](T value) {
            return value * 2;
        });
    for (T value : pipeline)
    {
        result.push_back(value);
    }
    return result;
}

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
