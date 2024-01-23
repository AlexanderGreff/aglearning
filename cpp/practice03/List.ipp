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
List<T>::~List()
{
    remove(head_);
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

template <class T>
void List<T>::remove(ListNode* head)
{
    if (head->next_ != nullptr)
    {
        remove(head->next_);
    }
    std::cout << "deleting " << head->data_ << "\n";
    delete head;
    
}


template <class T>
T& List<T>::indexIterative(unsigned index)
{
    ListNode* tmp = head_;
    for(int i = 0; i < index; i++)
    {
        tmp = tmp->next_;
    }
    return tmp->data_;
}
template <class T>
void List<T>::print(std::ostream& out)
{
    ListNode* tmp = head_;
    for(int i = 0; tmp!=nullptr; i++)
    {
        out << tmp->data_ << " ";
        tmp = tmp->next_;
    }
    out << "\n";
}


}
