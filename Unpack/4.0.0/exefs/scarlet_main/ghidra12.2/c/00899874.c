/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00899874; name: FUN_00899874
 */


void FUN_00899874(long param_1)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x10); lVar1 != param_1 + 8; lVar1 = *(long *)(lVar1 + 8)) {
    (**(code **)(*(long *)(lVar1 + -8) + 0x28))((long *)(lVar1 + -8));
  }
  for (lVar1 = *(long *)(param_1 + 0x50); lVar1 != param_1 + 0x48; lVar1 = *(long *)(lVar1 + 8)) {
    (**(code **)(**(long **)(lVar1 + 0x10) + 0x48))();
  }
  return;
}


