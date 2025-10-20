# class circle:
#     pi = 3.1416

#     def __init__(self, radius):
#         self.radius = radius

#     def area(self):
#         area = circle.pi * self.radius * self.radius # area = self.pi * self.radius * self.radius
#         return area

#     def perimeter(self):
#         peremiter = 2 * circle.pi * self.radius # or  peremiter = 2 * self.pi * self.radius
#         return peremiter

# c1 = circle(5)
# print(c1.area())
# print(c1.perimeter())


class employee:

    def __init__(self, role, dept, salary):
        self.role = role
        self.dept = dept
        self.salary = salary
    
    def show_details(self):
        print("Role: ", self.role)
        print("Department: ", self.dept)
        print("Salary: ", self.salary)

class Engineer(employee):

    def __init__(self, name, age, role, dept, salary):
        self.name = name
        self.age = age
        super().__init__(role, dept, salary)
    
    def show_engineer(self):
        print("Name: ", self.name)
        print("Age: ", self.age)
        super().show_details()
    
    


eng1 = Engineer("Mirza", 24 ,"Engineer", "IT", "75,000")


print(eng1.role)
print(eng1.role)
eng1.show_engineer()

        




        
