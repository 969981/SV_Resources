/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01761958; name: FUN_01761958
 */


void FUN_01761958(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_017619b8(*(undefined8 *)(param_1 + 0x360),*(undefined8 *)(param_1 + 8),param_1 + 0x368
                      );
  nn::os::LockMutex((MutexType *)(param_1 + 0x3a0));
  uVar2 = 2;
  if ((uVar1 & 1) == 0) {
    uVar2 = 3;
  }
  *(undefined4 *)(param_1 + 0x398) = uVar2;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3a0));
  FUN_0172bf50(param_1);
  return;
}


