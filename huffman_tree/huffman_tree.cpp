#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

struct hnode{
    string code;
    double weight;
    size_t number;
    hnode* left;
    hnode* right;
};

int main()
{
    vector<double> P = {0.0721, 0.0240, 0.0394, 0.0372, 0.1224, 0.0272, 0.0178,
                      0.0449, 0.0779, 0.0013, 0.0054, 0.0426, 0.0282, 0.0638,
                      0.0681, 0.0290, 0.0023, 0.0638, 0.0728, 0.0908, 0.0235,
                      0.0094, 0.0130, 0.0077, 0.0126, 0.0026};
    // 存储Huffman树的最小优先级队列PQ, 优先级为树的权值, 实际存储的是树的根结点指针.
    auto cmp = [](hnode* a, hnode* b) { return a->weight > b->weight; };
    priority_queue<hnode*, vector<hnode*>, decltype(cmp)> PQ(cmp);
    // 一次性给出所有在编码中会出现的结点.
    vector<hnode> data (P.size() > 0 ? 2 * P.size() - 1 : 0);
    // index指示当前会使用data[index]处的结点, 注意其作用域不仅限于下面的for循环.
    size_t index;
    // data中初始设定n棵仅有根结点的树, 并放入优先级队列PQ中.
    for (index = 0; index < P.size(); ++index)
    {
        data[index] = {"", P[index], index, NULL, NULL};
        PQ.push(&data[index]);
    }
    // 循环处理以构建Huffman树.
    while (PQ.size() > 1)
    {
        data[index].number = index;
        // 将优先级队列中的最小元作为当前结点的左孩子并删去最小元.
        data[index].weight = PQ.top()->weight;
        data[index].left = PQ.top();
        PQ.pop();
        // 将优先级队列中的最小元作为当前结点的右孩子并删去最小元.
        data[index].weight += PQ.top()->weight;
        data[index].right = PQ.top();
        PQ.pop();
        // 将新的树放入优先级队列并且更新编号index.
        PQ.push(&data[index++]);
    }
    // 在屏幕上输出每个字母的Huffman编码.
    queue<hnode*> Q;
    if (!PQ.empty())
        Q.push(PQ.top());
        while (!Q.empty())
        {
            hnode* p = Q.front();
            if (p->left != NULL)
            {
                Q.push(p->left);
                p->left->code = p->code + "0";
            }
            if (p->right != NULL)
            {
                Q.push(p->right);
                p->right->code = p->code + "1";
            }
            Q.pop();
        }
    for (size_t i = 0; i < P.size(); ++i)
    cout << (char)('A' + i) << "->" << data[i].code << endl;
    return 0;
}
