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
    t = trie.find(trie, s)
    print(t)
    if t == 1:
        print("OK")
    elif t == 2:
        print("REPEAT")
    else:
        print("WRONG")