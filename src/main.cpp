#include "main.hpp"

//TODO:
//Login, Logout, change username, change password, create new account
//have data stored, have that data read 

//User datastructure
struct User{
    std::string username;
    std::string password;
};

//function to create and store a new account 
void create_account(){
    system("clear");
    
    std::string temp_user = " ";
    std::string temp_pass = " ";

    std::cout << "Enter username: ";
    std::cin >> temp_user;

    std::cout << "Enter password: ";
    std::cin >> temp_pass;
    
    //Create new user of type user
    User user;

    user.username = temp_user;
    user.password = temp_pass;

    system("clear");
    std::cout << "Entering new user into databse" << std::endl;

    std::fstream fs;
    fs.open("database.dat");
    
    //Insert new user into databse 

    fs << user.username << " " << user.password << std::endl << "Test";

};

//Test user
std::string admin_user= "admin123";
std::string admin_pass = "adminpass";

void login_success(){
    system("clear");
    std::cout << "Login successful" << std::endl;
}

void login_failure(){
    system("clear");
    std::cout << "Incorrect username or password " << std::endl;
    std::cout << "1. Exit" << std::endl;
    std::cout << "2. Forgot password" << std::endl;

    int choice;

    std::cin >> choice;

    if (choice == 1){

    } else if (choice == 2){
        forgot_password();
    } else {
        std::cout << "invalid input";
    }
}
 
void login(){
    system("clear");
    std::string check_user = " ";
    std::string check_pass = " ";

    std::cout << "Enter Username: " << std::endl;
    std::cin >> check_user;

    std::cout << "Enter Password: " << std::endl;
    std::cin >> check_pass;

    if (check_user == admin_user && check_pass == admin_pass){
        login_success();
    } else {
        login_failure();
    }
}

void forgot_password(){
    system("clear");
    std::cout << "forgot password" << std::endl;  
};

void display_home(){
    system("clear");
    std::cout << "1. Login" << std::endl;
    std::cout << "2. Create User" << std::endl;
    std::cout << "3. Forgot password" << std::endl; 

    int choice;
    std::cin >> choice;

    switch(choice){
        case 1:
            login();
            break;
        case 2:
            create_account();
            break;
        case 3:
            forgot_password();
            break;
        default:
            //Loop back if invalid input is given
            display_home();
    }
}

int main(){
        display_home();
 };