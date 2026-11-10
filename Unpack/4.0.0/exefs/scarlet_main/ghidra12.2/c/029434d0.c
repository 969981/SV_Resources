/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029434d0; name: FUN_029434d0
 */


bool FUN_029434d0(long param_1)

{
  bool bVar1;
  short sVar2;
  long *plVar3;
  
  if (*(int *)(*(long *)(param_1 + 0x48) + 0x48) == 0) {
    plVar3 = (long *)FUN_01079790(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
    sVar2 = (**(code **)(*plVar3 + 0x2a8))();
    bVar1 = sVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


