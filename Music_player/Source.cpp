#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include<iostream>

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(300, 300), ":<");

    sf::Music infinity,goth,help,moon,haunted,perfect,revenge,star;
    sf::Color color = sf::Color::Cyan;
    sf::Font font;
    sf::Text text, i1, i2, i3, i4, i5, i6, i7, i8;
    sf::Text m1, m2, m3, m4, m5, m6, m7, m8;
    sf::Text b1, b2, b3, b4, b5, b6, b7, b8;
    sf::Text g1, g2, g3, g4, g5, g6, g7, g8;
    sf::Text e1, e2, e3, e4, e5, e6, e7, e8;

    int x = 1, a = 1000, k = 1, l = 1;
    int heart = 0;
        
    //font.loadFromFile("G:\Junko\hm\Animation\Fonts\LEMONMILK-Light.otf");

    if (!font.loadFromFile("Fonts/ostrich-regular.ttf"))
    {
        throw("No FONT FOUND");
    }

    infinity.openFromFile("Music/INFINITY.ogg");  goth.openFromFile("Music/GOTH.ogg"); help.openFromFile("Music/HELP.ogg"); moon.openFromFile("Music/MOON.ogg"); haunted.openFromFile("Music/HAUNTED.ogg"); perfect.openFromFile("Music/PERFECT.ogg"); revenge.openFromFile("Music/REVENGE.ogg"); star.openFromFile("Music/SPOTLIGHT.ogg");
    infinity.setVolume(50); goth.setVolume(50); help.setVolume(50); moon.setVolume(50); haunted.setVolume(50); perfect.setVolume(50); revenge.setVolume(50); star.setVolume(50);
   
    cout << "I like nr.5 \n"<<endl;
    cout << "|(arrow keys)\n";
    cout << "|\n";
    cout << "| Vol - UP/Down  \n";
    cout << "| Forward/Rewind - Left/Right \n";
    cout << endl;
    cout << "|Song list : \n";
    cout << "|\n";

    cout << "|1. Jaymes Young - Infinity (Lieless remix) \n";
    cout << "|2. Sidewalks and Skeletons - Goth \n";
    cout << "|3. Ezekiel - help_urself \n";
    cout << "|4. suisside - dark side of the moon  \n";
    cout << "|5. Laura Les - haunted (slowed + reverb) \n";
    cout << "|6. Mareux - The Perfect Girl \n";
    cout << "|7. xxxtentacion - revenge (slowed & reverb) \n";
    cout << "|8. ";

    text.setFont(font); i1.setFont(font); i2.setFont(font); i3.setFont(font); i4.setFont(font); i5.setFont(font); i6.setFont(font); i7.setFont(font); i8.setFont(font);
    text.setCharacterSize(120); i1.setCharacterSize(90); i2.setCharacterSize(90); i3.setCharacterSize(90); i4.setCharacterSize(90); i5.setCharacterSize(90); i6.setCharacterSize(90); i7.setCharacterSize(90); i8.setCharacterSize(90);
    i1.setPosition(15,-55); i2.setPosition(50, -55); i3.setPosition(85, -55); i4.setPosition(120, -55); i5.setPosition(155, -55); i6.setPosition(190, -55); i7.setPosition(225, -55); i8.setPosition(260, -55);
    i1.setString("-"); i2.setString("-"); i3.setString("-"); i4.setString("-"); i5.setString("-"); i6.setString("-"); i7.setString("-"); i8.setString("-");
    

    m1.setFont(font); m2.setFont(font); m3.setFont(font); m4.setFont(font); m5.setFont(font); m6.setFont(font); m7.setFont(font); m8.setFont(font);
    m1.setCharacterSize(90); m2.setCharacterSize(90); m3.setCharacterSize(90); m4.setCharacterSize(90); m5.setCharacterSize(90); m6.setCharacterSize(90); m7.setCharacterSize(90); m8.setCharacterSize(90);
    m1.setPosition(15, 235); m2.setPosition(50, 235); m3.setPosition(85, 235); m4.setPosition(120, 235); m5.setPosition(155, 235); m6.setPosition(190, 235); m7.setPosition(225, 235); m8.setPosition(260, 235);
    m1.setString("-"); m2.setString("-"); m3.setString("-"); m4.setString("-"); m5.setString("-"); m6.setString("-"); m7.setString("-"); m8.setString("-");

    b1.setFont(font); b2.setFont(font); b3.setFont(font); b4.setFont(font); b5.setFont(font); b6.setFont(font); b7.setFont(font); b8.setFont(font);
    b1.setCharacterSize(40); b2.setCharacterSize(40); b3.setCharacterSize(40); b4.setCharacterSize(40); b5.setCharacterSize(40); b6.setCharacterSize(40); b7.setCharacterSize(40); b8.setCharacterSize(40);
    b1.setString("|"); b2.setString("|"); b3.setString("|"); b4.setString("|"); b5.setString("|"); b6.setString("|"); b7.setString("|"); b8.setString("|");
    b1.setPosition(5, 0); b2.setPosition(5, 35); b3.setPosition(5, 70); b4.setPosition(5, 105); b5.setPosition(5, 140); b6.setPosition(5, 175); b7.setPosition(5, 210); b8.setPosition(5, 245);

    g1.setFont(font); g2.setFont(font); g3.setFont(font); g4.setFont(font); g5.setFont(font); g6.setFont(font); g7.setFont(font); g8.setFont(font);
    g1.setCharacterSize(40); g2.setCharacterSize(40); g3.setCharacterSize(40); g4.setCharacterSize(40); g5.setCharacterSize(40); g6.setCharacterSize(40); g7.setCharacterSize(40); g8.setCharacterSize(40);
    g1.setString("|"); g2.setString("|"); g3.setString("|"); g4.setString("|"); g5.setString("|"); g6.setString("|"); g7.setString("|"); g8.setString("|");
    g1.setPosition(295, 0); g2.setPosition(295, 35); g3.setPosition(295, 70); g4.setPosition(295, 105); g5.setPosition(295, 140); g6.setPosition(295, 175); g7.setPosition(295, 210); g8.setPosition(295, 245);

    e1.setFont(font); e1.setCharacterSize(40); e1.setPosition(105, 130); e1.setString(" infinity ");
    e2.setFont(font); e2.setCharacterSize(40); e2.setPosition(115, 130); e2.setString(" goth ");
    e3.setFont(font); e3.setCharacterSize(40); e3.setPosition(120, 130); e3.setString(" help ");
    e4.setFont(font); e4.setCharacterSize(40); e4.setPosition(115, 130); e4.setString(" moon ");
    e5.setFont(font); e5.setCharacterSize(40); e5.setPosition(95, 130); e5.setString(" haunted ");
    e6.setFont(font); e6.setCharacterSize(40); e6.setPosition(100, 130); e6.setString(" perfect ");
    e7.setFont(font); e7.setCharacterSize(40); e7.setPosition(100, 130); e7.setString(" revenge ");
    e8.setFont(font); e8.setCharacterSize(40); e8.setPosition(87, 130); e8.setString(" spotlight ");

    sf::Clock clock, clock1, clock2;
    sf::Time elapsed, elapsed1, elapsed2;
   
                
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::EventType::KeyPressed)
            {
                if (event.key.code == sf::Keyboard::Key::Up)
                {
                   
                    infinity.setVolume(infinity.getVolume() + 10); 
                    goth.setVolume(goth.getVolume() + 10);
                    help.setVolume(help.getVolume() + 10); 
                    moon.setVolume(moon.getVolume() + 10); 
                    haunted.setVolume(haunted.getVolume() + 10); 
                    perfect.setVolume(perfect.getVolume() + 10); 
                    revenge.setVolume(revenge.getVolume() + 10); 
                    star.setVolume(star.getVolume() + 10); 
                }

                if (event.key.code == sf::Keyboard::Key::Down)
                {
                    if (infinity.getVolume() >= 10) { infinity.setVolume(infinity.getVolume() - 10); }
                    if (goth.getVolume() >= 10) { goth.setVolume(goth.getVolume() - 10); }
                    if (help.getVolume() >= 10) { help.setVolume(help.getVolume() - 10); }
                    if (moon.getVolume() >= 10) { moon.setVolume(moon.getVolume() - 10); }
                    if (haunted.getVolume() >= 10) { haunted.setVolume(haunted.getVolume() - 10); }
                    if (perfect.getVolume() >= 10) { perfect.setVolume(perfect.getVolume() - 10); }
                    if (revenge.getVolume() >= 10) { revenge.setVolume(revenge.getVolume() - 10); }
                    if (star.getVolume() >= 10) { star.setVolume(star.getVolume() - 10); }
                }

                if (event.key.code == sf::Keyboard::Key::Right)
                {
                    auto newPos = infinity.getPlayingOffset() + sf::seconds(10); infinity.setPlayingOffset(newPos);
                    newPos = goth.getPlayingOffset() + sf::seconds(10); goth.setPlayingOffset(newPos);
                    newPos = help.getPlayingOffset() + sf::seconds(10); help.setPlayingOffset(newPos);
                    newPos = moon.getPlayingOffset() + sf::seconds(10); moon.setPlayingOffset(newPos);
                    newPos = haunted.getPlayingOffset() + sf::seconds(10); haunted.setPlayingOffset(newPos);
                    newPos = perfect.getPlayingOffset() + sf::seconds(10); perfect.setPlayingOffset(newPos);
                    newPos = revenge.getPlayingOffset() + sf::seconds(10); revenge.setPlayingOffset(newPos);
                    newPos = star.getPlayingOffset() + sf::seconds(10); star.setPlayingOffset(newPos);
                }

                if (event.key.code == sf::Keyboard::Key::Left)
                {
                    auto newPos = infinity.getPlayingOffset() - sf::seconds(10); if (newPos.asSeconds() <= 0.0f) newPos = sf::seconds(0); infinity.setPlayingOffset(newPos);
                    newPos = goth.getPlayingOffset() - sf::seconds(10); if (newPos.asSeconds() <= 0.0f) newPos = sf::seconds(0); goth.setPlayingOffset(newPos);
                    newPos = help.getPlayingOffset() - sf::seconds(10); if (newPos.asSeconds() <= 0.0f) newPos = sf::seconds(0); help.setPlayingOffset(newPos);
                    newPos = moon.getPlayingOffset() - sf::seconds(10); if (newPos.asSeconds() <= 0.0f) newPos = sf::seconds(0); moon.setPlayingOffset(newPos);
                    newPos = haunted.getPlayingOffset() - sf::seconds(10); if (newPos.asSeconds() <= 0.0f) newPos = sf::seconds(0); haunted.setPlayingOffset(newPos);
                    newPos = perfect.getPlayingOffset() - sf::seconds(10); if (newPos.asSeconds() <= 0.0f) newPos = sf::seconds(0); perfect.setPlayingOffset(newPos);
                    newPos = revenge.getPlayingOffset() - sf::seconds(10); if (newPos.asSeconds() <= 0.0f) newPos = sf::seconds(0); revenge.setPlayingOffset(newPos);
                    newPos = star.getPlayingOffset() - sf::seconds(10); if (newPos.asSeconds() <= 0.0f) newPos = sf::seconds(0); star.setPlayingOffset(newPos);
                }
            }
        }

        window.clear();


       /* i1.setString("-"); i2.setString("-"); i3.setString("-"); i4.setString("-"); i5.setString("-"); i6.setString("-"); i7.setString("-"); i8.setString("-");
        window.draw(i1); window.draw(i2); window.draw(i3); window.draw(i4); window.draw(i5); window.draw(i6); window.draw(i7); window.draw(i8);*/

        elapsed = clock.getElapsedTime();
        elapsed1 = clock1.getElapsedTime();
        elapsed2 = clock2.getElapsedTime();

        i1.setFillColor(color); i2.setFillColor(color); i3.setFillColor(color); i4.setFillColor(color); i5.setFillColor(color); i6.setFillColor(color); i7.setFillColor(color); i8.setFillColor(color);
        m1.setFillColor(color); m2.setFillColor(color); m3.setFillColor(color); m4.setFillColor(color); m5.setFillColor(color); m6.setFillColor(color); m7.setFillColor(color); m8.setFillColor(color);
        b1.setFillColor(color); b2.setFillColor(color); b3.setFillColor(color); b4.setFillColor(color); b5.setFillColor(color); b6.setFillColor(color); b7.setFillColor(color); b8.setFillColor(color);
        g1.setFillColor(color); g2.setFillColor(color); g3.setFillColor(color); g4.setFillColor(color); g5.setFillColor(color); g6.setFillColor(color); g7.setFillColor(color); g8.setFillColor(color);
        e1.setFillColor(color); e2.setFillColor(color); e3.setFillColor(color); e4.setFillColor(color); e5.setFillColor(color); e6.setFillColor(color); e7.setFillColor(color); e8.setFillColor(color);

       
        

        if (elapsed.asMilliseconds() >= 0 && elapsed.asMilliseconds() <= 1000)
        {
            window.draw(i1);
            window.draw(m8);
        }

        if (elapsed.asMilliseconds() >= 125 && elapsed.asMilliseconds() <= 1125)
        {            
            window.draw(i2);
            window.draw(m7);
        }
        if (elapsed.asMilliseconds() >= 250 && elapsed.asMilliseconds() <= 1250)
        {
            window.draw(i3);
            window.draw(m6);
        }
        if (elapsed.asMilliseconds() >= 375 && elapsed.asMilliseconds() <= 1373)
        {
            window.draw(i4);
            window.draw(m5);
        }
        if (elapsed.asMilliseconds() >= 500 && elapsed.asMilliseconds() <= 1500)
        {
            window.draw(i5);
            window.draw(m4);
        }
        if (elapsed.asMilliseconds() >= 625 && elapsed.asMilliseconds() <= 1625)
        {
            window.draw(i6);
            window.draw(m3);
        }
        if (elapsed.asMilliseconds() >= 750 && elapsed.asMilliseconds() <= 1750)
        {
            window.draw(i7);
            window.draw(m2);
        }
        if (elapsed.asMilliseconds() >= 875 && elapsed.asMilliseconds() <= 1875)
        {
            window.draw(i8);
            window.draw(m1);
        }

        //=========================================================================================

        if (elapsed1.asMilliseconds() >= 0 + a && elapsed1.asMilliseconds() <= 1000 + a)
        {
            window.draw(b8);
            window.draw(g1);
        }

        if (elapsed1.asMilliseconds() >= 125 + a && elapsed1.asMilliseconds() <= 1125 + a)
        {
            window.draw(b7);
            window.draw(g2);
        }
        if (elapsed1.asMilliseconds() >= 250 + a && elapsed1.asMilliseconds() <= 1250 + a)
        {
            window.draw(b6);
            window.draw(g3);
        }
        if (elapsed1.asMilliseconds() >= 375 + a && elapsed1.asMilliseconds() <= 1373 + a)
        {
            window.draw(b5);
            window.draw(g4);
        }
        if (elapsed1.asMilliseconds() >= 500 + a && elapsed1.asMilliseconds() <= 1500 + a)
        {
            window.draw(b4);
            window.draw(g5);
        }
        if (elapsed1.asMilliseconds() >= 625 + a && elapsed1.asMilliseconds() <= 1625 + a)
        {
            window.draw(b3);
            window.draw(g6);
        }
        if (elapsed1.asMilliseconds() >= 750 + a && elapsed1.asMilliseconds() <= 1750 + a)
        {
            window.draw(b2);
            window.draw(g7);
        }
        if (elapsed1.asMilliseconds() >= 875 + a && elapsed1.asMilliseconds() <= 1875 + a)
        {
            window.draw(b1);
            window.draw(g8);
        }


        //=========================================================================================

        if (elapsed2.asMilliseconds() >= 0)
        {
            color = sf::Color::White;
           
        }
        if (elapsed2.asMilliseconds() >= 240)
        {
            color = sf::Color::Cyan;
        }
        if (elapsed2.asMilliseconds() >= 500)
        {
            color = sf::Color::Yellow;
        }
        if (elapsed2.asMilliseconds() >= 745)
        {
            color = sf::Color::Magenta;
        }

        if (elapsed2.asSeconds() >= 1)
        {
            clock2.restart();
        }

        //======================================================================================

        if(elapsed.asSeconds() >= 2)
        {
            clock.restart();
        }


        if (x == 1)
        {
            if (elapsed1.asSeconds() >= 3)
            {
                x = 0; a = 0;
                clock1.restart();
            }
        }
        else
        {
            if (elapsed1.asSeconds() >= 2)
            {
                clock1.restart();
            }
        }


        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Num1))
        {
            k = 1; l = 1; infinity.stop(); goth.stop(); help.stop(); moon.stop(); haunted.stop(); perfect.stop(); revenge.stop(); star.stop();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Num2))
        {
            k = 2; l = 2; infinity.stop(); goth.stop(); help.stop(); moon.stop(); haunted.stop(); perfect.stop(); revenge.stop(); star.stop();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Num3))
        {
            k = 3; l = 3; infinity.stop(); goth.stop(); help.stop(); moon.stop(); haunted.stop(); perfect.stop(); revenge.stop(); star.stop();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Num4))
        {
            k = 4; l = 4; infinity.stop(); goth.stop(); help.stop(); moon.stop(); haunted.stop(); perfect.stop(); revenge.stop(); star.stop();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Num5))
        {
            k = 5; l = 5; infinity.stop(); goth.stop(); help.stop(); moon.stop(); haunted.stop(); perfect.stop(); revenge.stop(); star.stop();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Num6))
        {
            k = 6; l = 6; infinity.stop(); goth.stop(); help.stop(); moon.stop(); haunted.stop(); perfect.stop(); revenge.stop(); star.stop();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Num7))
        {
            k = 7; l = 7; infinity.stop(); goth.stop(); help.stop(); moon.stop(); haunted.stop(); perfect.stop(); revenge.stop(); star.stop();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::G))
        {
            k = 8; l = 8; infinity.stop(); goth.stop(); help.stop(); moon.stop(); haunted.stop(); perfect.stop(); revenge.stop(); star.stop();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Num8))
        {
            if (heart == 0)
            {
                cout << "<3"<<endl;
                heart = 1;
            }
        }

        

        if (k == 1) { infinity.play(); k = 0; }  if (l == 1) { window.draw(e1);}
        if (k == 2) { goth.play(); k = 0; } if (l == 2) { window.draw(e2); }
        if (k == 3) { help.play(); k = 0; } if (l == 3) { window.draw(e3); }
        if (k == 4) { moon.play(); k = 0; } if (l == 4) { window.draw(e4); }
        if (k == 5) { haunted.play(); k = 0; } if (l == 5) { window.draw(e5); }
        if (k == 6) { perfect.play(); k = 0; } if (l == 6) { window.draw(e6); }
        if (k == 7) { revenge.play(); k = 0; } if (l == 7) { window.draw(e7); }
        if (k == 8) { star.play(); k = 0; } if (l == 8) { window.draw(e8); }
       
        window.display();
    }

    return 0;
}