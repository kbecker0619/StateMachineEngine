# CWSW MCU Architecture Support

This project provides standardized support for all supported MCU architectures. 
Where possible, it simply provides a repackaging of the drivers already supplied by a given supplier.

This component "lives" at the bottom of the dependency heirarchy, 
although there may be interactions with various libraries, such as the CWSW Lib module.

Looking "down," this component knows how to talk to the actual MCU.

Looking "up," it provides a (somewhat-)standardized API to users of the MCU.

This component does not know anything about the board that uses the MCU; 
that support is provided by the CWSW Board package.
