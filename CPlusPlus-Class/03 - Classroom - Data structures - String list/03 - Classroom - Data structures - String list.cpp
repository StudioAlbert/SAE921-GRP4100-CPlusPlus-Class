#include <iostream>
#include <list>

std::list<std::string> getWords(std::string sentence_, char separator_)
{
    std::list<std::string> words;

    int leftPosition = 0;
    int rightPosition = 0;

    if (!sentence_.empty())
    {
        do {
            rightPosition = sentence_.find(separator_, leftPosition);
            if(rightPosition != -1)
            {
                std::string oneWord = sentence_.substr(leftPosition, rightPosition - leftPosition);
                words.push_back(oneWord);
                leftPosition = rightPosition + 1;
            }else
            {
                std::string oneWord = sentence_.substr(leftPosition, sentence_.size() - leftPosition);
                words.push_back(oneWord);
            }


        } while (rightPosition != -1);
    }

    return words;

}

void displayWords(std::list<std::string> words)
{
    std::cout << "Words are :" << std::endl;
	for(auto w : words)
	{
        std::cout << w << std::endl;
	}

}

int main()
{
    std::string nintendoQuote = "Sometimes ideas are like good wine in that they just need time";

    std::list<std::string> words = getWords(nintendoQuote, ' ');
    displayWords(words);

    // Point on first element
    std::list<std::string>::iterator it = words.begin();
    // Iterates until we end the list
    while (it != words.end())
    {
        std::string theWord = *it;

    	//if (theWord.size() <= 3)
        if(it->size() <= 3)
        {
            // the erase jump on the next element
            it = words.erase(it);
        }
        else
        {
            // if we don't erase, we have to jump manually
            ++it;
        }
    }

    displayWords(words);

}
