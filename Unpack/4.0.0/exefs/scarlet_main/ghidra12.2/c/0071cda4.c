/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0071cda4; name: FUN_0071cda4
 */


long * FUN_0071cda4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  
  if (param_1 == 0) {
    plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0xa0);
    puVar2 = PTR_DAT_047d02a8;
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    *(undefined4 *)((long)plVar3 + 0x9c) = 0;
    *plVar3 = (long)(puVar2 + 0x10);
    plVar3[1] = 0;
    iVar1 = *(int *)PTR_DAT_047d02b0;
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0xa0);
    }
    plVar3 = (long *)FUN_00520c00(param_1,0xa0);
    *plVar3 = (long)(PTR_DAT_047d02a8 + 0x10);
    plVar3[1] = param_1;
    *(undefined4 *)((long)plVar3 + 0x9c) = 0;
    iVar1 = *(int *)PTR_DAT_047d02b0;
  }
  if (iVar1 != 0) {
    FUN_0052b230(PTR_DAT_047d02b0);
  }
  puVar2 = PTR_DAT_047cba80;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[2] = (long)puVar2;
  plVar3[3] = (long)puVar2;
  plVar3[4] = (long)puVar2;
  plVar3[5] = (long)puVar2;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *(undefined8 *)((long)plVar3 + 0x94) = 0;
  *(undefined8 *)((long)plVar3 + 0x8c) = 0;
  return plVar3;
}


