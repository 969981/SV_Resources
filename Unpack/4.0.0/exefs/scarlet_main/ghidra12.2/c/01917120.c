/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01917120; name: FUN_01917120
 */


void FUN_01917120(undefined4 param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  void *__dest;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  uint *puVar19;
  long lVar20;
  undefined8 uVar21;
  uint local_160 [2];
  undefined1 auStack_158 [24];
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
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar13 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar13;
  puVar3 = PTR_DAT_047d4c68;
  puVar2 = PTR_DAT_047d4c60;
  plVar5 = *(long **)(lVar13 + 0x1c8);
  for (plVar12 = *(long **)(lVar13 + 0x1c0); plVar12 != plVar5; plVar12 = plVar12 + 1) {
    lVar13 = *plVar12;
    plVar11 = (long *)(*(code *)**(undefined8 **)(lVar13 + 0x28))((undefined8 *)(lVar13 + 0x28));
    if (((*puVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar2), iVar10 != 0)) {
      uVar17 = FUN_01b3fb0c();
      *(undefined8 *)puVar3 = uVar17;
      __cxa_guard_release(puVar2);
    }
    for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if (plVar11 == (long *)puVar3) goto LAB_019171c8;
    }
  }
  lVar13 = 0;
LAB_019171c8:
  puVar18 = (undefined4 *)(lVar13 + 0x60);
  *puVar18 = param_1;
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar17 = *(undefined8 *)PTR_DAT_047d4ca0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar17;
  FUN_00d8fb98(auStack_158,PTR_DAT_047dcc90);
  lVar13 = FUN_00f844f4(uVar17,auStack_158);
  pMVar1 = (MutexType *)(lVar13 + 0x80);
  local_160[0] = 0x19fc5b7b;
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(lVar13 + 0xa0) & 1) != 0) {
    plVar12 = *(long **)(lVar13 + 0x60);
    if (plVar12 != (long *)0x0) {
      local_e0 = (undefined *)CONCAT44(local_160[0],(undefined4)local_e0);
      local_e0 = (undefined *)CONCAT71(local_e0._1_7_,1);
      (**(code **)(*plVar12 + 0x60))(plVar12,&local_e0);
      if ((char)local_e0 != '\0') {
        local_e0 = (undefined *)((ulong)local_e0 & 0xffffffffffffff00);
      }
    }
    goto LAB_01917560;
  }
  nn::os::LockMutex(pMVar1);
  puVar6 = *(uint **)(lVar13 + 0x10);
  uVar16 = (long)puVar6 - (long)*(uint **)(lVar13 + 8);
  if (0 < (long)uVar16) {
    puVar14 = *(uint **)(lVar13 + 8);
    puVar15 = puVar6;
    do {
      puVar19 = puVar14 + (uVar16 / 0x60) * 0xc;
      if (*puVar19 == local_160[0]) goto LAB_01917344;
      puVar4 = puVar19 + 0xc;
      if (local_160[0] <= *puVar19) {
        puVar4 = puVar14;
        puVar15 = puVar19;
      }
      uVar16 = (long)puVar15 - (long)puVar4;
      puVar14 = puVar4;
    } while (0 < (long)uVar16);
  }
  puVar19 = puVar6;
