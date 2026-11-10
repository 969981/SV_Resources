/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0347ac34; name: FUN_0347ac34
 */


undefined8 FUN_0347ac34(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  MutexType *pMVar5;
  long *plVar6;
  undefined4 local_60 [2];
  long local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  byte local_24;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    return 1;
  }
  local_58 = *(long *)(param_1 + 0x50);
  if (local_58 == 0) {
    return 2;
  }
  local_44 = 0;
  local_3c = 0;
  local_4c = 0;
  uStack_48 = 4;
  local_38 = 0;
  uStack_30 = 0;
  local_50 = *(undefined4 *)(param_1 + 0x6c);
  local_40 = 0;
  local_24 = *(byte *)(param_2 + 0xc) & 1 | (*(byte *)(param_2 + 0xd) & 1) << 1;
  local_28 = *(undefined4 *)(param_2 + 8);
  local_60[0] = 4;
  uVar1 = *(uint *)(param_1 + 0x78);
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_1 + 0x90);
    if (uVar1 == 0) {
      return 0xf;
    }
    pMVar5 = *(MutexType **)PTR_DAT_047e6f28;
    nn::os::LockMutex(pMVar5);
    uVar2 = *(uint *)(pMVar5 + 0x28);
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (lVar4 = *(long *)(*(long *)(pMVar5 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          lVar4 != 0; lVar4 = *(long *)(lVar4 + 8)) {
        if (*(uint *)(lVar4 + 0x10) == uVar1) goto LAB_0347ad48;
      }
    }
  }
  else {
    pMVar5 = *(MutexType **)PTR_DAT_047e6f28;
    nn::os::LockMutex(pMVar5);
    uVar2 = *(uint *)(pMVar5 + 0x28);
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (lVar4 = *(long *)(*(long *)(pMVar5 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          lVar4 != 0; lVar4 = *(long *)(lVar4 + 8)) {
        if (*(uint *)(lVar4 + 0x10) == uVar1) goto LAB_0347ad48;
      }
    }
  }
  plVar6 = (long *)0x0;
LAB_0347ad58:
  nn::os::UnlockMutex(pMVar5);
  if (plVar6 == (long *)0x0) {
    return 0xf;
  }
  (**(code **)(*plVar6 + 0x98))(plVar6,local_60);
  (**(code **)(*plVar6 + 0x30))(plVar6);
  return 1;
LAB_0347ad48:
  plVar6 = (long *)(lVar4 + -8);
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  goto LAB_0347ad58;
}


