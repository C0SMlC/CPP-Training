#include <vector>
using namespace std;

template <typename T>

class TreeNode
{
public:
    T data;
    vector<TreeNode *> Children;

    TreeNode(int data)
    {
        this->data = data;
    }
};