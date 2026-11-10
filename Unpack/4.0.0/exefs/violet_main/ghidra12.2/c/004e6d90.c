/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e6d90; name: FUN_004e6d90
 */


long * FUN_004e6d90(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    plVar1 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x58);
    if (plVar1 == (long *)0x0) {
      return (long *)0x0;
    }
    *plVar1 = (long)(PTR_DAT_047cd868 + 0x10);
    plVar1[1] = 0;
                    /* try { // try from 004e6e38 to 004e6e43 has its CatchHandler @ 004e6ecc */
    FUN_005212a0(plVar1 + 2,0);
    plVar1[8] = 0;
    plVar1[7] = 0;
    plVar1[6] = 0;
    plVar1[5] = 0;
    if (*(int *)PTR_DAT_047cd870 != 0) {
                    /* try { // try from 004e6e94 to 004e6e9f has its CatchHandler @ 004e6ea4 */
      FUN_0052b230(PTR_DAT_047cd870);
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x58);
    }
    plVar1 = (long *)FUN_00520c00(param_1,0x58);
    *plVar1 = (long)(PTR_DAT_047cd868 + 0x10);
    plVar1[1] = param_1;
                    /* try { // try from 004e6dd0 to 004e6ddb has its CatchHandler @ 004e6ed0 */
    FUN_005212a0(plVar1 + 2,param_1);
    plVar1[6] = param_1;
    plVar1[5] = 0;
    plVar1[7] = 0;
    plVar1[8] = 0;
    if (*(int *)PTR_DAT_047cd870 != 0) {
                    /* try { // try from 004e6dfc to 004e6e07 has its CatchHandler @ 004e6eb0 */
      FUN_0052b230(PTR_DAT_047cd870);
    }
  }
  *(undefined4 *)(plVar1 + 10) = 0;
  plVar1[9] = 0;
  return plVar1;
}


