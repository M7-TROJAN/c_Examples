#include <iostream>

enum enMainMenuPermissions
{
    eAll = -1,
    pListClients = 1,
    pAddNewClient = 2,
    pDeleteClient = 4,
    pUpdateClients = 8,
    pFindClient = 16,
    pTransactions = 32,
    pManageUsers = 64
};

struct User
{
    std::string userName;
    int permissions;
};

User CurrentUser = {"M7", pListClients | pAddNewClient | pUpdateClients};

bool CheckAccessPermission(enMainMenuPermissions Permission);

int main()
{ 
    if (CheckAccessPermission(pAddNewClient))
    {
        std::cout << "User has permission to add new clients.\n";
    }
    else
    {
        std::cout << "User does not have permission to add new clients.\n";
    }

    if (CheckAccessPermission(pDeleteClient))
    {
        std::cout << "User has permission to delete clients.\n";
    }
    else
    {
        std::cout << "User does not have permission to delete clients.\n";
    }

    return 0;
}

bool CheckAccessPermission(enMainMenuPermissions Permission)
{
    if (CurrentUser.permissions == eAll)
        return true;
    if ((Permission & CurrentUser.permissions) == Permission)
        return true;
    else
        return false;
}


int ReadPermissionsToSet()
{
    int Permissions = 0;
    char Answer = 'n';
    std::cout << "\nDo you want to give full access (y/n)? ";
    std::cin >> Answer;

    if (Answer == 'y' || Answer == 'Y')
    {
        return -1; // Return -1 to indicate full access
    }

    std::cout << "\nPlease choose the permissions to grant:\n";
    std::cout << "---------------------------------------\n";

    std::cout << "Show Clients List? (y/n) ";
    std::cin >> Answer;
    if (Answer == 'y' || Answer == 'Y')
    {

        Permissions = Permissions | enMainMenuPermissions::pListClients;
    }

    std::cout << "Add New Clients? (y/n) ";
    std::cin >> Answer;
    if (Answer == 'y' || Answer == 'Y')
    {
        Permissions = Permissions | enMainMenuPermissions::pAddNewClient;
    }

    std::cout << "Delete Clients? (y/n) ";
    std::cin >> Answer;
    if (Answer == 'y' || Answer == 'Y')
    {
        Permissions = Permissions | enMainMenuPermissions::pDeleteClient;
    }

    std::cout << "Update Client? (y/n) ";
    std::cin >> Answer;
    if (Answer == 'y' || Answer == 'Y')
    {
        Permissions = Permissions | enMainMenuPermissions::pUpdateClients;
    }

    std::cout << "Find Client? (y/n) ";
    std::cin >> Answer;
    if (Answer == 'y' || Answer == 'Y')
    {
        Permissions = Permissions | enMainMenuPermissions::pFindClient;
    }

    std::cout << "Perform Transactions? (y/n) ";
    std::cin >> Answer;
    if (Answer == 'y' || Answer == 'Y')
    {
        Permissions = Permissions | enMainMenuPermissions::pTransactions;
    }

    std::cout << "Manage Users? (y/n) ";
    std::cin >> Answer;
    if (Answer == 'y' || Answer == 'Y')
    {
        Permissions = Permissions | enMainMenuPermissions::pManageUsers;
    }

    return Permissions;
}
