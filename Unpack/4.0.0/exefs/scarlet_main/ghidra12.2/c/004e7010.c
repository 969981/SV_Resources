/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e7010; name: FUN_004e7010
 */


long * FUN_004e7010(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    plVar1 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x50);
    if (plVar1 == (long *)0x0) {
      return (long *)0x0;
    }
    *plVar1 = (long)(PTR_DAT_047cd800 + 0x10);
    plVar1[1] = 0;
                    /* try { // try from 004e70b8 to 004e70c3 has its CatchHandler @ 004e7148 */
    FUN_005212a0(plVar1 + 2,0);
    plVar1[8] = 0;
    plVar1[7] = 0;
    plVar1[6] = 0;
    plVar1[5] = 0;
    if (*(int *)PTR_DAT_047cd808 != 0) {
                    /* try { // try from 004e7110 to 004e711b has its CatchHandler @ 004e7120 */
      FUN_0052b230(PTR_DAT_047cd808);
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x50);
    }
    plVar1 = (long *)FUN_00520c00(param_1,0x50);
    *plVar1 = (long)(PTR_DAT_047cd800 + 0x10);
    plVar1[1] = param_1;
                    /* try { // try from 004e7050 to 004e705b has its CatchHandler @ 004e714c */
    FUN_005212a0(plVar1 + 2,param_1);
    plVar1[6] = param_1;
    plVar1[5] = 0;
    plVar1[7] = 0;
    plVar1[8] = 0;
    if (*(int *)PTR_DAT_047cd808 != 0) {
                    /* try { // try from 004e707c to 004e7087 has its CatchHandler @ 004e712c */
      FUN_0052b230(PTR_DAT_047cd808);
    }
  }
  *(undefined2 *)(plVar1 + 9) = 0;
  return plVar1;
}


