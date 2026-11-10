/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


