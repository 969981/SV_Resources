/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018fb540; name: FUN_018fb540
 */


void FUN_018fb540(void)

{
  long *plVar1;
  MutexType *pMVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  uint *puVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  void *pvVar13;
  uint uVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar18;
  long *plVar19;
  uint *puVar20;
  byte *pbVar21;
  undefined *puVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined4 local_97c;
  uint local_978 [2];
  undefined1 *local_970;
  undefined *puStack_968;
  undefined8 local_960;
  long *local_958;
  undefined1 auStack_950 [2072];
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
  
  if (((*PTR_DAT_047d4568 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4568), iVar11 != 0)) {
    FUN_00100190(&LAB_02ace3a0,PTR_DAT_047d4570,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4568);
  }
  lVar15 = *(long *)PTR_DAT_047d4570;
  *(long *)PTR_DAT_047d4578 = lVar15;
  plVar19 = *(long **)(lVar15 + 0x28);
  if (plVar19 == (long *)0x0) {
    FUN_01674c7c(0,auStack_950,1);
  }
  else {
    plVar1 = plVar19 + 5;
    do {
      lVar15 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = (int)lVar15 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((int)lVar15 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_01674c7c(plVar19,auStack_950,1);
    do {
      lVar15 = *plVar1;
      iVar11 = (int)lVar15 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar11;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
    else if ((int)lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  pbVar21 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar24 = (undefined8 *)PTR_DAT_047d4ca8;
  puVar25 = (undefined8 *)PTR_DAT_047d4ca0;
  uVar12 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_970 = &DAT_e4d07a996e5ef5e8;
  puStack_968 = &DAT_03c60f6f;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar12;
  local_960 = 4;
  local_958 = (long *)0x0;
  lVar15 = FUN_00f844f4(uVar12,&local_970);
  pMVar2 = (MutexType *)(lVar15 + 0x80);
  local_978[0] = 0x3aa1a9ad;
  nn::os::LockMutex(pMVar2);
  if ((*(byte *)(lVar15 + 0xa0) & 1) == 0) {
    nn::os::LockMutex(pMVar2);
    puVar6 = *(uint **)(lVar15 + 0x10);
    uVar18 = (long)puVar6 - (long)*(uint **)(lVar15 + 8);
    if (0 < (long)uVar18) {
      puVar16 = *(uint **)(lVar15 + 8);
      puVar17 = puVar6;
      do {
        puVar20 = puVar16 + (uVar18 / 0x60) * 0xc;
        if (*puVar20 == local_978[0]) goto LAB_018fb6b4;
        puVar5 = puVar20 + 0xc;
        if (local_978[0] <= *puVar20) {
          puVar5 = puVar16;
          puVar17 = puVar20;
        }
        uVar18 = (long)puVar17 - (long)puVar5;
        puVar16 = puVar5;
      } while (0 < (long)uVar18);
    }
    puVar20 = puVar6;
LAB_018fb6b4:
    nn::os::UnlockMutex(pMVar2);
    if ((puVar20 == (uint *)0x0) || (puVar6 == puVar20)) {
      nn::os::LockMutex(pMVar2);
      plVar19 = *(long **)(lVar15 + 0x60);
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x38))(plVar19,local_978);
      }
      FUN_015d0cb8(&local_88,lVar15,local_978,0x819);
      puVar3 = PTR_DAT_047dcc70;
      if (local_88 != (uint *)0x0) {
        uVar12 = *(undefined8 *)(local_88 + 2);
        lVar23 = *(long *)(local_88 + 6);
        local_e0 = PTR_DAT_047dcc68 + 0x10;
        uVar14 = *local_88;
        puVar4 = PTR_DAT_047dcc70 + 0x10;
        local_130 = (undefined *)0x0;
        local_138 = puVar4;
        if (uVar14 == 0) {
          uVar14 = 0;
          local_128._4_4_ = 0;
        }
        else {
          uVar18 = (ulong)uVar14 - ((ulong)(uVar14 >> 1) & 0x5555555555555555);
          uVar14 = uVar14 ^ uVar14 << 2;
          uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
          uVar14 = uVar14 ^ uVar14 >> 0xf;
          uVar14 = uVar14 ^ uVar14 << 0xd;
          local_128 = (ulong)uVar14 << 0x20;
          uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar18 != 1) {
            uVar14 = uVar14 ^ uVar14 << 2;
            uVar14 = uVar14 ^ uVar14 >> 0xf;
            uVar14 = uVar14 ^ uVar14 << 0xd;
            local_128 = (ulong)uVar14 << 0x20;
            if (uVar18 != 2) {
              uVar14 = uVar14 ^ uVar14 << 2;
              uVar14 = uVar14 ^ uVar14 >> 0xf;
              uVar14 = uVar14 ^ uVar14 << 0xd;
              local_128 = (ulong)uVar14 << 0x20;
              if (uVar18 != 3) {
                uVar14 = uVar14 ^ uVar14 << 2;
                uVar14 = uVar14 ^ uVar14 >> 0xf;
                uVar14 = uVar14 ^ uVar14 << 0xd;
                local_128 = (ulong)uVar14 << 0x20;
                if (uVar18 != 4) {
                  (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
                  for (lVar9 = uVar18 - 5; lVar9 != 0; lVar9 = lVar9 + -1) {
                    (**(code **)(local_138 + 0x10))(&local_138);
                  }
                  local_128._4_4_ = (uint)((ulong)local_128 >> 0x20);
                  uVar14 = local_128._4_4_;
                }
              }
            }
          }
          puVar25 = (undefined8 *)PTR_DAT_047d4ca0;
        }
        puVar22 = PTR_DAT_047dcc80;
        local_128 = CONCAT44(local_128._4_4_,uVar14);
        puStack_c8 = PTR_DAT_047dcc78 + 0x10;
        local_d0 = 0;
        local_b0 = 0;
        local_98 = local_128;
        uStack_90 = 0;
        local_d8 = PTR_DAT_047dcc80 + 0x10;
        local_c0 = uVar12;
        lStack_b8 = lVar23;
        local_a8 = puVar4;
        puStack_a0 = local_130;
        uVar18 = FUN_015d05bc(&local_e0,auStack_950,0x814);
        puVar6 = local_88;
        if ((uVar18 & 1) == 0) {
          (**(code **)(**(long **)(lVar15 + 0x40) + 0x18))
                    (*(long **)(lVar15 + 0x40),*(undefined8 *)(local_88 + 2),
                     *(undefined8 *)(local_88 + 4));
          lVar23 = *(long *)(lVar15 + 0x10);
          if (*(char *)(lVar23 + -0x10) != '\0') {
            *(undefined1 *)(lVar23 + -0x10) = 0;
          }
          *(long *)(lVar15 + 0x10) = lVar23 + -0x30;
          goto LAB_018fb8d0;
        }
        puVar4 = puVar3 + 0x10;
        uVar26 = *(undefined8 *)(local_88 + 2);
        uVar12 = *(undefined8 *)(local_88 + 6);
        local_138 = PTR_DAT_047dcc88 + 0x10;
        uStack_6c = *local_88;
        local_78 = 0;
        local_70 = 0;
        local_80 = puVar4;
        if (uStack_6c != 0) {
          uVar18 = (ulong)uStack_6c - ((ulong)(uStack_6c >> 1) & 0x5555555555555555);
          uStack_6c = uStack_6c ^ uStack_6c << 2;
          uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
          uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
          uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          uStack_6c = uStack_6c ^ uStack_6c << 0xd;
          if ((((uVar18 == 1) ||
               (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
               uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar18 == 2)) ||
              (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar18 == 3)) ||
             (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
             uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar18 == 4)) {
            puVar22 = PTR_DAT_047dcc80;
          }
          else {
            (**(code **)(puVar3 + 0x20))(&local_80);
            puVar22 = PTR_DAT_047dcc80;
            for (lVar23 = uVar18 - 5; PTR_DAT_047dcc80 = puVar22, lVar23 != 0; lVar23 = lVar23 + -1)
            {
              (**(code **)(local_80 + 0x10))(&local_80);
              puVar22 = PTR_DAT_047dcc80;
            }
          }
        }
        puStack_120 = PTR_DAT_047dcc78 + 0x10;
        local_128 = 0;
        local_f0 = CONCAT44(uStack_6c,uStack_6c);
        local_108 = 0;
        uStack_e8 = 0;
        local_130 = puVar22 + 0x10;
        local_118 = uVar26;
        uStack_110 = uVar12;
        local_100 = puVar4;
        uStack_f8 = local_78;
        local_70 = uStack_6c;
        uVar12 = FUN_015d1064(&local_138);
        if ((char)puVar6[8] == '\0') {
          *(undefined8 *)(puVar6 + 9) = uVar12;
          *(undefined1 *)(puVar6 + 8) = 1;
        }
        else {
          *(undefined8 *)(puVar6 + 9) = uVar12;
        }
        puVar24 = (undefined8 *)PTR_DAT_047d4ca8;
        pbVar21 = PTR_DAT_047d4c98;
        nn::os::LockMutex(pMVar2);
        FUN_015d1340(*(undefined8 *)(lVar15 + 8),*(undefined8 *)(lVar15 + 0x10),&local_138);
        nn::os::UnlockMutex(pMVar2);
      }
    }
    else {
      uVar18 = FUN_015d0794(lVar15,puVar20);
      if (((uVar18 & 1) == 0) && (plVar19 = *(long **)(lVar15 + 0x60), plVar19 != (long *)0x0)) {
        (**(code **)(*plVar19 + 0x58))(plVar19,local_978);
      }
      nn::os::LockMutex(pMVar2);
      plVar19 = *(long **)(lVar15 + 0x60);
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x30))(plVar19,puVar20);
      }
      if (*(ulong *)(puVar20 + 4) < 0x819) {
        plVar19 = *(long **)(lVar15 + 0x60);
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x18))(plVar19,puVar20);
        }
        pvVar13 = (void *)(**(code **)(**(long **)(lVar15 + 0x40) + 0x10))
                                    (*(long **)(lVar15 + 0x40),0x819);
        if (pvVar13 == (void *)0x0) goto LAB_018fb8e0;
        memcpy(pvVar13,*(void **)(puVar20 + 2),*(size_t *)(puVar20 + 6));
        (**(code **)(**(long **)(lVar15 + 0x40) + 0x18))
                  (*(long **)(lVar15 + 0x40),*(undefined8 *)(puVar20 + 2),
                   *(undefined8 *)(puVar20 + 4));
        *(void **)(puVar20 + 2) = pvVar13;
        puVar20[4] = 0x819;
        puVar20[5] = 0;
