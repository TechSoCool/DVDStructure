/* Name: Sterling Gerard
   Date: March 8, 2022
   Problem Statement:  Define a structure called Movie, has following members
                       Name. year, time and stars.
                       Create an array of DVD[3] type Movie
                       Initialize (input data) for these three DVD, then display them on screen.
                       Using three functions (remember pass structure to the functions)
                       one function called Read,
                       another one called display, and
                       finally one called compare, that compares the movies number of starts and
                       display the one with the greatest number of stars
*/
//========= Pre processor Directive Include Files ========

#include <iostream>
#include <string>

using namespace std;

#define Maxarray 3

//=============== Structure Definitions =================
struct Movie
{
    string     name;
    int        Year;
    double     Time;
    double     Stars;
};

//================  Functions Read or initialize  =================
void Initialize(Movie DVD[Maxarray])
{
    for (int i = 0; i < Maxarray; i++)
    {
        cout << endl << "Enter the title of the movie" << endl;
        cin.ignore();      //this will skip new line character left in the input buffer
        getline(cin, DVD[i].name);
        cout << endl << "Enter the year the movie was made" << endl;
        cin >> DVD[i].Year;
        cout << endl << "Enter the running time of the movie" << endl;
        cin >> DVD[i].Time;
        cout << endl << "Enter the number of stars of the movie" << endl;
        cin >> DVD[i].Stars;
    }
}
//======== Display Movie Function =================================
void Display(Movie DVD[Maxarray])
{
    int i;
    for (i = 0; i < Maxarray; i++)
    {
        cout << "The Movie " << DVD[i].name << endl;
        cout << " It was made in " << DVD[i].Year << " ,runs " << DVD[i].Time << "minutes in length " << endl;
        cout << " and received " << DVD[i].Stars << " stars" << endl;
    }
}

//===============Compare Movie Function =========================
void CompareMovies(Movie DVD[Maxarray])
{

    if ((DVD[0].Stars > DVD[1].Stars) && (DVD[0].Stars > DVD[2].Stars))
    {
        Display(&DVD[0]);
        cout << " and is the better Movie" << endl;
    }

    else if ((DVD[1].Stars > DVD[0].Stars) && (DVD[1].Stars > DVD[2].Stars))
    {
        Display(&DVD[1]);
        cout << " and is the better Movie" << endl;
    }
    else if ((DVD[2].Stars > DVD[0].Stars) && (DVD[2].Stars > DVD[1].Stars))
    {
        Display(&DVD[2]);
        cout << " and is the better Movie" << endl;
    }
    else
        cout << "All are rated the same" << endl;
}

//===================== Main Program (Driver) ======================
//=====Notice main , smallest possible , just calls to functions ====
int  main()
{
    Movie DVD[Maxarray];  //array of structure 
    Initialize(DVD);
    Display(DVD);
    CompareMovies(DVD);

    system("pause");

    return 0;
}