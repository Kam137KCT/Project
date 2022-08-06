import sys
print(sys.executable)
print(sys.version)

class Employee:

    # A Single Emplyee Class
    def __init__(self, first, last):
        self.first = first
        self.last = last

    @property
    def email(self):
        return ("{}{}@gmail.com".format(self.first, self.last))
    
    @property
    def fullname(self):
        return ("{} {}".format(self.first, self.last))

emp1 = Employee("John", "Smith")
print(emp1.first)
print(emp1.email)
print(emp1.fullname)