LAB_018fb778:
        lVar23 = 0x819;
        puVar20[6] = 0x819;
        puVar20[7] = 0;
      }
      else {
        lVar23 = *(long *)(puVar20 + 6);
        if ((*(ulong *)(puVar20 + 4) != 0x819) && (lVar23 != 0x819)) {
          plVar19 = *(long **)(lVar15 + 0x60);
          if (plVar19 != (long *)0x0) {
            (**(code **)(*plVar19 + 0x20))(plVar19,puVar20);
          }
          goto LAB_018fb778;
        }
      }
      uVar12 = *(undefined8 *)(puVar20 + 2);
      local_e0 = PTR_DAT_047dcc68 + 0x10;
      uVar14 = *puVar20;
      puVar3 = PTR_DAT_047dcc70 + 0x10;
      local_130 = (undefined *)0x0;
      local_138 = puVar3;
      if (uVar14 == 0) {
        uVar14 = 0;
        local_128._4_4_ = 0;
      }
      else {
        uVar18 = (ulong)uVar14 - ((ulong)(uVar14 >> 1) & 0x5555555555555555);
        uVar14 = uVar14 ^ uVar14 << 2;
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar14 = uVar14 ^ uVar14 >> 0xf;
        uVar14 = uVar14 ^ uVar14 << 0xd;
        local_128 = (ulong)uVar14 << 0x20;
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 != 1) {
          uVar14 = uVar14 ^ uVar14 << 2;
          uVar14 = uVar14 ^ uVar14 >> 0xf;
          uVar14 = uVar14 ^ uVar14 << 0xd;
          local_128 = (ulong)uVar14 << 0x20;
          if (uVar18 != 2) {
            uVar14 = uVar14 ^ uVar14 << 2;
            uVar14 = uVar14 ^ uVar14 >> 0xf;
            uVar14 = uVar14 ^ uVar14 << 0xd;
            local_128 = (ulong)uVar14 << 0x20;
            if (uVar18 != 3) {
              uVar14 = uVar14 ^ uVar14 << 2;
              uVar14 = uVar14 ^ uVar14 >> 0xf;
              uVar14 = uVar14 ^ uVar14 << 0xd;
              local_128 = (ulong)uVar14 << 0x20;
              if (uVar18 != 4) {
                (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
                for (lVar9 = uVar18 - 5; lVar9 != 0; lVar9 = lVar9 + -1) {
                  (**(code **)(local_138 + 0x10))(&local_138);
                }
                local_128._4_4_ = (uint)((ulong)local_128 >> 0x20);
                uVar14 = local_128._4_4_;
              }
            }
          }
        }
        puVar25 = (undefined8 *)PTR_DAT_047d4ca0;
      }
      local_128 = CONCAT44(local_128._4_4_,uVar14);
      puStack_c8 = PTR_DAT_047dcc78 + 0x10;
      local_d0 = 0;
      local_b0 = 0;
      local_98 = local_128;
      uStack_90 = 0;
      local_d8 = PTR_DAT_047dcc80 + 0x10;
      local_c0 = uVar12;
      lStack_b8 = lVar23;
      local_a8 = puVar3;
      puStack_a0 = local_130;
      FUN_015d05bc(&local_e0,auStack_950,0x814);
      uVar18 = FUN_015d0a70(lVar15,puVar20);
      if ((uVar18 & 1) == 0) goto LAB_018fc4fc;
