/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 08:49:17 by pwolff            #+#    #+#             */
/*   Updated: 2023/03/01 08:49:21 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class ATarget;
class ATarget;

#include <string>
#include <iostream>
#include "ATarget.hpp"
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
public:
	TargetGenerator();
	~TargetGenerator();

	void	learnTargetType(ATarget *rhs);
	void	forgetTargetType(std::string const &spell);
	ATarget* createTarget(std::string const &spell);


private:
	TargetGenerator(TargetGenerator const &rhs);

	TargetGenerator	&operator=(TargetGenerator const &rhs);


	std::map<std::string, ATarget*>	_datas;
};
