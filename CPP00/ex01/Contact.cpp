/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 03:58:49 by yabenman          #+#    #+#             */
/*   Updated: 2025/05/26 12:26:44 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string Firstname, std::string Lastname, 
        std::string Nickname, std::string PhoneNumber, std::string DarkestSecret)
{
    this->_Firstname = Firstname;
    this->_Lastname = Lastname;
    this->_Nickname = Nickname;
    this->_PhoneNumber = PhoneNumber;
    this->_DarkestSecret = DarkestSecret;
}

Contact::~Contact() {
    std::cout << "Destructing Contact" << std::endl;
}


void Contact::set_firstname(std::string Firstname) {
    this->_Firstname = Firstname;
}

void Contact::set_lastname(std::string Lastname) {
    this->_Lastname = Lastname;
}

void Contact::set_nickname(std::string Nickname) {
    this->_Nickname = Nickname;
}

void Contact::set_phone_number(std::string PhoneNumber) {
    this->_PhoneNumber = PhoneNumber;
}

void Contact::set_darkest_secret(std::string DarkestSecret)
{
    this->_DarkestSecret = DarkestSecret;
}

std::string Contact::get_firstname() {
    return this->_Firstname;
}

std::string Contact::get_lastname() {
    return this->_Lastname;
}

std::string Contact::get_nickname() {
    return this->_Nickname;
}

std::string Contact::get_phone_number() {
    return this->_PhoneNumber;
}

std::string Contact::get_darkest_secret() {
    return this->_DarkestSecret;
}