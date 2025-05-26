/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 03:58:59 by yabenman          #+#    #+#             */
/*   Updated: 2025/05/26 13:21:08 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
class PhoneBook {
    private:
        Contact contacts[8];
        int index;
        int count;

        std::string Formating(std::string str);
        std::string GetDataFromInput(std::string Data);
        
        void display_contact(int index);
        void display_contacts();

    public:
        PhoneBook();
        ~PhoneBook();

        void add_contact();
        //void search_contact();
};

#endif