/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00535218; name: FUN_00535218
 */


long * FUN_00535218(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    if (plVar2 != (long *)0x0) {
      plVar2[2] = 0;
      puVar1 = PTR_DAT_047cdca8;
      plVar2[3] = 0;
      plVar2[4] = 0;
      *(undefined4 *)(plVar2 + 5) = 0;
      *plVar2 = (long)(puVar1 + 0x10);
      plVar2[1] = 0;
      if (*(int *)PTR_DAT_047cdcb0 != 0) {
                    /* try { // try from 005352ec to 005352f7 has its CatchHandler @ 005352fc */
        FUN_0052b230(PTR_DAT_047cdcb0);
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x30);
    }
    plVar2 = (long *)FUN_00520c00(param_1,0x30);
    *plVar2 = (long)(PTR_DAT_047cdca8 + 0x10);
    plVar2[1] = param_1;
    plVar2[2] = param_1;
    plVar2[3] = 0;
    plVar2[4] = 0;
    *(undefined4 *)(plVar2 + 5) = 0;
    if (*(int *)PTR_DAT_047cdcb0 != 0) {
                    /* try { // try from 00535270 to 0053527b has its CatchHandler @ 00535308 */
      FUN_0052b230(PTR_DAT_047cdcb0);
    }
  }
  return plVar2;
}


