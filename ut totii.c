#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "signup.h"
#include "loginAccount.h"
#include "Post.h"
#include "Like.h"
//#include "saveData.h"
//#include "loadData.h"

#define MAX_USERS 50
#define MAX_POSTS 100
#define MAX_LIKES 200

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

int num_users = 0;
int num_posts = 0;
int num_likes = 0;

struct User users[MAX_USERS];
struct Post posts[MAX_POSTS];
struct Like likes[MAX_LIKES];

//*********************************


int main() {
    int choice;

    while (1) {
        printf("1. create_account\n");
        printf("2. login\n");
        printf("3. Create post\n");
        printf("4. Like post\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
             case 1:
                create_account();
                break;
            case 2:
                login();
                break;
            case 3:
                create_post();
                break;
            case 4:
                like_post();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice\n");
                break;
        }
    }

    return 0;
}            