/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e73d0; name: FUN_004e73d0
 */


long * FUN_004e73d0(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    plVar1 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x50);
    if (plVar1 == (long *)0x0) {
      return (long *)0x0;
    }
    *plVar1 = (long)(PTR_DAT_047cd900 + 0x10);
    plVar1[1] = 0;
                    /* try { // try from 004e7478 to 004e7483 has its CatchHandler @ 004e7508 */
    FUN_005212a0(plVar1 + 2,0);
    plVar1[8] = 0;
    plVar1[7] = 0;
    plVar1[6] = 0;
    plVar1[5] = 0;
    if (*(int *)PTR_DAT_047cd908 != 0) {
                    /* try { // try from 004e74d0 to 004e74db has its CatchHandler @ 004e74e0 */
      FUN_0052b230(PTR_DAT_047cd908);
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x50);
    }
    plVar1 = (long *)FUN_00520c00(param_1,0x50);
    *plVar1 = (long)(PTR_DAT_047cd900 + 0x10);
    plVar1[1] = param_1;
                    /* try { // try from 004e7410 to 004e741b has its CatchHandler @ 004e750c */
    FUN_005212a0(plVar1 + 2,param_1);
    plVar1[6] = param_1;
    plVar1[5] = 0;
    plVar1[7] = 0;
    plVar1[8] = 0;
    if (*(int *)PTR_DAT_047cd908 != 0) {
                    /* try { // try from 004e743c to 004e7447 has its CatchHandler @ 004e74ec */
      FUN_0052b230(PTR_DAT_047cd908);
    }
  }
  plVar1[9] = 0;
  return plVar1;
}


