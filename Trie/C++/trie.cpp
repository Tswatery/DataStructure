/*
 * @Author: Tswatery
 * @Date: 2023-11-08 22:29:36
 */
#include "trie.h"
#include <iostream>
#include <cstring>
#include <algorithm>

bool TrieNode::checkNull(char c){
    return children[c - 'a'] == nullptr;
}

void TrieNode::setNode(char c){
    children[c - 'a'] = new TrieNode();
}

TrieNode* TrieNode::getNode(char c){
    return children[c - 'a'];
}

void TrieNode::setEnd(){
    is_end = true;
}

bool TrieNode::getEnd(){
    return is_end;
}

void TrieNode::insert(TrieNode* root, std::string& s) {
    TrieNode* mv = root;
    for(int i = 0; i < (int)s.size(); ++ i) {
        if(! mv->children[s[i] - 'a']) {
            mv->children[s[i] - 'a'] = new TrieNode();
        }
        mv = mv->children[s[i] - 'a'];
    }
    mv->is_end = true;
}

bool TrieNode::find(TrieNode* root, std::string& s) {
    TrieNode* mv = root;
    for(int i = 0; i < (int)s.size(); ++ i) {
        if(! mv->children[s[i] - 'a']) return false; // 不存在的话就返回false
        mv = mv->children[s[i] - 'a'];
    }
    return mv->is_end;
}