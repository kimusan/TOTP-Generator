


#include <generator.h>

int main( int argc, char ** argv)
{
	File * configFile;
	bool isConfigured = false, invalid = false;

	isConfigured = check_configuration( configFile);

	if(!isConfigured)
	{
		do
		{
//FIXME			cout << "Valid configuration not found\n"
//FIXME			cout << "1.\tGenerate Config & Shared Secrets\n"
//FIXME			cout << "2.\tRestore Configuration\n"
//FIXME			cout << "option[1]:\n"
//FIXME			cin >> choice
			if(choice == '' or choice == 1)
			{
				generate_config( configFile);
			}
			else if(choice == 2)
			{
				//restoreConfig()
			}
			else
				invalid = true;
		}while(invalid);
	}
	
	genPassword()

	return 0;
}


bool check_configuration( File * configFile)
{
	
	bool retval = true;
	
	configFile = open( CONFIG_FILE);
	if(!configFile)
		retval = false;
	else
	{
//TODO		validConfig = check_configfile( configFile)
//TODO		if(!validConfig)
//TODO			retval = false
	}
	
	return retval;
}

void generate_config( configFile)
{
	File * seedSrc;
	unsigned char * seed;
	
	fopen

}





