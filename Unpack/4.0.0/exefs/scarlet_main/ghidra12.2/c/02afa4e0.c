/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02afa4e0; name: FUN_02afa4e0
 */


void FUN_02afa4e0(long param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(**(long **)(param_1 + 0x40) + 0x20))();
  iVar1 = (**(code **)(**(long **)(param_1 + 0x40) + 0x28))();
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      (**(code **)(**(long **)(param_1 + 0x40) + 0x48))(*(long **)(param_1 + 0x40),iVar1);
      iVar1 = iVar1 + 1;
      iVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x28))();
    } while (iVar1 < iVar2);
  }
  return;
}


