/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0068f0d8; name: FUN_0068f0d8
 */


long * FUN_0068f0d8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  
  if (param_1 == 0) {
    plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    puVar2 = PTR_DAT_047cf638;
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    *(undefined4 *)(plVar3 + 5) = 0;
    *plVar3 = (long)(puVar2 + 0x10);
    plVar3[1] = 0;
    iVar1 = *(int *)PTR_DAT_047cf640;
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x30);
    }
    plVar3 = (long *)FUN_00520c00(param_1,0x30);
    *plVar3 = (long)(PTR_DAT_047cf638 + 0x10);
    plVar3[1] = param_1;
    *(undefined4 *)(plVar3 + 5) = 0;
    iVar1 = *(int *)PTR_DAT_047cf640;
  }
  if (iVar1 != 0) {
    FUN_0052b230(PTR_DAT_047cf640);
  }
  puVar2 = PTR_DAT_047cba80;
  plVar3[4] = (long)PTR_DAT_047cba80;
  plVar3[2] = (long)puVar2;
  plVar3[3] = (long)puVar2;
  return plVar3;
}


