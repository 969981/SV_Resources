/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e653c; name: FUN_004e653c
 */


long * FUN_004e653c(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    plVar1 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x48);
    if (plVar1 != (long *)0x0) {
      *plVar1 = (long)(PTR_DAT_047cd840 + 0x10);
      plVar1[1] = 0;
                    /* try { // try from 004e65e4 to 004e65ef has its CatchHandler @ 004e6670 */
      FUN_005212a0(plVar1 + 2,0);
      plVar1[5] = 0;
      *(undefined4 *)(plVar1 + 8) = 0;
      plVar1[6] = 0;
      plVar1[7] = 0;
      if (*(int *)PTR_DAT_047cd848 != 0) {
                    /* try { // try from 004e6638 to 004e6643 has its CatchHandler @ 004e6648 */
        FUN_0052b230(PTR_DAT_047cd848);
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x48);
    }
    plVar1 = (long *)FUN_00520c00(param_1,0x48);
    *plVar1 = (long)(PTR_DAT_047cd840 + 0x10);
    plVar1[1] = param_1;
                    /* try { // try from 004e657c to 004e6587 has its CatchHandler @ 004e6674 */
    FUN_005212a0(plVar1 + 2,param_1);
    plVar1[5] = param_1;
    plVar1[6] = 0;
    plVar1[7] = 0;
    *(undefined4 *)(plVar1 + 8) = 0;
    if (*(int *)PTR_DAT_047cd848 != 0) {
                    /* try { // try from 004e65a8 to 004e65b3 has its CatchHandler @ 004e6654 */
      FUN_0052b230(PTR_DAT_047cd848);
    }
  }
  return plVar1;
}


