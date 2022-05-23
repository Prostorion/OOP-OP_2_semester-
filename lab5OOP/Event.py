from datetime import date, time, datetime, timedelta

class Event:
    def __init__(self, edate: date, etime: time, elength: time) -> None:
        self.__date = edate
        self.__time = etime
        self.__length = elength
        
    def time_to_event(self):
        dt = self.generate_date_time()
        today = datetime.today()
        days_to_event = dt - today
        return days_to_event
    
    def endtime(self):
        return self.generate_date_time()+timedelta(hours=self.__length.hour, minutes=self.__length.minute)
    
    def generate_date_time(self):
        return datetime(self.__date.year, self.__date.month, self.__date.day, self.__time.hour, self.__time.minute )
        
    def from_this_to_another(self,other):
        return other.generate_date_time() - self.endtime()
    
    def get_date(self):
        return self.__date;
    
    def set_date(self, value):
        self.__date = value
    
    def get_time(self):
        return self.__time;
    
    def set_time(self, value):
        self.__time = value
        
    def get_length(self):
            return self.__length;
    
    def set_length(self, value):
        self.__length = value
    
    def __repr__(self) -> str:
        return "Date: {0} Time: {1} Length: {2}\n".format(self.__date, self.__time, self.__length)
