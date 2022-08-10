class person:
    def __init__(self,Name,age,id):
        self.Name = Name
        self.A = age
        self.Nic = id

    def show(self):
        print("\n Name is",self.Name)
        print(" Age is",self.A)
        print(" id is",self.Nic)
    
    def change(self):
        mm = input(" Enter -")
        self.Name = mm

class Student(person):
    def __init__(self, Name, age, id , index ,course):
        super().__init__(Name, age, id)


Name = input(" Name : ")
g = input(" Age : ")
ic = input(" NIC : ")

a =person(Name,g,ic)
a.show()

a.change()

a.show()
