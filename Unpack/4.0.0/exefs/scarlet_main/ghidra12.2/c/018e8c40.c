/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018e8c40; name: FUN_018e8c40
 */


void FUN_018e8c40(void)

{
  MutexType *pMVar1;
  undefined1 *puVar2;
  long *plVar3;
  uint *puVar4;
  uint *puVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char cVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  uint *puVar17;
  uint *puVar18;
  ulong uVar19;
  uint uVar20;
  undefined8 uVar21;
  uint *puVar22;
  uint local_8e8 [2];
  undefined1 *local_8e0;
  undefined *puStack_8d8;
  undefined8 local_8d0;
  long *local_8c8;
  undefined1 *local_8c0;
  undefined *local_8b8;
  undefined8 local_8b0;
  long *local_8a8;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined1 *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar8 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar10 = PTR_DAT_047d4ca8;
  puVar9 = PTR_DAT_047d4ca0;
  uVar13 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_8c0 = &DAT_e4d07a996e5ef5e8;
  local_8b8 = &DAT_03c60f6f;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar13;
  local_8b0 = 4;
  local_8a8 = (long *)0x0;
  lVar14 = FUN_00f844f4(uVar13,&local_8c0);
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x4eddc8c4);
  uVar15 = FUN_015df1d0(lVar14,&local_a8);
  if (((uVar15 & 0xff) == 0) && (plVar16 = *(long **)(lVar14 + 0x60), plVar16 != (long *)0x0)) {
    (**(code **)(*plVar16 + 0x50))(plVar16,&local_a8);
  }
  if (local_8a8 != (long *)0x0) {
    (**(code **)(*local_8a8 + 0x20))();
  }
  if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar13 = *(undefined8 *)puVar9;
  local_8e0 = &DAT_e4d07a996e5ef5e8;
  puStack_8d8 = &DAT_03c60f6f;
  *(undefined8 *)puVar10 = uVar13;
  local_8d0 = 4;
  local_8c8 = (long *)0x0;
  lVar14 = FUN_00f844f4(uVar13,&local_8e0);
  pMVar1 = (MutexType *)(lVar14 + 0x80);
  local_8e8[0] = 0x3aa1a9ad;
  nn::os::LockMutex(pMVar1);
  plVar16 = *(long **)(lVar14 + 0x60);
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x28))(plVar16,local_8e8);
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(lVar14 + 0x10);
  uVar19 = (long)puVar5 - (long)*(uint **)(lVar14 + 8);
  if (0 < (long)uVar19) {
    puVar17 = *(uint **)(lVar14 + 8);
    puVar18 = puVar5;
    do {
      puVar22 = puVar17 + (uVar19 / 0x60) * 0xc;
      if (*puVar22 == local_8e8[0]) goto LAB_018e8d94;
      puVar4 = puVar22 + 0xc;
      if (local_8e8[0] <= *puVar22) {
        puVar4 = puVar17;
        puVar18 = puVar22;
      }
      uVar19 = (long)puVar18 - (long)puVar4;
      puVar17 = puVar4;
    } while (0 < (long)uVar19);
  }
  puVar22 = puVar5;
