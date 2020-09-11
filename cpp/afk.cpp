#include <iostream>
using namespace std;

class CardOwner
{

public:
    virtual void print() = 0;
    string fname, lname, ss_number;
};

class DebitCardOwner : public CardOwner
{
    int card_limit;

public:
    DebitCardOwner(string fname, string lname, string ss_number, int card_limit)
    {
        this->fname = fname;
        this->lname = lname;
        this->ss_number = ss_number;
        this->card_limit = card_limit;
    }

    void print()
    {
        cout << "\n\nCard Type: Debit\n";
        cout << "\nFirst Name: " << fname;
        cout << "\nLast Name: " << lname;
        cout << "\nSocial Security Number: " << ss_number;
        cout << "\nCard Limit: " << card_limit;
        cout << endl;
    }
};

class FormerCardOwner : public CardOwner
{
    string expiry_date;

public:
    FormerCardOwner(string fname, string lname, string ss_number, string expiry_date)
    {
        this->fname = fname;
        this->lname = lname;
        this->ss_number = ss_number;
        this->expiry_date = expiry_date;
    }
    void print()
    {
        cout << "\n\nCard Type: Former\n";
        cout << "\nFirst Name: " << fname;
        cout << "\nLast Name: " << lname;
        cout << "\nSocial Security Number: " << ss_number;
        cout << "\nCard Expiry Date: " << expiry_date;
        cout << endl;
    }
};

int main()
{
    CardOwner *debitCard, *formerCard;

    debitCard = new FormerCardOwner("user 1", "user1 lname", "123123444", "4-5-2002");
    debitCard->print();

    formerCard = new DebitCardOwner("user 2", "user 2 lname", "90343743", 55000);
    formerCard->print();

    return 0;
}