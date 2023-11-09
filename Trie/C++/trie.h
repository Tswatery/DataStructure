/*
 * @Author: Tswatery
 * @Date: 2023-11-08 21:56:30
 */

#include <cstring>
#include <algorithm>
#include <iostream>

#ifndef TRIE_H
#define TRIE_H

class TrieNode {
private:
    TrieNode* children[26]; // 子节点 最多26个
    bool is_end;
public:

    void insert(TrieNode* root, std::string& s);

    bool find(TrieNode* root, std::string& s);

    bool checkNull(char c); // 当前字母为c的子节点是否存在

    void setNode(char c);

    TrieNode* getNode(char c);

    void setEnd();

    bool getEnd();

}; // Trie树的节点

#endif // !TRIE_H
