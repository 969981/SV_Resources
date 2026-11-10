/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0191e8e0; name: FUN_0191e8e0
 */


void FUN_0191e8e0(uint param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  long *plVar6;
  uint *puVar7;
  ushort uVar8;
  byte bVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  undefined *puVar15;
  int iVar16;
  long *plVar17;
  long *plVar18;
  void *__dest;
  long lVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  uint *puVar25;
  uint *puVar26;
  long lVar27;
  undefined8 uVar28;
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
     (iVar16 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar16 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar19 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar19;
  puVar3 = PTR_DAT_047d4c68;
  puVar2 = PTR_DAT_047d4c60;
  plVar6 = *(long **)(lVar19 + 0x1c8);
  for (plVar18 = *(long **)(lVar19 + 0x1c0); plVar18 != plVar6; plVar18 = plVar18 + 1) {
    lVar19 = *plVar18;
    plVar17 = (long *)(*(code *)**(undefined8 **)(lVar19 + 0x28))((undefined8 *)(lVar19 + 0x28));
    if (((*puVar2 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar2), iVar16 != 0)) {
      uVar24 = FUN_01b3fb0c();
      *(undefined8 *)puVar3 = uVar24;
      __cxa_guard_release(puVar2);
    }
    for (; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
      if (plVar17 == (long *)puVar3) goto LAB_0191e988;
    }
  }
  lVar19 = 0;
LAB_0191e988:
  uVar8 = *(ushort *)(lVar19 + 0x42);
  uVar4 = *(uint *)(lVar19 + 0x44);
  if (param_1 <= *(uint *)(lVar19 + 0x44)) {
    uVar4 = param_1;
  }
  uVar11 = 0;
  if (uVar8 != 0) {
    uVar11 = uVar4 / uVar8;
  }
  puVar25 = (uint *)(lVar19 + 0x48);
  *puVar25 = uVar11;
  bVar9 = *(byte *)(lVar19 + 0x40);
  uVar12 = 0;
  if (bVar9 != 0) {
    uVar12 = uVar4 / bVar9;
  }
  uVar21 = (uint)bVar9;
  uVar13 = 0;
  if (uVar21 != 0) {
    uVar13 = (uVar4 - uVar11 * uVar8 & 0xffff) / uVar21;
  }
  *(uint *)(lVar19 + 0x4c) = uVar13;
  *(uint *)(lVar19 + 0x50) = uVar4 - uVar12 * uVar21;
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar16 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar24 = *(undefined8 *)PTR_DAT_047d4ca0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar24;
  FUN_00d8fb98(auStack_158,PTR_DAT_047dcc90);
  lVar19 = FUN_00f844f4(uVar24,auStack_158);
  pMVar1 = (MutexType *)(lVar19 + 0x80);
  local_160[0] = 0xedaff794;
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(lVar19 + 0xa0) & 1) != 0) {
    plVar18 = *(long **)(lVar19 + 0x60);
    if (plVar18 != (long *)0x0) {
      local_e0 = (undefined *)CONCAT44(local_160[0],(undefined4)local_e0);
      local_e0 = (undefined *)CONCAT71(local_e0._1_7_,1);
      (**(code **)(*plVar18 + 0x60))(plVar18,&local_e0);
      if ((char)local_e0 != '\0') {
        local_e0 = (undefined *)((ulong)local_e0 & 0xffffffffffffff00);
      }
    }
    goto LAB_0191ed50;
  }
  nn::os::LockMutex(pMVar1);
  puVar7 = *(uint **)(lVar19 + 0x10);
  uVar23 = (long)puVar7 - (long)*(uint **)(lVar19 + 8);
  if (0 < (long)uVar23) {
    puVar20 = *(uint **)(lVar19 + 8);
    puVar22 = puVar7;
    do {
      puVar26 = puVar20 + (uVar23 / 0x60) * 0xc;
      if (*puVar26 == local_160[0]) goto LAB_0191eb34;
      puVar5 = puVar26 + 0xc;
      if (local_160[0] <= *puVar26) {
        puVar5 = puVar20;
        puVar22 = puVar26;
      }
      uVar23 = (long)puVar22 - (long)puVar5;
      puVar20 = puVar5;
    } while (0 < (long)uVar23);
  }
  puVar26 = puVar7;
