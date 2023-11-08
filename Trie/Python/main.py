'''
Author: Tswatery
Date: 2023-11-09 00:02:24
'''
import trie

trie = trie.TrieNode()

m = eval(input())
for i in range(m):
    s = input()
    trie.insert(trie, s)

m = eval(input())
for i in range(m):
    s = input()
    if trie.find(trie, s):
        print("yes")
    else:
        print("no")