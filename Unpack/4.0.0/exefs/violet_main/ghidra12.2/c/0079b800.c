/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079b800; name: FUN_0079b800
 */


void FUN_0079b800(long *param_1)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  undefined1 *puVar3;
  long *plVar4;
  byte bVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  void *__src;
  short sVar13;
  uint uVar14;
  long lVar15;
  int local_c0 [4];
  int local_b0 [4];
  undefined1 auStack_a0 [24];
  undefined *local_88;
  long *local_80;
  undefined4 local_78;
  char local_74;
  undefined8 local_70;
  undefined4 local_68;
  
  if ((int)param_1[0x33] != 0) {
    return;
  }
  lVar7 = FUN_007ec554();
  uVar6 = (**(code **)(*param_1 + 0x18))(param_1);
  local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar6);
  plVar8 = (long *)FUN_007e9698(lVar7,&local_88);
  (**(code **)(*(long *)*plVar8 + 0x70))();
  uVar9 = (**(code **)(*(long *)*plVar8 + 0x78))();
  if ((uVar9 & 1) == 0) {
    puVar3 = PTR_DAT_047d0a40 + 0x10;
    do {
      plVar4 = (long *)0x0;
      if (*(long *)(*plVar8 + 0x50) != 0) {
        plVar4 = (long *)(*plVar8 + 0x50);
      }
      bVar5 = *(byte *)(plVar4 + 5);
      uVar14 = 1;
      if ((bVar5 & 1) != 0) {
        uVar14 = 2;
      }
      if ((bVar5 & 2) != 0) {
        uVar14 = uVar14 + 2;
      }
      if ((bVar5 & 4) != 0) {
        uVar14 = uVar14 + 4;
      }
      if ((bVar5 & 8) != 0) {
        uVar14 = uVar14 + 8;
      }
      __src = (void *)(*plVar4 + (ulong)uVar14);
      uVar14 = (uint)*(ushort *)((long)plVar4 + 0x2a);
      if ((*(byte *)((long)plVar4 + 0x29) >> 5 & 1) != 0) {
        FUN_007e9984(&local_88,lVar7,__src,*(ushort *)((long)plVar4 + 0x2a));
        if ((int)local_88 != 0) {
          return;
        }
        __src = *(void **)(lVar7 + 0x28);
        uVar14 = *(uint *)(lVar7 + 0x30);
      }
      if (uVar14 - 4 < 0x4d5) {
        memcpy(param_1 + 0xed,__src,(ulong)uVar14);
        local_74 = '\x01';
        local_78 = 0x4d8;
        local_70 = 4;
        local_68 = 0;
        local_88 = puVar3;
        local_80 = param_1 + 0xed;
        FUN_007a3154(&local_88);
        if (local_74 != '\x01') {
          FUN_007a4c48(auStack_a0,param_1 + 0x188,uVar14);
          FUN_007a4c58(auStack_a0,__src,uVar14,local_74);
          FUN_0079bd80(param_1,auStack_a0,plVar4 + 8);
        }
      }
      (**(code **)(*(long *)*plVar8 + 0x80))();
      uVar9 = (**(code **)(*(long *)*plVar8 + 0x78))();
    } while ((uVar9 & 1) == 0);
  }
  FUN_007f72a4(local_b0,*(undefined8 *)PTR_DAT_047d0860);
  if (local_b0[0] != 0) {
    FUN_00cbd7c0(local_c0,local_b0);
    if ((int)param_1[0x33] == local_c0[0]) {
      return;
    }
    FUN_018ff39c(param_1 + 0x33,local_c0);
    return;
  }
  if (*(int *)((long)param_1 + 0x1c4) == 4) {
    return;
  }
  if (param_1[0x230] == 0) {
    return;
  }
  uVar9 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (*(short *)((long)param_1 + 0x114e) == 0) {
    return;
  }
  uVar9 = 0;
  plVar8 = param_1 + 0x17;
  while (uVar10 = FUN_007967e8(*(long *)(param_1[0x11] + uVar9 * 8) + 0x10,plVar8),
        (uVar10 & 1) == 0) {
    uVar9 = uVar9 + 1;
    if (*(ushort *)((long)param_1 + 0x114e) <= uVar9) {
      return;
    }
  }
  if ((short)uVar9 < 0) {
    return;
  }
  uVar10 = FUN_00796784(*(long *)(param_1[0x11] + uVar9 * 8) + 0x10);
  if ((uVar10 & 1) == 0) {
    return;
  }
  uVar10 = FUN_00796784(plVar8);
  if ((uVar10 & 1) != 0) {
    uVar10 = FUN_00796784(param_1 + 0x13);
    if (((uVar10 & 1) != 0) && (uVar10 = FUN_007967e8(param_1 + 0x13,plVar8), (uVar10 & 1) != 0)) {
      if (*(short *)((long)param_1 + 0x114e) == 0) {
        return;
      }
      sVar13 = 0;
      pMVar1 = (MutexType *)(param_1 + 0x3f);
      pMVar2 = (MutexType *)(param_1 + 0x1f);
      puVar3 = PTR_DAT_047d0a48 + 0x10;
      do {
        if (sVar13 != (short)uVar9) {
          lVar7 = (long)sVar13;
          uVar10 = FUN_00796784(*(long *)(param_1[0x11] + lVar7 * 8) + 0x10);
          if ((uVar10 & 1) != 0) {
            local_88 = (undefined *)0x0;
            FUN_007935cc(&local_88);
            lVar15 = (long)local_88 - *(long *)(param_1[0x230] + lVar7 * 8);
            plVar8 = (long *)FUN_0079365c();
            lVar12 = 0;
            if (*plVar8 != 0) {
              lVar12 = lVar15 / *plVar8;
            }
            lVar15 = (**(code **)(*param_1 + 0x378))(param_1);
            if ((lVar15 < lVar12) && ((int)param_1[0x38] != 1)) {
              nn::os::LockMutex(pMVar1);
              nn::os::LockMutex(pMVar2);
              uVar10 = (**(code **)(*(long *)param_1[0x23] + 0x78))
                                 ((long *)param_1[0x23],*(long *)(param_1[0x11] + lVar7 * 8) + 0x10)
              ;
              if ((uVar10 & 1) != 0) {
                lVar7 = param_1[0x43];
                uVar6 = FUN_007a8280(param_1[0x23]);
                FUN_007985f8(lVar7,uVar6);
                local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
                local_88 = &DAT_00000040;
                (**(code **)(*(long *)param_1[0x23] + 0x40))((long *)param_1[0x23],&local_88);
                *(undefined1 *)((long)param_1 + 0x24b) = 1;
                nn::os::UnlockMutex(pMVar2);
                nn::os::UnlockMutex(pMVar1);
                goto LAB_0079bbf4;
              }
              nn::os::UnlockMutex(pMVar2);
              nn::os::UnlockMutex(pMVar1);
            }
            local_88 = (undefined1 *)0x0;
            FUN_007935cc(&local_88);
            lVar15 = (long)local_88 - *(long *)(param_1[0x231] + lVar7 * 8);
            plVar8 = (long *)FUN_0079365c();
            lVar12 = 0;
            if (*plVar8 != 0) {
              lVar12 = lVar15 / *plVar8;
            }
            lVar11 = (**(code **)(*param_1 + 0x378))(param_1);
            lVar15 = lVar11 + 3;
            if (-1 < lVar11) {
              lVar15 = lVar11;
            }
            if ((lVar15 >> 2 < lVar12) && (param_1[0x230] != 0)) {
              lVar7 = *(long *)(param_1[0x11] + lVar7 * 8);
              local_78 = 0x4d8;
              local_68 = 0;
              local_74 = -0x80;
              local_70 = 4;
              local_88 = puVar3;
              local_80 = param_1 + 0x52;
              FUN_007a3050(&local_88);
              FUN_007a4c48(auStack_a0,param_1 + 0x188,0x4d8);
              FUN_007a4c58(auStack_a0,local_80,local_70._4_4_ + (int)local_70,0x80);
              (**(code **)(*param_1 + 0x140))(param_1,auStack_a0,lVar7 + 0x10,0);
            }
          }
        }
LAB_0079bbf4:
        sVar13 = sVar13 + 1;
        if ((int)(uint)*(ushort *)((long)param_1 + 0x114e) <= (int)sVar13) {
          return;
        }
      } while( true );
    }
  }
  if ((int)param_1[0x38] != 0) {
    return;
  }
  local_88 = (undefined *)0x0;
  FUN_007935cc(&local_88);
  lVar12 = (long)local_88 - *(long *)(param_1[0x230] + uVar9 * 8);
  plVar8 = (long *)FUN_0079365c();
  lVar7 = 0;
  if (*plVar8 != 0) {
    lVar7 = lVar12 / *plVar8;
  }
  lVar12 = (**(code **)(*param_1 + 0x378))(param_1);
  if (lVar7 <= lVar12) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f));
  uVar9 = (**(code **)(*(long *)param_1[0x23] + 0x78))
                    ((long *)param_1[0x23],*(long *)(param_1[0x11] + uVar9 * 8) + 0x10);
  if ((uVar9 & 1) != 0) {
    local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
    local_88 = (undefined *)0x40;
    (**(code **)(*(long *)param_1[0x23] + 0x40))((long *)param_1[0x23],&local_88);
    *(undefined1 *)((long)param_1 + 0x24b) = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f));
  return;
}


