% Samuel Weems
% CMPS 5113 Advanced Programming Languages
% Project 2
% November 1, 2017
%
%
% This project is an example of a program written in the prolog progrraming
% language. In this program a University has a number of Colleges which
% have their own departments. Each department has faculty and chairs of
% those departments. For the purpose of this program only one College
% has departments. The logic implemented is in two sets of rules.
% These rules makes faculty and chairs a part of their
% respective department, departments a part of their college, and Colleges
% a part of the university. These rules implement the logic that flows
% from this. For example a particular faculty member works for the chair
% of their department, the department, the appropriate college, and the
% university.


% University Facts

university('Midwestern State University').

% College Facts

college('Science and Mathematics', 'Midwestern State University').
college('Business Administration', 'Midwestern State University').
college('Fine Arts', 'Midwestern State University').
college('Health Sciences and Human Services', 'Midwestern State University').
college('Humanities and Social Sciences', 'Midwestern State University').
college('Education', 'Midwestern State University').



% Department Facts

department('Biology', 'Science and Mathematics').
department('Chemistry', 'Science and Mathematics').
department('Computer Science', 'Science and Mathematics').
department('Geoscience', 'Science and Mathematics').
department('Math', 'Science and Mathematics').
department('Engineering', 'Science and Mathematics').


% Chair Facts


chair('Cook', 'Biology').
chair('Hansen', 'Chemistry').
chair('Halverson', 'Computer Science').
chair('Price', 'Geoscience').
chair('Slavens', 'Math').
chair('Desai', 'Engineering').

% Faculty Facts

faculty('Shipley',  'Biology').
faculty('Stangl', 'Biology').

faculty('Fulton', 'Chemistry').
faculty('Hallford', 'Chemistry').

faculty('Passos', 'Computer Science').
faculty('Johnson', 'Computer Science').

faculty('Dodge', 'Geoscience').
faculty('Black', 'Geoscience').

faculty('Farris', 'Math').
faculty('Fosnaugh', 'Math').

faculty('Brink', 'Engineering').
faculty('Azzouz', 'Engineering').

% 'Part Of' Rules

partOf(X,U):-college(X,U).                      % College part of University
partOf(X,C):-department(X,C).                   % Department part of College
partOf(X,U):-department(X,C), college(C,U).     % Department part of University



% 'Works For' Rules

worksFor(X,D):- chair(X,D).                     % Chair works for Department
worksFor(X,D):- faculty(X,D).                   % Faculty works for Department
worksFor(X,H):- faculty(X,D), chair(H,D).       % Faculty works for Chair

% Faculty/Chair works for their College

worksFor(X,C):- faculty(X,D), department(D,C).
worksFor(X,C):- chair(X,D), department(D,C).

% Faculty/Chair works for their University

worksFor(X,U):- faculty(X,D), department(D,C), college(C,U).
worksFor(X,U):- chair(X,D), department(D,C), college(C,U).









































