/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00120a50; name: FUN_00120a50
 */


undefined8 FUN_00120a50(long param_1,undefined4 param_2)

{
  MutexType *pMVar1;
  
  pMVar1 = (MutexType *)(param_1 + 0xfU & 0xfffffffffffffff0);
  *(MutexType **)(param_1 + 0x78) = pMVar1;
  *(undefined4 *)(pMVar1 + 0x28) = param_2;
  *(undefined4 *)(pMVar1 + 0x2c) = 0;
  nn::os::InitializeMutex(pMVar1,false,0);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(pMVar1 + 0x20));
  *(undefined4 *)(pMVar1 + 0x2c) = 0x20000;
  return 1;
}


