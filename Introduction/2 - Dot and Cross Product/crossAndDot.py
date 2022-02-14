import math

class Point:
    def __init__(self,x,y):
        self.x = x
        self.y = y

    def __add__(self, p):
       return Point(self.x + p.x, self.y + p.y)

    def __sub__(self, p):
       return Point(self.x - p.x, self.y - p.y)

    def __mul__(self, p):
       cross = self.x * p.y - self.y * p.x
       return cross

    def __mod__(self, p):
       dot = self.x * p.x + self.y * p.y
       return dot


def arePerpendicular(a,b):
    return a%b == 0

def areCollinear(a, b):
    return a * b == 0

x1,y1,x2,y2 = map(int, input().split())

p1 = Point(x1,y1)
p2 = Point(x2,y2)

dot = p1%p2
cross = p1*p2

print(f'Dot Product of p1 and p2 is : {dot}')
print(f'Cross Product of p1 and p2 is : {cross}')

if arePerpendicular(p1,p2):
    print('They are perpendicular')
if areCollinear(p1,p2):
    print('They are collinear')



