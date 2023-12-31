'''
Author: Tswatery
Date: 2023-11-08 23:05:14
'''
class TrieNode:
    def __init__(self):
        self.children = [ None for i in range(26)] # 26个儿子
        self.is_end = False
        self.exists = 0
    def insert(self, root, s: str) -> None:
        mv = root
        for c in s:
            idx = ord(c) - ord('a')
            if mv.children[idx] == None:
                mv.children[idx] = TrieNode()
            mv = mv.children[idx]
        mv.is_end = True
        mv.exists = 1
    def find(self, root, s: str) -> int:
        mv = root
        for c in s:
            idx = ord(c) - ord('a')
            if mv.children[idx] == None:
                return -1
            mv = mv.children[idx]
        if mv.exists == 1:
            mv.exists += 1
            return 1
        return mv.exists