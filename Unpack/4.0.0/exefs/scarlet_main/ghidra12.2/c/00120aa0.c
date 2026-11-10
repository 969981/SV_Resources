/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00120aa0; name: FUN_00120aa0
 */


void FUN_00120aa0(long param_1)

{
  MutexType *pMVar1;
  
  pMVar1 = *(MutexType **)(param_1 + 0x78);
  if (*(short *)(pMVar1 + 0x2e) == 2) {
    nn::os::FinalizeMutex(pMVar1);
    nn::os::FinalizeConditionVariable((ConditionVariableType *)(pMVar1 + 0x20));
    *(undefined4 *)(pMVar1 + 0x2c) = 0;
  }
  return;
}


