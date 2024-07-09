#include <iostream>
#include <random>
#include <string>

std::string generate_password(int length) {
    const std::string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<> distribution(0, characters.size() - 1);

    std::string password;
    for (int i = 0; i < length; ++i) {
        password += characters[distribution(generator)];
    }
    return password;
}

int main() {
    int length;
    std::cout << "Enter password length: ";
    std::cin >> length;

    std::string password = generate_password(length);
    std::cout << "Generated password: " << password << std::endl;

    return 0;
}
