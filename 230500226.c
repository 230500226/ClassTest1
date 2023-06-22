#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

//PART 1 b COUNT VOWELS
// int countVowels(const char* str) {
//     //A counter for the vowels
//     int count = 0;
//     //loop through the string to count the vowels
//     for (int i=0; i < strlen(str); i++){
//     //convert the string to lower case to shorten the search field
//         tolower(str[i]);
//             //compares each vowel to each lowercase letter in the string
//             switch (str[i]){
//                 case 'a':   
//                 case 'e':
//                 case 'i':
//                 case 'o':
//                 case 'u':
//                     count++;
//             }
//     }
//     //return the amount of vowels counted to the main function
//     return count;
//}

//PART 1 c STUDENT DB
// #define MAX_STUDENTS 50 // defines maximum number of students
// // Define a structure for database record
// struct Student {
//     char name[50];
//     int age;
//     int student_no;
//     };
// // write an addstudent function to collect student record ADDSTUDENT
// void addStudent(struct Student students[], int *count) {
    
//     if (*count == MAX_STUDENTS) {
//     printf("Maximum limit reached. Cannot add more students.\n");
//     return;
//     } 

//     struct Student newStudent;
//         printf("Enter student name: ");
//         scanf("%s", newStudent.name);
    
//         printf("Enter student age: ");
//         scanf("%d", &newStudent.age);
        
//         printf("Enter student student no: ");
//         scanf("%d", &newStudent.student_no);
        
//         students[*count] = newStudent;
//             (*count)++;
//         printf("Student added successfully.\n");
//     }
// // write a displaystudent function to display stored record DISPLAYSTUDENT
// void displayStudents(struct Student students[], int count) {
//     if (count == 0) {
//         printf("No students found.\n");
//     return;
//     }
 
//     printf("Student Details:\n");
//     printf("-----------------\n");
 
//     for (int i = 0; i < count; i++) {
//         printf("Name: %s\n", students[i].name);
//         printf("Age: %d\n", students[i].age);
//         printf("Student No: %d\n", students[i].student_no);
//         printf("-----------------\n");
//     }
// }

//PART 2 b SIMPLE SCIENTIFIC CALCULATOR

    // void add(int n1, int n2){
    //     int ans = n1 + n2;
    //     system("cls");
    //     printf("%d + %d is %d\n", n1, n2, ans);
    //     return;   
    // }
    // void sub(int n1, int n2){
    //     int ans = n1 - n2;
    //     system("cls");
    //     printf("%d - %d is %d\n", n1, n2, ans);
    //     return;   
    // }
    // void multiply(int n1, int n2){
    //     int ans = n1 * n2;
    //     system("cls");
    //     printf("%d x %d is %d\n", n1, n2, ans);
    //     return;   
    // }
    // void divide(int n1, int n2){
    //     int ans = n1 / n2;
    //     system("cls");
    //     printf("%d / %d is %d\n", n1, n2, ans);
    //     return;   
    // }
    // void exponent(int n1, int n2){
    //     int ans = pow(n1,n2);
    //     system("cls");
    //     printf("%d ^ %d is %d\n", n1, n2, ans);
    //     return;   
    // }
    // void squareRoot(int n1, int n2){
    //     int ans = sqrt(n1);
    //     system("cls");
    //     printf("sqrt of %d is %d\n", n1, ans);
    //     return;   
    // }
    // void checkOp(char c){
    //     switch (c){
    //         case 's': printf("no need for second input please continue");return;
    //         case '+':
    //         case '-':
    //         case '*':
    //         case '/':
    //         case '^':
    //             return;
    //         defualt: printf("Invalid operator, please try again\n");
    //         return;

    //     }
    // }

    //PART 2 c LIBRARY SYSTEM
    #define MAX_BOOKS 100
    struct book{
        char title[100];
        char author[100];
        int year;
        int ID;
    };
         
     void addBook(struct book books[], int *count) {
    
         if (*count == MAX_BOOKS) {
         printf("Maximum limit reached. Cannot add more books.\n");
         return;
         } 

         struct book newBook;
             printf("Enter book name: ");
             scanf("%s", newBook.title);
             
             printf("Enter Author name: ");
             scanf("%s", newBook.author);
    
             printf("Enter publish year: ");
             scanf("%d", &newBook.year);
        
             printf("Enter book ID number: ");
             scanf("%d", &newBook.ID);
        
             books[*count] = newBook;
                 (*count)++;
             printf("Book added successfully.\n");
         }
        
     void displayBook(struct book books[], int count) {
         if (count == 0) {
             printf("No books found.\n");
         return;
         }
 
         printf("Book Details:\n");
         printf("-----------------\n");
 
         for (int i = 0; i < count; i++) {
             printf("Title: %s\n", books[i].title);
             printf("Author: %s\n", books[i].author);
             printf("Year: %d\n", books[i].year);
             printf("Book ID number: %d\n", books[i].ID);
             printf("-----------------\n");
         }
    }


