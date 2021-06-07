# Sokpop Community Jam May 2021
## Theme: Sokpop Bootleg
Make a bootleg version of a Sokpop game.

# Pyramida Battle Post-Mortem
## Overview
I haven't played a lot of Sokpop games, but I loved [Pyramida](https://sokpop.itch.io/pyramida) and have been thinking about RTS games recently, so I decided to try remaking the game in the Unreal Engine and seeing where that went.  I downscaled multiple times and ended up focusing on unit control and combat.

## What went Right
1) Quick pivot.
When I realized that development was shifting from resource management to micro-unit control and combat, I was able to quickly make the shift.

2) Custom models AND animations; Imported from Blender to UE4
2b) And made our first custom animation state machine in UE4.

## What went Wrong
1) Overscoped.
Pyramida was developed by 1 person in two months as full time job.  If we assume 8 weeks, 4 hrs a day, 5 days a week, that's 160 hours.
I had 5 weeks, average of (let's say) 4 days a week, and 2 hours a day.  That's 40 hrs of development.  Add onto that the fully 3D nature of 'Battle' and you have a disaster waiting to happen.

2) Shifting Priorities
The early design was looking to make a first 10-20 minutes version of the full game.  It's all about resource collection and management.  I then spent a ton of time making a skeleton that could move around and attack.  This forced a focus shift from building and resources to combat.

3) Missing features
No selection box for click and drag.
No sound effects.

4) Buggy and unpolished.
Skeletons still rotate when dead. (The villagers do too)
Animations are wonky/off center and do not match up with actions all the time.

5) Model imports were rough.  
How do I export multiple models that share a skeleton/animation? At least static meshes can be exported in a single file.

## Project Management Lessons Learned
This project emphasised the need for a schedule breakdown, both for time available and the length of time for each task.

## New Technology
1) I finally figured out how to properly use event dispatchers in UE4's Blueprints.
2) I now know how to make the basics of an RTS.  I should go back and make a plugin based on this to speed up the start of next RTS Project.

## Things to Consider
Should buildings and units share a common parent or both implement common interfaces?
