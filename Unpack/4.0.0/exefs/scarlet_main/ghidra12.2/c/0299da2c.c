/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0299da2c; name: FUN_0299da2c
 */


bool FUN_0299da2c(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x60);
  if ((param_3 & 1) == 0) {
    iVar1 = (**(code **)(*plVar2 + 0x110))(plVar2,*(undefined8 *)(param_2 + 8),0);
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x118))(plVar2,*(undefined8 *)(param_2 + 8),0);
  }
  return iVar1 == 1;
}


