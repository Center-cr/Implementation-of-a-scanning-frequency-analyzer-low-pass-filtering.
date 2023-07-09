/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_5927(char*, char *);
extern void execute_5928(char*, char *);
extern void execute_5929(char*, char *);
extern void execute_5940(char*, char *);
extern void execute_5941(char*, char *);
extern void execute_5942(char*, char *);
extern void execute_5943(char*, char *);
extern void execute_5934(char*, char *);
extern void execute_5935(char*, char *);
extern void execute_5936(char*, char *);
extern void execute_160(char*, char *);
extern void execute_161(char*, char *);
extern void execute_162(char*, char *);
extern void execute_3034(char*, char *);
extern void execute_3035(char*, char *);
extern void execute_3036(char*, char *);
extern void execute_3037(char*, char *);
extern void execute_3049(char*, char *);
extern void execute_3050(char*, char *);
extern void execute_3051(char*, char *);
extern void execute_3052(char*, char *);
extern void execute_3053(char*, char *);
extern void execute_3054(char*, char *);
extern void execute_165(char*, char *);
extern void execute_168(char*, char *);
extern void execute_212(char*, char *);
extern void execute_213(char*, char *);
extern void execute_220(char*, char *);
extern void execute_234(char*, char *);
extern void execute_242(char*, char *);
extern void execute_250(char*, char *);
extern void execute_232(char*, char *);
extern void execute_259(char*, char *);
extern void execute_272(char*, char *);
extern void execute_273(char*, char *);
extern void execute_274(char*, char *);
extern void execute_279(char*, char *);
extern void execute_280(char*, char *);
extern void execute_281(char*, char *);
extern void execute_282(char*, char *);
extern void execute_294(char*, char *);
extern void execute_295(char*, char *);
extern void execute_296(char*, char *);
extern void execute_300(char*, char *);
extern void execute_313(char*, char *);
extern void execute_314(char*, char *);
extern void execute_315(char*, char *);
extern void execute_319(char*, char *);
extern void execute_332(char*, char *);
extern void execute_333(char*, char *);
extern void execute_334(char*, char *);
extern void execute_338(char*, char *);
extern void execute_351(char*, char *);
extern void execute_352(char*, char *);
extern void execute_353(char*, char *);
extern void execute_357(char*, char *);
extern void execute_370(char*, char *);
extern void execute_371(char*, char *);
extern void execute_372(char*, char *);
extern void execute_376(char*, char *);
extern void execute_389(char*, char *);
extern void execute_390(char*, char *);
extern void execute_391(char*, char *);
extern void execute_395(char*, char *);
extern void execute_408(char*, char *);
extern void execute_409(char*, char *);
extern void execute_410(char*, char *);
extern void execute_414(char*, char *);
extern void execute_418(char*, char *);
extern void execute_3004(char*, char *);
extern void execute_3005(char*, char *);
extern void execute_420(char*, char *);
extern void execute_421(char*, char *);
extern void execute_455(char*, char *);
extern void execute_488(char*, char *);
extern void execute_521(char*, char *);
extern void execute_554(char*, char *);
extern void execute_559(char*, char *);
extern void execute_560(char*, char *);
extern void execute_808(char*, char *);
extern void execute_833(char*, char *);
extern void execute_858(char*, char *);
extern void execute_883(char*, char *);
extern void execute_908(char*, char *);
extern void execute_933(char*, char *);
extern void execute_958(char*, char *);
extern void execute_983(char*, char *);
extern void execute_990(char*, char *);
extern void execute_991(char*, char *);
extern void execute_992(char*, char *);
extern void execute_994(char*, char *);
extern void execute_1271(char*, char *);
extern void execute_1272(char*, char *);
extern void execute_1275(char*, char *);
extern void execute_1276(char*, char *);
extern void execute_1277(char*, char *);
extern void execute_1279(char*, char *);
extern void execute_1521(char*, char *);
extern void execute_1522(char*, char *);
extern void execute_1523(char*, char *);
extern void execute_1525(char*, char *);
extern void execute_1767(char*, char *);
extern void execute_1768(char*, char *);
extern void execute_1769(char*, char *);
extern void execute_1771(char*, char *);
extern void execute_2013(char*, char *);
extern void execute_2014(char*, char *);
extern void execute_2015(char*, char *);
extern void execute_2017(char*, char *);
extern void execute_2259(char*, char *);
extern void execute_2260(char*, char *);
extern void execute_2261(char*, char *);
extern void execute_2263(char*, char *);
extern void execute_2505(char*, char *);
extern void execute_2506(char*, char *);
extern void execute_2507(char*, char *);
extern void execute_2509(char*, char *);
extern void execute_2751(char*, char *);
extern void execute_2752(char*, char *);
extern void execute_2753(char*, char *);
extern void execute_2755(char*, char *);
extern void execute_3027(char*, char *);
extern void execute_3028(char*, char *);
extern void execute_3031(char*, char *);
extern void execute_3039(char*, char *);
extern void execute_3040(char*, char *);
extern void execute_3041(char*, char *);
extern void execute_3042(char*, char *);
extern void execute_3043(char*, char *);
extern void execute_3044(char*, char *);
extern void execute_3047(char*, char *);
extern void execute_210(char*, char *);
extern void execute_211(char*, char *);
extern void execute_180(char*, char *);
extern void execute_182(char*, char *);
extern void execute_208(char*, char *);
extern void execute_209(char*, char *);
extern void execute_186(char*, char *);
extern void execute_187(char*, char *);
extern void execute_188(char*, char *);
extern void execute_189(char*, char *);
extern void execute_190(char*, char *);
extern void execute_191(char*, char *);
extern void execute_193(char*, char *);
extern void execute_194(char*, char *);
extern void execute_195(char*, char *);
extern void execute_196(char*, char *);
extern void execute_197(char*, char *);
extern void execute_198(char*, char *);
extern void execute_199(char*, char *);
extern void execute_200(char*, char *);
extern void execute_201(char*, char *);
extern void execute_202(char*, char *);
extern void execute_203(char*, char *);
extern void execute_204(char*, char *);
extern void execute_205(char*, char *);
extern void execute_206(char*, char *);
extern void execute_207(char*, char *);
extern void execute_226(char*, char *);
extern void execute_227(char*, char *);
extern void execute_228(char*, char *);
extern void execute_238(char*, char *);
extern void execute_239(char*, char *);
extern void execute_240(char*, char *);
extern void execute_3015(char*, char *);
extern void execute_3017(char*, char *);
extern void execute_3018(char*, char *);
extern void execute_266(char*, char *);
extern void execute_267(char*, char *);
extern void execute_425(char*, char *);
extern void execute_426(char*, char *);
extern void execute_427(char*, char *);
extern void execute_428(char*, char *);
extern void execute_432(char*, char *);
extern void execute_433(char*, char *);
extern void execute_434(char*, char *);
extern void execute_431(char*, char *);
extern void execute_437(char*, char *);
extern void execute_445(char*, char *);
extern void execute_441(char*, char *);
extern void execute_454(char*, char *);
extern void execute_450(char*, char *);
extern void execute_458(char*, char *);
extern void execute_459(char*, char *);
extern void execute_460(char*, char *);
extern void execute_461(char*, char *);
extern void execute_465(char*, char *);
extern void execute_466(char*, char *);
extern void execute_467(char*, char *);
extern void execute_464(char*, char *);
extern void execute_470(char*, char *);
extern void execute_478(char*, char *);
extern void execute_474(char*, char *);
extern void execute_487(char*, char *);
extern void execute_483(char*, char *);
extern void execute_491(char*, char *);
extern void execute_492(char*, char *);
extern void execute_493(char*, char *);
extern void execute_494(char*, char *);
extern void execute_498(char*, char *);
extern void execute_499(char*, char *);
extern void execute_500(char*, char *);
extern void execute_497(char*, char *);
extern void execute_503(char*, char *);
extern void execute_511(char*, char *);
extern void execute_507(char*, char *);
extern void execute_520(char*, char *);
extern void execute_516(char*, char *);
extern void execute_524(char*, char *);
extern void execute_525(char*, char *);
extern void execute_526(char*, char *);
extern void execute_527(char*, char *);
extern void execute_531(char*, char *);
extern void execute_532(char*, char *);
extern void execute_533(char*, char *);
extern void execute_530(char*, char *);
extern void execute_536(char*, char *);
extern void execute_544(char*, char *);
extern void execute_540(char*, char *);
extern void execute_553(char*, char *);
extern void execute_549(char*, char *);
extern void execute_791(char*, char *);
extern void execute_794(char*, char *);
extern void execute_587(char*, char *);
extern void execute_589(char*, char *);
extern void execute_590(char*, char *);
extern void execute_565(char*, char *);
extern void execute_576(char*, char *);
extern void execute_618(char*, char *);
extern void execute_620(char*, char *);
extern void execute_621(char*, char *);
extern void execute_649(char*, char *);
extern void execute_651(char*, char *);
extern void execute_652(char*, char *);
extern void execute_680(char*, char *);
extern void execute_682(char*, char *);
extern void execute_683(char*, char *);
extern void execute_711(char*, char *);
extern void execute_713(char*, char *);
extern void execute_714(char*, char *);
extern void execute_742(char*, char *);
extern void execute_744(char*, char *);
extern void execute_745(char*, char *);
extern void execute_811(char*, char *);
extern void execute_829(char*, char *);
extern void execute_1000(char*, char *);
extern void execute_1001(char*, char *);
extern void execute_1039(char*, char *);
extern void execute_1269(char*, char *);
extern void execute_1004(char*, char *);
extern void execute_1014(char*, char *);
extern void execute_1007(char*, char *);
extern void execute_1010(char*, char *);
extern void execute_1042(char*, char *);
extern void execute_1044(char*, char *);
extern void execute_1071(char*, char *);
extern void execute_1072(char*, char *);
extern void execute_1073(char*, char *);
extern void execute_1074(char*, char *);
extern void execute_1075(char*, char *);
extern void execute_1076(char*, char *);
extern void execute_1077(char*, char *);
extern void execute_1078(char*, char *);
extern void execute_1079(char*, char *);
extern void execute_1080(char*, char *);
extern void execute_1081(char*, char *);
extern void execute_1082(char*, char *);
extern void execute_1083(char*, char *);
extern void execute_1084(char*, char *);
extern void execute_1085(char*, char *);
extern void execute_1086(char*, char *);
extern void execute_1087(char*, char *);
extern void execute_1262(char*, char *);
extern void execute_1263(char*, char *);
extern void execute_1265(char*, char *);
extern void execute_1130(char*, char *);
extern void execute_1131(char*, char *);
extern void execute_1132(char*, char *);
extern void execute_1133(char*, char *);
extern void execute_1134(char*, char *);
extern void execute_1135(char*, char *);
extern void execute_1136(char*, char *);
extern void execute_1137(char*, char *);
extern void execute_1138(char*, char *);
extern void execute_1139(char*, char *);
extern void execute_1140(char*, char *);
extern void execute_1141(char*, char *);
extern void execute_1142(char*, char *);
extern void execute_1143(char*, char *);
extern void execute_1144(char*, char *);
extern void execute_1145(char*, char *);
extern void execute_1146(char*, char *);
extern void execute_1147(char*, char *);
extern void execute_1148(char*, char *);
extern void execute_1149(char*, char *);
extern void execute_1150(char*, char *);
extern void execute_1151(char*, char *);
extern void execute_1152(char*, char *);
extern void execute_1153(char*, char *);
extern void execute_1154(char*, char *);
extern void execute_1155(char*, char *);
extern void execute_1156(char*, char *);
extern void execute_1157(char*, char *);
extern void execute_1158(char*, char *);
extern void execute_1159(char*, char *);
extern void execute_1160(char*, char *);
extern void execute_1161(char*, char *);
extern void execute_1162(char*, char *);
extern void execute_1163(char*, char *);
extern void execute_1164(char*, char *);
extern void execute_1165(char*, char *);
extern void execute_1166(char*, char *);
extern void execute_1167(char*, char *);
extern void execute_1168(char*, char *);
extern void execute_1169(char*, char *);
extern void execute_1170(char*, char *);
extern void execute_1171(char*, char *);
extern void execute_1172(char*, char *);
extern void execute_1173(char*, char *);
extern void execute_1174(char*, char *);
extern void execute_1175(char*, char *);
extern void execute_1176(char*, char *);
extern void execute_1177(char*, char *);
extern void execute_1178(char*, char *);
extern void execute_1179(char*, char *);
extern void execute_1180(char*, char *);
extern void execute_1181(char*, char *);
extern void execute_1182(char*, char *);
extern void execute_1183(char*, char *);
extern void execute_1184(char*, char *);
extern void execute_1185(char*, char *);
extern void execute_1186(char*, char *);
extern void execute_1187(char*, char *);
extern void execute_1188(char*, char *);
extern void execute_1189(char*, char *);
extern void execute_1190(char*, char *);
extern void execute_1191(char*, char *);
extern void execute_1192(char*, char *);
extern void execute_1193(char*, char *);
extern void execute_1194(char*, char *);
extern void execute_1195(char*, char *);
extern void execute_1196(char*, char *);
extern void execute_1197(char*, char *);
extern void execute_1198(char*, char *);
extern void execute_1199(char*, char *);
extern void execute_1200(char*, char *);
extern void execute_1201(char*, char *);
extern void execute_1202(char*, char *);
extern void execute_1203(char*, char *);
extern void execute_1204(char*, char *);
extern void execute_1205(char*, char *);
extern void execute_1206(char*, char *);
extern void execute_1207(char*, char *);
extern void execute_1208(char*, char *);
extern void execute_1209(char*, char *);
extern void execute_1210(char*, char *);
extern void execute_1211(char*, char *);
extern void execute_1212(char*, char *);
extern void execute_1213(char*, char *);
extern void execute_1214(char*, char *);
extern void execute_1215(char*, char *);
extern void execute_1216(char*, char *);
extern void execute_1217(char*, char *);
extern void execute_1218(char*, char *);
extern void execute_1219(char*, char *);
extern void execute_1220(char*, char *);
extern void execute_1221(char*, char *);
extern void execute_1222(char*, char *);
extern void execute_1223(char*, char *);
extern void execute_1224(char*, char *);
extern void execute_1225(char*, char *);
extern void execute_1226(char*, char *);
extern void execute_1227(char*, char *);
extern void execute_1228(char*, char *);
extern void execute_1229(char*, char *);
extern void execute_1230(char*, char *);
extern void execute_1231(char*, char *);
extern void execute_1232(char*, char *);
extern void execute_1233(char*, char *);
extern void execute_1234(char*, char *);
extern void execute_1235(char*, char *);
extern void execute_1236(char*, char *);
extern void execute_1237(char*, char *);
extern void execute_1238(char*, char *);
extern void execute_1239(char*, char *);
extern void execute_1240(char*, char *);
extern void execute_1241(char*, char *);
extern void execute_1242(char*, char *);
extern void execute_1243(char*, char *);
extern void execute_1244(char*, char *);
extern void execute_1245(char*, char *);
extern void execute_1246(char*, char *);
extern void execute_1247(char*, char *);
extern void execute_1248(char*, char *);
extern void execute_1249(char*, char *);
extern void execute_1250(char*, char *);
extern void execute_1251(char*, char *);
extern void execute_1252(char*, char *);
extern void execute_1253(char*, char *);
extern void execute_1254(char*, char *);
extern void execute_1255(char*, char *);
extern void execute_1256(char*, char *);
extern void execute_1257(char*, char *);
extern void execute_1258(char*, char *);
extern void execute_1259(char*, char *);
extern void execute_2761(char*, char *);
extern void execute_2762(char*, char *);
extern void execute_2806(char*, char *);
extern void execute_2999(char*, char *);
extern void execute_2766(char*, char *);
extern void execute_2769(char*, char *);
extern void execute_5937(char*, char *);
extern void execute_5938(char*, char *);
extern void execute_5939(char*, char *);
extern void execute_3070(char*, char *);
extern void execute_3071(char*, char *);
extern void execute_3072(char*, char *);
extern void execute_5897(char*, char *);
extern void execute_5898(char*, char *);
extern void execute_5899(char*, char *);
extern void execute_5900(char*, char *);
extern void execute_5912(char*, char *);
extern void execute_5913(char*, char *);
extern void execute_5914(char*, char *);
extern void execute_5915(char*, char *);
extern void execute_5916(char*, char *);
extern void execute_5917(char*, char *);
extern void execute_3075(char*, char *);
extern void execute_3078(char*, char *);
extern void execute_3113(char*, char *);
extern void execute_3114(char*, char *);
extern void execute_3121(char*, char *);
extern void execute_3134(char*, char *);
extern void execute_3142(char*, char *);
extern void execute_3150(char*, char *);
extern void execute_3132(char*, char *);
extern void execute_3159(char*, char *);
extern void execute_3172(char*, char *);
extern void execute_3173(char*, char *);
extern void execute_3174(char*, char *);
extern void execute_3179(char*, char *);
extern void execute_3180(char*, char *);
extern void execute_3181(char*, char *);
extern void execute_3182(char*, char *);
extern void execute_3194(char*, char *);
extern void execute_3195(char*, char *);
extern void execute_3196(char*, char *);
extern void execute_3200(char*, char *);
extern void execute_3213(char*, char *);
extern void execute_3214(char*, char *);
extern void execute_3215(char*, char *);
extern void execute_3219(char*, char *);
extern void execute_3232(char*, char *);
extern void execute_3233(char*, char *);
extern void execute_3234(char*, char *);
extern void execute_3238(char*, char *);
extern void execute_3251(char*, char *);
extern void execute_3252(char*, char *);
extern void execute_3253(char*, char *);
extern void execute_3257(char*, char *);
extern void execute_3270(char*, char *);
extern void execute_3271(char*, char *);
extern void execute_3272(char*, char *);
extern void execute_3276(char*, char *);
extern void execute_3289(char*, char *);
extern void execute_3290(char*, char *);
extern void execute_3291(char*, char *);
extern void execute_3295(char*, char *);
extern void execute_3308(char*, char *);
extern void execute_3309(char*, char *);
extern void execute_3310(char*, char *);
extern void execute_3314(char*, char *);
extern void execute_3318(char*, char *);
extern void execute_5867(char*, char *);
extern void execute_5868(char*, char *);
extern void execute_3320(char*, char *);
extern void execute_3321(char*, char *);
extern void execute_3355(char*, char *);
extern void execute_3388(char*, char *);
extern void execute_3421(char*, char *);
extern void execute_3454(char*, char *);
extern void execute_3459(char*, char *);
extern void execute_3460(char*, char *);
extern void execute_3708(char*, char *);
extern void execute_3733(char*, char *);
extern void execute_3758(char*, char *);
extern void execute_3783(char*, char *);
extern void execute_3808(char*, char *);
extern void execute_3833(char*, char *);
extern void execute_3858(char*, char *);
extern void execute_3883(char*, char *);
extern void execute_3890(char*, char *);
extern void execute_3891(char*, char *);
extern void execute_3892(char*, char *);
extern void execute_3894(char*, char *);
extern void execute_4134(char*, char *);
extern void execute_4135(char*, char *);
extern void execute_4138(char*, char *);
extern void execute_4139(char*, char *);
extern void execute_4140(char*, char *);
extern void execute_4142(char*, char *);
extern void execute_4384(char*, char *);
extern void execute_4385(char*, char *);
extern void execute_4386(char*, char *);
extern void execute_4388(char*, char *);
extern void execute_4630(char*, char *);
extern void execute_4631(char*, char *);
extern void execute_4632(char*, char *);
extern void execute_4634(char*, char *);
extern void execute_4876(char*, char *);
extern void execute_4877(char*, char *);
extern void execute_4878(char*, char *);
extern void execute_4880(char*, char *);
extern void execute_5122(char*, char *);
extern void execute_5123(char*, char *);
extern void execute_5124(char*, char *);
extern void execute_5126(char*, char *);
extern void execute_5368(char*, char *);
extern void execute_5369(char*, char *);
extern void execute_5370(char*, char *);
extern void execute_5372(char*, char *);
extern void execute_5614(char*, char *);
extern void execute_5615(char*, char *);
extern void execute_5616(char*, char *);
extern void execute_5618(char*, char *);
extern void execute_5890(char*, char *);
extern void execute_5891(char*, char *);
extern void execute_5894(char*, char *);
extern void execute_5902(char*, char *);
extern void execute_5903(char*, char *);
extern void execute_5904(char*, char *);
extern void execute_5905(char*, char *);
extern void execute_5906(char*, char *);
extern void execute_5907(char*, char *);
extern void execute_5910(char*, char *);
extern void execute_5931(char*, char *);
extern void execute_5932(char*, char *);
extern void execute_5933(char*, char *);
extern void execute_5944(char*, char *);
extern void execute_5945(char*, char *);
extern void execute_5946(char*, char *);
extern void execute_5947(char*, char *);
extern void execute_5948(char*, char *);
extern void transaction_3(char*, char*, unsigned, unsigned, unsigned);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_10(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_11(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_12(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_13(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_14(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_15(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_53(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_57(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_63(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_82(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_84(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_151(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_451(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_454(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_461(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_462(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_611(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_749(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_752(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_759(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_760(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_909(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1047(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1050(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1057(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1058(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1207(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1345(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1348(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1355(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1356(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1505(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1643(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1646(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1653(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1654(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1803(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1941(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1944(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1951(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1952(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2101(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2239(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2242(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2249(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2250(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2399(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2537(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2540(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2547(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2548(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2701(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2848(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2849(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2850(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2851(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2852(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2853(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2891(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2895(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2901(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2920(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2922(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2989(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3261(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3264(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3271(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3272(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3421(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3559(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3562(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3569(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3570(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3719(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3857(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3860(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3867(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3868(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4017(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4155(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4158(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4165(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4166(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4315(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4453(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4456(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4463(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4464(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4613(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4751(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4754(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4761(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4762(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4911(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_5049(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_5052(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_5059(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_5060(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_5209(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_5347(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_5350(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_5357(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_5358(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_5511(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[650] = {(funcp)execute_5927, (funcp)execute_5928, (funcp)execute_5929, (funcp)execute_5940, (funcp)execute_5941, (funcp)execute_5942, (funcp)execute_5943, (funcp)execute_5934, (funcp)execute_5935, (funcp)execute_5936, (funcp)execute_160, (funcp)execute_161, (funcp)execute_162, (funcp)execute_3034, (funcp)execute_3035, (funcp)execute_3036, (funcp)execute_3037, (funcp)execute_3049, (funcp)execute_3050, (funcp)execute_3051, (funcp)execute_3052, (funcp)execute_3053, (funcp)execute_3054, (funcp)execute_165, (funcp)execute_168, (funcp)execute_212, (funcp)execute_213, (funcp)execute_220, (funcp)execute_234, (funcp)execute_242, (funcp)execute_250, (funcp)execute_232, (funcp)execute_259, (funcp)execute_272, (funcp)execute_273, (funcp)execute_274, (funcp)execute_279, (funcp)execute_280, (funcp)execute_281, (funcp)execute_282, (funcp)execute_294, (funcp)execute_295, (funcp)execute_296, (funcp)execute_300, (funcp)execute_313, (funcp)execute_314, (funcp)execute_315, (funcp)execute_319, (funcp)execute_332, (funcp)execute_333, (funcp)execute_334, (funcp)execute_338, (funcp)execute_351, (funcp)execute_352, (funcp)execute_353, (funcp)execute_357, (funcp)execute_370, (funcp)execute_371, (funcp)execute_372, (funcp)execute_376, (funcp)execute_389, (funcp)execute_390, (funcp)execute_391, (funcp)execute_395, (funcp)execute_408, (funcp)execute_409, (funcp)execute_410, (funcp)execute_414, (funcp)execute_418, (funcp)execute_3004, (funcp)execute_3005, (funcp)execute_420, (funcp)execute_421, (funcp)execute_455, (funcp)execute_488, (funcp)execute_521, (funcp)execute_554, (funcp)execute_559, (funcp)execute_560, (funcp)execute_808, (funcp)execute_833, (funcp)execute_858, (funcp)execute_883, (funcp)execute_908, (funcp)execute_933, (funcp)execute_958, (funcp)execute_983, (funcp)execute_990, (funcp)execute_991, (funcp)execute_992, (funcp)execute_994, (funcp)execute_1271, (funcp)execute_1272, (funcp)execute_1275, (funcp)execute_1276, (funcp)execute_1277, (funcp)execute_1279, (funcp)execute_1521, (funcp)execute_1522, (funcp)execute_1523, (funcp)execute_1525, (funcp)execute_1767, (funcp)execute_1768, (funcp)execute_1769, (funcp)execute_1771, (funcp)execute_2013, (funcp)execute_2014, (funcp)execute_2015, (funcp)execute_2017, (funcp)execute_2259, (funcp)execute_2260, (funcp)execute_2261, (funcp)execute_2263, (funcp)execute_2505, (funcp)execute_2506, (funcp)execute_2507, (funcp)execute_2509, (funcp)execute_2751, (funcp)execute_2752, (funcp)execute_2753, (funcp)execute_2755, (funcp)execute_3027, (funcp)execute_3028, (funcp)execute_3031, (funcp)execute_3039, (funcp)execute_3040, (funcp)execute_3041, (funcp)execute_3042, (funcp)execute_3043, (funcp)execute_3044, (funcp)execute_3047, (funcp)execute_210, (funcp)execute_211, (funcp)execute_180, (funcp)execute_182, (funcp)execute_208, (funcp)execute_209, (funcp)execute_186, (funcp)execute_187, (funcp)execute_188, (funcp)execute_189, (funcp)execute_190, (funcp)execute_191, (funcp)execute_193, (funcp)execute_194, (funcp)execute_195, (funcp)execute_196, (funcp)execute_197, (funcp)execute_198, (funcp)execute_199, (funcp)execute_200, (funcp)execute_201, (funcp)execute_202, (funcp)execute_203, (funcp)execute_204, (funcp)execute_205, (funcp)execute_206, (funcp)execute_207, (funcp)execute_226, (funcp)execute_227, (funcp)execute_228, (funcp)execute_238, (funcp)execute_239, (funcp)execute_240, (funcp)execute_3015, (funcp)execute_3017, (funcp)execute_3018, (funcp)execute_266, (funcp)execute_267, (funcp)execute_425, (funcp)execute_426, (funcp)execute_427, (funcp)execute_428, (funcp)execute_432, (funcp)execute_433, (funcp)execute_434, (funcp)execute_431, (funcp)execute_437, (funcp)execute_445, (funcp)execute_441, (funcp)execute_454, (funcp)execute_450, (funcp)execute_458, (funcp)execute_459, (funcp)execute_460, (funcp)execute_461, (funcp)execute_465, (funcp)execute_466, (funcp)execute_467, (funcp)execute_464, (funcp)execute_470, (funcp)execute_478, (funcp)execute_474, (funcp)execute_487, (funcp)execute_483, (funcp)execute_491, (funcp)execute_492, (funcp)execute_493, (funcp)execute_494, (funcp)execute_498, (funcp)execute_499, (funcp)execute_500, (funcp)execute_497, (funcp)execute_503, (funcp)execute_511, (funcp)execute_507, (funcp)execute_520, (funcp)execute_516, (funcp)execute_524, (funcp)execute_525, (funcp)execute_526, (funcp)execute_527, (funcp)execute_531, (funcp)execute_532, (funcp)execute_533, (funcp)execute_530, (funcp)execute_536, (funcp)execute_544, (funcp)execute_540, (funcp)execute_553, (funcp)execute_549, (funcp)execute_791, (funcp)execute_794, (funcp)execute_587, (funcp)execute_589, (funcp)execute_590, (funcp)execute_565, (funcp)execute_576, (funcp)execute_618, (funcp)execute_620, (funcp)execute_621, (funcp)execute_649, (funcp)execute_651, (funcp)execute_652, (funcp)execute_680, (funcp)execute_682, (funcp)execute_683, (funcp)execute_711, (funcp)execute_713, (funcp)execute_714, (funcp)execute_742, (funcp)execute_744, (funcp)execute_745, (funcp)execute_811, (funcp)execute_829, (funcp)execute_1000, (funcp)execute_1001, (funcp)execute_1039, (funcp)execute_1269, (funcp)execute_1004, (funcp)execute_1014, (funcp)execute_1007, (funcp)execute_1010, (funcp)execute_1042, (funcp)execute_1044, (funcp)execute_1071, (funcp)execute_1072, (funcp)execute_1073, (funcp)execute_1074, (funcp)execute_1075, (funcp)execute_1076, (funcp)execute_1077, (funcp)execute_1078, (funcp)execute_1079, (funcp)execute_1080, (funcp)execute_1081, (funcp)execute_1082, (funcp)execute_1083, (funcp)execute_1084, (funcp)execute_1085, (funcp)execute_1086, (funcp)execute_1087, (funcp)execute_1262, (funcp)execute_1263, (funcp)execute_1265, (funcp)execute_1130, (funcp)execute_1131, (funcp)execute_1132, (funcp)execute_1133, (funcp)execute_1134, (funcp)execute_1135, (funcp)execute_1136, (funcp)execute_1137, (funcp)execute_1138, (funcp)execute_1139, (funcp)execute_1140, (funcp)execute_1141, (funcp)execute_1142, (funcp)execute_1143, (funcp)execute_1144, (funcp)execute_1145, (funcp)execute_1146, (funcp)execute_1147, (funcp)execute_1148, (funcp)execute_1149, (funcp)execute_1150, (funcp)execute_1151, (funcp)execute_1152, (funcp)execute_1153, (funcp)execute_1154, (funcp)execute_1155, (funcp)execute_1156, (funcp)execute_1157, (funcp)execute_1158, (funcp)execute_1159, (funcp)execute_1160, (funcp)execute_1161, (funcp)execute_1162, (funcp)execute_1163, (funcp)execute_1164, (funcp)execute_1165, (funcp)execute_1166, (funcp)execute_1167, (funcp)execute_1168, (funcp)execute_1169, (funcp)execute_1170, (funcp)execute_1171, (funcp)execute_1172, (funcp)execute_1173, (funcp)execute_1174, (funcp)execute_1175, (funcp)execute_1176, (funcp)execute_1177, (funcp)execute_1178, (funcp)execute_1179, (funcp)execute_1180, (funcp)execute_1181, (funcp)execute_1182, (funcp)execute_1183, (funcp)execute_1184, (funcp)execute_1185, (funcp)execute_1186, (funcp)execute_1187, (funcp)execute_1188, (funcp)execute_1189, (funcp)execute_1190, (funcp)execute_1191, (funcp)execute_1192, (funcp)execute_1193, (funcp)execute_1194, (funcp)execute_1195, (funcp)execute_1196, (funcp)execute_1197, (funcp)execute_1198, (funcp)execute_1199, (funcp)execute_1200, (funcp)execute_1201, (funcp)execute_1202, (funcp)execute_1203, (funcp)execute_1204, (funcp)execute_1205, (funcp)execute_1206, (funcp)execute_1207, (funcp)execute_1208, (funcp)execute_1209, (funcp)execute_1210, (funcp)execute_1211, (funcp)execute_1212, (funcp)execute_1213, (funcp)execute_1214, (funcp)execute_1215, (funcp)execute_1216, (funcp)execute_1217, (funcp)execute_1218, (funcp)execute_1219, (funcp)execute_1220, (funcp)execute_1221, (funcp)execute_1222, (funcp)execute_1223, (funcp)execute_1224, (funcp)execute_1225, (funcp)execute_1226, (funcp)execute_1227, (funcp)execute_1228, (funcp)execute_1229, (funcp)execute_1230, (funcp)execute_1231, (funcp)execute_1232, (funcp)execute_1233, (funcp)execute_1234, (funcp)execute_1235, (funcp)execute_1236, (funcp)execute_1237, (funcp)execute_1238, (funcp)execute_1239, (funcp)execute_1240, (funcp)execute_1241, (funcp)execute_1242, (funcp)execute_1243, (funcp)execute_1244, (funcp)execute_1245, (funcp)execute_1246, (funcp)execute_1247, (funcp)execute_1248, (funcp)execute_1249, (funcp)execute_1250, (funcp)execute_1251, (funcp)execute_1252, (funcp)execute_1253, (funcp)execute_1254, (funcp)execute_1255, (funcp)execute_1256, (funcp)execute_1257, (funcp)execute_1258, (funcp)execute_1259, (funcp)execute_2761, (funcp)execute_2762, (funcp)execute_2806, (funcp)execute_2999, (funcp)execute_2766, (funcp)execute_2769, (funcp)execute_5937, (funcp)execute_5938, (funcp)execute_5939, (funcp)execute_3070, (funcp)execute_3071, (funcp)execute_3072, (funcp)execute_5897, (funcp)execute_5898, (funcp)execute_5899, (funcp)execute_5900, (funcp)execute_5912, (funcp)execute_5913, (funcp)execute_5914, (funcp)execute_5915, (funcp)execute_5916, (funcp)execute_5917, (funcp)execute_3075, (funcp)execute_3078, (funcp)execute_3113, (funcp)execute_3114, (funcp)execute_3121, (funcp)execute_3134, (funcp)execute_3142, (funcp)execute_3150, (funcp)execute_3132, (funcp)execute_3159, (funcp)execute_3172, (funcp)execute_3173, (funcp)execute_3174, (funcp)execute_3179, (funcp)execute_3180, (funcp)execute_3181, (funcp)execute_3182, (funcp)execute_3194, (funcp)execute_3195, (funcp)execute_3196, (funcp)execute_3200, (funcp)execute_3213, (funcp)execute_3214, (funcp)execute_3215, (funcp)execute_3219, (funcp)execute_3232, (funcp)execute_3233, (funcp)execute_3234, (funcp)execute_3238, (funcp)execute_3251, (funcp)execute_3252, (funcp)execute_3253, (funcp)execute_3257, (funcp)execute_3270, (funcp)execute_3271, (funcp)execute_3272, (funcp)execute_3276, (funcp)execute_3289, (funcp)execute_3290, (funcp)execute_3291, (funcp)execute_3295, (funcp)execute_3308, (funcp)execute_3309, (funcp)execute_3310, (funcp)execute_3314, (funcp)execute_3318, (funcp)execute_5867, (funcp)execute_5868, (funcp)execute_3320, (funcp)execute_3321, (funcp)execute_3355, (funcp)execute_3388, (funcp)execute_3421, (funcp)execute_3454, (funcp)execute_3459, (funcp)execute_3460, (funcp)execute_3708, (funcp)execute_3733, (funcp)execute_3758, (funcp)execute_3783, (funcp)execute_3808, (funcp)execute_3833, (funcp)execute_3858, (funcp)execute_3883, (funcp)execute_3890, (funcp)execute_3891, (funcp)execute_3892, (funcp)execute_3894, (funcp)execute_4134, (funcp)execute_4135, (funcp)execute_4138, (funcp)execute_4139, (funcp)execute_4140, (funcp)execute_4142, (funcp)execute_4384, (funcp)execute_4385, (funcp)execute_4386, (funcp)execute_4388, (funcp)execute_4630, (funcp)execute_4631, (funcp)execute_4632, (funcp)execute_4634, (funcp)execute_4876, (funcp)execute_4877, (funcp)execute_4878, (funcp)execute_4880, (funcp)execute_5122, (funcp)execute_5123, (funcp)execute_5124, (funcp)execute_5126, (funcp)execute_5368, (funcp)execute_5369, (funcp)execute_5370, (funcp)execute_5372, (funcp)execute_5614, (funcp)execute_5615, (funcp)execute_5616, (funcp)execute_5618, (funcp)execute_5890, (funcp)execute_5891, (funcp)execute_5894, (funcp)execute_5902, (funcp)execute_5903, (funcp)execute_5904, (funcp)execute_5905, (funcp)execute_5906, (funcp)execute_5907, (funcp)execute_5910, (funcp)execute_5931, (funcp)execute_5932, (funcp)execute_5933, (funcp)execute_5944, (funcp)execute_5945, (funcp)execute_5946, (funcp)execute_5947, (funcp)execute_5948, (funcp)transaction_3, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_10, (funcp)transaction_11, (funcp)transaction_12, (funcp)transaction_13, (funcp)transaction_14, (funcp)transaction_15, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_53, (funcp)transaction_57, (funcp)transaction_63, (funcp)transaction_82, (funcp)transaction_84, (funcp)transaction_151, (funcp)transaction_451, (funcp)transaction_454, (funcp)transaction_461, (funcp)transaction_462, (funcp)transaction_611, (funcp)transaction_749, (funcp)transaction_752, (funcp)transaction_759, (funcp)transaction_760, (funcp)transaction_909, (funcp)transaction_1047, (funcp)transaction_1050, (funcp)transaction_1057, (funcp)transaction_1058, (funcp)transaction_1207, (funcp)transaction_1345, (funcp)transaction_1348, (funcp)transaction_1355, (funcp)transaction_1356, (funcp)transaction_1505, (funcp)transaction_1643, (funcp)transaction_1646, (funcp)transaction_1653, (funcp)transaction_1654, (funcp)transaction_1803, (funcp)transaction_1941, (funcp)transaction_1944, (funcp)transaction_1951, (funcp)transaction_1952, (funcp)transaction_2101, (funcp)transaction_2239, (funcp)transaction_2242, (funcp)transaction_2249, (funcp)transaction_2250, (funcp)transaction_2399, (funcp)transaction_2537, (funcp)transaction_2540, (funcp)transaction_2547, (funcp)transaction_2548, (funcp)transaction_2701, (funcp)transaction_2848, (funcp)transaction_2849, (funcp)transaction_2850, (funcp)transaction_2851, (funcp)transaction_2852, (funcp)transaction_2853, (funcp)transaction_2891, (funcp)transaction_2895, (funcp)transaction_2901, (funcp)transaction_2920, (funcp)transaction_2922, (funcp)transaction_2989, (funcp)transaction_3261, (funcp)transaction_3264, (funcp)transaction_3271, (funcp)transaction_3272, (funcp)transaction_3421, (funcp)transaction_3559, (funcp)transaction_3562, (funcp)transaction_3569, (funcp)transaction_3570, (funcp)transaction_3719, (funcp)transaction_3857, (funcp)transaction_3860, (funcp)transaction_3867, (funcp)transaction_3868, (funcp)transaction_4017, (funcp)transaction_4155, (funcp)transaction_4158, (funcp)transaction_4165, (funcp)transaction_4166, (funcp)transaction_4315, (funcp)transaction_4453, (funcp)transaction_4456, (funcp)transaction_4463, (funcp)transaction_4464, (funcp)transaction_4613, (funcp)transaction_4751, (funcp)transaction_4754, (funcp)transaction_4761, (funcp)transaction_4762, (funcp)transaction_4911, (funcp)transaction_5049, (funcp)transaction_5052, (funcp)transaction_5059, (funcp)transaction_5060, (funcp)transaction_5209, (funcp)transaction_5347, (funcp)transaction_5350, (funcp)transaction_5357, (funcp)transaction_5358, (funcp)transaction_5511};
const int NumRelocateId= 650;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/Simulate_behav/xsim.reloc",  (void **)funcTab, 650);
	iki_vhdl_file_variable_register(dp + 1239144);
	iki_vhdl_file_variable_register(dp + 1239200);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/Simulate_behav/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void wrapper_func_0(char *dp)

{

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1255832, dp + 1252368, 0, 0, 0, 0, 1, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1855560, dp + 1252368, 0, 0, 0, 0, 1, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1255736, dp + 1254832, 0, 0, 0, 0, 1, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1255888, dp + 1254888, 0, 31, 0, 31, 32, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1855464, dp + 1854560, 0, 0, 0, 0, 1, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 1855616, dp + 1854616, 0, 31, 0, 31, 32, 1);

}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/Simulate_behav/xsim.reloc");
	wrapper_func_0(dp);

	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

	iki_vlog_add_strength_resolution_functions_time_0(*(char**)(dp + 1608), dp + 1712, dp + 1928, 4294967295, 0, 0, 0, 0, dp + 1568);

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/Simulate_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/Simulate_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/Simulate_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
