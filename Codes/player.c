
#include <string.h>
#include <stdlib.h>

/*creates a new node and returns a pointer to that node. The Pokemon count should be set to zero.*/
struct PlayerNode* NewPlayerNode(char* name) {
  struct PlayerNode *node = (struct PlayerNode*) malloc(sizeof(struct PlayerNode));   /*specify memory for the new node with the struct size*/
  if(node == NULL){
    return NULL;        /*failed to allocate memory*/
  }
  node->PlayerName = name;    /*set the struct parameters*/
  node->pokemonCount = 0;
  node->next = NULL;      /*set the next pointer to null to avoid wild pointers*/

  return node;
}
