#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
#include <iomanip>

class Contact
{
    public:
        Contact(void);
        ~Contact(void);
        void setContactInfo();
        void displayContact() const;

        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;

    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;
};

#endif