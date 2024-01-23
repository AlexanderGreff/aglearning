#pragma once
// Implementation file
namespace ajg
{
template <class T>
List<T>::List()
    : head_(nullptr)
{
}

template <class T>
void List<T>::insertAtFront(const T &t)
{
    ListNode* tmp = new ListNode(t);

    tmp->next_ = this->head_;

    this->head_ = tmp;
}

template <class T>
T& List<T>::indexRecursive(unsigned index)
{
    ListNode*& result = _index(index, head_);
    return result->data_;
}
template <class T>
typename List<T>::ListNode*& List<T>::_index(unsigned index, ListNode*& head)
{
    if (index == 0)
    {
        return head;
    }

    return _index(--index, head->next_);
    
}

}
