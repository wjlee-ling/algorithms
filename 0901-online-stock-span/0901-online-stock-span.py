class StockSpanner:
    from collections import namedtuple
    
    def __init__(self):
        self.stack = []
        self.format = namedtuple("ele", ["price", "days"])
        
    def next(self, price: int) -> int:
        ans = 1;
        
        while self.stack and self.stack[-1].price <= price:
            ans += self.stack.pop().days
        self.stack.append(self.format(price=price, days=ans))
        return ans;
        
            

# Your StockSpanner object will be instantiated and called as such:
# obj = StockSpanner()
# param_1 = obj.next(price)