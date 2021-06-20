#pragma once
#include <iostream>
#include <stdexcept>

class BureaucratExceptions : virtual public std::exception
{
	public:
		explicit BureaucratExceptions(const std::string & errLine);
		virtual ~BureaucratExceptions() throw () {}
		/*funcs*/
		virtual const char* what() const throw();
	private:
		std::string const _errline;
};

// class Except: virtual public std::exception {
    
// protected:

//     int error_number;
//     int error_offset;
//     std::string error_message;
    
// public:
//     explicit 
//     Except(const std::string& msg, int err_num, int err_off):
//         error_number(err_num),

//         error_offset(err_off),
//         error_message(msg)
//         {}
//     virtual ~Except() throw () {}
//     virtual const char* what() const throw () {
//        return error_message.c_str();
//     }
// };