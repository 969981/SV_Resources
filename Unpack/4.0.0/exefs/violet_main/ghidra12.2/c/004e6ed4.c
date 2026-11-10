/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e6ed4; name: FUN_004e6ed4
 */


long * FUN_004e6ed4(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    plVar1 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x48);
    if (plVar1 != (long *)0x0) {
      *plVar1 = (long)(PTR_DAT_047cd930 + 0x10);
      plVar1[1] = 0;
                    /* try { // try from 004e6f7c to 004e6f87 has its CatchHandler @ 004e7008 */
      FUN_005212a0(plVar1 + 2,0);
      plVar1[5] = 0;
      *(undefined4 *)(plVar1 + 8) = 0;
      plVar1[6] = 0;
      plVar1[7] = 0;
      if (*(int *)PTR_DAT_047cd938 != 0) {
                    /* try { // try from 004e6fd0 to 004e6fdb has its CatchHandler @ 004e6fe0 */
        FUN_0052b230(PTR_DAT_047cd938);
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x48);
    }
    plVar1 = (long *)FUN_00520c00(param_1,0x48);
    *plVar1 = (long)(PTR_DAT_047cd930 + 0x10);
    plVar1[1] = param_1;
                    /* try { // try from 004e6f14 to 004e6f1f has its CatchHandler @ 004e700c */
    FUN_005212a0(plVar1 + 2,param_1);
    plVar1[5] = param_1;
    plVar1[6] = 0;
    plVar1[7] = 0;
    *(undefined4 *)(plVar1 + 8) = 0;
    if (*(int *)PTR_DAT_047cd938 != 0) {
                    /* try { // try from 004e6f40 to 004e6f4b has its CatchHandler @ 004e6fec */
      FUN_0052b230(PTR_DAT_047cd938);
    }
  }
  return plVar1;
}


