#include <iostream> 
#include <string> 
#include <cstdlib> 
#include <ctime> 
#include <random> 
#include <istream>
#include <cctype>
#include <Windows.h>
#include <vector>

class RandomGenerator
{
private: 
	std::vector<std::string> movieNames; 

public: 
	RandomGenerator()
	{

	}

	RandomGenerator(std::vector<std::string> AmovieNames)
	{
		setMovieNames(AmovieNames); 
	}

	void setMovieNames(std::vector<std::string> AmovieNames)
	{
		movieNames = AmovieNames; 
	}

	std::vector<std::string> getMovieNames()
	{
		return movieNames; 
	}

	void RandomGenMandTV()
	{
		int i = 0; 

		srand(time(0)); 
		int randomName = rand() % 5; 

		for (; i < 1; i++)
		{
			Sleep(500);
			std::cout << "\n\n                                      You will be watching: \n\n";
			Sleep(500);
			std::cout << "                           ---------> ";
			std::cout << movieNames[randomName] << "\n\n\n";  
		}
	}
};

int main()
{
	RandomGenerator randomGen; 
	std::string userOptionString;  

	while (1)
	{
		Sleep(750);
		std::cout << "\n                                                   M E N U \n\n";
		Sleep(750);
		std::cout << "                                         1. Use Movie Generator Tool \n";
		Sleep(750);
		std::cout << "\n                                         2. Use TV Show Generator Tool \n";
		Sleep(750);
		std::cout << "\n                                         3. Exit \n\n";
		Sleep(750);
		std::cout << "                                     Please enter your choice here (1-3): ";
		std::getline(std::cin, userOptionString);
		std::cout << "\n\n";

		while (userOptionString != "1" && userOptionString != "2" && userOptionString != "3")
		{
			std::cout << "\n Enter a valid response. (1-3): ";
			std::getline(std::cin, userOptionString);
			std::cout << "\n\n";
		}

		int userOptionInt = stoi(userOptionString); 

		if (userOptionInt == 1 || userOptionInt == 2 || userOptionInt == 3)
		{
			switch (userOptionInt)
			{
			case 1: 
			{
				std::string genreChoiceString;
				std::cout << "\n Thank you for using the movie generator!! Let's choose your movie.\n\n";
				std::cout << " What genre are you in the mood for?\n";
				std::cout << " You can choose from: \n\n";
				std::cout << " 1. Horror \n" << " 2. Action \n" << " 3. Romance \n" << " 4. Comedy \n" << " 5. Fantasy \n";
				std::cout << "\n Enter you preferred genre here (1-5): ";
				std::getline(std::cin, genreChoiceString);

				while (genreChoiceString != "1" && genreChoiceString != "2" && genreChoiceString != "3" &&
					genreChoiceString != "4" && genreChoiceString != "5")
				{
					std::cout << "\n Enter a valid response (1-5): ";
					std::getline(std::cin, genreChoiceString);
				}

				int genreChoiceInt = stoi(genreChoiceString);

				if (genreChoiceInt == 1 || genreChoiceInt == 2 || genreChoiceInt == 3 ||
					genreChoiceInt == 4 || genreChoiceInt == 5)
				{
					switch (genreChoiceInt)
					{
					case 1: 
					{
						std::string horrorSubGenreString;
						std::cout << "\n Okay, horror buff. What subgenre do you prefer?\n";
						std::cout << " You can choose from: \n\n";
						std::cout << " 1. Gothic Horror \n" << " 2. Slasher \n" << " 3. Pyschological Horror \n" <<
							" 4. Zombie Horror \n" << " 5. Historical Horror \n";
						std::cout << "\n Enter your preferred genre here (1-5): ";
						std::getline(std::cin, horrorSubGenreString);

						while (horrorSubGenreString != "1" && horrorSubGenreString != "2" && horrorSubGenreString != "3" &&
							horrorSubGenreString != "4" && horrorSubGenreString != "5")
						{
							std::cout << "\n Enter a valid response (1-5): ";
							std::getline(std::cin, horrorSubGenreString);
						}

						int horrorSubGenreInt = stoi(horrorSubGenreString);

						if (horrorSubGenreInt == 1 || horrorSubGenreInt == 2 || horrorSubGenreInt == 3 ||
							horrorSubGenreInt == 4 || horrorSubGenreInt == 5)
						{
							switch (horrorSubGenreInt)
							{
							case 1: 
							{
								//gothic horror 
								randomGen.setMovieNames({ "Dracula (1931)", "Frankenstein (1931)", "Dr. Jekyll and Mr. Hyde (1931)",
									"Sweeney Todd: The Demon Barber of Fleet Street (2007)", "Interview with the Vampire (1994)" });
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV(); 

								break; 
							}
							case 2: 
							{
								//slasher 
								randomGen.setMovieNames({ "The Texas Chainsaw Massacre (2003)", "Halloween (1978)", "Scream (1996)",
									"Psycho (1960)", "House of 1000 Corpses (2003)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV(); 

								break; 
							}
							case 3: 
							{
								//pyschological horror 
								randomGen.setMovieNames({ "The Shining (1980)", "Get Out (2017)", "The Silence of the Lambs (1991)",
									"Eraserhead (1977)", "Hereditary (2018)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV(); 

								break; 
							}
							case 4: 
							{
								//zombie horror 
								randomGen.setMovieNames({ "Shaun of the Dead (2004)", "I Am Legend (2007)", "Train to Busan (2016)",
									"#Alive (2020)", "Night of the Living Dead (1968)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV(); 

								break; 
							}
							case 5: 
							{
								//historical horror 
								randomGen.setMovieNames({ "The Witch (2015)", "The Lighthouse (2019)", "Sleepy Hollow (1999)",
									"Black Sunday (1960)", "Dorian Gray (2009)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV(); 

								break; 
							}
							}
						}

						break; 
					}
					case 2: 
					{
						std::string actionSubGenreString;
						std::cout << "\n What's up, action fanatic? Let's find an action movie tailored to your taste.\n";
						std::cout << " You can choose from these subgenres: \n\n";
						std::cout << " 1. Martial Arts \n" << " 2. Action Comedy \n" << " 3. Action Adventure \n" << " 4. Science Fiction \n"
							<< " 5. Disaster \n";
						std::cout << "\n Enter your preferred genre here (1-5): ";
						std::getline(std::cin, actionSubGenreString);

						while (actionSubGenreString != "1" && actionSubGenreString != "2" && actionSubGenreString != "3" && actionSubGenreString != "4" &&
							actionSubGenreString != "5")
						{
							std::cout << "\n Enter a valid response (1-5): ";
							std::getline(std::cin, actionSubGenreString);
						}

						int actionSubGenreInt = stoi(actionSubGenreString);

						if (actionSubGenreInt == 1 || actionSubGenreInt == 2 || actionSubGenreInt == 3 || actionSubGenreInt == 4 || actionSubGenreInt == 5)
						{
							switch (actionSubGenreInt)
							{
							case 1: 
							{
								//martial arts 
								randomGen.setMovieNames({ "Enter the Dragon (1973)", "The Karate Kid (1984)", "Seven Samurai (1954)", "Ran (1985)",
									"Kung Fu Panda (2008)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV(); 

								break; 
							}
							case 2: 
							{
								//action comedy 
								randomGen.setMovieNames({ "The Hangover (2009)", "Scott Pilgrim vs. the World (2010)", "Hot Fuzz (2007)",
									"Austin Powers: International Man of Mystery (1997)", "The Big Lebowski (1998)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV();  

								break; 
							}
							case 3: 
							{
								//action adventure 
								randomGen.setMovieNames({ "Raiders of the Lost Ark (1981)", "Kill Bill: Vol. 1 (2003)",
									"Yojimbo (1961)", "Hunt for the Wilderpeople (2016)", "Dunkirk (2017)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV(); 

								break; 
							}
							case 4: 
							{
								//science fiction 
								randomGen.setMovieNames({ "Interstellar (2014)", "The Hitchhiker's Guide to the Galaxy (2005)",
									"Star Wars (1977)", "Dune (2021)", "The Matrix (1999)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV(); 

								break; 
							}
							case 5: 
							{
								//disaster 
								randomGen.setMovieNames({ "The Mist (2007)", "Jurassic Park (1993)", "Don't Look Up (2021)",
									"Airplane! (1980)", "The Host (2006)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV();  

								break; 
							}
							}
						}

						break; 
					}
					case 3: 
					{
						std::string romanceSubGenreString;
						std::cout << "\n Everyone needs a good romance film to watch sometimes. Let's pick out what you need.\n";
						std::cout << " You can choose from these subgenres: \n\n";
						std::cout << " 1. Period Pieces \n" << " 2. Romantic Comedy \n" << " 3. Contemporary Romance \n" << " 4. Romantic Suspense \n" << " 5. Western \n";
						std::cout << "\n Enter your preferred genre here (1-5): ";
						std::getline(std::cin, romanceSubGenreString);

						while (romanceSubGenreString != "1" && romanceSubGenreString != "2" && romanceSubGenreString != "3" && romanceSubGenreString != "4"
							&& romanceSubGenreString != "5")
						{
							std::cout << "\n Enter a valid response (1-5): ";
							std::getline(std::cin, romanceSubGenreString);
						}

						int romanceSubGenreInt = stoi(romanceSubGenreString);

						if (romanceSubGenreInt == 1 || romanceSubGenreInt == 2 || romanceSubGenreInt == 3 || romanceSubGenreInt == 4 || romanceSubGenreInt == 5)
						{
							switch (romanceSubGenreInt)
							{
							case 1: 
							{
								//period pieces 
								randomGen.setMovieNames({ "Pride and Prejudice (2005)", "Emma (2020)", "Portrait of a Lady on Fire (2019)",
									"Phantom Thread (2017)", "Maurice (1987)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV(); 

								break; 
							}
							case 2: 
							{
								//romantic comedy 
								randomGen.setMovieNames({ "Happiest Season (2020)", "But I'm a Cheerleader (1999)", "Submarine (2010)",
									"10 Things I Hate About You (1999)", "Sing Street (2016)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV();  

								break; 
							} 
							case 3: 
							{
								//contemporary romance 
								randomGen.setMovieNames({ "Before Sunrise (1995)", "Fire Island (2022)", "About Time (2013)",
									"Bergman Island (2021)", "Howl's Moving Castle (2004)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV(); 

								break; 
							}
							case 4: 
							{
								//romantic suspense 
								randomGen.setMovieNames({ "The Red Shoes (1948)", "Breathless (1960)", "Masculin Feminin (1966)",
									"Persona (1966)", "Blue Velvet (1986)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV();  

								break; 
							}
							case 5: 
							{
								//western 
								randomGen.setMovieNames({ "Brokeback Mountain (2005)", "Rango (2011)", "Tombstone (1993)", "One-Eyed Jacks (1961)",
									"High Noon (1952)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV(); 

								break; 
							}
							}
						}
						break; 
					}
					case 4: 
					{
						std::string comedySubGenreString;
						std::cout << "\n Comedies are always fun!! Pick a subgenre that aligns with your comedic taste.\n";
						std::cout << " You can choose between these subgenres: \n\n";
						std::cout << " 1. British Comedy \n" << " 2. Dark Comedy \n" << " 3. Satirical Comedy \n" << " 4. Slapstick \n" << " 5. Mockumentary \n";
						std::cout << "\n Enter your preferred genre here (1-5): ";
						std::getline(std::cin, comedySubGenreString);

						while (comedySubGenreString != "1" && comedySubGenreString != "2" && comedySubGenreString != "3" && comedySubGenreString != "4"
							&& comedySubGenreString != "5")
						{
							std::cout << "\n Enter a valid response (1-5): ";
							std::getline(std::cin, comedySubGenreString);
						}

						int comedySubGenreInt = stoi(comedySubGenreString);

						if (comedySubGenreInt == 1 || comedySubGenreInt == 2 || comedySubGenreInt == 3 || comedySubGenreInt == 4 || comedySubGenreInt == 5)
						{
							switch (comedySubGenreInt)
							{
							case 1: 
							{
								//british comedy 
								randomGen.setMovieNames({ "Monty Python and the Holy Grail (1975)", "Monty Python's Life of Brian (1979)", "Snatch (2000)",
									"The World's End (2013)", "An American Werewolf in London (1981)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV(); 

								break; 
							}
							case 2: 
							{
								//dark comedy 
								randomGen.setMovieNames({ "The Lobster (2015)", "Ghost Busters (1984)", "The Grand Budapest Hotel (2014)",
									"The Life Aquatic with Steve Zissou (2004)", "Memories of Murder (2003)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV(); 

								break; 
							}
							case 3: 
							{
								//satirical comedy 
								randomGen.setMovieNames({ "Parasite (2019)", "Swiss Army Man (2016)", "Everything Everywhere All at Once (2022)",
									"American Psycho (2000)", "Marie Antoinette (2006)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV();  

								break; 
							}
							case 4: 
							{
								//slapstick 
								randomGen.setMovieNames({ "Mon Oncle (1958)", "What about Bob? (1991)", "The Champion (1915)", "The Kid (1921)",
									"The Cook (1918)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV(); 

								break; 
							}
							case 5: 
							{
								//mockumentary 
								randomGen.setMovieNames({ "What We Do in the Shadows (2014)",
									"Borat: Cultural Learnings of America for Make Benefit Glorious Nation of Kazakhstan (2006)", "Walk Hard: The Dewey Cox Story (2007)",
									"Dark Side of the Moon (2002)", "I'm Still Here (2010)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV(); 

								break; 
							}
							}
						}
						break; 
					}
					case 5: 
					{
						std::string fantasySubGenreString;
						std::cout << "\n I can completely relate, I want to escape to a fantastic land as well at times. Let's choose your form of escapism.\n";
						std::cout << " You can choose from these subgenres: \n\n";
						std::cout << " 1. Superhero \n" << " 2. Magic Realism \n" << " 3. Epic Fantasy \n" << " 4. Fairy Tales \n" << " 5. Dark Fantasy \n";
						std::cout << "\n Enter you preferred genre here (1-5): ";
						std::getline(std::cin, fantasySubGenreString);

						while (fantasySubGenreString != "1" && fantasySubGenreString != "2" && fantasySubGenreString != "3" && fantasySubGenreString != "4" &&
							fantasySubGenreString != "5")
						{
							std::cout << "\n Enter a valid response (1-5): ";
							std::getline(std::cin, fantasySubGenreString);
						}

						int fantasySubGenreInt = stoi(fantasySubGenreString);

						if (fantasySubGenreInt == 1 || fantasySubGenreInt == 2 || fantasySubGenreInt == 3 || fantasySubGenreInt == 4 || fantasySubGenreInt == 5)
						{
							switch (fantasySubGenreInt)
							{
							case 1: 
							{
								//superhero 
								randomGen.setMovieNames({ "Dr. Strange in the Multiverse of Madness (2022)", "Spider-Man: No Way Home (2021)",
									"Captain America: The First Avenger (2011)", "Iron Man (2008)", "The Batman (2022)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV(); 

								break; 
							} 
							case 2: 
							{
								//magic realism 
								randomGen.setMovieNames({ "Midnight in Paris (2011)", "Being John Malkovich (1999)", "Edward Scissorhands (1990)",
									"Groundhog Day (1993)", "Where the Wild Things Are (2009)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV();  

								break; 
							}
							case 3: 
							{
								//epic fantasy 
								randomGen.setMovieNames({ "Willow (1988)", "The Northman (2022)", "The Green Knight (2021)",
									"The Hobbit: An Unexpected Journey (2012)", "Harry Potter and the Sorcerer's Stone (2001)" }); 
								randomGen.getMovieNames();  
								randomGen.RandomGenMandTV();  
								 
								break; 
							} 
							case 4: 
							{
								//fairy tales 
								randomGen.setMovieNames({ "The Princess Bride (1987)", "Ella Enchanted (2004)", "Maleficent (2014)",
									"Peter Pan (1953)", "Mulan (1998)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV();  

								break; 
							}
							case 5: 
							{
								//dark fantasy 
								randomGen.setMovieNames({ "Pan's Labyrinth (2006)", "Labyrinth (1986)", "Sleepy Hollow (1999)",
									"Beetlejuice (1988)", "Coraline (2009)" }); 
								randomGen.getMovieNames(); 
								randomGen.RandomGenMandTV(); 

								break; 
							}
							}
						}

						break; 
					}
					}
				}
				break; 
			} 
			case 2: 
			{
				std::string tvShowGenreChoiceString;
				std::cout << "\n Thank you for using the TV show generator!! Let's choose your TV show.\n\n";
				std::cout << " What genre are you in the mood for?\n";
				std::cout << " You can choose from: \n\n";
				std::cout << " 1. Comedy \n" << " 2. Romance \n" << " 3. Horror \n" << " 4. Fantasy \n" << " 5. Action \n";
				std::cout << "\n Enter your preferred genre here (1-5): ";
				std::getline(std::cin, tvShowGenreChoiceString);

				while (tvShowGenreChoiceString != "1" && tvShowGenreChoiceString != "2" && tvShowGenreChoiceString != "3" &&
					tvShowGenreChoiceString != "4" && tvShowGenreChoiceString != "5")
				{
					std::cout << "\n Enter a valid response (1-5): ";
					std::getline(std::cin, tvShowGenreChoiceString);
				}

				int tvShowGenreChoiceInt = stoi(tvShowGenreChoiceString);

				if (tvShowGenreChoiceInt == 1 || tvShowGenreChoiceInt == 2 || tvShowGenreChoiceInt == 3 || tvShowGenreChoiceInt == 4
					|| tvShowGenreChoiceInt == 5)
				{
					switch (tvShowGenreChoiceInt)
					{
					case 1: 
					{
						//comedy 
						randomGen.setMovieNames({ "Good Omens (2019)", "Barry (2018-2022)", "The Office (2005-2013)",
							"Brooklyn Nine-Nine (2013-2022)", "Atlanta (2016-2022)" }); 
						randomGen.getMovieNames(); 
						randomGen.RandomGenMandTV();  

						break; 
					}
					case 2: 
					{
						//romance 
						randomGen.setMovieNames({ "Our Flag Means Death (2022)", "Killing Eve (2018-2022)", "Normal People (2020)",
							"Heartstopper (2022)", "Gentleman Jack (2019-2022)" }); 
						randomGen.getMovieNames(); 
						randomGen.RandomGenMandTV(); 

						break; 
					}
					case 3: 
					{
						//horror 
						randomGen.setMovieNames({ "Sherlock (2010-2017)", "Hannibal (2013-2015)", "Dracula (2020)", "American Horror Story (2011-2021)",
							"The Haunting of Bly Manor (2020)" }); 
						randomGen.getMovieNames(); 
						randomGen.RandomGenMandTV(); 

						break; 
					}
					case 4: 
					{
						//fantasy 
						randomGen.setMovieNames({ "What We Do in the Shadows (2019-2022)", "Dr. Who (1963-2022)", "Love Death + Robots (2019-2022)",
							"Loki (2021)", "Twin Peaks (1990-2017)" }); 
						randomGen.getMovieNames(); 
						randomGen.RandomGenMandTV(); 

						break; 
					}
					case 5: 
					{
						//action 
						randomGen.setMovieNames({ "Stranger Things (2016-2022)", "The Queen's Gambit (2020)", "The Boys (2019-2022)",
							"Cowboy Bebop (1998)", "Peaky Blinders (2013-2022)" }); 
						randomGen.getMovieNames(); 
						randomGen.RandomGenMandTV(); 

						break; 
					}
					}
				}

				break; 
			}
			case 3: 
			{
				std::cout << "                                         See you next time!\n\n\n";
				return 0;
			}
			}
		}
		std::cin.clear(); 
	}

	return 0; 
} 
