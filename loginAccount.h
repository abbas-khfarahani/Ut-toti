// Function to log in to an existing account
void login() {
    char username[20];
    char password[20];

    printf("Enter your username: ");
    scanf("%s", username);

    // Check if username exists
    int user_index = -1;
    int i;
    for (i = 0; i < num_users; i++) {
        if (strcmp(username, users[i].username) == 0) {
            user_index = i;
            break;
        }
    }

    if (user_index == -1) {
        printf("Error: username not found\n");
        return;
    }

    printf("Enter your password: ");
    scanf("%s", password);

    // Check if entered password is correct
    if (strcmp(password, users[user_index].password) != 0) {
        printf("Error: incorrect password\n");
        return;
    }

    printf("Logged in successfully\n");
}
