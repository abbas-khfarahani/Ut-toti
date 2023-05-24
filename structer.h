struct User {
    char username[20];
    char password[20];
    int num_posts;
};

struct Post {
    char username[20];
    char message[140];
    int num_likes;
};

struct Like {
    char username[20];
    int post_id;
};
