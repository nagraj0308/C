#include <stdio.h>

int main()
{
  int input_char;
  FILE *my_stream;
  char my_filename[] = "myfile.txt";
  long position;
  int eof_status, error_status, close_error;

  my_stream = fopen (my_filename, "w");
  fprintf (my_stream, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");

  /* Close stream; skip error-checking for brevity of example */
  fclose (my_stream);

  printf ("Opening file...\n");
  my_stream = fopen (my_filename, "r");
  position = ftell (my_stream);
  input_char = getc (my_stream);
  printf ("Character at position %ld = '%c'.\n\n", position, input_char);

  printf ("Seeking position 25...\n");
  fseek (my_stream, 25, SEEK_SET);
  position = ftell (my_stream);
  input_char = getc (my_stream);
  printf ("Character at position %ld = '%c'.\n\n", position, input_char);

  printf ("Attempting to read again...\n");
  input_char = getc (my_stream);
  eof_status = feof (my_stream);
  printf ("feof returns %d.\n\n", eof_status);

  error_status = ferror (my_stream);
  printf ("ferror returns %d.\n", error_status);
  printf ("Attempting to write to this read-only stream...\n");
  putc ('!', my_stream);
  error_status = ferror (my_stream);
  printf ("ferror returns %d.\n\n", error_status);

  printf ("Rewinding...\n");
  rewind (my_stream);
  position = ftell (my_stream);
  input_char = getc (my_stream);
  printf ("Character at position %ld = '%c'.\n", position, input_char);

  close_error = fclose (my_stream);

  /* Handle fclose errors */
  if (close_error != 0)
    {
      printf ("File could not be closed.\n");
    }
  else
    {
      printf ("File closed.\n");
    }

  return 0;
}
