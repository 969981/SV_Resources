/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080785c; name: FUN_0080785c
 */


void FUN_0080785c(long param_1)

{
  undefined4 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xb8));
  uVar1 = FUN_007e0f78(*(undefined8 *)PTR_DAT_047d11a0,*(undefined8 *)(param_1 + 0xe0),
                       *(undefined2 *)(param_1 + 0x92));
  *(undefined4 *)(param_1 + 0xf0) = uVar1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xb8));
  return;
}


