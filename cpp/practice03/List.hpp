#pragma once

// Declaration file

namespace ajg
{

    template <class T>
    class List
    {
    private:
        struct ListNode
        {
            T data_;
            ListNode *next_;
            ListNode(const T &data) : data_(data), next_(NULL) {}
        };
        ListNode *&_index(unsigned index, ListNode *&head);

    public:
        List();
        ~List();
        void insertAtFront(const T &);
        T &indexRecursive(unsigned index);
        T &indexIterative(unsigned index);
        void print(std::ostream &out);
        void remove(ListNode *head);

    private:
        ListNode *head_;
        // ownership is important, the ListNode does not need to handle any memory here; the List does.
    };
}

#include "List.ipp"