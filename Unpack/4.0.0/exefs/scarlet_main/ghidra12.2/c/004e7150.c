/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e7150; name: FUN_004e7150
 */


long * FUN_004e7150(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    plVar1 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x50);
    if (plVar1 == (long *)0x0) {
      return (long *)0x0;
    }
    *plVar1 = (long)(PTR_DAT_047cd830 + 0x10);
    plVar1[1] = 0;
                    /* try { // try from 004e71f8 to 004e7203 has its CatchHandler @ 004e7288 */
    FUN_005212a0(plVar1 + 2,0);
    plVar1[8] = 0;
    plVar1[7] = 0;
    plVar1[6] = 0;
    plVar1[5] = 0;
    if (*(int *)PTR_DAT_047cd838 != 0) {
                    /* try { // try from 004e7250 to 004e725b has its CatchHandler @ 004e7260 */
      FUN_0052b230(PTR_DAT_047cd838);
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x50);
    }
    plVar1 = (long *)FUN_00520c00(param_1,0x50);
    *plVar1 = (long)(PTR_DAT_047cd830 + 0x10);
    plVar1[1] = param_1;
                    /* try { // try from 004e7190 to 004e719b has its CatchHandler @ 004e728c */
    FUN_005212a0(plVar1 + 2,param_1);
    plVar1[6] = param_1;
    plVar1[5] = 0;
    plVar1[7] = 0;
    plVar1[8] = 0;
    if (*(int *)PTR_DAT_047cd838 != 0) {
                    /* try { // try from 004e71bc to 004e71c7 has its CatchHandler @ 004e726c */
      FUN_0052b230(PTR_DAT_047cd838);
    }
  }
  *(undefined1 *)(plVar1 + 9) = 0;
  return plVar1;
}