LAB_018fb8d0:
      pbVar21 = PTR_DAT_047d4c98;
      puVar24 = (undefined8 *)PTR_DAT_047d4ca8;
    }
LAB_018fb8e0:
    nn::os::UnlockMutex(pMVar2);
  }
  else {
    plVar19 = *(long **)(lVar15 + 0x60);
    if (plVar19 != (long *)0x0) {
      local_e0 = (undefined *)CONCAT44(local_978[0],(undefined4)local_e0);
      local_e0 = (undefined *)CONCAT71(local_e0._1_7_,1);
      (**(code **)(*plVar19 + 0x60))(plVar19,&local_e0);
      if ((char)local_e0 != '\0') {
        local_e0 = (undefined *)((ulong)local_e0 & 0xffffffffffffff00);
      }
    }
  }
  nn::os::UnlockMutex(pMVar2);
  if (local_958 != (long *)0x0) {
    (**(code **)(*local_958 + 0x20))();
  }
  if (((*pbVar21 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar12 = *puVar25;
  local_970 = &DAT_e4d07a996e5ef5e8;
  puStack_968 = &DAT_03c60f6f;
  *puVar24 = uVar12;
  local_960 = 4;
  local_958 = (long *)0x0;
  lVar15 = FUN_00f844f4(uVar12,&local_970);
  local_978[0] = 0x4eddc8c4;
  pMVar2 = (MutexType *)(lVar15 + 0x80);
  local_97c = 0x814;
  nn::os::LockMutex(pMVar2);
  if ((*(byte *)(lVar15 + 0xa0) & 1) != 0) {
    plVar19 = *(long **)(lVar15 + 0x60);
    if (plVar19 != (long *)0x0) {
      local_e0 = (undefined *)CONCAT44(local_978[0],(undefined4)local_e0);
      local_e0 = (undefined *)CONCAT71(local_e0._1_7_,1);
      (**(code **)(*plVar19 + 0x60))(plVar19,&local_e0);
      if ((char)local_e0 != '\0') {
        local_e0 = (undefined *)((ulong)local_e0 & 0xffffffffffffff00);
      }
    }
    goto LAB_018fbbc4;
  }
  nn::os::LockMutex(pMVar2);
  puVar6 = *(uint **)(lVar15 + 0x10);
  uVar18 = (long)puVar6 - (long)*(uint **)(lVar15 + 8);
  if (0 < (long)uVar18) {
    puVar16 = *(uint **)(lVar15 + 8);
    puVar17 = puVar6;
    do {
      puVar20 = puVar16 + (uVar18 / 0x60) * 0xc;
      if (*puVar20 == local_978[0]) goto LAB_018fb9ac;
      puVar5 = puVar20 + 0xc;
      if (local_978[0] <= *puVar20) {
        puVar5 = puVar16;
        puVar17 = puVar20;
      }
      uVar18 = (long)puVar17 - (long)puVar5;
      puVar16 = puVar5;
    } while (0 < (long)uVar18);
  }
  puVar20 = puVar6;
LAB_018fb9ac:
  nn::os::UnlockMutex(pMVar2);
  if ((puVar20 == (uint *)0x0) || (puVar6 == puVar20)) {
    nn::os::LockMutex(pMVar2);
    plVar19 = *(long **)(lVar15 + 0x60);
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x38))(plVar19,local_978);
    }
    FUN_015d0cb8(&local_88,lVar15,local_978,5);
    puVar3 = PTR_DAT_047dcc70;
    if (local_88 != (uint *)0x0) {
      uVar12 = *(undefined8 *)(local_88 + 2);
      lVar23 = *(long *)(local_88 + 6);
      local_e0 = PTR_DAT_047dcc68 + 0x10;
      local_128._4_4_ = *local_88;
      puVar4 = PTR_DAT_047dcc70 + 0x10;
      local_130 = (undefined *)0x0;
      local_138 = puVar4;
      if (local_128._4_4_ != 0) {
        uVar18 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar18 != 1) &&
            (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar18 != 2)) &&
           (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar18 != 3)) {
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
          local_128._0_4_ = 0;
          if (uVar18 != 4) {
            (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
            for (lVar9 = uVar18 - 5; lVar9 != 0; lVar9 = lVar9 + -1) {
              (**(code **)(local_138 + 0x10))(&local_138);
            }
          }
        }
      }
      puVar10 = PTR_DAT_047dcc80;
      puVar22 = PTR_DAT_047dcc78;
      local_128 = CONCAT44(local_128._4_4_,local_128._4_4_);
      puStack_c8 = PTR_DAT_047dcc78 + 0x10;
      local_d0 = 0;
      local_b0 = 0;
      local_98 = local_128;
      uStack_90 = 0;
      local_d8 = PTR_DAT_047dcc80 + 0x10;
      local_c0 = uVar12;
      lStack_b8 = lVar23;
      local_a8 = puVar4;
      puStack_a0 = local_130;
      uVar18 = FUN_018fc51c(&local_e0,&local_97c);
      if ((uVar18 & 1) == 0) {
        (**(code **)(**(long **)(lVar15 + 0x40) + 0x18))
                  (*(long **)(lVar15 + 0x40),*(undefined8 *)(local_88 + 2),
                   *(undefined8 *)(local_88 + 4));
        lVar23 = *(long *)(lVar15 + 0x10);
        if (*(char *)(lVar23 + -0x10) != '\0') {
          *(undefined1 *)(lVar23 + -0x10) = 0;
        }
        *(long *)(lVar15 + 0x10) = lVar23 + -0x30;
      }
      else {
        puVar4 = puVar3 + 0x10;
        uVar26 = *(undefined8 *)(local_88 + 2);
        uVar12 = *(undefined8 *)(local_88 + 6);
        local_138 = PTR_DAT_047dcc88 + 0x10;
        uStack_6c = *local_88;
        local_78 = 0;
        local_70 = 0;
        local_80 = puVar4;
        if (uStack_6c != 0) {
          uVar18 = (ulong)uStack_6c - ((ulong)(uStack_6c >> 1) & 0x5555555555555555);
          uStack_6c = uStack_6c ^ uStack_6c << 2;
          uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
          uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
          uStack_6c = uStack_6c ^ uStack_6c << 0xd;
          uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (((uVar18 != 1) &&
              (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar18 != 2)) &&
             ((uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar18 != 3 &&
              (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
              uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar18 != 4)))) {
            (**(code **)(puVar3 + 0x20))(&local_80);
            puVar22 = PTR_DAT_047dcc78;
            for (lVar23 = uVar18 - 5; PTR_DAT_047dcc78 = puVar22, lVar23 != 0; lVar23 = lVar23 + -1)
            {
              (**(code **)(local_80 + 0x10))(&local_80);
              puVar22 = PTR_DAT_047dcc78;
            }
          }
        }
        puStack_120 = puVar22 + 0x10;
        local_128 = 0;
        local_f0 = CONCAT44(uStack_6c,uStack_6c);
        local_108 = 0;
        uStack_e8 = 0;
        local_130 = puVar10 + 0x10;
        local_118 = uVar26;
        uStack_110 = uVar12;
        local_100 = puVar4;
        uStack_f8 = local_78;
        local_70 = uStack_6c;
        uVar12 = FUN_015d1064(&local_138);
        if ((char)local_88[8] == '\0') {
          *(undefined8 *)(local_88 + 9) = uVar12;
          *(undefined1 *)(local_88 + 8) = 1;
        }
        else {
          *(undefined8 *)(local_88 + 9) = uVar12;
        }
        nn::os::LockMutex(pMVar2);
        FUN_015d1340(*(undefined8 *)(lVar15 + 8),*(undefined8 *)(lVar15 + 0x10),&local_138);
        nn::os::UnlockMutex(pMVar2);
      }
    }
  }
  else {
    uVar18 = FUN_018fc674(lVar15,puVar20);
    if (((uVar18 & 1) == 0) && (plVar19 = *(long **)(lVar15 + 0x60), plVar19 != (long *)0x0)) {
      (**(code **)(*plVar19 + 0x58))(plVar19,local_978);
    }
    nn::os::LockMutex(pMVar2);
    plVar19 = *(long **)(lVar15 + 0x60);
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x30))(plVar19,puVar20);
    }
    if (*(ulong *)(puVar20 + 4) < 5) {
      plVar19 = *(long **)(lVar15 + 0x60);
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x18))(plVar19,puVar20);
      }
      pvVar13 = (void *)(**(code **)(**(long **)(lVar15 + 0x40) + 0x10))
                                  (*(long **)(lVar15 + 0x40),5);
      if (pvVar13 != (void *)0x0) {
        memcpy(pvVar13,*(void **)(puVar20 + 2),*(size_t *)(puVar20 + 6));
        (**(code **)(**(long **)(lVar15 + 0x40) + 0x18))
                  (*(long **)(lVar15 + 0x40),*(undefined8 *)(puVar20 + 2),
                   *(undefined8 *)(puVar20 + 4));
        *(void **)(puVar20 + 2) = pvVar13;
        puVar20[4] = 5;
        puVar20[5] = 0;
        goto LAB_018fba70;
      }
    }
    else {
      lVar23 = *(long *)(puVar20 + 6);
      if ((*(ulong *)(puVar20 + 4) != 5) && (lVar23 != 5)) {
        plVar19 = *(long **)(lVar15 + 0x60);
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x20))(plVar19,puVar20);
        }
