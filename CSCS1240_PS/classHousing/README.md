# Class Housing Information

This script was the final project of the semester. At this point, we were lastly introduced to Classes, Objects, and Inheritance. For this project, I decided to create a program that worked as a directory, similar to the Yellow Pages, where I modeled different addresses, each describing the type of housing and the characteristics of each home. 

The classes are defined in a hierarchy, with the base class "housing" representing a general housing unit and its characteristics, and the other classes representing specific types of housing that inherit from the "housing" class and add additional characteristics. The script then creates instances of these classes and assigns values to their attributes. Finally, the script prints out the addresses and characteristics of each instance.

The classes defined in the script include:

* "housing": a general housing unit with the following attributes: address, size, occupancy, number of residents, whether the unit has a living room, number of bedrooms, number of bathrooms, and whether the unit has a kitchen.
* "house": a type of housing that inherits from the "housing" class and adds the following additional attributes: whether the unit has a master bedroom, a dining room, a basement, an attic, and a garage.
* "apartment": a type of housing that inherits from the "housing" class and adds the following additional attribute: number of parking spots.
* "studioApt": an apartment with a size of 500 square feet, no bedrooms, and one bathroom.
* "oneRoomApt": an apartment with a size of 700 square feet, one bedroom, one bathroom, and a kitchen.
* "twoRoomApt": an apartment with a size of 1000 square feet, two bedrooms, two bathrooms, and a kitchen.
* "apartmentUnit": a building containing multiple apartments, with the following attributes: address, unit name, number of apartments, number of stories, and instances of various types of apartments.
* "singlefamilyHome": a type of house with a size of 2500 square feet, one bedroom, two bathrooms, a living room, a kitchen, a master bedroom, a dining room, a basement, an attic, and a garage.
* "deluxeHome": a type of house with a size of 3000 square feet, one bedroom, two bathrooms, a living room, a kitchen, a master bedroom, a dining room, a basement, an attic, and a garage.
