 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# Task Scheduler - rdudh001_fzaki001_alee447

 Authors: \<[Rishab Dudhia](https://github.com/rishabdudhia)\>
          \<[Fadi Zaki](https://github.com/fadi001)\>
	  \<[Adwin Lee](https://github.com/aklee98)\>
 
 > You will be forming a group of **THREE** students and working on an interesting project. A list of proposed project ideas that have been successful in previous quarters is given in the project specifications link on iLearn. You can select an idea from the list, start thinking about the features you will implement, what design patterns can help you implement them, and why. If you want to propose your own original idea, you will have to contact an instructor to discuss the project and obtain written permission before you submit your project proposal. Your project needs to implement two design patterns.The project work should be divided almost equally among team members and each member is expected to work on at least one design pattern (more than one partner may work on a pattern) and some of its test cases. You can of course help each other, but it needs to be clear who will be responsible for which patterns and for which features.
 
 > ## Expectations
 > * Incorporate **at least two** distinct design patterns. You need to include at least *one* design pattern that we will teach this session:
 >   * Composite, Strategy, Abstract Factory, Visitor, or Decorator
 > * All design patterns need to be linked together (it can't be two distinct projects)
 > * Your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group.

## Project Description
 > Your project description should summarize the project you are proposing. Be sure to include
 > * Why is it important or interesting to you?

Being college students during this pandemic we have realized the importance of time management and organization. Therefore, we want to create a task manager that will keep students organized while managing these tough times.

Languages and tools:
    * c++
    * git
    * Github
    * Valgrind
The input of our project will be the client typing in certain tasks with the options to add a priority level and a due date. The output of the project will be a list of tasks that need to be completed, ranked by priority. The client can also make subtasks that will also have priority levels and due dates.

Prototype - 
	One of the design patterns we chose to use in this project is Prototype. We chose this pattern because it will allow us to clone a list without having to fill out a whole new list. For example, this will allow the user to copy their tasks from week A to week B without having to re-enter the items on the list. The problem we anticipate encountering while implementing this project is that some of the data that the feature will try to copy from week A to week B will be private. We will need to use prototype to clone the objects because it will allow us to use the same class and create a new object which can still access the old private section of the object we want to clone and copy all the data into itself.

Composite -
	One pattern that we will use that will be instrumental to the project will be Composite. With the composite design pattern, we can create lists that can be made up of tasks or sublists that can contain tasks or even more sublists. One problem we anticipate encountering while implementing the project is the difficulty of creating objects that are derived from a base class so that we can treat tasks, sublists, and lists all as the same in a common interface. The composite design pattern solves this problem as it allows us to treat all objects similarly, and they will still act appropriately due to their inheritance from a base class. 
 
Iterator - 
	This pattern will be very useful in updating the priorities of specific tasks as their due dates get closer. For example, if a task with priority 2 (low priority) was created a week ago and has a due date of tomorrow, the iterator will iterate through all the tasks looking at their due dates and see that this low priority task isn’t completed yet and the due date is near so it will raise the priority level. A problem we expect to encounter with the implementation of this project is the fact that we have to look through every element in every list to determine the output ranked by priority for the client. I think this design pattern will solve our problems of having to look through every list and sublist since the iterator’s sole purpose is to look at every element in whatever container it is iterating through. 

 > * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 >   * [toolname](link) - Short description
 > * What will be the input/output of your project?
 > * What are the two design patterns you will be using? For each design pattern you must explain in 4-5 sentences:
 >   * Why you picked this pattern and what feature you will implement with it
 >   * What problem you anticipate encountering when implementing your project that you will solve using the design pattern
 >   * Why the chosen design pattern will lead to a good solution to that problem
 > * This description should be in enough detail that the TA/instructor can determine the complexity of the project and if it is sufficient for the team members to complete in the time allotted. 

 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
