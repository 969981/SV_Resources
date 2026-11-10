/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e7a0c; name: FUN_004e7a0c
 */


long * FUN_004e7a0c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x40);
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar2[2] = 0;
    puVar1 = PTR_DAT_047cd8c0;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    plVar2[3] = 0;
    if (*(int *)PTR_DAT_047cd8c8 != 0) {
                    /* try { // try from 004e7aec to 004e7af7 has its CatchHandler @ 004e7afc */
      FUN_0052b230(PTR_DAT_047cd8c8);
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x40);
    }
    plVar2 = (long *)FUN_00520c00(param_1,0x40);
    puVar1 = PTR_DAT_047cd8c0;
    plVar2[2] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = param_1;
    plVar2[3] = 0;
    plVar2[4] = param_1;
    if (*(int *)PTR_DAT_047cd8c8 != 0) {
                    /* try { // try from 004e7a64 to 004e7a6f has its CatchHandler @ 004e7b08 */
      FUN_0052b230(PTR_DAT_047cd8c8);
    }
  }
  plVar2[6] = (long)PTR_DAT_047cba80;
  plVar2[7] = 0;
  return plVar2;
}


