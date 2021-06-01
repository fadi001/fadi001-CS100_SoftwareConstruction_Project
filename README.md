# Task Scheduler - rdudh001_fzaki001_alee447

 Authors: [Rishab Dudhia](https://github.com/rishabdudhia)
          , [Fadi Zaki](https://github.com/fadi001)
	  , [Adwin Lee](https://github.com/aklee98)

## Project Description

Being college students during this pandemic we have realized the importance of time management and organization. Therefore, we want to create a task manager that will keep students organized while managing these tough times.

Languages and tools:
* C++ - Programming language that will be the main language used for this project. C++ is an extension of the C programming language
* [git](https://git-scm.com)
* [Github](https://github.com)
* [Valgrind](https://valgrind.org)

The input of our project will be the client typing in certain tasks with the options to add a priority level and a due date. The output of the project will be a list of tasks that need to be completed, ranked by priority. The client can also make subtasks that will also have priority levels and due dates.

Prototype - 
	One of the design patterns we chose to use in this project is Prototype. We chose this pattern because it will allow us to clone a list without having to fill out a whole new list or know what any of the sublists or tasks are. For example, this will allow the user to copy their tasks from week A to week B without having to re-enter the items on the list or worry about forgetting to add any sublist or task they may have not completed from the week before. The problem we anticipate encountering while implementing this project is that some of the data that the feature will try to copy from week A to week B will be private and access to all the sublists (subclasses) being copied. We will need to use a prototype to clone the objects because it will allow us to use the same class and create a new object which can still access the old private section of the object we want to clone and copy all the data into itself.

Composite -
	One pattern that we will use that will be instrumental to the project will be Composite. With the composite design pattern, we can create lists that can be made up of tasks or sublists that can contain tasks or even more sublists. One problem we anticipate encountering while implementing the project is the difficulty of creating objects that are derived from a base class so that we can treat tasks, sublists, and lists all as the same in a common interface. The composite design pattern solves this problem as it allows us to treat all objects similarly, and they will still act appropriately due to their inheritance from a base class. 
 

## Class Diagram
The first OMT diagram we tried to produce contained two distinct diagrams connected by an inheritance. One diagram being the OMT diagram for the composite design pattern which contained the classes ListElements, SubLists, and Tasks. The second diagram was the diagram for the prototype design pattern which contained the classes PrototypeInterface, ConcretePrototype_SubLists, and ConcretePrototype_Tasks. The PrototypeInterface class inherited from the SubLists class to try to get the SubLists functions available to the prototype objects so that they could be treated as ListElements after being created. However, we realized that only the SubLists members would be available to the prototypes and not the Tasks’ members. After doing some research, we came upon the solution to add a “clone()” function into our existing classes within just the composite design pattern and having no classes for the prototype design pattern since the copying of objects will be done within their own classes. During our first sprint meeting, we realized that we were missing functions necessary for our project. The final OMT shows the changes we decided to make to our project from our original OMT. Below we have attached, first, our original OMT diagram and, then, our final OMT diagram.

Original OMT:
![](originalOMT.PNG)

Final OMT:<br/>
![](actualOMT.png)

 
 ## Screenshots
 ![](ss1.PNG)
 <br/>
 ![](ss2.PNG)
 <br/>
 ![](ss3.PNG)
 <br/>
 ![](ss4.PNG)
 <br/>
 ![](ss5.PNG)
 <br/>
 ![](ss6.PNG)
 <br/>
 ![](ss7.PNG)
 <br/>
 ![](ss8.PNG)
 <br/>
 ![](ss9.PNG)
 <br/>
 ![](ss10.PNG)
 <br/>
 ![](ss11.PNG)
 <br/>
 ![](ss12.PNG)
 <br/>
 ![](ss13.PNG)
 <br/>
 ![](ss14.PNG)
 <br/>
 ![](ss15.PNG)
 <br/>
 ![](ss16.PNG)
 <br/>
 ![](ss17.PNG)
 <br/>
 ![](ss18.PNG)
 <br/>
 ![](ss19.PNG)
 <br/>
 ![](ss20.PNG)
 <br/>
 ![](ss21.PNG)
 <br/>
 ![](ss22.PNG)
 <br/>
 ![](ss23.PNG)
 <br/>
 ![](ss24.PNG)
 <br/>
 ![](ss25.PNG)
 ## Installation/Usage
 After running "cmake3 ." and "make all" run "./schedule" to execute the program.
 ## Testing
 [![CI](https://github.com/rishabdudhia/final-project-rdudh001_fzaki001_alee447/actions/workflows/main.yml/badge.svg)](https://github.com/rishabdudhia/final-project-rdudh001_fzaki001_alee447/actions/workflows/main.yml)
 
 We used continuous integration to test our project. Above we have the CI badge.
 
