/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0172bec4; name: FUN_0172bec4
 */


void FUN_0172bec4(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0172bf60(param_1 + 0x368);
  if (iVar1 == 1) {
    uVar2 = FUN_0172c0e0(*(undefined8 *)(param_1 + 0x360),*(undefined8 *)(param_1 + 8),
                         param_1 + 0x368);
    nn::os::LockMutex((MutexType *)(param_1 + 0x3a0));
    if ((uVar2 & 1) == 0) {
      uVar3 = 5;
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x3a0));
    uVar3 = 4;
  }
  *(undefined4 *)(param_1 + 0x398) = uVar3;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3a0));
  FUN_0172bf50(param_1);
  return;
}


