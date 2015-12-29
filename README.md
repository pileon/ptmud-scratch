# PTMUD-scratch

A simple MUD server written in C++ from scratch.

The PTMUD-scratch server belongs in the same family tree as DikuMUD and its descendants.

## License

PTMUD-scratch is licensed under the [MIT license](https://opensource.org/licenses/MIT).

## Authors and contributors

Joachim Pileborg

### Original authors and contributors

Joachim Pileborg
Johan Rask
Martin Martinez

And others long forgotten.
 
## History

The original PTMUD started its life as a derivative of [CircleMUD](http://www.circlemud.org/), which in turn was a
derivative of [DikuMUD](https://en.wikipedia.org/wiki/DikuMUD).

PTMUD was born in the spring of 1995 when the main author found out that there were MUD servers available to
download and run. It started out as a straight-forward clone of CircleMUD and trying to imitate
[GrimneMUD](http://mudstats.com/World/GrimneMUD) which was what the author and his friends were playing at the time.

During its lifetime PTMUD added many of the features that made GrimneMUD unique, but also many other features, some
that at the time didn't exist in any other MUD (that we knew of). We didn't have many players, but those we had found
PTMUD to be good (if a bit empty) and some even contributed with ideas and areas.

The original source of PTMUD is long gone, and PTMUD is now not even a footnote in the annals of MUD history.

### The name

The name PTMUD comes from the program Joachim was studying at the time: Programvaruteknik (Swedish for software engineering, and shortened to PT).

## Goals of PTMUD-scratch

One of the main goals of making PTMUD-scratch is really very simple: I like to program, and I haven't been doing some major C++ *or* MUD programming in a while, so I simply wanted to do this. ;-)

There are also very few MUD servers being made these days, and I wanted to make one to show that it can still be done, and using "modern" C++ and all the bells and whistles.

## Design and process

None. No really, there's no real design process, or any other "formal" process, involved in the development. Instead I just write code like in "the good old days" but in a very iterative fashion.

Once PTMUD-scratch reaches a certain level of maturity I will probably be start using the GitHub issue tracker to keep track of feature requests, enhancements and bugs (both from myself and others).

## Differences from standard DikuMUD

There are a few major differences between a standard DikuMUD or a DikuMUD derivative, the most visible being the use of C++ as a programming language, with all that the use of a modern object-oriented programming language entails.
There are also other differences, like the permissive license, a fully telnet-compliant network stack, and how the world library is divided and handled.

### The world library

The original DikuMUD and many of its early derivatives used a small set of files to store the world, one file each for the locations, the items, and the zones.

When [MERC 2](https://en.wikipedia.org/wiki/Merc_%28MUD%29) came around it was one of the first to split the world files more logically into "areas", but it still did not do away with the global numbering scheme.

PTMUD-scratch will take a route similar to MERC 2, but go even further. PTMUD-scratch will keep the zone concept, but zones should be part of larger areas, and the global numbering scheme will also go away, "object" numbers will be local inside an area only.

The world database will be stored in one file per area, using a syntax that hopefully should be easier to read and understand than the old DikuMUD (and derivatives) formats, both by humans and the computer.
PTMUD-scratch will not facilitate online creation in the first release, it may be added later.

Some kind of scripting will be included, but there's no decision in what form yet.