LAB_018fba70:
        lVar23 = 5;
        puVar20[6] = 5;
        puVar20[7] = 0;
      }
      uVar12 = *(undefined8 *)(puVar20 + 2);
      local_e0 = PTR_DAT_047dcc68 + 0x10;
      local_128._4_4_ = *puVar20;
      puVar3 = PTR_DAT_047dcc70 + 0x10;
      local_130 = (undefined *)0x0;
      local_138 = puVar3;
      if (local_128._4_4_ != 0) {
        uVar18 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
        local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar18 != 1) &&
            (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar18 != 2)) &&
           (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
           local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar18 != 3)) {
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
          local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
          local_128._0_4_ = 0;
          if (uVar18 != 4) {
            (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_138);
            for (lVar9 = uVar18 - 5; lVar9 != 0; lVar9 = lVar9 + -1) {
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
      local_c0 = uVar12;
      lStack_b8 = lVar23;
      local_a8 = puVar3;
      puStack_a0 = local_130;
      FUN_018fc51c(&local_e0,&local_97c);
      uVar18 = FUN_015d0a70(lVar15,puVar20);
      if ((uVar18 & 1) == 0) {
LAB_018fc4fc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ValidateElement(element)","Update",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
                   ,0x246);
      }
    }
  }
  nn::os::UnlockMutex(pMVar2);
LAB_018fbbc4:
  nn::os::UnlockMutex(pMVar2);
  if (local_958 != (long *)0x0) {
    (**(code **)(*local_958 + 0x20))();
  }
  return;
}


