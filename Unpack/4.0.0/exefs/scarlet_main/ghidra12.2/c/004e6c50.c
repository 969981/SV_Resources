/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e6c50; name: FUN_004e6c50
 */


long * FUN_004e6c50(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    plVar1 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x50);
    if (plVar1 == (long *)0x0) {
      return (long *)0x0;
    }
    *plVar1 = (long)(PTR_DAT_047cd8d0 + 0x10);
    plVar1[1] = 0;
                    /* try { // try from 004e6cf8 to 004e6d03 has its CatchHandler @ 004e6d88 */
    FUN_005212a0(plVar1 + 2,0);
    plVar1[8] = 0;
    plVar1[7] = 0;
    plVar1[6] = 0;
    plVar1[5] = 0;
    if (*(int *)PTR_DAT_047cd8d8 != 0) {
                    /* try { // try from 004e6d50 to 004e6d5b has its CatchHandler @ 004e6d60 */
      FUN_0052b230(PTR_DAT_047cd8d8);
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x50);
    }
    plVar1 = (long *)FUN_00520c00(param_1,0x50);
    *plVar1 = (long)(PTR_DAT_047cd8d0 + 0x10);
    plVar1[1] = param_1;
                    /* try { // try from 004e6c90 to 004e6c9b has its CatchHandler @ 004e6d8c */
    FUN_005212a0(plVar1 + 2,param_1);
    plVar1[6] = param_1;
    plVar1[5] = 0;
    plVar1[7] = 0;
    plVar1[8] = 0;
    if (*(int *)PTR_DAT_047cd8d8 != 0) {
                    /* try { // try from 004e6cbc to 004e6cc7 has its CatchHandler @ 004e6d6c */
      FUN_0052b230(PTR_DAT_047cd8d8);
    }
  }
  *(undefined4 *)(plVar1 + 9) = 0;
  return plVar1;
}


