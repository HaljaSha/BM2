# arithm2
Arithm2
Это задача, которая позволяет вводить расписание автобусов,
а также вызывать расписание для конкретной остановки или конкретного автобуса.
Код разбит на несколько файлов

Пример:
ввод:
6
NEW_BUS 15 3 Park Shkola Lenina
NEW_BUS 11 3 Suhovo Shkola Lenina
ALL_BUSES
STOPS_FOR_BUS 12
STOPS_FOR_BUS 11
BUSES_FOR_STOP Lenina

Вывод:
Bus 11: Suhovo Shkola Lenina
Bus 15: Park Shkola Lenina

No bus

Stop Suhovo: no interchange
Stop Shkola: 15
Stop Lenina: 15
