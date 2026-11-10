/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018528d8; name: FUN_018528d8
 */


void FUN_018528d8(void)

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
  void *__dest;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined1 local_15c [4];
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
  undefined *puStack_c8;
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
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar9 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_158 = &DAT_e4d07a996e5ef5e8;
  puStack_150 = &DAT_03c60f6f;
  local_148 = 4;
  local_140 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar9;
  lVar10 = FUN_00f844f4(uVar9,&local_158);
  pMVar1 = (MutexType *)(lVar10 + 0x80);
  local_15c[0] = 0;
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(lVar10 + 0xa0) & 1) != 0) {
    plVar11 = *(long **)(lVar10 + 0x60);
    if (plVar11 != (long *)0x0) {
      local_e0 = (undefined *)CONCAT44(0x41309084,(undefined4)local_e0);
      local_e0 = (undefined *)CONCAT71(local_e0._1_7_,1);
      (**(code **)(*plVar11 + 0x60))(plVar11,&local_e0);
      if ((char)local_e0 != '\0') {
        local_e0 = (undefined *)((ulong)local_e0 & 0xffffffffffffff00);
      }
    }
    goto LAB_01852bf0;
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(lVar10 + 0x10);
  uVar14 = (long)puVar5 - (long)*(uint **)(lVar10 + 8);
  if (0 < (long)uVar14) {
    puVar12 = *(uint **)(lVar10 + 8);
    puVar13 = puVar5;
    do {
      puVar15 = puVar12 + (uVar14 / 0x60) * 0xc;
      if (*puVar15 == 0x41309084) goto LAB_018529d0;
      puVar4 = puVar15 + 0xc;
      if (0x41309083 < *puVar15) {
        puVar4 = puVar12;
        puVar13 = puVar15;
      }
      uVar14 = (long)puVar13 - (long)puVar4;
      puVar12 = puVar4;
    } while (0 < (long)uVar14);
  }
  puVar15 = puVar5;
LAB_018529d0:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar15 == (uint *)0x0) || (puVar5 == puVar15)) {
    nn::os::LockMutex(pMVar1);
    plVar11 = *(long **)(lVar10 + 0x60);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x38))(plVar11,&DAT_03d627a0);
    }
    FUN_015d0cb8(&local_88,lVar10,&DAT_03d627a0,2);
    puVar2 = PTR_DAT_047dcc70;
    if (local_88 != (uint *)0x0) {
      uVar9 = *(undefined8 *)(local_88 + 2);
      lVar17 = *(long *)(local_88 + 6);
      local_e0 = PTR_DAT_047dcc68 + 0x10;
      local_128._4_4_ = *local_88;
      puVar3 = PTR_DAT_047dcc70 + 0x10;
      local_130 = (undefined *)0x0;
      local_138 = puVar3;
      if (local_128._4_4_ != 0) {
        uVar14 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
        uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
        uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar14 != 1) &&
            (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar14 != 2)) &&
           (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar14 != 3)) {
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
          local_128._0_4_ = 0;
          if (uVar14 != 4) {
            (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
            for (lVar6 = uVar14 - 5; lVar6 != 0; lVar6 = lVar6 + -1) {
              (**(code **)(local_138 + 0x10))(&local_138);
            }
          }
        }
      }
      puVar7 = PTR_DAT_047dcc80;
      puVar16 = PTR_DAT_047dcc78;
      local_128 = CONCAT44(local_128._4_4_,local_128._4_4_);
      puStack_c8 = PTR_DAT_047dcc78 + 0x10;
      local_d0 = 0;
      local_b0 = 0;
      local_98 = local_128;
      uStack_90 = 0;
      local_d8 = PTR_DAT_047dcc80 + 0x10;
      local_c0 = uVar9;
      lStack_b8 = lVar17;
      local_a8 = puVar3;
      puStack_a0 = local_130;
      uVar14 = FUN_0185303c(&local_e0,local_15c);
      if ((uVar14 & 1) == 0) {
        (**(code **)(**(long **)(lVar10 + 0x40) + 0x18))
                  (*(long **)(lVar10 + 0x40),*(undefined8 *)(local_88 + 2),
                   *(undefined8 *)(local_88 + 4));
        lVar17 = *(long *)(lVar10 + 0x10);
        if (*(char *)(lVar17 + -0x10) != '\0') {
          *(undefined1 *)(lVar17 + -0x10) = 0;
        }
        *(long *)(lVar10 + 0x10) = lVar17 + -0x30;
      }
      else {
        puVar3 = puVar2 + 0x10;
        uVar18 = *(undefined8 *)(local_88 + 2);
        uVar9 = *(undefined8 *)(local_88 + 6);
        local_138 = PTR_DAT_047dcc88 + 0x10;
        uStack_6c = *local_88;
        local_78 = 0;
        local_70 = 0;
        local_80 = puVar3;
        if (uStack_6c != 0) {
          uVar14 = (ulong)uStack_6c - ((ulong)(uStack_6c >> 1) & 0x5555555555555555);
          uStack_6c = uStack_6c ^ uStack_6c << 2;
          uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
          uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
          uStack_6c = uStack_6c ^ uStack_6c << 0xd;
          uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (((uVar14 != 1) &&
              (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar14 != 2)) &&
             ((uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar14 != 3 &&
              (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar14 != 4)))) {
            (**(code **)(puVar2 + 0x20))(&local_80);
            puVar16 = PTR_DAT_047dcc78;
            for (lVar17 = uVar14 - 5; PTR_DAT_047dcc78 = puVar16, lVar17 != 0; lVar17 = lVar17 + -1)
            {
              (**(code **)(local_80 + 0x10))(&local_80);
              puVar16 = PTR_DAT_047dcc78;
            }
          }
        }
        puStack_120 = puVar16 + 0x10;
        local_128 = 0;
        local_f0 = CONCAT44(uStack_6c,uStack_6c);
        local_108 = 0;
        uStack_e8 = 0;
        local_130 = puVar7 + 0x10;
        local_118 = uVar18;
        uStack_110 = uVar9;
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
    uVar14 = FUN_01853194(lVar10,puVar15);
    if (((uVar14 & 1) == 0) && (plVar11 = *(long **)(lVar10 + 0x60), plVar11 != (long *)0x0)) {
      (**(code **)(*plVar11 + 0x58))(plVar11,&DAT_03d627a0);
    }
    nn::os::LockMutex(pMVar1);
    plVar11 = *(long **)(lVar10 + 0x60);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x30))(plVar11,puVar15);
    }
    if (*(ulong *)(puVar15 + 4) < 2) {
      plVar11 = *(long **)(lVar10 + 0x60);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))(plVar11,puVar15);
      }
      __dest = (void *)(**(code **)(**(long **)(lVar10 + 0x40) + 0x10))(*(long **)(lVar10 + 0x40),2)
      ;
      if (__dest != (void *)0x0) {
        memcpy(__dest,*(void **)(puVar15 + 2),*(size_t *)(puVar15 + 6));
        (**(code **)(**(long **)(lVar10 + 0x40) + 0x18))
                  (*(long **)(lVar10 + 0x40),*(undefined8 *)(puVar15 + 2),
                   *(undefined8 *)(puVar15 + 4));
        *(void **)(puVar15 + 2) = __dest;
        puVar15[4] = 2;
        puVar15[5] = 0;
        goto LAB_01852a9c;
      }
    }
    else {
      lVar17 = *(long *)(puVar15 + 6);
      if ((*(ulong *)(puVar15 + 4) != 2) && (lVar17 != 2)) {
        plVar11 = *(long **)(lVar10 + 0x60);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x20))(plVar11,puVar15);
        }
