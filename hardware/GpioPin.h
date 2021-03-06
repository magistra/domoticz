/*
This code implements basic I/O hardware via the Raspberry Pi's GPIO port, using the wiringpi library.
WiringPi is Copyright (c) 2012-2013 Gordon Henderson. <projects@drogon.net>
It must be installed beforehand following instructions at http://wiringpi.com/download-and-install/

    Copyright (C) 2014 Vicne <vicnevicne@gmail.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
    MA 02110-1301 USA.

This is a derivative work based on the samples included with wiringPi where distributed 
under the GNU Lesser General Public License version 3
Source: http://wiringpi.com
*/
#pragma once

#include "DomoticzHardware.h"

class CGpioPin
{
public:
	CGpioPin(const int id, const std::string &label, const bool isInput, const bool isOutput, const bool isExported);
	~CGpioPin();
	
	int GetId();
	std::string GetLabel();
	bool GetIsInput();
	bool GetIsOutput();
	bool GetIsExported();

	std::string ToString();
	bool operator<(const CGpioPin& pin) const { return m_id < pin.m_id; };

private:
	int m_id;
	std::string m_label;
	bool m_isInput;
	bool m_isOutput;
	bool m_isExported;
};
