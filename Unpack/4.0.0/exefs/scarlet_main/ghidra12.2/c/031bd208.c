/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031bd208; name: FUN_031bd208
 */


undefined8 FUN_031bd208(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  nn::os::LockMutex(*(MutexType **)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x20) < 1) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    bVar1 = true;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0x18) + lVar5 * 8);
      iVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
      bVar1 = (bool)(bVar1 & -1 < iVar2);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x20));
    uVar4 = 0;
    if (!bVar1) {
      uVar4 = 0x80040200;
    }
  }
  nn::os::UnlockMutex(*(MutexType **)(param_1 + 0x28));
  return uVar4;
}


