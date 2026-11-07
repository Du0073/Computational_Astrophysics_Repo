#define  PHYSICS                        MHD
#define  DIMENSIONS                     2
#define  GEOMETRY                       CYLINDRICAL
#define  BODY_FORCE                     NO
#define  COOLING                        NO
#define  RECONSTRUCTION                 LINEAR
#define  TIME_STEPPING                  RK2
#define  NTRACER                        1
#define  PARTICLES                      NO
#define  USER_DEF_PARAMETERS            4

/* -- physics dependent declarations -- */

#define  EOS                            PVTE_LAW
#define  ENTROPY_SWITCH                 NO
#define  DIVB_CONTROL                   CONSTRAINED_TRANSPORT
#define  BACKGROUND_FIELD               NO
#define  AMBIPOLAR_DIFFUSION            NO
#define  RESISTIVITY                    NO
#define  HALL_MHD                       NO
#define  THERMAL_CONDUCTION             NO
#define  VISCOSITY                      NO
#define  RADIATION                      NO
#define  ROTATING_FRAME                 NO

/* -- user-defined parameters (labels) -- */

#define  USER_PAR_00                    0
#define  USER_PAR_01                    1
#define  USER_PAR_02                    2
#define  USER_PAR_03                    3

/* [Beg] user-defined constants (do not change this line) */


/* [End] user-defined constants (do not change this line) */
