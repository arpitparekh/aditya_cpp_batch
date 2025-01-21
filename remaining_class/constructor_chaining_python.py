class A:
    def __init__(self):
      print("A")

class B(A):
    def __init__(self):
      super().__init__()
      print("B")

class C(B):
    def __init__(self):
      super().__init__()
      print("C")

class Demo:
  def hi(self):
    print("hi")

  def hi(self,name):
    print(name)

  def hi(self,name,age):
    print(name,age)

c = C()  # a # abc

d = Demo()
d.hi()
