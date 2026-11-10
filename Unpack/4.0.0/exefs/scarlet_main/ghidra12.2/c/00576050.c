/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00576050; name: FUN_00576050
 */


long * FUN_00576050(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  
  if (param_1 == 0) {
    plVar4 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x48);
    puVar1 = PTR_DAT_047ce1c0;
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar4[3] = 0;
    plVar4[2] = 0;
    plVar4[5] = 0;
    plVar4[4] = 0;
    plVar4[7] = 0;
    plVar4[6] = 0;
    puVar3 = PTR_DAT_047ce1c8;
    *(undefined4 *)(plVar4 + 8) = 0;
    *plVar4 = (long)(puVar1 + 0x10);
    plVar4[1] = 0;
    iVar2 = *(int *)puVar3;
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x48);
    }
    plVar4 = (long *)FUN_00520c00(param_1,0x48);
    puVar1 = PTR_DAT_047ce1c0 + 0x10;
    plVar4[2] = param_1;
    plVar4[3] = 0;
    plVar4[4] = 0;
    plVar4[5] = param_1;
    *plVar4 = (long)puVar1;
    plVar4[1] = param_1;
    puVar1 = PTR_DAT_047ce1c8;
    plVar4[6] = 0;
    plVar4[7] = 0;
    *(undefined4 *)(plVar4 + 8) = 0;
    iVar2 = *(int *)puVar1;
  }
  if (iVar2 == 0) {
    return plVar4;
  }
  FUN_0052b230(PTR_DAT_047ce1c8);
  return plVar4;
}


