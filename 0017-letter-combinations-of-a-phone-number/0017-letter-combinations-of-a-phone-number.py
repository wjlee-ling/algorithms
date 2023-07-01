class Solution:
    ans = []
    def letterCombinations(self, digits: str) -> List[str]:
        num2str = {
            "2": ["a", "b", "c"], 
            "3": ["d", "e", "f"],
            "4": ["g", "h", "i"],
            "5": ["j", "k", "l"],
            "6": ["m", "n", "o"],
            "7": ["p", "q", "r", "s"],
            "8": ["t", "u", "v"],
            "9": ["w", "x", "y", "z"],
        }
        def step(idx):
            if idx == len(digits):
                return ;
            
            if idx == 0:
                self.ans = num2str[digits[idx]]
                
            else:
                new_ls = []
                for alpha in num2str[digits[idx]]:
                    for s in self.ans:
                        new_ls.append(s+alpha)
                self.ans = new_ls
            
            return step(idx+1)
        
        step(0)
        return self.ans