int main(){

    // //PART 1 a INSTAGRAM ACCOUNT----------------------------------
    // char username[20] = "";
    // char password[20] = "";
    // int specialCharacter = 0;
    // int passwordSize = 0;

    // printf("Welcome to instagram\nTo create an account please enter a username and password to sign in with\n");
    //     printf("User Name : ");
    //     scanf("%s", username);
        
    //     printf("Password (must contain atleast one special character: ");
    //     scanf("%s", username);

    //     passwordSize = (sizeof(password))/(sizeof(password[1]));
    //     printf("%d\n", passwo\nrdSize);

    //     for (int i = 0; i<passwordSize; i++){    
    //         char passwordCharacter = password[i];
    //         toupper(passwordCharacter);
    //         if (passwordCharacter != 'A'||'B'||'C'||'D'||'E'||'F'||'G'||'H'||'I'||'J'||'K'||'L'||'M'||'N'||'O'||'P'||'Q'||'R'||'S'||'T'||'U'||'V'||'W'||'X'||'Y'||'Z')
    //         specialCharacter++;
    //         printf("%d",i);
    //     }

    //     if (specialCharacter == 0){
    //         printf("You have no special characters in you password please include at least one\n");
    //         return 0;
    //     } 

    // printf("Congratualations you have successfully created an instagram account\n");
    // printf("Your User Name is : %s\n and your Password is : %s\n", username, password);

    //PART 1 b COUNT VOWELS
    // char str[100];
    // printf("Enter a string: ");
    // scanf("%[^\n]", str);
    // printf("Number of vowels in the string: %d\n", countVowels(str));

    //PART 1 c STUDENT DB
    // struct Student students[MAX_STUDENTS];
    // int count = 0;
    // int choice;
    // while (1) {
    //     printf("Student Database\n");
    //     printf("1. Add Student\n");
    //     printf("2. Display Students\n");
    //     printf("3. Exit Program\n");
    //     printf("Enter your choice: ");
    //     scanf("%d", &choice);
    //         switch (choice) {
    //         //add student function
    //             case 1:
    //             addStudent(students, &count);
    //         break;
    //         //display student function
    //             case 2:
    //             displayStudents(students, count);
    //         break;
    //         //exit program
    //             case 3:
    //             printf("Exiting program.\n");
    //         exit(0);
            
    //         default:
    //         //invalid choice message
    //         printf("Invalid choice. Please try again.\n");
    //         }
    //         printf("\n");
    //         }

    //PART 2 a 2D ARRAY
        // int arr[5][2]={2,3,5,1,7,8,9,4,2};
        // printf("Array index %d %d is %d ", 0, 0, arr[0][0]);
        // printf("Array index %d %d is %d ", 0, 1, arr[0][0]);
        // printf("Array index %d %d is %d ", 0, 2, arr[0][0]);
        // printf("Array index %d %d is %d ", 0, 3, arr[0][0]);
        // printf("Array index %d %d is %d ", 1, 0, arr[0][0]);
        // printf("Array index %d %d is %d ", 1, 1, arr[0][0]);
        // printf("Array index %d %d is %d ", 1, 2, arr[0][0]);
        // printf("Array index %d %d is %d ", 1, 3, arr[0][0]);
    //PART 2 b SIMPLE SCIENTIFIC CALCULATOR
    // int n1, n2; //2 user num inputs
    // char c;     //1 user operation
    // int isExit; 

    // while (1){
    //     printf("Simple Scientific calculator\n");
    //     printf("To to continue enter 0 or to exit just type 1 \n");
    //         scanf("%d", &isExit);   //allows user to stop or continue using
    //             if (isExit == 1){
    //             printf("exited program\n");
    //             return(0);
    //             }; 
                
    //     printf("Please enter you first number\n");
    //         scanf("%d", &n1);
    //     printf("please enter your operation\n");
    //         scanf(" %c", &c);
    //     printf("Please enter you second number\n");
    //         scanf("%d", &n2);

    //     switch (c){ //runs the correct operation for user
    //         case '+':add(n1,n2);
    //             break;
    //         case '-':sub(n1,n2);
    //             break;
    //         case '/':divide(n1,n2);
    //             break;
    //         case '*':multiply(n1,n2);
    //             break;
    //         case '^':exponent(n1,n2);
    //             break;
    //         case 's':squareRoot(n1,n2);
    //             break;
    //             defualt: 
    //             printf("Invalid operation please try again\n\n");
    //     }
    // }

    //PART 2 c LIBRARY SYSTEM
    
    struct book books[MAX_BOOKS];
    int count = 0;
    int choice;
    

 while (1) {
    printf("welcome to Library management system\n");        
    printf("Type 1 to add a book \n");
    printf("Type 2 to display all books \n");
    printf("Type 3 To exit\n");
    printf("Enter your choice: ");
    
        scanf("%d", &choice);
         
        switch (choice) {
             case 1:
             addBook(books, &count);
         break;

             case 2:
             displayBook(books, count);
         break;

             case 3:
             printf("Exiting program.\n");
        exit(0);
            
        default:
        printf("Invalid choice. Please try again.\n\n");
        }
    }
 
return 0;}