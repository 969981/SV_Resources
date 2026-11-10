/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e76f0; name: FUN_004e76f0
 */


long * FUN_004e76f0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x70);
    puVar1 = PTR_DAT_047cd988;
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar2[1] = 0;
    plVar2[2] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[3] = 0;
    plVar2[6] = 0;
    plVar2[9] = 0;
    plVar2[4] = 0;
    plVar2[7] = 0;
    puVar1 = PTR_DAT_047cd990;
    plVar2[10] = 0;
    plVar2[0xb] = 0;
    if (*(int *)puVar1 != 0) {
                    /* try { // try from 004e780c to 004e7817 has its CatchHandler @ 004e781c */
      FUN_0052b230(PTR_DAT_047cd990);
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x70);
    }
    plVar2 = (long *)FUN_00520c00(param_1,0x70);
    *plVar2 = (long)(PTR_DAT_047cd988 + 0x10);
    plVar2[1] = param_1;
    plVar2[2] = 0;
    plVar2[3] = 0;
    plVar2[4] = param_1;
    *(undefined4 *)((long)plVar2 + 0x34) = 0;
    *(undefined4 *)(plVar2 + 6) = 0;
    plVar2[7] = param_1;
    plVar2[9] = param_1;
    puVar1 = PTR_DAT_047cd990;
    plVar2[10] = 0;
    plVar2[0xb] = 0;
    if (*(int *)puVar1 != 0) {
                    /* try { // try from 004e7768 to 004e7773 has its CatchHandler @ 004e7838 */
      FUN_0052b230(PTR_DAT_047cd990);
    }
  }
  puVar1 = PTR_DAT_047cba80;
  plVar2[0xc] = (long)PTR_DAT_047cba80;
  plVar2[0xd] = (long)puVar1;
  return plVar2;
}


