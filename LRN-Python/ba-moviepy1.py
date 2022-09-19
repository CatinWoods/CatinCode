# This file is about some basic operations with moviepy

# ---cut line---cut line---cut line---cut line---cut line---

# (1) Concatenate clips
''';
from moviepy.editor import VideoFileClip, concatenate_videoclips
clip1 = VideoFileClip( "video01.mp4")
clip2 = VideoFileClip( "video02.mp4")
clip3 = VideoFileClip( "video03.mp4")
final_clip = concatenate_videoclips( [clip1,  clip1])
final_clip.write_videofile("video01-03contenation.mp4")
'''

# (2) Stack clips
from moviepy.editor import VideoFileClip, clips_array, vfx
clip1 = VideoFileClip("video01.mp4").margin(10)
clip2 = clip1.fx( vfx.mirror_x)
clip3 = clip1.fx( vfx.mirror_y)
clip4 = clip1.resize(0.60)
final_clip = clips_array([[clip1, clip2], [clip3, clip4]])
final_clip.resize( width = 480).write_videofile( "my_stack.mp4")































