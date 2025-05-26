/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 03:58:54 by yabenman          #+#    #+#             */
/*   Updated: 2025/05/26 18:39:57 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook contact;
    std::string command;
    std::cout << "Welcome to the PhoneBook!" << std::endl;
    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        
        if (command == "ADD")
        {
            contact.add_contact();
        }
        else if (command == "SEARCH")
        {
            contact.search_contact();
        }
        else if (command == "EXIT")
        {
            std::cout << "Exiting PhoneBook. Goodbye!" << std::endl;
            break;
        }
        else
        {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }
}