#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    long long findMinimum(vector<vector<long long>> &matrix)
    {
        long long minimum = matrix[0][0];
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (minimum > matrix[i][j])
                {
                    minimum = matrix[i][j];
                }
            }
        }

        return minimum;
    }
};

int main()
{
    Solution obj;
    int N, M;
    cin >> N >> M;

    vector<vector<long long>> arr(N, vector<long long>(M));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {

            cin >> arr[i][j];
        }
    }
    cout << obj.findMinimum(arr);
    return 0;
}