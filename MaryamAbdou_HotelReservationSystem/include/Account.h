#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account
{
    public:
    int answer;
    char id[50];
    int randomNumber;
    char type[100],username[100];

    public:
        Account();
        void signing();
};

#endif // ACCOUNT_H
