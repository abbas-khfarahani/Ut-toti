
// Function to create a new user account
void create_account() {
    if (num_users >= MAX_USERS) {
        printf("Error: maximum number of users reached\n");
        return;
    }

    char username[20];
    char password[20];

    printf("Enter a username: ");
    scanf("%s", username);

    // Check if username is already taken
    int i;
    for (i = 0; i < num_users; i++) {
        if (strcmp(username, users[i].username) == 0) {
            printf("Error: username already taken\n");
            return;
        }
    }

    printf("Enter a password: ");
    scanf("%s", password);

    // Add new user to list of users
    strcpy(users[num_users].username, username);
    strcpy(users[num_users].password, password);
    users[num_users].num_posts = 0;
    num_users++;

    printf("Account created successfully\n");
}

