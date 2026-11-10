/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01675264; name: FUN_01675264
 */


void FUN_01675264(long param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  void *pvVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  uint *puVar16;
  ulong uVar17;
  long lVar18;
  uint *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  byte *pbVar23;
  undefined8 *puVar24;
  uint local_160 [2];
  undefined1 *local_158;
  undefined *puStack_150;
  undefined8 local_148;
  long *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined1 local_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint *local_88;
  undefined *local_80;
  undefined8 local_78;
  uint local_70;
  uint uStack_6c;
  
  pbVar23 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar24 = (undefined8 *)PTR_DAT_047d4ca8;
  puVar20 = (undefined8 *)PTR_DAT_047d4ca0;
  uVar9 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_158 = &DAT_e4d07a996e5ef5e8;
  puStack_150 = &DAT_03c60f6f;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar9;
  local_148 = 4;
  local_140 = (long *)0x0;
  lVar10 = FUN_00f844f4(uVar9,&local_158);
  local_160[0] = 0x19cb0339;
  lVar14 = *(long *)(param_1 + 0x40);
  lVar18 = *(long *)(param_1 + 0x48);
  pMVar1 = (MutexType *)(lVar10 + 0x80);
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(lVar10 + 0xa0) & 1) == 0) {
    lVar18 = lVar18 - lVar14;
    nn::os::LockMutex(pMVar1);
    puVar5 = *(uint **)(lVar10 + 0x10);
    uVar17 = (long)puVar5 - (long)*(uint **)(lVar10 + 8);
    if (0 < (long)uVar17) {
      puVar13 = *(uint **)(lVar10 + 8);
      puVar16 = puVar5;
      do {
        puVar19 = puVar13 + (uVar17 / 0x60) * 0xc;
        if (*puVar19 == local_160[0]) goto LAB_0167536c;
        puVar4 = puVar19 + 0xc;
        if (local_160[0] <= *puVar19) {
          puVar4 = puVar13;
          puVar16 = puVar19;
        }
        uVar17 = (long)puVar16 - (long)puVar4;
        puVar13 = puVar4;
      } while (0 < (long)uVar17);
    }
    puVar19 = puVar5;
LAB_0167536c:
    nn::os::UnlockMutex(pMVar1);
    if ((puVar19 == (uint *)0x0) || (puVar5 == puVar19)) {
      nn::os::LockMutex(pMVar1);
      plVar11 = *(long **)(lVar10 + 0x60);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,local_160);
      }
      FUN_015d0cb8(&local_88,lVar10,local_160,lVar18 + 5);
      puVar2 = PTR_DAT_047dcc70;
      puVar20 = (undefined8 *)PTR_DAT_047d4ca0;
      if (local_88 != (uint *)0x0) {
        uVar9 = *(undefined8 *)(local_88 + 2);
        uVar17 = *(ulong *)(local_88 + 6);
        local_e0 = PTR_DAT_047dcc68 + 0x10;
        local_128._4_4_ = *local_88;
        puVar3 = PTR_DAT_047dcc70 + 0x10;
        local_130 = (undefined *)0x0;
        local_138 = puVar3;
        if (local_128._4_4_ != 0) {
          uVar15 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
          uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
          uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (((uVar15 != 1) &&
              (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar15 != 2)) &&
             (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
             local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
             local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar15 != 3)) {
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
            local_128._0_4_ = 0;
            if (uVar15 != 4) {
              (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
              for (lVar6 = uVar15 - 5; lVar6 != 0; lVar6 = lVar6 + -1) {
                (**(code **)(local_138 + 0x10))(&local_138);
              }
            }
          }
        }
        puVar7 = PTR_DAT_047dcc80;
        puVar22 = PTR_DAT_047dcc78;
        local_128 = CONCAT44(local_128._4_4_,local_128._4_4_);
        local_c8 = PTR_DAT_047dcc78 + 0x10;
        local_b0 = 0;
        local_98 = local_128;
        uStack_90 = 0;
        local_d8 = PTR_DAT_047dcc80 + 0x10;
        uStack_d0 = 0;
        local_c0 = uVar9;
        uStack_b8 = uVar17;
        local_a8 = puVar3;
        puStack_a0 = local_130;
        uVar17 = FUN_015d05bc(&local_e0,lVar14,lVar18);
        puVar5 = local_88;
        if ((uVar17 & 1) == 0) {
          (**(code **)(**(long **)(lVar10 + 0x40) + 0x18))
                    (*(long **)(lVar10 + 0x40),*(undefined8 *)(local_88 + 2),
                     *(undefined8 *)(local_88 + 4));
          lVar14 = *(long *)(lVar10 + 0x10);
          if (*(char *)(lVar14 + -0x10) != '\0') {
            *(undefined1 *)(lVar14 + -0x10) = 0;
          }
          *(long *)(lVar10 + 0x10) = lVar14 + -0x30;
          puVar20 = (undefined8 *)PTR_DAT_047d4ca0;
          pbVar23 = PTR_DAT_047d4c98;
          puVar24 = (undefined8 *)PTR_DAT_047d4ca8;
        }
        else {
          puVar3 = puVar2 + 0x10;
          uVar9 = *(undefined8 *)(local_88 + 2);
          uVar21 = *(undefined8 *)(local_88 + 6);
          local_138 = PTR_DAT_047dcc88 + 0x10;
          uStack_6c = *local_88;
          local_78 = 0;
          local_70 = 0;
          local_80 = puVar3;
          if (uStack_6c == 0) {
            uStack_6c = 0;
          }
          else {
            uVar17 = (ulong)uStack_6c - ((ulong)(uStack_6c >> 1) & 0x5555555555555555);
            uStack_6c = uStack_6c ^ uStack_6c << 2;
            uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
            uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
            uStack_6c = uStack_6c ^ uStack_6c << 0xd;
            uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (((uVar17 != 1) &&
                (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
                uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar17 != 2)) &&
               ((uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
                uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar17 != 3 &&
                (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
                uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar17 != 4)))) {
              (**(code **)(puVar2 + 0x20))(&local_80);
              for (lVar14 = uVar17 - 5; lVar14 != 0; lVar14 = lVar14 + -1) {
                (**(code **)(local_80 + 0x10))(&local_80);
              }
            }
            puVar22 = PTR_DAT_047dcc78;
          }
          puStack_120 = puVar22 + 0x10;
          local_128 = 0;
          local_f0 = CONCAT44(uStack_6c,uStack_6c);
          local_108 = 0;
          uStack_e8 = 0;
          local_130 = puVar7 + 0x10;
          local_118 = uVar9;
          uStack_110 = uVar21;
          local_100 = puVar3;
          uStack_f8 = local_78;
          local_70 = uStack_6c;
          uVar9 = FUN_015d1064(&local_138);
          if ((char)puVar5[8] == '\0') {
            *(undefined8 *)(puVar5 + 9) = uVar9;
            *(undefined1 *)(puVar5 + 8) = 1;
          }
          else {
            *(undefined8 *)(puVar5 + 9) = uVar9;
          }
          puVar24 = (undefined8 *)PTR_DAT_047d4ca8;
          puVar20 = (undefined8 *)PTR_DAT_047d4ca0;
          pbVar23 = PTR_DAT_047d4c98;
          nn::os::LockMutex(pMVar1);
          FUN_015d1340(*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10),&local_138);
          nn::os::UnlockMutex(pMVar1);
        }
      }
      nn::os::UnlockMutex(pMVar1);
    }
    else {
      uVar17 = FUN_015d0794(lVar10,puVar19);
      if (((uVar17 & 1) == 0) && (plVar11 = *(long **)(lVar10 + 0x60), plVar11 != (long *)0x0)) {
        (**(code **)(*plVar11 + 0x58))(plVar11,local_160);
      }
      nn::os::LockMutex(pMVar1);
      plVar11 = *(long **)(lVar10 + 0x60);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x30))(plVar11,puVar19);
      }
      uVar17 = lVar18 + 5;
      if (*(ulong *)(puVar19 + 4) < uVar17) {
        plVar11 = *(long **)(lVar10 + 0x60);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x18))(plVar11,puVar19);
        }
        pvVar12 = (void *)(**(code **)(**(long **)(lVar10 + 0x40) + 0x10))
                                    (*(long **)(lVar10 + 0x40),uVar17);
        if (pvVar12 != (void *)0x0) {
          memcpy(pvVar12,*(void **)(puVar19 + 2),*(size_t *)(puVar19 + 6));
          (**(code **)(**(long **)(lVar10 + 0x40) + 0x18))
                    (*(long **)(lVar10 + 0x40),*(undefined8 *)(puVar19 + 2),
                     *(undefined8 *)(puVar19 + 4));
          *(void **)(puVar19 + 2) = pvVar12;
          *(ulong *)(puVar19 + 4) = uVar17;
          *(ulong *)(puVar19 + 6) = uVar17;
          uVar15 = uVar17;
          goto LAB_01675438;
        }
      }
      else {
        uVar15 = *(ulong *)(puVar19 + 6);
        if (*(ulong *)(puVar19 + 4) != uVar17) {
          if (*(ulong *)(puVar19 + 6) != uVar17) {
            plVar11 = *(long **)(lVar10 + 0x60);
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x20))(plVar11,puVar19);
            }
            *(ulong *)(puVar19 + 6) = uVar17;
          }
          uVar15 = uVar17;
        }
