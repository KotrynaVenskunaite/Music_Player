
# How to run
After downloading the program you can:

(RECOMMENDED) - Open the folder and run the Music_Player.exe file.

(ALTERNATIVE) - Double click on .vcxproj or open it in Visual Studio. Then run Local Windows Debugger or press F5.

# Instructions
Use num keys to change the song.

Use arrow keys to change Vol. or skip/rewind.

# Mini guide on how to change avalable songs
1. Download the song that you like
2. Convert it to .ogg, you can do this in VLC(media player). This must be done due to SFML not supporting mp3 files.
3. Go to "Music" folder and replace one of the songs with your new one
4. Make sure to rename your new song to the one you replaced it with (you have to do this bc the code loads songs based on their name)
5. After running the program the new song should play in place of the old one (after pressing the coresponding num key)

# Requirements (if ALTERNATIVE was chosen)
1. Download SFML 2.5.1 ( https://www.sfml-dev.org/download/sfml/2.5.1/ )
2. Put the "SFML-2.5.1" file in your (C:) drive

# Easy future use (if ALTERNATIVE was chosen)
After running the program once a debug folder will be created. Copy and paste all "sfml-xyz.dll" and "openal32.dll" files into it, then do the same for
"Fonts" and "Music" folders (not the contents in them, just the folders). you can now run the exe file or a shortcut any time.
