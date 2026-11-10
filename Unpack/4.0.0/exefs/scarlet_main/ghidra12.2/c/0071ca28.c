/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0071ca28; name: FUN_0071ca28
 */


void FUN_0071ca28(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (plVar2 == (long *)0x0) {
      return;
    }
    plVar2[1] = 0;
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x28);
    }
    plVar2 = (long *)FUN_00520c00(param_1,0x28);
    plVar2[1] = param_1;
  }
  puVar1 = PTR_DAT_047cba80;
  plVar2[2] = (long)PTR_DAT_047cba80;
  plVar2[3] = (long)puVar1;
  puVar1 = PTR_DAT_047d0228;
  *(undefined4 *)(plVar2 + 4) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  return;
}