LAB_01917344:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar19 == (uint *)0x0) || (puVar6 == puVar19)) {
    nn::os::LockMutex(pMVar1);
    plVar12 = *(long **)(lVar13 + 0x60);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x38))(plVar12,local_160);
    }
    FUN_015d0cb8(&local_88,lVar13,local_160,9);
    puVar2 = PTR_DAT_047dcc70;
    if (local_88 != (uint *)0x0) {
      uVar17 = *(undefined8 *)(local_88 + 2);
      lVar20 = *(long *)(local_88 + 6);
      local_e0 = PTR_DAT_047dcc68 + 0x10;
      local_128._4_4_ = *local_88;
      puVar3 = PTR_DAT_047dcc70 + 0x10;
      local_130 = (undefined *)0x0;
      local_138 = puVar3;
      if (local_128._4_4_ != 0) {
        uVar16 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
        uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
        uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar16 != 1) &&
            (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar16 != 2)) &&
           (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar16 != 3)) {
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
          local_128._0_4_ = 0;
          if (uVar16 != 4) {
            (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
            for (lVar7 = uVar16 - 5; lVar7 != 0; lVar7 = lVar7 + -1) {
              (**(code **)(local_138 + 0x10))(&local_138);
            }
          }
        }
      }
      puVar9 = PTR_DAT_047dcc80;
      puVar8 = PTR_DAT_047dcc78;
      local_128 = CONCAT44(local_128._4_4_,local_128._4_4_);
      local_c8 = PTR_DAT_047dcc78 + 0x10;
      local_b0 = 0;
      local_98 = local_128;
      uStack_90 = 0;
      local_d8 = PTR_DAT_047dcc80 + 0x10;
      uStack_d0 = 0;
      local_c0 = uVar17;
      lStack_b8 = lVar20;
      local_a8 = puVar3;
      puStack_a0 = local_130;
      uVar16 = FUN_015d05bc(&local_e0,puVar18,4);
      if ((uVar16 & 1) == 0) {
        (**(code **)(**(long **)(lVar13 + 0x40) + 0x18))
                  (*(long **)(lVar13 + 0x40),*(undefined8 *)(local_88 + 2),
                   *(undefined8 *)(local_88 + 4));
        lVar20 = *(long *)(lVar13 + 0x10);
        if (*(char *)(lVar20 + -0x10) != '\0') {
          *(undefined1 *)(lVar20 + -0x10) = 0;
        }
        *(long *)(lVar13 + 0x10) = lVar20 + -0x30;
      }
      else {
        puVar3 = puVar2 + 0x10;
        uVar17 = *(undefined8 *)(local_88 + 2);
        uVar21 = *(undefined8 *)(local_88 + 6);
        local_138 = PTR_DAT_047dcc88 + 0x10;
        uStack_6c = *local_88;
        local_78 = 0;
        local_70 = 0;
        local_80 = puVar3;
        if (uStack_6c != 0) {
          uVar16 = (ulong)uStack_6c - ((ulong)(uStack_6c >> 1) & 0x5555555555555555);
          uStack_6c = uStack_6c ^ uStack_6c << 2;
          uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
          uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
          uStack_6c = uStack_6c ^ uStack_6c << 0xd;
          uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (((uVar16 != 1) &&
              (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar16 != 2)) &&
             ((uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar16 != 3 &&
              (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar16 != 4)))) {
            (**(code **)(puVar2 + 0x20))(&local_80);
            for (lVar20 = uVar16 - 5; lVar20 != 0; lVar20 = lVar20 + -1) {
              (**(code **)(local_80 + 0x10))(&local_80);
            }
          }
        }
        puStack_120 = puVar8 + 0x10;
        local_128 = 0;
        local_f0 = CONCAT44(uStack_6c,uStack_6c);
        local_108 = 0;
        uStack_e8 = 0;
        local_130 = puVar9 + 0x10;
        local_118 = uVar17;
        uStack_110 = uVar21;
        local_100 = puVar3;
        uStack_f8 = local_78;
        local_70 = uStack_6c;
        uVar17 = FUN_015d1064(&local_138);
        if ((char)local_88[8] == '\0') {
          *(undefined8 *)(local_88 + 9) = uVar17;
          *(undefined1 *)(local_88 + 8) = 1;
        }
        else {
          *(undefined8 *)(local_88 + 9) = uVar17;
        }
        nn::os::LockMutex(pMVar1);
        FUN_015d1340(*(undefined8 *)(lVar13 + 8),*(undefined8 *)(lVar13 + 0x10),&local_138);
        nn::os::UnlockMutex(pMVar1);
      }
    }
  }
  else {
    uVar16 = FUN_015d0794(lVar13,puVar19);
    if (((uVar16 & 1) == 0) && (plVar12 = *(long **)(lVar13 + 0x60), plVar12 != (long *)0x0)) {
      (**(code **)(*plVar12 + 0x58))(plVar12,local_160);
    }
    nn::os::LockMutex(pMVar1);
    plVar12 = *(long **)(lVar13 + 0x60);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x30))(plVar12,puVar19);
    }
    if (*(ulong *)(puVar19 + 4) < 9) {
      plVar12 = *(long **)(lVar13 + 0x60);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar19);
      }
      __dest = (void *)(**(code **)(**(long **)(lVar13 + 0x40) + 0x10))(*(long **)(lVar13 + 0x40),9)
      ;
      if (__dest != (void *)0x0) {
        memcpy(__dest,*(void **)(puVar19 + 2),*(size_t *)(puVar19 + 6));
        (**(code **)(**(long **)(lVar13 + 0x40) + 0x18))
                  (*(long **)(lVar13 + 0x40),*(undefined8 *)(puVar19 + 2),
                   *(undefined8 *)(puVar19 + 4));
        *(void **)(puVar19 + 2) = __dest;
        puVar19[4] = 9;
        puVar19[5] = 0;
        goto LAB_01917408;
      }
    }
    else {
      lVar20 = *(long *)(puVar19 + 6);
      if ((*(ulong *)(puVar19 + 4) != 9) && (lVar20 != 9)) {
        plVar12 = *(long **)(lVar13 + 0x60);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x20))(plVar12,puVar19);
        }
LAB_01917408:
        lVar20 = 9;
        puVar19[6] = 9;
        puVar19[7] = 0;
      }
      uVar17 = *(undefined8 *)(puVar19 + 2);
      local_e0 = PTR_DAT_047dcc68 + 0x10;
      local_128._4_4_ = *puVar19;
      puVar2 = PTR_DAT_047dcc70 + 0x10;
      local_130 = (undefined *)0x0;
      local_138 = puVar2;
      if (local_128._4_4_ != 0) {
        uVar16 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
        uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
        uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar16 != 1) &&
            (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar16 != 2)) &&
           (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar16 != 3)) {
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
          local_128._0_4_ = 0;
          if (uVar16 != 4) {
            (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
            for (lVar7 = uVar16 - 5; lVar7 != 0; lVar7 = lVar7 + -1) {
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
      local_c0 = uVar17;
      lStack_b8 = lVar20;
      local_a8 = puVar2;
      puStack_a0 = local_130;
      FUN_015d05bc(&local_e0,puVar18,4);
      uVar16 = FUN_015d0a70(lVar13,puVar19);
      if ((uVar16 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ValidateElement(element)","Update",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
                   ,0x246);
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
LAB_01917560:
  nn::os::UnlockMutex(pMVar1);
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x20))();
  }
  return;
}


