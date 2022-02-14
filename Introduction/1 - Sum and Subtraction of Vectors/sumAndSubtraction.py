from unittest import result


class Point:

    def __init__(self,x,y):
        self.x = x
        self.y = y
    
    def sum(self,a):
       return Point(self.x + a.x, self.y + a.y)
       

    def sub(self,a):
        return Point(self.x - a.x, self.y - a.y)



x1,y1,x2,y2 = map(int, input().split())

p1 = Point(x1,y1)
p2 = Point(x2,y2)

result1 = p1.sum(p2)
result2 = p1.sub(p2)

print(f'The result vector of the sum of p1 and p2 is: x =  {result1.x}, y = {result1.y}')
print(f'The result vector of the difference of p1 and p2 is: x = {result2.x}, y = {result2.y}')