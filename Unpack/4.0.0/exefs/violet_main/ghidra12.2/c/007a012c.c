/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a012c; name: FUN_007a012c
 */


void FUN_007a012c(undefined8 param_1,long *param_2,long param_3)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  MutexType *pMVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  
  if (param_3 == 0) {
    local_58[0] = 0x10407;
  }
  else {
    pMVar1 = (MutexType *)(param_2 + 0x1b);
    nn::os::LockMutex(pMVar1);
    pMVar2 = (MutexType *)(param_2 + 0x1f);
    nn::os::LockMutex(pMVar2);
    uVar4 = (**(code **)(*(long *)param_2[0x24] + 0x98))((long *)param_2[0x24],param_2[0x23]);
    if ((uVar4 & 1) == 0) {
      local_58[0] = 0x4c11;
      local_48[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
      FUN_00cbd7c0(param_1,local_58);
LAB_007a0318:
      nn::os::UnlockMutex(pMVar2);
      nn::os::UnlockMutex(pMVar1);
      return;
    }
    uVar4 = (**(code **)(*param_2 + 0x178))(param_2);
    if ((uVar4 & 1) != 0) {
      pMVar3 = (MutexType *)(param_2 + 0x4a);
      nn::os::LockMutex(pMVar3);
      uVar4 = (**(code **)(*(long *)param_2[0x24] + 0x98))((long *)param_2[0x24],param_2[0x4e]);
      if (((uVar4 & 1) == 0) ||
         (uVar4 = (**(code **)(*(long *)param_2[0x23] + 0x98))((long *)param_2[0x23],param_2[0x4e]),
         (uVar4 & 1) == 0)) {
        local_58[0] = 0x4c11;
        local_48[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
        FUN_00cbd7c0(param_1,local_58);
        nn::os::UnlockMutex(pMVar3);
        goto LAB_007a0318;
      }
      nn::os::UnlockMutex(pMVar3);
    }
    nn::os::UnlockMutex(pMVar2);
    nn::os::UnlockMutex(pMVar1);
    if (*(short *)((long)param_2 + 0x114e) != 0) {
      uVar4 = 0;
      iVar7 = -1;
      bVar9 = 0xff;
      do {
        uVar5 = FUN_00796784(*(long *)(param_2[0x11] + uVar4 * 8) + 0x10);
        iVar6 = iVar7;
        bVar8 = bVar9;
        if (((uVar5 & 1) != 0) &&
           (uVar5 = FUN_007967e8(*(long *)(param_2[0x11] + uVar4 * 8) + 0x10,param_2 + 0x17),
           (uVar5 & 1) == 0)) {
          bVar8 = *(byte *)(*(long *)(param_2[0x11] + uVar4 * 8) + 9);
          iVar6 = (int)uVar4;
          if (bVar9 <= bVar8) {
            iVar6 = iVar7;
            bVar8 = bVar9;
          }
        }
        uVar4 = uVar4 + 1;
        iVar7 = iVar6;
        bVar9 = bVar8;
      } while (uVar4 < *(ushort *)((long)param_2 + 0x114e));
      if (iVar6 != -1) {
        FUN_00796828(param_3,*(long *)(param_2[0x11] + (long)iVar6 * 8) + 0x10);
        local_58[0] = 0;
        goto LAB_007a02c4;
      }
    }
    FUN_007965fc(param_3);
    local_58[0] = 0x2c0a;
  }
LAB_007a02c4:
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_00cbd7c0(param_1,local_58);
  return;
}


