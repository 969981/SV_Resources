/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e69e4; name: FUN_004e69e4
 */


long * FUN_004e69e4(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x40);
    puVar1 = PTR_DAT_047cd948;
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar2[3] = 0;
    plVar2[2] = 0;
    plVar2[5] = 0;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    if (*(int *)PTR_DAT_047cd950 != 0) {
                    /* try { // try from 004e6abc to 004e6ac7 has its CatchHandler @ 004e6acc */
      FUN_0052b230(PTR_DAT_047cd950);
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x40);
    }
    plVar2 = (long *)FUN_00520c00(param_1,0x40);
    puVar1 = PTR_DAT_047cd948;
    plVar2[2] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = param_1;
    plVar2[3] = param_1;
    plVar2[4] = 0;
    plVar2[5] = 0;
    if (*(int *)PTR_DAT_047cd950 != 0) {
                    /* try { // try from 004e6a3c to 004e6a47 has its CatchHandler @ 004e6ae0 */
      FUN_0052b230(PTR_DAT_047cd950);
    }
  }
  plVar2[6] = (long)PTR_DAT_047cba80;
  plVar2[7] = 0;
  return plVar2;
}


