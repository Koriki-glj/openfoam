$ transformPoints -help

Usage: D:\OpenFOAM-V2006\v2006\msys64\home\ofuser\OpenFOAM\OpenFOAM-v2006\platforms\linux64MingwDPInt32Opt\bin\transformPoints.exe [OPTIONS]
Options:
  -case <dir>       Specify case directory to use (instead of the cwd)
  -decomposeParDict <file>
                    Use specified file for decomposePar dictionary
  -origin <point>   Use specified <point> as origin for rotations
  -parallel         Run in parallel
  -region <name>    Specify alternative mesh region
  -rollPitchYaw <vector>
                    Rotate by '(roll pitch yaw)' degrees
  -rotate <(vectorA vectorB)>
                    Rotate from <vectorA> to <vectorB> - eg, '((1 0 0) (0 0
                    1))'
  -rotate-angle <(vector scalar)>
                    Rotate <angle> degrees about <vector> - eg, '((1 0 0) 45)'
  -rotateFields     Read and transform vector and tensor fields too
  -scale <scalar | vector>
                    Scale by the specified amount - Eg, for uniform [mm] to [m]
                    scaling use either '(0.001 0.001 0.001)' or simply '0.001'
  -time <time>      Specify the time to search from and apply the transformation
                    (default is latest)
  -translate <vector>
                    Translate by specified <vector> - eg, '(1 0 0)' before
                    rotations
  -yawPitchRoll <vector>
                    Rotate by '(yaw pitch roll)' degrees
  -doc              Display documentation in browser
  -help             Display short help and exit
  -help-full        Display full help and exit

Transform (translate / rotate / scale) mesh points.
Note: roll=rotate about x, pitch=rotate about y, yaw=rotate about z

Using: OpenFOAM-v2006 (2006) - visit www.openfoam.com
Build: b45f8f6f58-20200629
Arch:  LSB;label=32;scalar=64
