#include <stdio.h>
#include <stdlib.h>

// Node structure for a polynomial term
struct Node {
    int coef;      // Coefficient (changed to int for simplicity)
    int exp;       // Exponent
    struct Node* next;  // Pointer to next term
};

// Function to create a new polynomial by user input
struct Node* create(struct Node* start) {
    int coef, exp, i, n;
    printf("\nEnter the number of terms you want: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("\nEnter the coefficient and exponent of term %d: ", i);
        scanf("%d %d", &coef, &exp);
        start = insert(start, coef, exp);
    }
    return start;
}

// Function to insert a term, combining like exponents, in descending order
struct Node* insert(struct Node* start, int co, int ex) {
    struct Node* tmp = (struct Node*)malloc(sizeof(struct Node));
    if (!tmp) {
        printf("Memory allocation failed!\n");
        return start;
    }
    tmp->coef = co;
    tmp->exp = ex;

    // If list is empty or new exponent is higher
    if (start == NULL || ex > start->exp) {
        tmp->next = start;
        return tmp;
    }

    struct Node* ptr = start;
    struct Node* prev = NULL;
    while (ptr != NULL && ptr->exp >= ex) {
        if (ptr->exp == ex) { // Combine terms with same exponent
            ptr->coef += co;
            free(tmp);
            if (ptr->coef == 0) { // Remove term if coefficient becomes 0
                if (prev) {
                    prev->next = ptr->next;
                } else {
                    start = ptr->next;
                }
                free(ptr);
            }
            return start;
        }
        prev = ptr;
        ptr = ptr->next;
    }
    tmp->next = ptr;
    if (prev) {
        prev->next = tmp;
    }
    return start;
}

// Function to display the polynomial
void display(struct Node* ptr) {
    if (ptr == NULL) {
        printf("Zero polynomial\n");
        return;
    }
    while (ptr != NULL) {
        printf("%dx^%d", ptr->coef, ptr->exp);
        ptr = ptr->next;
        if (ptr != NULL) {
            if (ptr->coef >= 0) printf(" + ");
            else printf(" "); // Negative coef will handle its own sign
        } else {
            printf("\n");
        }
    }
}

// Function to add two polynomials
struct Node* Add(struct Node* p1, struct Node* p2) {
    struct Node* start3 = NULL;
    while (p1 != NULL && p2 != NULL) {
        if (p1->exp > p2->exp) {
            start3 = insert(start3, p1->coef, p1->exp);
            p1 = p1->next;
        } else if (p2->exp > p1->exp) {
            start3 = insert(start3, p2->coef, p2->exp);
            p2 = p2->next;
        } else { // Equal exponents
            start3 = insert(start3, p1->coef + p2->coef, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        }
    }
    while (p1 != NULL) { // Remaining terms in p1
        start3 = insert(start3, p1->coef, p1->exp);
        p1 = p1->next;
    }
    while (p2 != NULL) { // Remaining terms in p2
        start3 = insert(start3, p2->coef, p2->exp);
        p2 = p2->next;
    }
    return start3;
}

// Function to multiply two polynomials
struct Node* Multi(struct Node* p1, struct Node* p2) {
    struct Node* start3 = NULL;
    struct Node* p2_beg = p2;

    if (p1 == NULL || p2 == NULL) { // Corrected condition
        printf("Multiplied Polynomial is zero polynomial\n");
        return NULL;
    }

    while (p1 != NULL) {
        p2 = p2_beg;
        while (p2 != NULL) {
            start3 = insert(start3, p1->coef * p2->coef, p1->exp + p2->exp);
            p2 = p2->next;
        }
        p1 = p1->next;
    }
    return start3;
}

// Function to free the polynomial list
void freePolynomial(struct Node* head) {
    struct Node* temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Node *start1 = NULL, *start2 = NULL, *sum = NULL, *product = NULL;

    printf("Enter Polynomial 1\n");
    start1 = create(start1);

    printf("Enter Polynomial 2\n");
    start2 = create(start2);

    printf("\nPolynomial 1 is: ");
    display(start1);
    printf("Polynomial 2 is: ");
    display(start2);

    // Add polynomials
    sum = Add(start1, start2);
    printf("Added Polynomial is: ");
    display(sum);

    // Multiply polynomials
    product = Multi(start1, start2);
    printf("Multiplied Polynomial is: ");
    display(product);

    // Clean up
    freePolynomial(start1);
    freePolynomial(start2);
    freePolynomial(sum);
    freePolynomial(product);

    return 0;
}