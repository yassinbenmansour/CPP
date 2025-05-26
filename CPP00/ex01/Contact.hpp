/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 03:58:52 by yabenman          #+#    #+#             */
/*   Updated: 2025/05/26 12:26:49 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
    private:
        std::string _Firstname;
        std::string _Lastname;
        std::string _Nickname;
        std::string _PhoneNumber;
        std::string _DarkestSecret;
        
    public:
        Contact();
        Contact(std::string Firstname , std::string Lastname, std::string Nickname, std::string PhoneNumber, std::string DarkestSecret);
        ~Contact();
        
        //setters
        void set_firstname(std::string Firstname);
        void set_lastname(std::string Lastname);
        void set_nickname(std::string Nickname);
        void set_phone_number(std::string PhoneNumber);
        void set_darkest_secret(std::string DarkestSecret);
        
        //getters
        std::string get_firstname();
        std::string get_lastname();
        std::string get_nickname();
        std::string get_phone_number();
        std::string get_darkest_secret(); 
};

#endif