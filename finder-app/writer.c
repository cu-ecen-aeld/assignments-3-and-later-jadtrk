
#include <stdio.h>
#include <syslog.h>

int main(int argc, char *argv[])
{
   char* writefile = argv[1];
   char* writestr = argv[2];
   FILE *outputFile;

   if(argc != 3)
   {
      syslog(LOG_ERR, "Invalid number of arguments!\n");
      return 1;
   }

   outputFile = fopen(writefile, "w");
   if(outputFile == NULL)
   {
      syslog(LOG_ERR, "Failed to open %s file\n", writefile);
      return 1;
   }
   else
   {
      syslog(LOG_ERR, "Writing %s to %s\n", writestr, writefile);
      fprintf(outputFile, "%s", writestr);
   }

   return 0;
}
