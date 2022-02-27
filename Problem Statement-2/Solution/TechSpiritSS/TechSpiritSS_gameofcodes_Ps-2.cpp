#include <iostream>
using namespace std;

int main()
{
    int n, size;
    cin >> n;
    string s;
    cin >> s;
    size = n;

    int arr[26] = {0};

    for (int i = 0; i < n; ++i)
        arr[s[i] - 'a']++;

    while (n % 2 == 0)
    {
        for (int i = 0; i < 26; ++i)
        {
            if (arr[i] == 1)
                continue;
            arr[i] /= 2;
        }
        n /= 2;
    }

    int count = 0;
    string x = "";

    for (int i = 0; i < 26; ++i)
    {
        if (arr[i] == 0)
            continue;
        count += arr[i];
        while (arr[i]--)
            x += (char)(i + 'a');
    }

    cout << size / (count * 2) << endl
         << x << endl;
}
