#include "main.hpp"

//TODO:
//Login, Logout, change username, change password, create new account
//have data stored, have that data read 

//default user
std::string admin_user= "admin123";
std::string admin_pass = "adminpass";

//What happens during a login success
void login_success(){
    system("clear");
    std::cout << "Login successful" << std::endl;
}

//What happens during a login failure
void login_failure(){
    system("clear");
    std::cout << "Incorrect username or password " << std::endl;
    std::cout << "1. Exit" << std::endl;
    std::cout << "2. Forgot password" << std::endl;
}

//function to login 
void login(){
    system("clear");
    std::cout << "Enter Username: " << std::endl;
    std::string check_user = " ";
    std::cin >> check_user;
    if (check_user == admin_user){
        login_success();
    } else {
        login_failure();
    }
}

//function to create and store a new account 
void create_account(){
    system("clear");
    std::cout << "account" << std::endl;
};

void forgot_password(){
    system("clear");
    std::cout << "forgot password" << std::endl;  
};

void display_home(){
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
        default:
            std::cout << "Invalid Character" << std::endl;
    }
}

int main(){
        display_home();
 };