LAB_0191eb34:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar26 == (uint *)0x0) || (puVar7 == puVar26)) {
    nn::os::LockMutex(pMVar1);
    plVar18 = *(long **)(lVar19 + 0x60);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x38))(plVar18,local_160);
    }
    FUN_015d0cb8(&local_88,lVar19,local_160,0x11);
    puVar2 = PTR_DAT_047dcc70;
    if (local_88 != (uint *)0x0) {
      uVar24 = *(undefined8 *)(local_88 + 2);
      lVar27 = *(long *)(local_88 + 6);
      local_e0 = PTR_DAT_047dcc68 + 0x10;
      local_128._4_4_ = *local_88;
      puVar3 = PTR_DAT_047dcc70 + 0x10;
      local_130 = (undefined *)0x0;
      local_138 = puVar3;
      if (local_128._4_4_ != 0) {
        uVar23 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
        uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
        uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar23 != 1) &&
            (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar23 != 2)) &&
           (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar23 != 3)) {
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
          local_128._0_4_ = 0;
          if (uVar23 != 4) {
            (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
            for (lVar10 = uVar23 - 5; lVar10 != 0; lVar10 = lVar10 + -1) {
              (**(code **)(local_138 + 0x10))(&local_138);
            }
          }
        }
      }
      puVar15 = PTR_DAT_047dcc80;
      puVar14 = PTR_DAT_047dcc78;
      local_128 = CONCAT44(local_128._4_4_,local_128._4_4_);
      local_c8 = PTR_DAT_047dcc78 + 0x10;
      local_b0 = 0;
      local_98 = local_128;
      uStack_90 = 0;
      local_d8 = PTR_DAT_047dcc80 + 0x10;
      uStack_d0 = 0;
      local_c0 = uVar24;
      lStack_b8 = lVar27;
      local_a8 = puVar3;
      puStack_a0 = local_130;
      uVar23 = FUN_015d05bc(&local_e0,puVar25,0xc);
      if ((uVar23 & 1) == 0) {
        (**(code **)(**(long **)(lVar19 + 0x40) + 0x18))
                  (*(long **)(lVar19 + 0x40),*(undefined8 *)(local_88 + 2),
                   *(undefined8 *)(local_88 + 4));
        lVar27 = *(long *)(lVar19 + 0x10);
        if (*(char *)(lVar27 + -0x10) != '\0') {
          *(undefined1 *)(lVar27 + -0x10) = 0;
        }
        *(long *)(lVar19 + 0x10) = lVar27 + -0x30;
      }
      else {
        puVar3 = puVar2 + 0x10;
        uVar24 = *(undefined8 *)(local_88 + 2);
        uVar28 = *(undefined8 *)(local_88 + 6);
        local_138 = PTR_DAT_047dcc88 + 0x10;
        uStack_6c = *local_88;
        local_78 = 0;
        local_70 = 0;
        local_80 = puVar3;
        if (uStack_6c != 0) {
          uVar23 = (ulong)uStack_6c - ((ulong)(uStack_6c >> 1) & 0x5555555555555555);
          uStack_6c = uStack_6c ^ uStack_6c << 2;
          uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
          uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
          uStack_6c = uStack_6c ^ uStack_6c << 0xd;
          uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (((uVar23 != 1) &&
              (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar23 != 2)) &&
             ((uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar23 != 3 &&
              (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar23 != 4)))) {
            (**(code **)(puVar2 + 0x20))(&local_80);
            for (lVar27 = uVar23 - 5; lVar27 != 0; lVar27 = lVar27 + -1) {
              (**(code **)(local_80 + 0x10))(&local_80);
            }
          }
        }
        puStack_120 = puVar14 + 0x10;
        local_128 = 0;
        local_f0 = CONCAT44(uStack_6c,uStack_6c);
        local_108 = 0;
        uStack_e8 = 0;
        local_130 = puVar15 + 0x10;
        local_118 = uVar24;
        uStack_110 = uVar28;
        local_100 = puVar3;
        uStack_f8 = local_78;
        local_70 = uStack_6c;
        uVar24 = FUN_015d1064(&local_138);
        if ((char)local_88[8] == '\0') {
          *(undefined8 *)(local_88 + 9) = uVar24;
          *(undefined1 *)(local_88 + 8) = 1;
        }
        else {
          *(undefined8 *)(local_88 + 9) = uVar24;
        }
        nn::os::LockMutex(pMVar1);
        FUN_015d1340(*(undefined8 *)(lVar19 + 8),*(undefined8 *)(lVar19 + 0x10),&local_138);
        nn::os::UnlockMutex(pMVar1);
      }
    }
  }
  else {
    uVar23 = FUN_015d0794(lVar19,puVar26);
    if (((uVar23 & 1) == 0) && (plVar18 = *(long **)(lVar19 + 0x60), plVar18 != (long *)0x0)) {
      (**(code **)(*plVar18 + 0x58))(plVar18,local_160);
    }
    nn::os::LockMutex(pMVar1);
    plVar18 = *(long **)(lVar19 + 0x60);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x30))(plVar18,puVar26);
    }
    if (*(ulong *)(puVar26 + 4) < 0x11) {
      plVar18 = *(long **)(lVar19 + 0x60);
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x18))(plVar18,puVar26);
      }
      __dest = (void *)(**(code **)(**(long **)(lVar19 + 0x40) + 0x10))
                                 (*(long **)(lVar19 + 0x40),0x11);
      if (__dest != (void *)0x0) {
        memcpy(__dest,*(void **)(puVar26 + 2),*(size_t *)(puVar26 + 6));
        (**(code **)(**(long **)(lVar19 + 0x40) + 0x18))
                  (*(long **)(lVar19 + 0x40),*(undefined8 *)(puVar26 + 2),
                   *(undefined8 *)(puVar26 + 4));
        *(void **)(puVar26 + 2) = __dest;
        puVar26[4] = 0x11;
        puVar26[5] = 0;
        goto LAB_0191ebf8;
      }
    }
    else {
      lVar27 = *(long *)(puVar26 + 6);
      if ((*(ulong *)(puVar26 + 4) != 0x11) && (lVar27 != 0x11)) {
        plVar18 = *(long **)(lVar19 + 0x60);
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 0x20))(plVar18,puVar26);
        }
