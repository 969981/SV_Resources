/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03227558; name: FUN_03227558
 */


undefined4
FUN_03227558(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x30));
    if ((*(char *)(param_1 + 0x28) == '\0') && (0 < *(int *)(param_1 + 0x20))) {
      lVar3 = 0;
      do {
        *(undefined1 *)(param_1 + 0x28) = 1;
        plVar2 = *(long **)(*(long *)(param_1 + 0x18) + lVar3 * 8);
        uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2,param_3,param_4,param_5,param_6);
        lVar3 = lVar3 + 1;
        *(undefined1 *)(param_1 + 0x28) = 0;
      } while (lVar3 < *(int *)(param_1 + 0x20));
    }
    else {
      uVar1 = 0;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x30));
  }
  return uVar1;
}


