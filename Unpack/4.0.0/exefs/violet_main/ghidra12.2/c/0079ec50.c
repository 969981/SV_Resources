/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079ec50; name: FUN_0079ec50
 */


void FUN_0079ec50(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [20];
  char local_74;
  int local_70;
  int iStack_6c;
  byte local_64;
  byte local_63;
  undefined8 local_50;
  undefined4 local_48;
  
  if (*(char *)((long)param_1 + 0x284) != '\0') {
    return;
  }
  if ((int)param_1[0x223] == 1) {
    return;
  }
  uVar13 = FUN_00796784(param_1 + 0x17);
  if ((uVar13 & 1) == 0) {
    return;
  }
  uVar13 = FUN_00796784(param_1 + 0x13);
  if ((uVar13 & 1) == 0) {
    return;
  }
  uVar13 = FUN_007967e8(param_1 + 0x13,param_1 + 0x17);
  if ((uVar13 & 1) == 0) {
    return;
  }
  FUN_007a456c(auStack_88,*param_2,*(undefined4 *)((long)param_2 + 0xc),0,0,0,param_1);
  uVar13 = FUN_007a47a4(auStack_88);
  if ((uVar13 & 1) == 0) {
    return;
  }
  if (*(int *)((long)param_2 + 0xc) != iStack_6c + local_70) {
    return;
  }
  if (local_74 != '2') {
    return;
  }
  if (*(short *)((long)param_1 + 0x114e) != 0) {
    uVar13 = 0;
    do {
      uVar14 = FUN_00796784(*(long *)(param_1[0x11] + uVar13 * 8) + 0x10);
      if (((uVar14 & 1) != 0) &&
         (uVar14 = FUN_007967e8(*(long *)(param_1[0x11] + uVar13 * 8) + 0x10,param_3),
         (uVar14 & 1) != 0)) {
        bVar5 = 1;
        goto LAB_0079ed60;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(ushort *)((long)param_1 + 0x114e));
  }
  if ((int)param_1[0x38] != 0) {
    return;
  }
  bVar5 = 0;
LAB_0079ed60:
  if (*(char *)((long)param_1 + 0x24b) != '\0') {
    return;
  }
  if ((param_1[0x22c] != 0) && (uVar13 = FUN_0078cdf4(), (uVar13 & 1) != 0)) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x3f));
  FUN_007a45c8(&local_50,auStack_88,auStack_98,0x10);
  bVar4 = local_64;
  if (*(long *)PTR_DAT_047d0a08 == 0) {
    uVar16 = 1;
  }
  else {
    uVar16 = (uint)*(byte *)(*(long *)PTR_DAT_047d0a08 + 0x458);
  }
  bVar3 = DAT_047f9be8;
  if (DAT_047f9be8 == 0) {
    bVar3 = (**(code **)(*param_1 + 0x200))(param_1);
  }
  if (bVar4 < bVar3) {
    uVar15 = 1;
  }
  else {
    bVar4 = DAT_047f9be8;
    if (DAT_047f9be8 == 0) {
      bVar4 = (**(code **)(*param_1 + 0x200))(param_1);
    }
    if (bVar4 < local_64) {
      uVar15 = 2;
    }
    else if ((short)(ushort)local_63 < *(short *)((long)param_1 + 0x5a)) {
      uVar15 = 3;
    }
    else if (*(short *)((long)param_1 + 0x5a) < (short)(ushort)local_63) {
      uVar15 = 4;
    }
    else {
      memset(&local_50,0,0x10);
      iVar9 = memcmp(param_1 + 0x44,&local_50,0x10);
      if ((iVar9 == 0) || (iVar9 = memcmp(param_1 + 0x44,auStack_98,0x10), iVar9 == 0)) {
        sVar6 = FUN_007a8280(param_1[0x24]);
        sVar7 = (**(code **)(*(long *)param_1[0x43] + 0x20))();
        if ((bool)(sVar6 == sVar7 & (bVar5 ^ 1))) {
          uVar15 = 5;
        }
        else {
          uVar13 = (**(code **)(*(long *)param_1[0x43] + 0x30))();
          if ((uVar13 & 1) != 0) {
            uVar10 = (**(code **)(*(long *)param_1[0x43] + 0x28))();
            uVar11 = (**(code **)(*(long *)param_1[0x43] + 0x20))();
            if ((bool)((uVar11 & 0xffff) < uVar16 + (uVar10 & 0xffff) & (bVar5 ^ 1))) {
              uVar15 = 8;
              goto LAB_0079efb8;
            }
          }
          if (((int)param_1[0x50] == 2) &&
             ((((param_1[0x37] == 0 || (param_1[0x4f] == 0)) ||
               (uVar13 = FUN_0078cdf4(), (uVar13 & 1) == 0)) ||
              (uVar13 = (**(code **)(*(long *)param_1[0x4f] + 0x68))((long *)param_1[0x4f],param_3),
              (uVar13 & 1) == 0)))) {
            uVar15 = 6;
          }
          else {
            pMVar1 = (MutexType *)(param_1 + 0x1b);
            nn::os::LockMutex(pMVar1);
            pMVar2 = (MutexType *)(param_1 + 0x1f);
            nn::os::LockMutex(pMVar2);
            uVar13 = (**(code **)(*(long *)param_1[0x24] + 0x68))((long *)param_1[0x24],param_3);
            if ((((uVar13 & 1) == 0) &&
                (uVar8 = FUN_007a8280(param_1[0x24]), uVar8 < *(ushort *)((long)param_1 + 0x114e)))
               && (uVar13 = (**(code **)(*(long *)param_1[0x23] + 0x68))
                                      ((long *)param_1[0x23],param_3), (uVar13 & 1) == 0)) {
              (**(code **)(*(long *)param_1[0x23] + 0x70))((long *)param_1[0x23],param_3,0,0);
              lVar17 = param_1[0x43];
              uVar12 = FUN_007a8280(param_1[0x23]);
              FUN_007985f8(lVar17,uVar12);
              local_48 = 0;
              local_50 = 0x40;
              (**(code **)(*(long *)param_1[0x23] + 0x40))((long *)param_1[0x23],&local_50);
              nn::os::UnlockMutex(pMVar2);
              nn::os::UnlockMutex(pMVar1);
              (**(code **)(*param_1 + 0x118))(param_1);
              nn::os::LockMutex(pMVar1);
              nn::os::LockMutex(pMVar2);
              (**(code **)(*(long *)param_1[0x24] + 0x18))((long *)param_1[0x24],param_1[0x23]);
              nn::os::UnlockMutex(pMVar2);
              uVar13 = FUN_007a8118(param_1[0x24]);
              bVar5 = 0;
              if ((uVar13 & 1) != 0) {
                bVar5 = FUN_007a82d8(param_1[0x24]);
                bVar5 = bVar5 ^ 1;
              }
              *(byte *)((long)param_1 + 0x24c) = bVar5 & 1;
              nn::os::UnlockMutex(pMVar1);
              FUN_0079c310(param_1);
              (**(code **)(*param_1 + 0x120))(param_1);
            }
            else {
              nn::os::UnlockMutex(pMVar2);
              nn::os::UnlockMutex(pMVar1);
            }
            uVar15 = 0;
          }
        }
      }
      else {
        uVar15 = 7;
      }
    }
  }
LAB_0079efb8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3f));
  FUN_0079d504(param_1,param_3,uVar15);
  return;
}