LAB_01852a9c:
        lVar17 = 2;
        puVar15[6] = 2;
        puVar15[7] = 0;
      }
      uVar9 = *(undefined8 *)(puVar15 + 2);
      local_e0 = PTR_DAT_047dcc68 + 0x10;
      local_128._4_4_ = *puVar15;
      puVar2 = PTR_DAT_047dcc70 + 0x10;
      local_130 = (undefined *)0x0;
      local_138 = puVar2;
      if (local_128._4_4_ != 0) {
        uVar14 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
        uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
        uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar14 != 1) &&
            (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar14 != 2)) &&
           (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar14 != 3)) {
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
          local_128._0_4_ = 0;
          if (uVar14 != 4) {
            (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
            for (lVar6 = uVar14 - 5; lVar6 != 0; lVar6 = lVar6 + -1) {
              (**(code **)(local_138 + 0x10))(&local_138);
            }
          }
        }
      }
      local_128 = CONCAT44(local_128._4_4_,local_128._4_4_);
      puStack_c8 = PTR_DAT_047dcc78 + 0x10;
      local_d0 = 0;
      local_b0 = 0;
      local_98 = local_128;
      uStack_90 = 0;
      local_d8 = PTR_DAT_047dcc80 + 0x10;
      local_c0 = uVar9;
      lStack_b8 = lVar17;
      local_a8 = puVar2;
      puStack_a0 = local_130;
      FUN_0185303c(&local_e0,local_15c);
      uVar14 = FUN_015d0a70(lVar10,puVar15);
      if ((uVar14 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ValidateElement(element)","Update",
                   "../../include\\pe/savedata/./hashdb/basic_storage.hpp",0x246);
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
LAB_01852bf0:
  nn::os::UnlockMutex(pMVar1);
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x20))();
  }
  return;
}


