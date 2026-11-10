/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e6250; name: FUN_007e6250
 */


void FUN_007e6250(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_007ec4a8();
  if (lVar1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  (**(code **)(**(long **)(param_1 + 0x70) + 0x20))();
  FUN_007ec474(param_1);
  return;
}


