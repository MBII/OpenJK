/**
	\ingroup common
	\{
	
	\file
	
	Functions needed by various files inside CommonLib but nowhere outside.
**/

/**
	\brief Sets the binary path.
	\see Sys_BinaryPath()
**/
void Sys_SetBinaryPath( const char *path );

/**
	\brief Retrieves the directory the binaries (i.e. the executed program et al) are in.
**/
const char *Sys_BinaryPath( void );

/**
	\brief Strips the filename from a path, leaving the directory part.
**/
const char *Sys_Dirname( const char *path );

/**
	\brief Does OS-specific initializations.
**/
void OS_Init( void );

/**
\brief Cleanly shut down on Sys_Quit()
**/
void OS_Shutdown( void );

/**
\brief Loading a library
**/
void* Sys_LoadLibrary( const char *name );

// end of Doxygen Group
/// \}