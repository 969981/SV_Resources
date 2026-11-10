/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01882770; name: FUN_01882770
 */


void FUN_01882770(long param_1)

{
  MutexType *pMVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  void *__dest;
  uint uVar9;
  uint *puVar10;
  undefined *puVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  byte *pbVar20;
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
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  long lStack_b8;
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
  
  FUN_018849a0();
  *(undefined4 *)(param_1 + 0x56e) = 0x1000800;
  pbVar20 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar18 = (undefined8 *)PTR_DAT_047d4ca8;
  puVar15 = (undefined8 *)PTR_DAT_047d4ca0;
  uVar6 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  local_d8 = &DAT_03c60f6f;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar6;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  uVar6 = FUN_00f844f4(uVar6,&local_e0);
  local_138 = (undefined *)(param_1 + 0x40);
  local_158 = (undefined1 *)0x231;
  FUN_01883f50(uVar6,&DAT_03d60b64,&local_138,&local_158);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (((*pbVar20 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar6 = *puVar15;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  local_d8 = &DAT_03c60f6f;
  *puVar18 = uVar6;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  uVar6 = FUN_00f844f4(uVar6,&local_e0);
  local_138 = (undefined *)(param_1 + 0x4a2);
  local_158 = (undefined1 *)0x42;
  FUN_01883f50(uVar6,&DAT_03d60b68,&local_138,&local_158);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (((*pbVar20 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar6 = *puVar15;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  local_d8 = &DAT_03c60f6f;
  *puVar18 = uVar6;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  uVar6 = FUN_00f844f4(uVar6,&local_e0);
  local_138 = (undefined *)(param_1 + 0x526);
  local_158 = (undefined1 *)0x24;
  FUN_01883f50(uVar6,&DAT_03d60b6c,&local_138,&local_158);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (((*pbVar20 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar6 = *puVar15;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  local_d8 = &DAT_03c60f6f;
  *puVar18 = uVar6;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  uVar6 = FUN_00f844f4(uVar6,&local_e0);
  FUN_01883910(uVar6,&DAT_03d60b70,param_1 + 0x56e);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (((*pbVar20 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar6 = *puVar15;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  local_d8 = &DAT_03c60f6f;
  *puVar18 = uVar6;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  uVar6 = FUN_00f844f4(uVar6,&local_e0);
  FUN_01883910(uVar6,&DAT_03d60b74,param_1 + 0x56f);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (((*pbVar20 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar6 = *puVar15;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  local_d8 = &DAT_03c60f6f;
  *puVar18 = uVar6;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  uVar6 = FUN_00f844f4(uVar6,&local_e0);
  FUN_01883910(uVar6,&DAT_03d60b78,param_1 + 0x570);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (((*pbVar20 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar6 = *puVar15;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  local_d8 = &DAT_03c60f6f;
  *puVar18 = uVar6;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  uVar6 = FUN_00f844f4(uVar6,&local_e0);
  FUN_018837a8(uVar6,&DAT_03d60b7c,param_1 + 0x571);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (((*pbVar20 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar6 = *puVar15;
  local_158 = &DAT_e4d07a996e5ef5e8;
  puStack_150 = &DAT_03c60f6f;
  *puVar18 = uVar6;
  local_148 = 4;
  local_140 = (long *)0x0;
  lVar7 = FUN_00f844f4(uVar6,&local_158);
  pMVar1 = (MutexType *)(lVar7 + 0x80);
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(lVar7 + 0xa0) & 1) != 0) {
    plVar8 = *(long **)(lVar7 + 0x60);
    if (plVar8 != (long *)0x0) {
      local_e0 = (undefined1 *)CONCAT44(0x2eb1b190,(undefined4)local_e0);
      local_e0 = (undefined1 *)CONCAT71(local_e0._1_7_,1);
      (**(code **)(*plVar8 + 0x60))(plVar8,&local_e0);
      if ((char)local_e0 != '\0') {
        local_e0 = (undefined1 *)((ulong)local_e0 & 0xffffffffffffff00);
      }
    }
    goto LAB_01882e28;
  }
  nn::os::LockMutex(pMVar1);
  puVar3 = *(uint **)(lVar7 + 0x10);
  uVar13 = (long)puVar3 - (long)*(uint **)(lVar7 + 8);
  if (0 < (long)uVar13) {
    puVar10 = *(uint **)(lVar7 + 8);
    puVar12 = puVar3;
    do {
      puVar16 = puVar10 + (uVar13 / 0x60) * 0xc;
      if (*puVar16 == 0x2eb1b190) goto LAB_01882a84;
      puVar2 = puVar16 + 0xc;
      if (0x2eb1b18f < *puVar16) {
        puVar2 = puVar10;
        puVar12 = puVar16;
      }
      uVar13 = (long)puVar12 - (long)puVar2;
      puVar10 = puVar2;
    } while (0 < (long)uVar13);
  }
  puVar16 = puVar3;
LAB_01882a84:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar16 == (uint *)0x0) || (puVar3 == puVar16)) {
    nn::os::LockMutex(pMVar1);
    plVar8 = *(long **)(lVar7 + 0x60);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x38))(plVar8,&DAT_03d60b80);
    }
    FUN_015d0cb8(&local_88,lVar7,&DAT_03d60b80,0x27);
    if (local_88 != (uint *)0x0) {
      uVar6 = *(undefined8 *)(local_88 + 2);
      lVar14 = *(long *)(local_88 + 6);
      local_e0 = PTR_DAT_047dcc68 + 0x10;
      uVar9 = *local_88;
      puVar11 = PTR_DAT_047dcc70 + 0x10;
      local_130 = (undefined *)0x0;
      local_138 = puVar11;
      if (uVar9 == 0) {
        uVar9 = 0;
        local_128._4_4_ = 0;
      }
      else {
        uVar13 = (ulong)uVar9 - ((ulong)(uVar9 >> 1) & 0x5555555555555555);
        uVar9 = uVar9 ^ uVar9 << 2;
        uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
        uVar9 = uVar9 ^ uVar9 >> 0xf;
        uVar9 = uVar9 ^ uVar9 << 0xd;
        local_128 = (ulong)uVar9 << 0x20;
        uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar13 != 1) {
          uVar9 = uVar9 ^ uVar9 << 2;
          uVar9 = uVar9 ^ uVar9 >> 0xf;
          uVar9 = uVar9 ^ uVar9 << 0xd;
          local_128 = (ulong)uVar9 << 0x20;
          if (uVar13 != 2) {
            uVar9 = uVar9 ^ uVar9 << 2;
            uVar9 = uVar9 ^ uVar9 >> 0xf;
            uVar9 = uVar9 ^ uVar9 << 0xd;
            local_128 = (ulong)uVar9 << 0x20;
            if (uVar13 != 3) {
              uVar9 = uVar9 ^ uVar9 << 2;
              uVar9 = uVar9 ^ uVar9 >> 0xf;
              uVar9 = uVar9 ^ uVar9 << 0xd;
              local_128 = (ulong)uVar9 << 0x20;
              if (uVar13 != 4) {
                (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
                for (lVar4 = uVar13 - 5; lVar4 != 0; lVar4 = lVar4 + -1) {
                  (**(code **)(local_138 + 0x10))(&local_138);
                }
                local_128._4_4_ = (uint)((ulong)local_128 >> 0x20);
                uVar9 = local_128._4_4_;
              }
            }
          }
        }
        pbVar20 = PTR_DAT_047d4c98;
      }
      puVar19 = PTR_DAT_047dcc80;
      local_128 = CONCAT44(local_128._4_4_,uVar9);
      local_c8 = (long *)(PTR_DAT_047dcc78 + 0x10);
      local_b0 = 0;
      local_98 = local_128;
      uStack_90 = 0;
      local_d8 = PTR_DAT_047dcc80 + 0x10;
      local_d0 = 0;
      local_c0 = uVar6;
      lStack_b8 = lVar14;
      local_a8 = puVar11;
      puStack_a0 = local_130;
      uVar13 = FUN_0188470c(&local_e0,param_1 + 0x572,0x21);
      if ((uVar13 & 1) == 0) {
        (**(code **)(**(long **)(lVar7 + 0x40) + 0x18))
                  (*(long **)(lVar7 + 0x40),*(undefined8 *)(local_88 + 2),
                   *(undefined8 *)(local_88 + 4));
        puVar18 = (undefined8 *)PTR_DAT_047d4ca8;
        lVar14 = *(long *)(lVar7 + 0x10);
        if (*(char *)(lVar14 + -0x10) != '\0') {
          *(undefined1 *)(lVar14 + -0x10) = 0;
        }
        *(long *)(lVar7 + 0x10) = lVar14 + -0x30;
      }
      else {
        uVar17 = *(undefined8 *)(local_88 + 2);
        uVar6 = *(undefined8 *)(local_88 + 6);
        local_138 = PTR_DAT_047dcc88 + 0x10;
        uStack_6c = *local_88;
        puVar11 = PTR_DAT_047dcc70 + 0x10;
        local_70 = 0;
        local_78 = 0;
        local_80 = puVar11;
        if (uStack_6c != 0) {
          uVar13 = (ulong)uStack_6c - ((ulong)(uStack_6c >> 1) & 0x5555555555555555);
          uStack_6c = uStack_6c ^ uStack_6c << 2;
          uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
          uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
          uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          uStack_6c = uStack_6c ^ uStack_6c << 0xd;
          if ((((uVar13 == 1) ||
               (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
               uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar13 == 2)) ||
              (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar13 == 3)) ||
             (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
             uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar13 == 4)) {
            puVar19 = PTR_DAT_047dcc80;
          }
          else {
            (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_80);
            puVar19 = PTR_DAT_047dcc80;
            for (lVar14 = uVar13 - 5; PTR_DAT_047dcc80 = puVar19, lVar14 != 0; lVar14 = lVar14 + -1)
            {
              (**(code **)(local_80 + 0x10))(&local_80);
              puVar19 = PTR_DAT_047dcc80;
            }
          }
        }
        puStack_120 = PTR_DAT_047dcc78 + 0x10;
        local_128 = 0;
        local_f0 = CONCAT44(uStack_6c,uStack_6c);
        local_108 = 0;
        uStack_e8 = 0;
        local_130 = puVar19 + 0x10;
        local_118 = uVar17;
        uStack_110 = uVar6;
        local_100 = puVar11;
        uStack_f8 = local_78;
        local_70 = uStack_6c;
        uVar6 = FUN_015d1064(&local_138);
        puVar18 = (undefined8 *)PTR_DAT_047d4ca8;
        if ((char)local_88[8] == '\0') {
          *(undefined8 *)(local_88 + 9) = uVar6;
          *(undefined1 *)(local_88 + 8) = 1;
        }
        else {
          *(undefined8 *)(local_88 + 9) = uVar6;
        }
        nn::os::LockMutex(pMVar1);
        FUN_015d1340(*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10),&local_138);
        nn::os::UnlockMutex(pMVar1);
      }
    }
  }
  else {
    uVar6 = *(undefined8 *)(puVar16 + 2);
    lVar14 = *(long *)(puVar16 + 6);
    local_e0 = PTR_DAT_047dcc88 + 0x10;
    local_128._4_4_ = *puVar16;
    puVar11 = PTR_DAT_047dcc70 + 0x10;
    local_130 = (undefined *)0x0;
    uVar9 = 0;
    local_138 = puVar11;
    if (local_128._4_4_ != 0) {
      uVar13 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
      uVar9 = local_128._4_4_ ^ local_128._4_4_ << 0xd;
      local_128 = (ulong)uVar9 << 0x20;
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 != 1) {
        uVar9 = uVar9 ^ uVar9 << 2;
        uVar9 = uVar9 ^ uVar9 >> 0xf;
        uVar9 = uVar9 ^ uVar9 << 0xd;
        local_128 = (ulong)uVar9 << 0x20;
        if (uVar13 != 2) {
          uVar9 = uVar9 ^ uVar9 << 2;
          uVar9 = uVar9 ^ uVar9 >> 0xf;
          uVar9 = uVar9 ^ uVar9 << 0xd;
          local_128 = (ulong)uVar9 << 0x20;
          if (uVar13 != 3) {
            uVar9 = uVar9 ^ uVar9 << 2;
            uVar9 = uVar9 ^ uVar9 >> 0xf;
            uVar9 = uVar9 ^ uVar9 << 0xd;
            local_128 = (ulong)uVar9 << 0x20;
            if (uVar13 != 4) {
              (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
              puVar18 = (undefined8 *)PTR_DAT_047d4ca8;
              for (lVar4 = uVar13 - 5; PTR_DAT_047d4ca8 = (undefined *)puVar18, lVar4 != 0;
                  lVar4 = lVar4 + -1) {
                (**(code **)(local_138 + 0x10))(&local_138);
                puVar18 = (undefined8 *)PTR_DAT_047d4ca8;
              }
              local_128._4_4_ = (uint)((ulong)local_128 >> 0x20);
              uVar9 = local_128._4_4_;
              goto LAB_01882bc0;
            }
          }
        }
      }
      puVar18 = (undefined8 *)PTR_DAT_047d4ca8;
    }
LAB_01882bc0:
    local_128 = CONCAT44(local_128._4_4_,uVar9);
    local_c8 = (long *)(PTR_DAT_047dcc78 + 0x10);
    local_b0 = 0;
    local_98 = local_128;
    uStack_90 = 0;
    local_d8 = PTR_DAT_047dcc80 + 0x10;
    local_d0 = 0;
    local_c0 = uVar6;
    lStack_b8 = lVar14;
    local_a8 = puVar11;
    puStack_a0 = local_130;
    uVar13 = FUN_015d1064(&local_e0);
    if ((((((uint)uVar13 & 0xff) != 5) || (uVar9 = (uint)(uVar13 >> 8), (uVar9 & 0xff) != 8)) ||
        ((9 < (uVar9 - 8 & 0xff) || ((uVar13 >> 0x20 != 0 && ((uVar13 & 0xff0000) != 0)))))) &&
       (plVar8 = *(long **)(lVar7 + 0x60), plVar8 != (long *)0x0)) {
      (**(code **)(*plVar8 + 0x58))(plVar8,&DAT_03d60b80);
    }
    nn::os::LockMutex(pMVar1);
    plVar8 = *(long **)(lVar7 + 0x60);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x30))(plVar8,puVar16);
    }
    puVar11 = PTR_DAT_047dcc70;
    if (*(ulong *)(puVar16 + 4) < 0x27) {
      plVar8 = *(long **)(lVar7 + 0x60);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))(plVar8,puVar16);
      }
      __dest = (void *)(**(code **)(**(long **)(lVar7 + 0x40) + 0x10))
                                 (*(long **)(lVar7 + 0x40),0x27);
      if (__dest == (void *)0x0) goto LAB_01882e20;
      memcpy(__dest,*(void **)(puVar16 + 2),*(size_t *)(puVar16 + 6));
      (**(code **)(**(long **)(lVar7 + 0x40) + 0x18))
                (*(long **)(lVar7 + 0x40),*(undefined8 *)(puVar16 + 2),*(undefined8 *)(puVar16 + 4))
      ;
      lVar14 = 0x27;
      *(void **)(puVar16 + 2) = __dest;
      puVar16[4] = 0x27;
      puVar16[5] = 0;
      puVar16[6] = 0x27;
      puVar16[7] = 0;
      puVar11 = PTR_DAT_047dcc70;
    }
    else {
      lVar14 = *(long *)(puVar16 + 6);
      if ((*(ulong *)(puVar16 + 4) != 0x27) && (lVar14 != 0x27)) {
        plVar8 = *(long **)(lVar7 + 0x60);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x20))(plVar8,puVar16);
        }
        lVar14 = 0x27;
        puVar16[6] = 0x27;
        puVar16[7] = 0;
      }
    }
    uVar6 = *(undefined8 *)(puVar16 + 2);
    local_e0 = PTR_DAT_047dcc68 + 0x10;
    local_128._4_4_ = *puVar16;
    puVar19 = puVar11 + 0x10;
    local_130 = (undefined *)0x0;
    uVar9 = 0;
    local_138 = puVar19;
    if (local_128._4_4_ != 0) {
      uVar13 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
      uVar9 = local_128._4_4_ ^ local_128._4_4_ << 0xd;
      local_128 = (ulong)uVar9 << 0x20;
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 != 1) {
        uVar9 = uVar9 ^ uVar9 << 2;
        uVar9 = uVar9 ^ uVar9 >> 0xf;
        uVar9 = uVar9 ^ uVar9 << 0xd;
        local_128 = (ulong)uVar9 << 0x20;
        if (uVar13 != 2) {
          uVar9 = uVar9 ^ uVar9 << 2;
          uVar9 = uVar9 ^ uVar9 >> 0xf;
          uVar9 = uVar9 ^ uVar9 << 0xd;
          local_128 = (ulong)uVar9 << 0x20;
          if (uVar13 != 3) {
            uVar9 = uVar9 ^ uVar9 << 2;
            uVar9 = uVar9 ^ uVar9 >> 0xf;
            uVar9 = uVar9 ^ uVar9 << 0xd;
            local_128 = (ulong)uVar9 << 0x20;
            if (uVar13 != 4) {
              (**(code **)(puVar11 + 0x20))(&local_138);
              lVar4 = uVar13 - 5;
              pbVar20 = PTR_DAT_047d4c98;
              puVar15 = (undefined8 *)PTR_DAT_047d4ca0;
              while( true ) {
                PTR_DAT_047d4c98 = pbVar20;
                PTR_DAT_047d4ca0 = (undefined *)puVar15;
                if (lVar4 == 0) break;
                (**(code **)(local_138 + 0x10))(&local_138);
                lVar4 = lVar4 + -1;
                pbVar20 = PTR_DAT_047d4c98;
                puVar15 = (undefined8 *)PTR_DAT_047d4ca0;
              }
              local_128._4_4_ = (uint)((ulong)local_128 >> 0x20);
              uVar9 = local_128._4_4_;
              goto LAB_01882dc0;
            }
          }
        }
      }
      pbVar20 = PTR_DAT_047d4c98;
    }
LAB_01882dc0:
    local_128 = CONCAT44(local_128._4_4_,uVar9);
    local_c8 = (long *)(PTR_DAT_047dcc78 + 0x10);
    local_b0 = 0;
    local_98 = local_128;
    uStack_90 = 0;
    local_d8 = PTR_DAT_047dcc80 + 0x10;
    local_d0 = 0;
    local_c0 = uVar6;
    lStack_b8 = lVar14;
    local_a8 = puVar19;
    puStack_a0 = local_130;
    FUN_0188470c(&local_e0,param_1 + 0x572,0x21);
    uVar13 = FUN_015d0a70(lVar7,puVar16);
    if ((uVar13 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ValidateElement(element)","Update",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
                 ,0x246);
    }
    puVar18 = (undefined8 *)PTR_DAT_047d4ca8;
  }
LAB_01882e20:
  nn::os::UnlockMutex(pMVar1);
LAB_01882e28:
  nn::os::UnlockMutex(pMVar1);
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x20))();
  }
  if (((*pbVar20 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar6 = *puVar15;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  local_d8 = &DAT_03c60f6f;
  *puVar18 = uVar6;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  uVar6 = FUN_00f844f4(uVar6,&local_e0);
  FUN_01883640(uVar6,&DAT_03d60b84,param_1 + 0x592);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (((*pbVar20 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar6 = *puVar15;
  local_e0 = &DAT_e4d07a996e5ef5e8;
  local_d8 = &DAT_03c60f6f;
  *puVar18 = uVar6;
  local_d0 = 4;
  local_c8 = (long *)0x0;
  uVar6 = FUN_00f844f4(uVar6,&local_e0);
  FUN_01883640(uVar6,&DAT_03d60b88,param_1 + 0x594);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  return;
}


