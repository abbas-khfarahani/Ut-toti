int load_accounts() {
    FILE *file = fopen("accounts.txt", "r");
    if (!file) {
        printf("Error: Could not open accounts file.\n");
        return;
    }
    int num_accounts = 0;
    int i;
    while (fscanf(file, "%s %s %d", users[num_accounts].username, users[num_accounts].password, &users[num_accounts].num_posts) == 3 && !feof(file)) {
        for (i = 0; i < users[num_accounts].num_posts; i++) {
            fscanf(file, " %d", &users[num_accounts].post_ids[i]);
        }
        num_accounts++;
    }
    fclose(file);
    return num_accounts;
}