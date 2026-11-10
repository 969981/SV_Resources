/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079db14; name: FUN_0079db14
 */


undefined8 FUN_0079db14(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  MutexType *pMVar2;
  MutexType *pMVar3;
  char cVar4;
  ushort uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [20];
  char local_dc;
  int local_d8;
  uint local_d4;
  uint uStack_d0;
  uint local_cc;
  undefined2 local_c8;
  undefined8 local_c0;
  long local_b8;
  byte local_b0;
  short local_ae;
  char local_ac;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  int local_70;
  int iStack_6c;
  
  if ((char)param_1[0x22d] == '\0') {
    return 0;
  }
  FUN_007a3438(auStack_f0,*param_2,*(undefined4 *)((long)param_2 + 0xc),param_1);
  uVar11 = FUN_007a36c4(auStack_f0);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  if (*(int *)((long)param_2 + 0xc) != local_d4 + local_d8) {
    return 0;
  }
  if (local_dc != '\x11') {
    return 0;
  }
  if (local_cc <= *(uint *)(param_1 + 0xc)) {
    FUN_007a386c(&local_88,param_1 + 0x52,0x4d8);
    FUN_007a3898(&local_88);
    FUN_007a4c48(auStack_110,param_1 + 0x188,0x4d8);
    FUN_007a4c58(auStack_110,CONCAT44(uStack_7c,local_80),iStack_6c + local_70,0x12);
    (**(code **)(*param_1 + 0x140))(param_1,auStack_110,param_3,0);
    return 0;
  }
  uVar11 = (**(code **)(*param_1 + 0x368))(param_1);
  if ((uVar11 & 1) != 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x3f));
    if (param_1[0x43] == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = FUN_027e983c();
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x3f));
    if (local_b8 != lVar12) {
      return 0;
    }
  }
  FUN_00796584(auStack_110);
  pMVar2 = (MutexType *)(param_1 + 0x1b);
  nn::os::LockMutex(pMVar2);
  uVar11 = (**(code **)(*(long *)param_1[0x24] + 0x50))((long *)param_1[0x24],auStack_110);
  if ((uVar11 & 1) == 0) {
    nn::os::UnlockMutex(pMVar2);
    return 0;
  }
  uVar11 = FUN_007967e8(auStack_110,param_3);
  nn::os::UnlockMutex(pMVar2);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  if (*(short *)((long)param_1 + 0x114e) != local_ae) {
    return 0;
  }
  if (*(long **)param_1[0x12] == (long *)0x0) {
    return 0;
  }
  uVar8 = 0;
  if (uStack_d0 <= local_d4) {
    uVar8 = local_d4 - uStack_d0;
  }
  iVar7 = (**(code **)(**(long **)param_1[0x12] + 0x20))();
  if (uVar8 < iVar7 * (uint)*(ushort *)((long)param_1 + 0x114e)) {
    return 0;
  }
  if (*(ushort *)((long)param_1 + 0x114e) == 0) {
    if (*(char *)((long)param_1 + 0x1169) == '\0') {
      return 0;
    }
  }
  else {
    uVar11 = 0;
    do {
      uVar13 = FUN_007a32d0(auStack_f0,*(undefined8 *)(param_1[0x12] + uVar11 * 8));
      if ((uVar13 & 1) == 0) {
        return 0;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(ushort *)((long)param_1 + 0x114e));
    if (*(char *)((long)param_1 + 0x1169) == '\0') {
      if (*(ushort *)((long)param_1 + 0x114e) == 0) {
        return 0;
      }
      uVar11 = 0;
      while( true ) {
        lVar12 = *(long *)(param_1[0x12] + uVar11 * 8) + 0x10;
        uVar13 = FUN_00796784(lVar12);
        if (((uVar13 & 1) != 0) && (uVar13 = FUN_007967e8(lVar12,param_1 + 0x13), (uVar13 & 1) != 0)
           ) break;
        uVar11 = uVar11 + 1;
        if (*(ushort *)((long)param_1 + 0x114e) <= uVar11) {
          return 0;
        }
      }
      *(undefined1 *)((long)param_1 + 0x1169) = 1;
    }
  }
  uVar11 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((uVar11 & 1) == 0) goto LAB_0079e000;
  if (*(char *)((long)param_1 + 0x24b) != '\0') {
    return 0;
  }
  if ((param_1[0x22c] != 0) && (uVar11 = FUN_0078cdf4(), (uVar11 & 1) != 0)) {
    return 0;
  }
  pMVar3 = (MutexType *)(param_1 + 0x1f);
  nn::os::LockMutex(pMVar3);
  if (*(short *)((long)param_1 + 0x114e) == 0) {
LAB_0079df40:
    (**(code **)(*(long *)param_1[0x23] + 0x10))();
    FUN_007a8258(param_1[0x23],2);
  }
  else {
    uVar11 = 0;
    do {
      lVar12 = *(long *)(param_1[0x12] + uVar11 * 8) + 0x10;
      uVar13 = FUN_00796784(lVar12);
      if (((uVar13 & 1) != 0) &&
         (uVar13 = (**(code **)(*(long *)param_1[0x23] + 0x68))((long *)param_1[0x23],lVar12),
         (uVar13 & 1) == 0)) {
        plVar16 = (long *)param_1[0x23];
        uVar8 = FUN_007967e8(lVar12,param_1 + 0x17);
        uVar9 = FUN_007967e8(lVar12,param_1 + 0x13);
        (**(code **)(*plVar16 + 0x70))(plVar16,lVar12,uVar8 & 1,uVar9 & 1);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(ushort *)((long)param_1 + 0x114e));
    if (*(ushort *)((long)param_1 + 0x114e) == 0) goto LAB_0079df40;
    uVar8 = 0;
    uVar9 = 0;
    do {
      uVar11 = (**(code **)(*(long *)param_1[0x23] + 0x60))((long *)param_1[0x23],uVar8);
      if ((uVar11 & 1) != 0) {
        FUN_00796584(&local_88);
        uVar11 = (**(code **)(*(long *)param_1[0x23] + 0x48))((long *)param_1[0x23],uVar8,&local_88)
        ;
        if (((uVar11 & 1) != 0) && (uVar11 = FUN_00796784(&local_88), (uVar11 & 1) != 0)) {
          if (*(short *)((long)param_1 + 0x114e) != 0) {
            uVar11 = 0;
            do {
              uVar13 = FUN_007967e8(&local_88,*(long *)(param_1[0x12] + uVar11 * 8) + 0x10);
              if ((uVar13 & 1) != 0) {
                uVar10 = FUN_007967e8(&local_88,param_1 + 0x13);
                uVar9 = uVar9 | uVar10;
                goto LAB_0079de98;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(ushort *)((long)param_1 + 0x114e));
          }
          (**(code **)(*(long *)param_1[0x23] + 0x78))((long *)param_1[0x23],&local_88);
        }
      }
LAB_0079de98:
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x114e));
    if ((uVar9 & 1) == 0) goto LAB_0079df40;
  }
  local_80 = 0;
  local_88 = 0x80;
  (**(code **)(*(long *)param_1[0x23] + 0x40))((long *)param_1[0x23],&local_88);
  nn::os::UnlockMutex(pMVar3);
  (**(code **)(*param_1 + 0x118))(param_1);
  nn::os::LockMutex(pMVar2);
  nn::os::LockMutex(pMVar3);
  (**(code **)(*(long *)param_1[0x24] + 0x18))((long *)param_1[0x24],param_1[0x23]);
  nn::os::UnlockMutex(pMVar3);
  uVar11 = FUN_007a8118(param_1[0x24]);
  bVar6 = 0;
  if ((uVar11 & 1) != 0) {
    bVar6 = FUN_007a82d8(param_1[0x24]);
    bVar6 = bVar6 ^ 1;
  }
  *(byte *)((long)param_1 + 0x24c) = bVar6 & 1;
  nn::os::UnlockMutex(pMVar2);
  FUN_0079c310(param_1);
  (**(code **)(*param_1 + 0x120))(param_1);
LAB_0079e000:
  (**(code **)(*param_1 + 0x358))(param_1);
  if (*(short *)((long)param_1 + 0x114e) != 0) {
    uVar11 = 0;
    uVar13 = 1;
    do {
      uVar14 = FUN_00796784(*(long *)(param_1[0x12] + uVar11 * 8) + 0x10);
      if ((int)uVar13 != 0) {
        uVar13 = 0;
        do {
          if ((uVar14 & 1) != 0) {
            FUN_007967e8(*(long *)(param_1[0x12] + uVar11 * 8) + 0x10,
                         *(long *)(param_1[0x11] + uVar13 * 8) + 0x10);
          }
          uVar13 = uVar13 + 1;
          uVar5 = *(ushort *)((long)param_1 + 0x114e);
          uVar14 = FUN_00796784(*(long *)(param_1[0x12] + uVar11 * 8) + 0x10);
        } while (uVar13 < uVar5);
      }
      uVar13 = (ulong)*(ushort *)((long)param_1 + 0x114e);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar13);
    if (*(ushort *)((long)param_1 + 0x114e) != 0) {
      uVar11 = 0;
      uVar13 = 1;
      do {
        uVar14 = FUN_00796784(*(long *)(param_1[0x11] + uVar11 * 8) + 0x10);
        if ((int)uVar13 != 0) {
          uVar13 = 0;
          do {
            if ((uVar14 & 1) != 0) {
              FUN_007967e8(*(long *)(param_1[0x11] + uVar11 * 8) + 0x10,
                           *(long *)(param_1[0x12] + uVar13 * 8) + 0x10);
            }
            uVar13 = uVar13 + 1;
            uVar5 = *(ushort *)((long)param_1 + 0x114e);
            uVar14 = FUN_00796784(*(long *)(param_1[0x11] + uVar11 * 8) + 0x10);
          } while (uVar13 < uVar5);
        }
        uVar13 = (ulong)*(ushort *)((long)param_1 + 0x114e);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar13);
    }
  }
  uVar11 = FUN_007967e8(param_1 + 0x17,param_3);
  if ((uVar11 & 1) == 0) {
    FUN_00796828(param_1 + 0x17,param_3);
  }
  FUN_007ec530(param_1,local_c8);
  FUN_007ec51c(param_1,local_c0);
  uVar5 = *(ushort *)((long)param_1 + 0x114e);
  uVar11 = (ulong)uVar5;
  if (uVar5 != 0) {
    lVar12 = param_1[0x11];
    uVar8 = (uint)uVar5;
    if (uVar5 < 2) {
      uVar8 = 1;
    }
    uVar14 = (ulong)uVar8;
    uVar13 = uVar14 & 3;
    if (uVar14 - 1 < 3) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      plVar16 = (long *)(lVar12 + 0x10);
      do {
        *(undefined1 *)(plVar16[-2] + 9) = 0xff;
        *(undefined1 *)(plVar16[-1] + 9) = 0xff;
        *(undefined1 *)(*plVar16 + 9) = 0xff;
        plVar1 = plVar16 + 1;
        uVar15 = uVar15 + 4;
        plVar16 = plVar16 + 4;
        *(undefined1 *)(*plVar1 + 9) = 0xff;
      } while ((uVar14 & 0xfffc) != uVar15);
    }
    if ((uVar8 & 3) != 0) {
      plVar16 = (long *)(lVar12 + uVar15 * 8);
      do {
        uVar13 = uVar13 - 1;
        *(undefined1 *)(*plVar16 + 9) = 0xff;
        plVar16 = plVar16 + 1;
      } while (uVar13 != 0);
    }
    if (uVar5 != 0) {
      uVar13 = 0;
      uVar14 = 1;
      do {
        if ((int)uVar14 != 0) {
          uVar14 = 0;
          do {
            uVar11 = FUN_007967e8(*(long *)(param_1[0x12] + uVar13 * 8) + 0x10,
                                  *(long *)(param_1[0x11] + uVar14 * 8) + 0x10);
            if ((uVar11 & 1) != 0) {
              lVar12 = *(long *)(param_1[0x11] + uVar14 * 8);
              cVar4 = *(char *)(*(long *)(param_1[0x12] + uVar13 * 8) + 9);
              if (cVar4 != *(char *)(lVar12 + 9)) {
                *(char *)(lVar12 + 9) = cVar4;
              }
            }
            uVar11 = (ulong)*(ushort *)((long)param_1 + 0x114e);
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar11);
        }
        uVar13 = uVar13 + 1;
        uVar14 = uVar11;
      } while (uVar13 < uVar11);
    }
  }
  if (*(uint *)(param_1 + 0x50) != (uint)local_b0) {
    *(uint *)(param_1 + 0x50) = (uint)local_b0;
  }
  if ((local_ac == '\x01') && (*(char *)((long)param_1 + 0x249) != '\x01')) {
    *(undefined1 *)((long)param_1 + 0x249) = 1;
  }
  *(uint *)(param_1 + 0xc) = local_cc;
  FUN_007a386c(&local_88,param_1 + 0x52,0x4d8);
  FUN_007a3898(&local_88);
  FUN_007a4c48(auStack_a0,param_1 + 0x188,0x4d8);
  FUN_007a4c58(auStack_a0,CONCAT44(uStack_7c,local_80),iStack_6c + local_70,0x12);
  (**(code **)(*param_1 + 0x140))(param_1,auStack_a0,param_3,0);
  return 1;
}


