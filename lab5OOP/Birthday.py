from datetime import date, time, datetime, timedelta

from Event import Event 
class Birthday(Event):
    def __init__(self, edate: date, etime: time, elength:time, name: str, age: int, place: str) -> None:
        super().__init__(edate, etime, elength)  
        self.__name = name
        self.__age = age
        self.__place = place
    
    def get_name(self):
            return self.__name;
    
    def set_name(self, value):
        self.__name = value
        
    def get_age(self):
            return self.__age;
    
    def set_age(self, value):
        self.__age = value

    def get_place(self):
            return self.__place;
    
    def set_place(self, value):
        self.__place = value
    
    def __repr__(self) -> str:
        return "Name: {0} Age: {1} Place: {2}\n".format(self.__name, self.__age, self.__place) + super().__repr__()

