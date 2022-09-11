import sys
print(sys.version)
print(sys.executable)

class Employee:
	# Object-Oriented Programming
   def __init__(self, first, last):
      self.first = first
      self.last = last

   def name(self):
      return f"{self.first} {self.last}"

   def email(self):
      return f"{self.first}@gmail.com"
   
Obj = Employee("Badal", "Thapa")
print(Obj.name())
print(Obj.email())