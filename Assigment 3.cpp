Flowcharts Assignment 3


Construct a flowchart for the given questions and do the dry run of the given values
Construct a flowchart to find a maximum between three numbers. (Use minimum number of comparisons)
1,2,3
1,3,2
3,2,1
2,3,1
2,1,3
3,1,2


Validate a given year.
(Hints. The year in the date must be greater than zero, the months must lie between 1 and 12, and the days must lie between 1 and 31, depending on the month numbers.)
03,94,2022
09,08,1999
30,02,1789
31,03,9192
15,10,1999
05,09,8976
45,3,2022
21,13,4
1,1,-1


Construct a flowchart to input electricity unit charges and calculate the total electricity bill according to the given condition:
For the first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
20670
250
98
50
563729
980


Construct a flowchart to calculate the electricity bill (Accept the number of units from the user) according to the following criteria:        		                                                   Unit	 					Price  
First 100 units                                               	no charge
Next 100 units                                              	Rs 5 per unit
After 200 units                                             	Rs 10 per unit
(For example if input unit is 350 then total bill amount is Rs2000)
200
300
250
380
70
180


Accept the age, gender (‘M’,   ‘F’), and the number of days and display the wages accordingly

If the age does not fall in any range then display the following message: “Enter appropriate age”
Age
Sex
Wage/day
>=18 and <30
M
700


F
750
>=30 and <=40
M
800                                     


F
850

                    
                  Input:
26,M,7
18,F,13
32,M,10
40,M,8
45,F,4


Accept the number of days from the user and calculate the charge for the library according to the following:
First five days:		Rs 2/day.
Next 5 days:		Rs 3/day.
Next 5  days: 		Rs 4/day
After 15 days:	 	Rs 5/day
      Input:
2 days
5 days
20 days
8 days 
16 days
60 days


You have denominations of rupee notes in the following form—1, 2, 5, 10, 20, 100, 200, 500, 2000. Take any amount from the user and print the minimum number of notes needed to add up to that number.
4
56300
10090
89
90787
1286

Construct a flowchart to categorize the shape of a quadrilateral as either a square, rhombus, rectangle, parallelogram, or irregular quadrilateral, having input the lengths of the four sides and one internal angle.
4,4,4,4,60(Internal angle)
5,5,5,5,90(Internal angle)
7,4,7,4,130(Internal angle)
11,6,11,6,90(Internal angle)
2,2,3,4,50(internal angle)
2,3,2,4,90(internal angle)

The grades in a certain class are determined by coursework and a written examination. Both components of the assessment carry a maximum of 50 points.
(i) A student must score a total of 45% or more in order to pass
(ii) A total grade of 44% is moderated to 45%
(iii) Each component must be passed with a minimum of 20 points
(iv) If a student scores 45% or more, but does not achieve the minimum grade in one component, he is given a technical fail of 44%, which is not moderated to 45%.
	Print whether the student has passed or failed and also the course total.
	Test cases:-		Output
25,25		50, Pass
22,45		67, Pass
45,33		88, Pass
50,25		75, Pass  
22,19		41, Fail
30,16		44, Technical fail
22,22		45, Moderated
19,16		35, Fail

The following rules are used to calculate the bonus for the employees of an organization.
(i) If the pay is more than $3,000, the bonus amount is fixed, and it is equal to $300.
(ii) If the pay is more than $1,600, but less than or equal to $3,000, the bonus will be 10% of the pay subject to a maximum of $240.
(iii) If the pay is less than or equal to $1,600, the bonus is 15% of pay, subject to a minimum of $100.
Test cases:-
3050
1800
500
-3500

A certain steel is graded according to the following conditions:
(i) Rockwell-hardness > 50
(ii) Carbon content > 0.7
(iii) Tensile strength > 5600 kg/cm2
The steel is graded as follows:
a. Grade 10, if all the conditions are satisfied
b. Grade 9, if conditions (i) and (ii) are satisfied
c. Grade 8, if conditions (ii) and (iii) are satisfied
d. Grade 7, if conditions (i) and (iii) are satisfied
e. Grade 0, otherwise
	Test cases:-
