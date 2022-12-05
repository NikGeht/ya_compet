#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

template<typename T>
void print(T const & xs)
{
    for(auto const & x : xs) {
        std::cout << x << ' ';
    }
    std::cout << "\n";
}

int main()
{
    int n;
    cin >> n;

    vector<int> array;
    int flag = 1;
    int count = 0;
    int i = 0;
    int temp;
    double a = pow(n, 1./3.);
        if(pow(3, a) == n)
        {
            count = pow(n, 1/3.0);
                flag = 0;
                cout << "YES" << endl;
                cout << i + 1 << endl;
                cout << count << endl;
        }
        else
        {
            i = pow(n, 1/3.0);
	          count = pow(3, i);
	          array.push_back(i);
            temp = n - count;
            int temp_num;
            for(int j = i-1; j >= 0; j--)
            {
                temp_num = pow(3, j);
		if((int)temp_num == temp)
                {
                    array.push_back(j);
                    cout << "YES" << endl;
                    cout << array.size() << endl;
                    print(array);
                    return 0;

                }
            }
            while(flag){
            for(int g = i - 1; g = 0; g--)
            {
                if(temp == 3^g)
                {
                    flag = 0;
                    array.push_back(g);
                    cout << "YES" << endl;
                    cout << array.size() << endl;
                    print(array);
                    return 0;

                }
                else
                {
                    if((temp - 3^g) > 0)
                    {
                        temp-= 3^g;
                        array.push_back(g);
                    }
                }
            }
            flag = 0;
            cout << "NO" << endl;

            }
        }

}
