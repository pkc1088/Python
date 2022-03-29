class Person :
    def greeting(self) :
        print("hello person")


class Student(Person) :
    def greeting(self) :
        print("hello student")

    def study(self) :
        print("studying")


class PersonList(Person) :
    def __init__(self) -> None:     #doesnt seem lambda to be necessary
        self.plist = []
        print("completely initialized")

    def appendPerson(self, p1) :
        self.plist.append(p1)
        print("completely appended")


c1 = Student()
c1.greeting()
c1.study()

c2 = Person()
c2.greeting()
#calling "c2.study()" is impossible

pl = PersonList()
pl.appendPerson(c2)
pl.greeting()

