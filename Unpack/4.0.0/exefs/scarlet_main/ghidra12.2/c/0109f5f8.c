/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0109f5f8; name: FUN_0109f5f8
 */


undefined8
FUN_0109f5f8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong *param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 7));
  lVar1 = FUN_029aad04(param_2 + 0x10,param_3,param_4);
  if (lVar1 == 0) {
    uVar2 = 0x42;
  }
  else {
    *param_5 = (ulong)*(uint *)(lVar1 + 0xc);
    param_5[1] = (ulong)*(uint *)(lVar1 + 0x10);
    *(undefined4 *)(param_5 + 2) = *(undefined4 *)(lVar1 + 8);
    param_5[4] = *(ulong *)(param_2 + 0x68);
    param_5[3] = *(ulong *)(param_2 + 0x70);
    *(int *)(param_5 + 5) = (int)param_1[3];
    (**(code **)(*param_1 + 0x68))(param_1,param_2,param_5);
    uVar2 = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 7));
  return uVar2;
}


