/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 03:58:57 by yabenman          #+#    #+#             */
/*   Updated: 2025/05/26 18:38:16 by yabenman         ###   ########.fr       */
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

std::string PhoneBook::GetDataFromInput(std::string fieldName)
{
    std::string input;
    std::cout << fieldName << ": ";
    std::getline(std::cin, input);
    while(input.empty())
    {
        if(!std::cin.good())
        {
            break;
        }
        std::cout << "Input cannot be empty. Please enter a valid " << fieldName << ": ";
        std::getline(std::cin, input);
    }
    return input;
}


void PhoneBook::display_contact(int index)
{
    std::cout << CYAN << "+---------------------- CONTACT DETAILS ----------------------+" << RESET << std::endl;

    std::cout << BOLD << "First Name     : " << RESET << GREEN   << this->contacts[index].get_firstname()      << RESET << std::endl;
    std::cout << BOLD << "Last Name      : " << RESET << GREEN   << this->contacts[index].get_lastname()       << RESET << std::endl;
    std::cout << BOLD << "Nickname       : " << RESET << YELLOW  << this->contacts[index].get_nickname()       << RESET << std::endl;
    std::cout << BOLD << "Phone Number   : " << RESET << CYAN    << this->contacts[index].get_phone_number()   << RESET << std::endl;
    std::cout << BOLD << "Darkest Secret : " << RESET << MAGENTA << this->contacts[index].get_darkest_secret() << RESET << std::endl;

    std::cout << CYAN << "+------------------------------------------------------------+" << RESET << std::endl;
}

void PhoneBook::display_contacts()
{
    std::cout << CYAN << "+-------------------------------------------+" << RESET << std::endl;
	std::cout << BOLD << "|   Index | First Name | Last Name  | Nickname  |" << RESET << std::endl;
	std::cout << CYAN << "+-------------------------------------------+" << RESET << std::endl;

    for (int i = 0; i < this->count; i++)
    {
        std::string firstname = this->Formating(this->contacts[i].get_firstname());
		std::string lastname  = this->Formating(this->contacts[i].get_lastname());
		std::string nickname  = this->Formating(this->contacts[i].get_nickname());

        std::cout << "| "
                  << YELLOW << std::setw(6) << i << RESET << " | "
                  << GREEN  << std::setw(10) << firstname << RESET << " | "
                  << MAGENTA << std::setw(10) << lastname << RESET << " | "
                  << WHITE  << std::setw(10) << nickname << RESET << " |"
                  << std::endl;
    }

    std::cout << CYAN << "+-------------------------------------------+" << RESET << std::endl;
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
}

void PhoneBook::search_contact()
{
    if(count < 1)
    {
        std::cout << "You don't have any contact." << std::endl;
        return;
    }
    std::string str;
    this->display_contacts();
    std::cout << "Enter the index: " << std::endl;
    std::getline(std::cin, str);
    while(str.empty() || !isdigit(str[0]) || str.size() > 1)
    {
		if (!std::cin.good())
		{
			std::cout << "Invalid input" << std::endl;
			return;
		}
		std::cout << "Invalid Index, please retry" << std::endl << "$>";
		std::getline(std::cin, str);
	}
    int index = str[0] - '0';
    if (index > 7)
	{
		std::cout << "Index is too high, please retry" << std::endl;
		return;
	}
    this->display_contact(str[0] - 48);
	return ;
}