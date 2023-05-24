// Function to create a new post
void create_post() {
    if (num_posts >= MAX_POSTS) {
        printf("Error: maximum number of posts reached\n");
        return;
    }

    char username[20];
    char message[140];

    printf("Enter your username: ");
    scanf("%s", username);

    printf("Enter your post: ");
    scanf("%s", message);

    // Add new post to list of posts
    //posts[num_posts].id = num_posts;
    strcpy(posts[num_posts].username, username);
    strcpy(posts[num_posts].message, message);
    posts[num_posts].num_likes = 0;
    num_posts++;

    printf("Post created successfully\n");
}