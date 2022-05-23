from datetime import date, time, datetime, timedelta
from Event import Event
class Meeting(Event):
    def __init__(self, edate: date, etime: time, elength: time, person: str, place: str) -> None:
        super().__init__(edate, etime, elength)
        self.__person = person
        self.__place = place

    def get_person(self):
            return self.__person;
    
    def set_person(self, value):
        self.__person = value

    def get_place(self):
            return self.__place;
    
    def set_place(self, value):
        self.__place = value
    
    def __repr__(self) -> str:
        return "Person to meet: {0} Place: {1}\n".format(self.__person, self.__place)+super().__repr__()
    
    