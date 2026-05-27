#include <stdio.h>

int main()
{
    // \n -> Moves cursor to next line
    printf("1. New Line Example:\n");
    printf("Hello\nWorld\n\n");

    // \t -> Gives horizontal tab space
    printf("2. Tab Example:\n");
    printf("Name\tAge\tCity\n\n");

    // \\ -> Prints single backslash
    printf("3. Backslash Example:\n");
    printf("C:\\Program Files\\CodeBlocks\n\n");

    // \" -> Prints double quotation mark
    printf("4. Double Quote Example:\n");
    printf("\"C Programming\"\n\n");

    // \' -> Prints single quotation mark
    printf("5. Single Quote Example:\n");
    printf("\'A\'\n\n");

    // \b -> Removes one previous character
    printf("6. Backspace Example:\n");
    printf("ABC\bD\n\n");
    // Output becomes: ABD

    // \r -> Moves cursor to beginning of same line
    printf("7. Carriage Return Example:\n");
    printf("Hello\rHi\n\n");
    // Output may become: Hillo

    // \a -> Produces alert/beep sound
    printf("8. Alert Sound Example:\a\n\n");

    // \f -> Form feed (rarely used in modern systems)
    printf("9. Form Feed Example:\fHello\n\n");

    // \v -> Gives vertical tab space
    printf("10. Vertical Tab Example:\n");
    printf("Hello\vWorld\n\n");

    // \0 -> Null character marks end of string
    printf("11. Null Character Example:\n");
    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n\n", str);

    // \123 -> Octal escape sequence
    // Octal 123 = Decimal 83 = ASCII character 'S'
    printf("12. Octal Escape Sequence:\n");
    printf("\123\n\n");

    // \x53 -> Hexadecimal escape sequence
    // Hexadecimal 53 = Decimal 83 = ASCII character 'S'
    printf("13. Hexadecimal Escape Sequence:\n");
    printf("\x53\n");

    return 0;
}