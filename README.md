# A C++ re-implementation of MightyL
MightyL: A Compositional Translation from MITL to Timed Automata


## Building MightyL

```console
$ git clone https://github.com/hsimho/MightyL
$ cd MightyL
```
Then download [ANTLR](https://www.antlr.org/download.html) (complete Java binaries jar) and modify
```set(ANTLR_EXECUTABLE ...)``` in ```CMakeLists.txt``` to point to the jar file.
Then
```
$ mkdir build ; cd build
$ cmake ..
$ make
```

## Cite MightyL 

```latex
@inproceedings{CAV-2017-BrihayeGHM,
	author        = "Thomas Brihaye and Gilles Geeraerts and Hsi-Ming Ho and Benjamin Monmege",
	booktitle     = "{Proceedings of the 29th International Conference on Computer Aided Verification, Part I}",
	doi           = "10.1007/978-3-319-63387-9_21",
	isbn          = "['978-3-319-63386-2', '978-3-319-63387-9']",
	pages         = "421--440",
	publisher     = "{Springer}",
	title         = "{MightyL: A Compositional Translation from MITL to Timed Automata}",
	year          = 2017,
}
```
