/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b61128; name: FUN_01b61128
 */


void FUN_01b61128(undefined8 param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  void *__dest;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint *puVar16;
  byte *pbVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  uint local_140 [2];
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
  
  pbVar17 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar8 = PTR_DAT_047d4ca8;
  puVar7 = PTR_DAT_047d4ca0;
  uVar15 = *(undefined8 *)PTR_DAT_047d4ca0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar15;
  FUN_00d8fb98(&local_e0,PTR_DAT_047dcc90);
  lVar10 = FUN_00f844f4(uVar15,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  pMVar1 = (MutexType *)(lVar10 + 0x80);
  local_140[0] = 0xa1fe2727;
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(lVar10 + 0xa0) & 1) != 0) {
    plVar11 = *(long **)(lVar10 + 0x60);
    if (plVar11 != (long *)0x0) {
      local_e0 = (undefined *)CONCAT44(local_140[0],(undefined4)local_e0);
      local_e0 = (undefined *)CONCAT71(local_e0._1_7_,1);
      (**(code **)(*plVar11 + 0x60))(plVar11,&local_e0);
      if ((char)local_e0 != '\0') {
        local_e0 = (undefined *)((ulong)local_e0 & 0xffffffffffffff00);
      }
    }
    goto LAB_01b61444;
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(lVar10 + 0x10);
  uVar14 = (long)puVar5 - (long)*(uint **)(lVar10 + 8);
  if (0 < (long)uVar14) {
    puVar12 = *(uint **)(lVar10 + 8);
    puVar13 = puVar5;
    do {
      puVar16 = puVar12 + (uVar14 / 0x60) * 0xc;
      if (*puVar16 == local_140[0]) goto LAB_01b61220;
      puVar4 = puVar16 + 0xc;
      if (local_140[0] <= *puVar16) {
        puVar4 = puVar12;
        puVar13 = puVar16;
      }
      uVar14 = (long)puVar13 - (long)puVar4;
      puVar12 = puVar4;
    } while (0 < (long)uVar14);
  }
  puVar16 = puVar5;
LAB_01b61220:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar16 == (uint *)0x0) || (puVar5 == puVar16)) {
    nn::os::LockMutex(pMVar1);
    plVar11 = *(long **)(lVar10 + 0x60);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x38))(plVar11,local_140);
    }
    FUN_015d0cb8(&local_88,lVar10,local_140,0x22);
    puVar2 = PTR_DAT_047dcc70;
    if (local_88 != (uint *)0x0) {
      uVar15 = *(undefined8 *)(local_88 + 2);
      lVar20 = *(long *)(local_88 + 6);
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
      puVar19 = PTR_DAT_047dcc80;
      puVar18 = PTR_DAT_047dcc78;
      local_128 = CONCAT44(local_128._4_4_,local_128._4_4_);
      local_c8 = (long *)(PTR_DAT_047dcc78 + 0x10);
      local_b0 = 0;
      local_98 = local_128;
      uStack_90 = 0;
      local_d8 = PTR_DAT_047dcc80 + 0x10;
      uStack_d0 = 0;
      local_c0 = uVar15;
      lStack_b8 = lVar20;
      local_a8 = puVar3;
      puStack_a0 = local_130;
      uVar14 = FUN_015d05bc(&local_e0,param_1,0x1d);
      if ((uVar14 & 1) == 0) {
        (**(code **)(**(long **)(lVar10 + 0x40) + 0x18))
                  (*(long **)(lVar10 + 0x40),*(undefined8 *)(local_88 + 2),
                   *(undefined8 *)(local_88 + 4));
        lVar20 = *(long *)(lVar10 + 0x10);
        if (*(char *)(lVar20 + -0x10) != '\0') {
          *(undefined1 *)(lVar20 + -0x10) = 0;
        }
        *(long *)(lVar10 + 0x10) = lVar20 + -0x30;
        goto LAB_01b61434;
      }
      puVar3 = puVar2 + 0x10;
      uVar21 = *(undefined8 *)(local_88 + 2);
      uVar15 = *(undefined8 *)(local_88 + 6);
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
        if (((uVar14 == 1) ||
            (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
            uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar14 == 2)) ||
           ((uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
            uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar14 == 3 ||
            (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
            uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar14 == 4)))) {
          puVar18 = PTR_DAT_047dcc78;
        }
        else {
          (**(code **)(puVar2 + 0x20))(&local_80);
          lVar20 = uVar14 - 5;
          puVar18 = PTR_DAT_047dcc78;
          puVar19 = PTR_DAT_047dcc80;
          while( true ) {
            PTR_DAT_047dcc78 = puVar18;
            PTR_DAT_047dcc80 = puVar19;
            if (lVar20 == 0) break;
            (**(code **)(local_80 + 0x10))(&local_80);
            lVar20 = lVar20 + -1;
            puVar18 = PTR_DAT_047dcc78;
            puVar19 = PTR_DAT_047dcc80;
          }
        }
      }
      puStack_120 = puVar18 + 0x10;
      local_128 = 0;
      local_f0 = CONCAT44(uStack_6c,uStack_6c);
      local_108 = 0;
      uStack_e8 = 0;
      local_130 = puVar19 + 0x10;
      local_118 = uVar21;
      uStack_110 = uVar15;
      local_100 = puVar3;
      uStack_f8 = local_78;
      local_70 = uStack_6c;
      uVar15 = FUN_015d1064(&local_138);
      if ((char)local_88[8] == '\0') {
        *(undefined8 *)(local_88 + 9) = uVar15;
        *(undefined1 *)(local_88 + 8) = 1;
      }
      else {
        *(undefined8 *)(local_88 + 9) = uVar15;
      }
      pbVar17 = PTR_DAT_047d4c98;
      nn::os::LockMutex(pMVar1);
      FUN_015d1340(*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10),&local_138);
      nn::os::UnlockMutex(pMVar1);
    }
  }
  else {
    uVar14 = FUN_015d0794(lVar10,puVar16);
    if (((uVar14 & 1) == 0) && (plVar11 = *(long **)(lVar10 + 0x60), plVar11 != (long *)0x0)) {
      (**(code **)(*plVar11 + 0x58))(plVar11,local_140);
    }
    nn::os::LockMutex(pMVar1);
    plVar11 = *(long **)(lVar10 + 0x60);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x30))(plVar11,puVar16);
    }
    if (*(ulong *)(puVar16 + 4) < 0x22) {
      plVar11 = *(long **)(lVar10 + 0x60);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))(plVar11,puVar16);
      }
      __dest = (void *)(**(code **)(**(long **)(lVar10 + 0x40) + 0x10))
                                 (*(long **)(lVar10 + 0x40),0x22);
      if (__dest == (void *)0x0) goto LAB_01b6143c;
      memcpy(__dest,*(void **)(puVar16 + 2),*(size_t *)(puVar16 + 6));
      (**(code **)(**(long **)(lVar10 + 0x40) + 0x18))
                (*(long **)(lVar10 + 0x40),*(undefined8 *)(puVar16 + 2),*(undefined8 *)(puVar16 + 4)
                );
      *(void **)(puVar16 + 2) = __dest;
      puVar16[4] = 0x22;
      puVar16[5] = 0;
