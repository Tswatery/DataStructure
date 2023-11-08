#include <iostream>
#include <algorithm>
#include <cstring>
#include "trie.h"

using namespace std;

int main(){
    TrieNode* root = new TrieNode();
    int n;
    cin >> n;
    for(int i = 0; i < n; ++ i){
        string s; cin >> s;
        root->insert(root, s);
    }
    cin >> n;
    while(n -- ){
        string s; cin >> s;
        if(root->find(root, s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}