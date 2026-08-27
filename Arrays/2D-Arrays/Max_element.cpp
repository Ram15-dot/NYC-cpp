#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    long long findMaximum(vector<vector<long long>> &matrix)
    {
        long long maximum = matrix[0][0];
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (maximum < matrix[i][j])
                {
                    maximum = matrix[i][j];
                }
            }
        }

        return maximum;
    }
};

int main()
{
    Solution obj;
    int N, M;
    cin >> N >> M;
    // vector<vector<long long>> arr[N, vector<long long>(M)];
    vector<vector<long long>> arr(N, vector<long long>(M));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {

            cin >> arr[i][j];
        }
    }
    cout << obj.findMaximum(arr);
    return 0;
}