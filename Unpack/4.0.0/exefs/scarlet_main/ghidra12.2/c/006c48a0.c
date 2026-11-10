/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c48a0; name: thunk_FUN_006c53ec
 */


uint thunk_FUN_006c53ec(undefined8 *param_1,undefined8 param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  undefined4 uVar3;
  
  pMVar1 = (MutexType *)(param_1 + 1);
  nn::os::LockMutex(pMVar1);
  *(undefined4 *)(param_1 + 5) = 1;
  nn::os::UnlockMutex(pMVar1);
  uVar2 = (**(code **)*param_1)(param_1,param_2);
  nn::os::LockMutex(pMVar1);
  uVar3 = 2;
  if ((uVar2 & 1) != 0) {
    uVar3 = 3;
  }
  *(undefined4 *)(param_1 + 5) = uVar3;
  nn::os::UnlockMutex(pMVar1);
  return uVar2 & 1;
}


