/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 03:58:59 by yabenman          #+#    #+#             */
/*   Updated: 2025/05/26 18:19:41 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define RESET   "\033[0m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"
#define GREEN   "\033[32m"
#define MAGENTA "\033[35m"
#define WHITE   "\033[37m"
#define BOLD    "\033[1m"

#include "Contact.hpp"
#include <iostream>
# include <iomanip>
# include <string>

class PhoneBook {
    private:
        Contact contacts[8];
        int index;
        int count;

        std::string Formating(std::string str);
        std::string GetDataFromInput(std::string fieldName);
        
        void display_contact(int index);
        void display_contacts();

    public:
        PhoneBook();
        ~PhoneBook();

        void add_contact();
        void search_contact();
};

#endif