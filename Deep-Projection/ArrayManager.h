#pragma once
#include <string>


#ifdef ARRAYMANAGERLIBRARY_EXPORTS
#define ARRAYMANAGERLIBRARY_API __declspec(dllexport)
#else
#define ARRAYMANAGERLIBRARY_API __declspec(dllimport)
#endif

//up down
extern "C" ARRAYMANAGERLIBRARY_API void amsUP(std::string *a[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amsDOWN(std::string *a[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amiUP(int *a[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amiDOWN(int *a[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amfUP(float *a[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amfDOWN(float *a[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amdUP(double *a[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amdDOWN(double *a[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amcUP(char *a[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amcDOWN(char *a[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void ambUP(bool *a[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void ambDOWN(bool *a[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amwUP(wchar_t *a[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amwDOWN(wchar_t *a[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amstUP(short *a[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amstDOWN(short *a[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amlUP(long *a[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amlDOWN(long *a[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amllUP(long long *a[], int size_a_current, int size_a_new);
extern "C" ARRAYMANAGERLIBRARY_API void amllDOWN(long long *a[], int size_a_current, int size_a_new);


//insert drop
extern "C" ARRAYMANAGERLIBRARY_API void amsIns(std::string *a[], int insertIndex, int size_a_current, std::string insertData);
extern "C" ARRAYMANAGERLIBRARY_API void amsDrop(std::string *a[], int dropIndex, int size_a_current);



