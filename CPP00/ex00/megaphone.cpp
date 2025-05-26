/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 03:01:48 by yabenman          #+#    #+#             */
/*   Updated: 2025/05/25 03:02:28 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    else
    {
        for (int i = 1; i < ac; i++)
        {
            std::string str(av[i]);
            for (int j = 0; j < (int)str.size(); j++)
                std::cout << (char)toupper(str[j]);
        }
    }
    std::cout << std::endl;
    return 0;
}
