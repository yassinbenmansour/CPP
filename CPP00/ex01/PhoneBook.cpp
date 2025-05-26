/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 03:58:57 by yabenman          #+#    #+#             */
/*   Updated: 2025/05/26 13:34:17 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
    this->count = 0;
}

PhoneBook::~PhoneBook()
{
    std::cout << "Destructing PhoneBook" << std::endl;
}

std::string PhoneBook::Formating(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    else
        return str;
}

std::string PhoneBook::GetDataFromInput(std::string Data)
{
    std::string input;
    std::cout << Data << ": ";
    std::getline(std::cin, input);
    while(input.empty())
    {
        if(!std::cin.good())
        {
            break;
        }
        std::cout << "Input cannot be empty. Please enter a valid " << ": ";
        std::getline(std::cin, input);
    }
    return input;
}

void PhoneBook::add_contact()
{
    if(this->count == 8)
    {
        this->index = 0;
        this->count--;
    }
    
    this->contacts[this->index].set_firstname(GetDataFromInput("First Name"));
    this->contacts[this->index].set_lastname(GetDataFromInput("Last Name"));
    this->contacts[this->index].set_nickname(GetDataFromInput("Nickname"));
    this->contacts[this->index].set_phone_number(GetDataFromInput("Phone Number"));
    this->contacts[this->index].set_darkest_secret(GetDataFromInput("Darkest Secret"));
    this->index++;
    this->count++;
    display_contacts();
}

void PhoneBook::display_contact(int index)
{
    std::cout << "First Name: " << this->contacts[index].get_firstname() << std::endl;
    std::cout << "Last Name: " << this->contacts[index].get_lastname() << std::endl;
    std::cout << "Nickname: " << this->contacts[index].get_nickname() << std::endl;
    std::cout << "Phone number: " << this->contacts[index].get_phone_number() << std::endl;
    std::cout << "Darkest Secret: " << this->contacts[index].get_darkest_secret() << std::endl;
}

void PhoneBook::display_contacts()
{
    std::cout << "Index\t| First Name\t| Last Name\t| Nickname" << std::endl;
    for (int i = 0; i < this->count; i++)
    {
        std::cout << i + 1 << "\t| "
                  << Formating(this->contacts[i].get_firstname()) << "\t| "
                  << Formating(this->contacts[i].get_lastname()) << "\t| "
                  << Formating(this->contacts[i].get_nickname()) << std::endl;
    }
}

// void PhoneBook::search_contact()
// {
//     if (this->count < 1)
//     {
//         std::cout << "No contacts available." << std::endl;
//         return;
//     }
        
//     int index;
//     std::cout << "Enter the index of the contact you want to view: ";
//     std::cin >> index;       
// }