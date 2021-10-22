#include <iostream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

#include "Person.h"

using boost::property_tree::ptree;

int main()
{
        ptree personsJSON;
        std::vector<Person> persons;

    	read_json("data\\persons.json", personsJSON);
        auto root = personsJSON.get_child("persons");

        for (auto item : root)
        {
            std::string name = item.second.get<std::string>("name");
            std::string first_name = item.second.get<std::string>("first_name");
            int age = item.second.get<int>("age");

        	std::cout << "Name : " << name << std::endl;
            std::cout << "First name : " << first_name << std::endl;
            std::cout << "Name : " << age << std::endl;
            std::cout << std::endl;

            persons.emplace_back(Person(name, first_name, age));

        }

        for(auto p : persons)
        {
            p.display();
        }

}