LAB_018e8d94:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar22 == (uint *)0x0) || (puVar5 == puVar22)) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    uVar13 = *(undefined8 *)(puVar22 + 2);
    local_a8 = PTR_DAT_047dcc88 + 0x10;
    uVar21 = *(undefined8 *)(puVar22 + 6);
    local_8b0._4_4_ = *puVar22;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_8b8 = (undefined *)0x0;
    local_8c0 = puVar2;
    if (local_8b0._4_4_ != 0) {
      uVar19 = (ulong)local_8b0._4_4_ - ((ulong)(local_8b0._4_4_ >> 1) & 0x5555555555555555);
      local_8b0._4_4_ = local_8b0._4_4_ ^ local_8b0._4_4_ << 2;
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      local_8b0._4_4_ = local_8b0._4_4_ ^ local_8b0._4_4_ >> 0xf;
      local_8b0._4_4_ = local_8b0._4_4_ ^ local_8b0._4_4_ << 0xd;
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if ((uVar19 != 1) &&
         (local_8b0._4_4_ = local_8b0._4_4_ ^ local_8b0._4_4_ << 2,
         local_8b0._4_4_ = local_8b0._4_4_ ^ local_8b0._4_4_ >> 0xf,
         local_8b0._4_4_ = local_8b0._4_4_ ^ local_8b0._4_4_ << 0xd, uVar19 != 2)) {
        local_8b0._4_4_ = local_8b0._4_4_ ^ local_8b0._4_4_ << 2;
        local_8b0._4_4_ = local_8b0._4_4_ ^ local_8b0._4_4_ >> 0xf;
        local_8b0._4_4_ = local_8b0._4_4_ ^ local_8b0._4_4_ << 0xd;
        local_8b0._0_4_ = 0;
        if (uVar19 != 3) {
          FUN_00f83090(&local_8c0);
          for (lVar7 = uVar19 - 4; lVar7 != 0; lVar7 = lVar7 + -1) {
            (**(code **)(local_8c0 + 0x10))(&local_8c0);
          }
        }
      }
    }
    local_8b0 = CONCAT44(local_8b0._4_4_,local_8b0._4_4_);
    local_90 = PTR_DAT_047dcc78 + 0x10;
    local_78 = 0;
    local_60 = local_8b0;
    uStack_58 = 0;
    local_a0 = PTR_DAT_047dcc80 + 0x10;
    uStack_98 = 0;
    local_88 = uVar13;
    uStack_80 = uVar21;
    local_70 = puVar2;
    puStack_68 = local_8b8;
    cVar11 = FUN_00f88478(&local_a8,&local_8c0,uVar15 >> 0x20);
    nn::os::UnlockMutex(pMVar1);
    if (cVar11 != '\0') goto LAB_018e8f04;
  }
  plVar16 = *(long **)(lVar14 + 0x60);
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x50))(plVar16,local_8e8);
  }
LAB_018e8f04:
  if (local_8c8 != (long *)0x0) {
    (**(code **)(*local_8c8 + 0x20))();
  }
  if (((*PTR_DAT_047d4568 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4568), iVar12 != 0)) {
    FUN_00100190(&LAB_02ace3a0,PTR_DAT_047d4570,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4568);
  }
  lVar14 = *(long *)PTR_DAT_047d4570;
  *(long *)PTR_DAT_047d4578 = lVar14;
  plVar16 = *(long **)(lVar14 + 0x28);
  if (plVar16 != (long *)0x0) {
    plVar3 = plVar16 + 5;
    do {
      lVar14 = *plVar3;
      cVar11 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = (int)lVar14 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if ((int)lVar14 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_018e9224(plVar16,&local_8c0);
  if ((char)plVar16[0x12] != '\0') {
    lVar14 = (**(code **)(*plVar16 + 0x60))(plVar16,0);
    if (lVar14 != 0) {
      FUN_00f167bc();
    }
    if (1 < *(byte *)(plVar16 + 0x12)) {
      lVar14 = (**(code **)(*plVar16 + 0x60))(plVar16,1);
      if (lVar14 != 0) {
        FUN_00f167bc();
      }
      if (2 < *(byte *)(plVar16 + 0x12)) {
        lVar14 = (**(code **)(*plVar16 + 0x60))(plVar16,2);
        if (lVar14 != 0) {
          FUN_00f167bc();
        }
        if (3 < *(byte *)(plVar16 + 0x12)) {
          lVar14 = (**(code **)(*plVar16 + 0x60))(plVar16,3);
          if (lVar14 != 0) {
            FUN_00f167bc();
          }
          if (4 < *(byte *)(plVar16 + 0x12)) {
            lVar14 = (**(code **)(*plVar16 + 0x60))(plVar16,4);
            if (lVar14 != 0) {
              FUN_00f167bc();
            }
            if (5 < *(byte *)(plVar16 + 0x12)) {
              lVar14 = (**(code **)(*plVar16 + 0x60))(plVar16,5);
              if (lVar14 != 0) {
                FUN_00f167bc();
              }
              if (6 < *(byte *)(plVar16 + 0x12)) {
                uVar20 = 6;
                do {
                  lVar14 = (**(code **)(*plVar16 + 0x60))(plVar16,uVar20);
                  if (lVar14 != 0) {
                    FUN_00f167bc();
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar20 < *(byte *)(plVar16 + 0x12));
              }
            }
          }
        }
      }
    }
  }
  plVar3 = plVar16 + 5;
  do {
    lVar14 = *plVar3;
    iVar12 = (int)lVar14 + -1;
    cVar11 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar6) {
      *(int *)plVar3 = iVar12;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  else if ((int)lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


