#include "hash_table.h"
#include "prime.h"

int main() {
    ht_hash_table* ht = ht_new();
    ht_print(ht);
    ht_insert(ht, "foo", "bar");
    ht_print(ht);
    ht_search(ht, "foo");
    ht_delete(ht, "foo");
    ht_print(ht);
}