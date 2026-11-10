/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0343cf34; name: FUN_0343cf34
 */


uint FUN_0343cf34(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1e8));
  uVar2 = (**(code **)(*param_2 + 0x28))(param_2,auStack_28,auStack_30,auStack_34,1);
  uVar1 = (**(code **)(*param_2 + 0x30))(param_2,uVar2,1,0);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e8));
  return uVar1 & 1;
}


