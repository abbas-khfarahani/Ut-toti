void save_accounts(int num_accounts) {
    FILE *file = fopen("accounts.txt", "w");
    if (file == NULL) {
        printf("Error: unable to open file\n");
        return;
    }

    int i;
    for (i = 0; i < num_accounts; i++) {
        fprintf(file, "%s %s\n", accounts[i].username, accounts[i].password);
    }

    fclose(file);
    printf("Accounts saved successfully\n");
}