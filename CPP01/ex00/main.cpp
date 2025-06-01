/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 19:07:03 by yabenman          #+#    #+#             */
/*   Updated: 2025/06/01 20:28:50 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void randomChump(std::string name);


int main()
{
	Zombie *lazy = newZombie("lazy");
	
	lazy->announce();
	randomChump("hibato");
	
	delete lazy;
	return 0;
}