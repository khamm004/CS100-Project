# Savior

  > Authors: [Bijal Mugatwala](https://github.com/bijalm), [Kathyrn Hammar](https://github.com/khamm004), [Estela Ramirez Ramirez](https://github.com/estela-ramirez)

## Project Description
 > Savior is a text based Role-Playing Game. Users will be able to choose a character, make decisions and work through riddles in order to progress through the whole story. Different decisions will lead to different story outcomes. 

### Inputs/Outputs
 > It will be implemented in C++. We are interested in creating Savior because it allows room for creativity and the end product will be unique and fun to share with others. The input would be different choices that the user would want to make. The output would be text responses and indicators to represent the varied paths of the story and the possible actions of the character based on the decision of the user.
 >
 > Example: 
 >  * *Conversation*
 >     * Output: “Hello traveller, welcome, here is a book to assist you on your journey.”
 >     * Input: a. “What is inside this book?” b. “Thanks, see ya.”
 >  * *Action*
 >    * Output: “A fairy has stolen your book!”
 >    * Input: a. Chase fairy b. Let it get away c. Shoot it with arrow
 >
 > Each option resulting in a different resulting story line.


### Strategy Design Pattern
> An important feature of our game is that characters have different attacks and each attack has a different algorithm associated with it. We anticipate that we will continuously have to override the attack method per character class in order to give each character a distinct attack. Additionally, in the case that an attack algorithm changes, the client (character class) will also have to change. In order to resolve this issue, we will implement the Strategy Pattern. The Strategy Pattern will allow us to separate the different algorithms for the attacks from the client (character classes). This will allow the corresponding algorithm to be called during runtime when the user selects an attack. 

### Abstract Factory Pattern
> Another important feature of our game is the ability to mix and match characters with different weapons and armor. In trying to implement this feature, we face the challenge of reserving certain weapons and armor for a particular type of character. In order to resolve this issue, we will implement the Abstract Factory Pattern. This pattern will be used to help create new character instances with the user’s choice of weapon and armor. For example, if our game included some sort of soldier, then it would be very easy to be able to create a new instance of a character with properties like strength and carries armour. Additionally, it prevents characters from being matched with weapons and armor that do not make sense. 

 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `Backlog` column.
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
 