LAB_01b612e4:
      lVar20 = 0x22;
      puVar16[6] = 0x22;
      puVar16[7] = 0;
    }
    else {
      lVar20 = *(long *)(puVar16 + 6);
      if ((*(ulong *)(puVar16 + 4) != 0x22) && (lVar20 != 0x22)) {
        plVar11 = *(long **)(lVar10 + 0x60);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x20))(plVar11,puVar16);
        }
        goto LAB_01b612e4;
      }
    }
    uVar15 = *(undefined8 *)(puVar16 + 2);
    local_e0 = PTR_DAT_047dcc68 + 0x10;
    local_128._4_4_ = *puVar16;
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
    local_c8 = (long *)(PTR_DAT_047dcc78 + 0x10);
    local_b0 = 0;
    local_98 = local_128;
    uStack_90 = 0;
    local_d8 = PTR_DAT_047dcc80 + 0x10;
    uStack_d0 = 0;
    local_c0 = uVar15;
    lStack_b8 = lVar20;
    local_a8 = puVar2;
    puStack_a0 = local_130;
    FUN_015d05bc(&local_e0,param_1,0x1d);
    uVar14 = FUN_015d0a70(lVar10,puVar16);
    if ((uVar14 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ValidateElement(element)","Update",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
                 ,0x246);
    }
LAB_01b61434:
    pbVar17 = PTR_DAT_047d4c98;
  }
LAB_01b6143c:
  nn::os::UnlockMutex(pMVar1);
LAB_01b61444:
  nn::os::UnlockMutex(pMVar1);
  if (((*pbVar17 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar15 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar15;
  FUN_00d8fb98(&local_e0,PTR_DAT_047dcc90);
  uVar15 = FUN_00f844f4(uVar15,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  local_e0 = (undefined *)CONCAT44(local_e0._4_4_,0x1e3fdf75);
  local_138 = (undefined *)CONCAT71(local_138._1_7_,1);
  FUN_016c15d4(uVar15,&local_e0,&local_138);
  return;
}


