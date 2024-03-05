template <typename K, typename V>
class BST
{
private:
    struct treeNode
    {
        K key;
        V value;
        treeNode *left;
        treeNode *right;

        Node(const K &newKey, const V &newValue)
            : key(newKey), value(newValue), left(NULL), right(NULL)
        {
        }
    };
public:
V find()
};