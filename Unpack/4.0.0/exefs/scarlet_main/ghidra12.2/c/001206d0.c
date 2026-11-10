/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001206d0; name: FUN_001206d0
 */


undefined8 FUN_001206d0(long param_1)

{
  MutexType *pMVar1;
  
  pMVar1 = (MutexType *)(param_1 + 0xfU & 0xfffffffffffffff0);
  *(MutexType **)(param_1 + 0x78) = pMVar1;
  *(undefined8 *)(pMVar1 + 0x28) = 0;
  *(undefined8 *)(pMVar1 + 0x30) = 0;
  nn::os::InitializeMutex(pMVar1,false,0);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(pMVar1 + 0x20));
  *(undefined4 *)(pMVar1 + 0x34) = 0x30000;
  return 1;
}


