// Function to like a post
void like_post() {
    int post_id;

    printf("Enter the post id: ");
    scanf("%d", &post_id);

    // Check if post id is valid
    if (post_id < 0 || post_id >= num_posts) {
        printf("Error: invalid post id\n");
        return;
    }

    char username[20];

    printf("Enter your username: ");
    scanf("%s", username);

    // Add like to the post
    strcpy(likes[num_likes].username, username);
    likes[num_likes].post_id = post_id;
    num_likes++;
    posts[post_id].num_likes++;

    printf("Post liked successfully\n");
}