LAB_01675438:
        uVar9 = *(undefined8 *)(puVar19 + 2);
        local_e0 = PTR_DAT_047dcc68 + 0x10;
        local_128._4_4_ = *puVar19;
        puVar2 = PTR_DAT_047dcc70 + 0x10;
        local_130 = (undefined *)0x0;
        local_138 = puVar2;
        if (local_128._4_4_ != 0) {
          uVar17 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
          uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
          uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (((uVar17 != 1) &&
              (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar17 != 2)) &&
             (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
             local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
             local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar17 != 3)) {
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
            local_128._0_4_ = 0;
            if (uVar17 != 4) {
              (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
              for (lVar6 = uVar17 - 5; lVar6 != 0; lVar6 = lVar6 + -1) {
                (**(code **)(local_138 + 0x10))(&local_138);
              }
            }
          }
        }
        local_128 = CONCAT44(local_128._4_4_,local_128._4_4_);
        local_c8 = PTR_DAT_047dcc78 + 0x10;
        local_b0 = 0;
        local_98 = local_128;
        uStack_90 = 0;
        local_d8 = PTR_DAT_047dcc80 + 0x10;
        uStack_d0 = 0;
        local_c0 = uVar9;
        uStack_b8 = uVar15;
        local_a8 = puVar2;
        puStack_a0 = local_130;
        FUN_015d05bc(&local_e0,lVar14,lVar18);
        uVar17 = FUN_015d0a70(lVar10,puVar19);
        if ((uVar17 & 1) == 0) goto LAB_01676120;
        pbVar23 = PTR_DAT_047d4c98;
        puVar24 = (undefined8 *)PTR_DAT_047d4ca8;
      }
      nn::os::UnlockMutex(pMVar1);
      puVar20 = (undefined8 *)PTR_DAT_047d4ca0;
    }
  }
  else {
    plVar11 = *(long **)(lVar10 + 0x60);
    if (plVar11 != (long *)0x0) {
      local_e0 = (undefined *)CONCAT44(local_160[0],(undefined4)local_e0);
      local_e0 = (undefined *)CONCAT71(local_e0._1_7_,1);
      (**(code **)(*plVar11 + 0x60))(plVar11,&local_e0);
      if ((char)local_e0 != '\0') {
        local_e0 = (undefined *)((ulong)local_e0 & 0xffffffffffffff00);
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x20))();
  }
  if (((*pbVar23 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *puVar20;
  local_158 = &DAT_e4d07a996e5ef5e8;
  puStack_150 = &DAT_03c60f6f;
  *puVar24 = uVar9;
  local_148 = 4;
  local_140 = (long *)0x0;
  lVar10 = FUN_00f844f4(uVar9,&local_158);
  local_160[0] = 0xb476f6d4;
  lVar14 = *(long *)(param_1 + 0x78);
  lVar18 = *(long *)(param_1 + 0x80);
  pMVar1 = (MutexType *)(lVar10 + 0x80);
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(lVar10 + 0xa0) & 1) != 0) {
    plVar11 = *(long **)(lVar10 + 0x60);
    if (plVar11 != (long *)0x0) {
      local_e0 = (undefined *)CONCAT44(local_160[0],(undefined4)local_e0);
      local_e0 = (undefined *)CONCAT71(local_e0._1_7_,1);
      (**(code **)(*plVar11 + 0x60))(plVar11,&local_e0);
      if ((char)local_e0 != '\0') {
        local_e0 = (undefined *)((ulong)local_e0 & 0xffffffffffffff00);
      }
    }
    goto LAB_016758d8;
  }
  lVar18 = lVar18 - lVar14;
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(lVar10 + 0x10);
  uVar17 = (long)puVar5 - (long)*(uint **)(lVar10 + 8);
  if (0 < (long)uVar17) {
    puVar13 = *(uint **)(lVar10 + 8);
    puVar16 = puVar5;
    do {
      puVar19 = puVar13 + (uVar17 / 0x60) * 0xc;
      if (*puVar19 == local_160[0]) goto LAB_016756b8;
      puVar4 = puVar19 + 0xc;
      if (local_160[0] <= *puVar19) {
        puVar4 = puVar13;
        puVar16 = puVar19;
      }
      uVar17 = (long)puVar16 - (long)puVar4;
      puVar13 = puVar4;
    } while (0 < (long)uVar17);
  }
  puVar19 = puVar5;
LAB_016756b8:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar19 == (uint *)0x0) || (puVar5 == puVar19)) {
    nn::os::LockMutex(pMVar1);
    plVar11 = *(long **)(lVar10 + 0x60);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x38))(plVar11,local_160);
    }
    FUN_015d0cb8(&local_88,lVar10,local_160,lVar18 + 5);
    puVar2 = PTR_DAT_047dcc70;
    if (local_88 != (uint *)0x0) {
      uVar9 = *(undefined8 *)(local_88 + 2);
      uVar17 = *(ulong *)(local_88 + 6);
      local_e0 = PTR_DAT_047dcc68 + 0x10;
      local_128._4_4_ = *local_88;
      puVar3 = PTR_DAT_047dcc70 + 0x10;
      local_130 = (undefined *)0x0;
      local_138 = puVar3;
      if (local_128._4_4_ != 0) {
        uVar15 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
        uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
        uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar15 != 1) &&
            (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar15 != 2)) &&
           (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar15 != 3)) {
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
          local_128._0_4_ = 0;
          if (uVar15 != 4) {
            (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
            for (lVar6 = uVar15 - 5; lVar6 != 0; lVar6 = lVar6 + -1) {
              (**(code **)(local_138 + 0x10))(&local_138);
            }
          }
        }
      }
      puVar7 = PTR_DAT_047dcc80;
      puVar22 = PTR_DAT_047dcc78;
      local_128 = CONCAT44(local_128._4_4_,local_128._4_4_);
      local_c8 = PTR_DAT_047dcc78 + 0x10;
      local_b0 = 0;
      local_98 = local_128;
      uStack_90 = 0;
      local_d8 = PTR_DAT_047dcc80 + 0x10;
      uStack_d0 = 0;
      local_c0 = uVar9;
      uStack_b8 = uVar17;
      local_a8 = puVar3;
      puStack_a0 = local_130;
      uVar17 = FUN_015d05bc(&local_e0,lVar14,lVar18);
      if ((uVar17 & 1) == 0) {
        (**(code **)(**(long **)(lVar10 + 0x40) + 0x18))
                  (*(long **)(lVar10 + 0x40),*(undefined8 *)(local_88 + 2),
                   *(undefined8 *)(local_88 + 4));
        lVar14 = *(long *)(lVar10 + 0x10);
        if (*(char *)(lVar14 + -0x10) != '\0') {
          *(undefined1 *)(lVar14 + -0x10) = 0;
        }
        *(long *)(lVar10 + 0x10) = lVar14 + -0x30;
      }
      else {
        puVar3 = puVar2 + 0x10;
        uVar9 = *(undefined8 *)(local_88 + 2);
        uVar21 = *(undefined8 *)(local_88 + 6);
        local_138 = PTR_DAT_047dcc88 + 0x10;
        uStack_6c = *local_88;
        local_78 = 0;
        local_70 = 0;
        local_80 = puVar3;
        if (uStack_6c != 0) {
          uVar17 = (ulong)uStack_6c - ((ulong)(uStack_6c >> 1) & 0x5555555555555555);
          uStack_6c = uStack_6c ^ uStack_6c << 2;
          uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
          uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
          uStack_6c = uStack_6c ^ uStack_6c << 0xd;
          uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (((uVar17 != 1) &&
              (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar17 != 2)) &&
             ((uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar17 != 3 &&
              (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar17 != 4)))) {
            (**(code **)(puVar2 + 0x20))(&local_80);
            for (lVar14 = uVar17 - 5; lVar14 != 0; lVar14 = lVar14 + -1) {
              (**(code **)(local_80 + 0x10))(&local_80);
            }
          }
        }
        puStack_120 = puVar22 + 0x10;
        local_128 = 0;
        local_f0 = CONCAT44(uStack_6c,uStack_6c);
        local_108 = 0;
        uStack_e8 = 0;
        local_130 = puVar7 + 0x10;
        local_118 = uVar9;
        uStack_110 = uVar21;
        local_100 = puVar3;
        uStack_f8 = local_78;
        local_70 = uStack_6c;
        uVar9 = FUN_015d1064(&local_138);
        if ((char)local_88[8] == '\0') {
          *(undefined8 *)(local_88 + 9) = uVar9;
          *(undefined1 *)(local_88 + 8) = 1;
        }
        else {
          *(undefined8 *)(local_88 + 9) = uVar9;
        }
        nn::os::LockMutex(pMVar1);
        FUN_015d1340(*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10),&local_138);
        nn::os::UnlockMutex(pMVar1);
      }
    }
  }
  else {
    uVar17 = FUN_015d0794(lVar10,puVar19);
    if (((uVar17 & 1) == 0) && (plVar11 = *(long **)(lVar10 + 0x60), plVar11 != (long *)0x0)) {
      (**(code **)(*plVar11 + 0x58))(plVar11,local_160);
    }
    nn::os::LockMutex(pMVar1);
    plVar11 = *(long **)(lVar10 + 0x60);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x30))(plVar11,puVar19);
    }
    uVar17 = lVar18 + 5;
    if (*(ulong *)(puVar19 + 4) < uVar17) {
      plVar11 = *(long **)(lVar10 + 0x60);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))(plVar11,puVar19);
      }
      pvVar12 = (void *)(**(code **)(**(long **)(lVar10 + 0x40) + 0x10))
                                  (*(long **)(lVar10 + 0x40),uVar17);
      if (pvVar12 == (void *)0x0) goto LAB_016758d0;
      memcpy(pvVar12,*(void **)(puVar19 + 2),*(size_t *)(puVar19 + 6));
      (**(code **)(**(long **)(lVar10 + 0x40) + 0x18))
                (*(long **)(lVar10 + 0x40),*(undefined8 *)(puVar19 + 2),*(undefined8 *)(puVar19 + 4)
                );
      *(void **)(puVar19 + 2) = pvVar12;
      *(ulong *)(puVar19 + 4) = uVar17;
      *(ulong *)(puVar19 + 6) = uVar17;
      uVar15 = uVar17;
    }
    else {
      uVar15 = *(ulong *)(puVar19 + 6);
      if (*(ulong *)(puVar19 + 4) != uVar17) {
        if (*(ulong *)(puVar19 + 6) != uVar17) {
          plVar11 = *(long **)(lVar10 + 0x60);
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x20))(plVar11,puVar19);
          }
          *(ulong *)(puVar19 + 6) = uVar17;
        }
        uVar15 = uVar17;
      }
    }
    uVar9 = *(undefined8 *)(puVar19 + 2);
    local_e0 = PTR_DAT_047dcc68 + 0x10;
    local_128._4_4_ = *puVar19;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_130 = (undefined *)0x0;
    local_138 = puVar2;
    if (local_128._4_4_ != 0) {
      uVar17 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar17 != 1) &&
          (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar17 != 2)) &&
         (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
         local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
         local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar17 != 3)) {
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
        local_128._0_4_ = 0;
        if (uVar17 != 4) {
          (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
          for (lVar6 = uVar17 - 5; lVar6 != 0; lVar6 = lVar6 + -1) {
            (**(code **)(local_138 + 0x10))(&local_138);
          }
        }
      }
    }
    local_128 = CONCAT44(local_128._4_4_,local_128._4_4_);
    local_c8 = PTR_DAT_047dcc78 + 0x10;
    local_b0 = 0;
    local_98 = local_128;
    uStack_90 = 0;
    local_d8 = PTR_DAT_047dcc80 + 0x10;
    uStack_d0 = 0;
    local_c0 = uVar9;
    uStack_b8 = uVar15;
    local_a8 = puVar2;
    puStack_a0 = local_130;
    FUN_015d05bc(&local_e0,lVar14,lVar18);
    uVar17 = FUN_015d0a70(lVar10,puVar19);
    if ((uVar17 & 1) == 0) {
LAB_01676120:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ValidateElement(element)","Update",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
                 ,0x246);
    }
  }
LAB_016758d0:
  nn::os::UnlockMutex(pMVar1);
LAB_016758d8:
  nn::os::UnlockMutex(pMVar1);
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x20))();
  }
  return;
}