Rockwell-hardness=60
	 	Carbon content=1.8
	Tensile strength=5660kg/cm2

Rockwell-hardness=70
	 	Carbon content=2.0
		Tensile strength=4400kg/cm2
	
Rockwell-hardness=70
	 Carbon content=2
		Tensile strength=5668kg/cm2

Rockwell-hardness=60
	 Carbon content=2
		Tensile strength=5686kg/cm2
	
Rockwell-hardness=5
	Carbon content=2
		Tensile strength=440kg/cm2
	
Find whether a given year is a leap year.
(Hint. A year is said to be a leap year if it is either divisible by 4 but not by 100 or divisible by 400.)
1700
2024
2000
2022

In the above question take the first condition as divisibility of year by 100 and construct the flowchart. Do the dry run for the same inputs.

In the above question take the first condition as divisibility of year by 400 and construct the flowchart. Do the dry run for the same inputs.

Accept three integers representing the angles of a triangle in degrees to determine whether they form a valid set of angles of a triangle. If it is not a valid set, then generate a message and terminate the process. If it is a valid set, then the process determines whether it is equiangular (all three angles are the same). It also determines if the triangle is right-angled (has one angle with 90 degrees), obtuse-angled (one angle above 90), or acute-angled (all three angles are below 90 degrees). Finally, it shows the conclusion about the triangle.
60,60,60
20,30,40
60,70,90
90,90,60
30,80,70
0,0,180
-20,-10,210

Accept the lengths of the three sides of a triangle to validate whether they can be the sides of a triangle and then classify the triangle as equilateral (all three sides are equal), scalene (all three sides are different), or isosceles (exactly two sides are equal), and then to see whether it is a right-angled triangle (the sum of the squares of two sides is equal to the square of the third side.)
(Hint. Three numbers are valid as the sides of a triangle if each one is positive and the sum of every two numbers is greater than the third.)
2,4,5
4,9,10
33,45,90
34,34,90
1,1,10
5,5,5

Write a program to check if the given number is divisible by 5, 11, both or none.
If it is divisible by 5 then print 5
If it is divisible by 11 then print 11
If it is divisible by 5 and 11 then print “Both”
If it is not divisible by 5 and 11 then print “None”
Input:
55
40
33
57

Find the second max of 3 numbers. (Use minimum number of comparisons)
1,2,3
1,3,2
3,2,1
2,3,1
2,1,3
3,1,2


Find the second max of 4 numbers. (Use minimum number of comparisons)
1,2,3,4
1,2,4,3
1,3,2,4
1,3,4,2
1,4,2,3
1,4,3,2
2,1,3,4
2,1,4,3
2,3,1,4
2,3,4,1
2,4,1,3
2,4,3,1
3,1,2,4
3,1,4,2
3,2,1,4
3,2,4,1
3,4,1,2
3,4,2,1
4,1,2,3
4,1,3,2
4,2,1,3
4,2,3,1
4,3,1,2
4,3,2,1

Find the third max of 4 numbers. (Use minimum number of comparisons)
1,2,3,4
1,2,4,3
1,3,2,4
1,3,4,2
1,4,2,3
1,4,3,2
2,1,3,4
2,1,4,3
2,3,1,4
2,3,4,1
2,4,1,3
2,4,3,1
3,1,2,4
3,1,4,2
3,2,1,4
3,2,4,1
3,4,1,2
3,4,2,1
4,1,2,3
4,1,3,2
4,2,1,3
4,2,3,1
4,3,1,2
4,3,2,1

Find the maximum occurring number out of the given 5 numbers. 
2,2,3,4,2
4,4,4,6,6
90,80,80,6,6
90,5,5,5,5
1,2,3,4,5
1,1,2,2,3
1,1,1,1,2