LAB_0191ebf8:
        lVar27 = 0x11;
        puVar26[6] = 0x11;
        puVar26[7] = 0;
      }
      uVar24 = *(undefined8 *)(puVar26 + 2);
      local_e0 = PTR_DAT_047dcc68 + 0x10;
      local_128._4_4_ = *puVar26;
      puVar2 = PTR_DAT_047dcc70 + 0x10;
      local_130 = (undefined *)0x0;
      local_138 = puVar2;
      if (local_128._4_4_ != 0) {
        uVar23 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
        uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
        uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar23 != 1) &&
            (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar23 != 2)) &&
           (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar23 != 3)) {
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
          local_128._0_4_ = 0;
          if (uVar23 != 4) {
            (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
            for (lVar10 = uVar23 - 5; lVar10 != 0; lVar10 = lVar10 + -1) {
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
      local_c0 = uVar24;
      lStack_b8 = lVar27;
      local_a8 = puVar2;
      puStack_a0 = local_130;
      FUN_015d05bc(&local_e0,puVar25,0xc);
      uVar23 = FUN_015d0a70(lVar19,puVar26);
      if ((uVar23 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ValidateElement(element)","Update",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
                   ,0x246);
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
LAB_0191ed50:
  nn::os::UnlockMutex(pMVar1);
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x20))();
  }
  return;
}


