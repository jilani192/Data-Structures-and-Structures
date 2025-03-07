#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> asteroidCollision(vector<int> &asteroids)
{
    stack<int> stack;
    for (int it : asteroids)
    {
        int flag = 1;
        while (!stack.empty() && (stack.top() > 0 && it < 0))
        {
            if (abs(stack.top()) < abs(it))
            {
                stack.pop();
                continue;
            }
            else if (abs(stack.top()) == abs(it))
                stack.pop();
            flag = 0;
            break;
        }
        if (flag)
            stack.push(it);
    }
    vector<int> ans(stack.size());
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        ans[i] = stack.top();
        stack.pop();
    }
    return ans;
}
int main()
{
    vector<int> nums{5, 10, -5};
    vector<int> result = asteroidCollision(nums);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << "  ";
    }

    return 0;
}
