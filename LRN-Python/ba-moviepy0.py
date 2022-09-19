# === What can moviepy do?
'...'

# === How moviepy works?
'Moviepy uses the software to read and to export video and audio files;
It also optionally uses ImageMagick to generate texts and write GIF files;
The processing of the different media is ensured by Python\'s fast numerical library Numpy;
Advanced effects and enchancements use some of Python\'s numerous image processing libraries (PIL, Scikit-image, scipy, etc...)'




# === Advantages of moviepy, compared with other tools
'portable: the code used very common software(Nimpy and FFMPEG) and run on almost any machine with almost any version of Python;'

# === Limitations of moviepy, compared with other tools
'moviepy cannot (yet) stream videos (read from a webcam, or render a video live on a distant machine), and is not really designed for video processing involving many successive frames of a movie (like video stablization);
there may be memory problems if using many video, audio, andn image sources at the same time (>100);'




#--------cut line-------cut line---- cut line-------cut line-------
'''
Below is a code example from the official site of MoviePy,
Put these contents in a .py file, and use the 'python310 filename.py' command to run the code.

But there are some errors when I'm doing th
'''

# import everything needed to edit video cips
from moviepy.editor import *

# load filename.mp4, 
# and select the subclip 00:00:50 - 00:00:60
clip = VideoFileClip('./video00.mp4').subclip(20,30)

# reduce the audio volume (volume * 0.8)
clip = clip.volumex(0.8)

# generate a text clip.
# and customize the font, color, etc.
txt_clip = TextClip("It's video00", fontsize=70, color='white')

# say that you want it to appear 10s 
# and ...at the center of the screen
txt_clip = txt_clip.set_pos('center').set_duration(10)

# overlay the text clip on the first video clip
video = CompositeVideoClip([clip, txt_clip])

# write the result to a file
video.write_videofile("video00_edited.webm")


'''
Error []: The system cannot find the file specified
Hints []: The error can be due to the fact that ImageMagick is not installed oon your computer, or (for Windows users) that you didn't specifly the path to the ImageMagick binary in file conf.py, or that the path you specified is incorrect.

Solution []: https://stackoverflow.com/questions/51928807/moviepy-cant-detect-imagemagick-binary-on-windows
    step1--Install 'ImageMagick' manually: https://imagemagick.org/script/download.php#windows
    step2--Open '...\Python310\Lib\site-packages\moviepy\config_default.py'
    step3--Locate the item 'IMAGEMAGICK_BINARY', rewrite this content: 
       ' IMAGEMAGICK_BINRAY= 'D:\A-SOFTWARES\A4-Develop_Tools\ImageMagick-7.1.0-Q16-HDRI\magick.exe' '
'''
























