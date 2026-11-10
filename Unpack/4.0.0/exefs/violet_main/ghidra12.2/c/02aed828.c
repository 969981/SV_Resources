/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02aed828; name: FUN_02aed828
 */


void FUN_02aed828(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  MutexType *pMVar6;
  undefined *puVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  void *__dest;
  uint *puVar15;
  ulong uVar16;
  code *pcVar17;
  ulong uVar18;
  uint *puVar19;
  ulong uVar20;
  byte *pbVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  uint *puVar27;
  undefined1 *local_158;
  undefined *local_150;
  undefined8 uStack_148;
  long *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined *local_120;
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
  long local_b8;
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
  
  plVar23 = (long *)param_1[6];
  if (plVar23 != (long *)0x0) {
    puVar1 = PTR_DAT_047dcc68 + 0x10;
    puVar2 = PTR_DAT_047dcc78 + 0x10;
    pcVar17 = *(code **)(PTR_DAT_047dcc70 + 0x20);
    puVar3 = PTR_DAT_047dcc80 + 0x10;
    puVar4 = PTR_DAT_047dcc88 + 0x10;
    pbVar21 = PTR_DAT_047d4c98;
    puVar26 = (undefined8 *)PTR_DAT_047d4ca0;
    do {
      if (((*pbVar21 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar21), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,puVar26,&PTR_LOOP_04483000);
        __cxa_guard_release(pbVar21);
      }
      uVar12 = *puVar26;
      *(undefined8 *)PTR_DAT_047d4ca8 = uVar12;
      local_158 = &DAT_e4d07a996e5ef5e8;
      puVar5 = (uint *)(plVar23 + 2);
      local_140 = (long *)0x0;
      local_150 = &DAT_03c60f6f;
      uStack_148 = 4;
      lVar13 = FUN_00f844f4(uVar12,&local_158);
      pMVar6 = (MutexType *)(lVar13 + 0x80);
      nn::os::LockMutex(pMVar6);
      if ((*(byte *)(lVar13 + 0xa0) & 1) == 0) {
        nn::os::LockMutex(pMVar6);
        puVar9 = *(uint **)(lVar13 + 0x10);
        uVar20 = (long)puVar9 - (long)*(uint **)(lVar13 + 8);
        if (0 < (long)uVar20) {
          puVar15 = *(uint **)(lVar13 + 8);
          puVar19 = puVar9;
          do {
            puVar27 = puVar15 + (uVar20 / 0x60) * 0xc;
            if (*puVar27 == *puVar5) goto LAB_02aed980;
            puVar8 = puVar27 + 0xc;
            if (*puVar5 <= *puVar27) {
              puVar8 = puVar15;
              puVar19 = puVar27;
            }
            uVar20 = (long)puVar19 - (long)puVar8;
            puVar15 = puVar8;
          } while (0 < (long)uVar20);
        }
        puVar27 = puVar9;
LAB_02aed980:
        nn::os::UnlockMutex(pMVar6);
        if ((puVar27 == (uint *)0x0) || (puVar9 == puVar27)) {
          nn::os::LockMutex(pMVar6);
          plVar14 = *(long **)(lVar13 + 0x60);
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x38))(plVar14,puVar5);
          }
          FUN_015d0cb8(&local_88,lVar13,puVar5,9);
          if (local_88 != (uint *)0x0) {
            uVar12 = *(undefined8 *)(local_88 + 2);
            lVar22 = *(long *)(local_88 + 6);
            local_128._4_4_ = *local_88;
            puVar7 = PTR_DAT_047dcc70 + 0x10;
            local_130 = (undefined *)0x0;
            local_138 = puVar7;
            local_e0 = puVar1;
            if (local_128._4_4_ != 0) {
              uVar20 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555)
              ;
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
              uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
              uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (((uVar20 != 1) &&
                  (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
                  local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
                  local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar20 != 2)) &&
                 (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
                 local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
                 local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar20 != 3)) {
                local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
                local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
                local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
                local_128._0_4_ = 0;
                if (uVar20 != 4) {
                  (*pcVar17)(&local_138);
                  for (lVar10 = uVar20 - 5; lVar10 != 0; lVar10 = lVar10 + -1) {
                    (**(code **)(local_138 + 0x10))(&local_138);
                  }
                }
              }
            }
            local_128 = CONCAT44(local_128._4_4_,local_128._4_4_);
            local_b0 = 0;
            local_98 = local_128;
            uStack_90 = 0;
            uStack_d0 = 0;
            local_d8 = puVar3;
            local_c8 = puVar2;
            local_c0 = uVar12;
            local_b8 = lVar22;
            local_a8 = puVar7;
            puStack_a0 = local_130;
            uVar20 = FUN_02af2338(&local_e0,plVar23 + 3);
            puVar5 = local_88;
            if ((uVar20 & 1) == 0) {
              (**(code **)(**(long **)(lVar13 + 0x40) + 0x18))
                        (*(long **)(lVar13 + 0x40),*(undefined8 *)(local_88 + 2),
                         *(undefined8 *)(local_88 + 4));
              lVar22 = *(long *)(lVar13 + 0x10);
              if (*(char *)(lVar22 + -0x10) != '\0') {
                *(undefined1 *)(lVar22 + -0x10) = 0;
              }
              *(long *)(lVar13 + 0x10) = lVar22 + -0x30;
              goto LAB_02aedea4;
            }
            uVar12 = *(undefined8 *)(local_88 + 2);
            uVar25 = *(undefined8 *)(local_88 + 6);
            uStack_6c = *local_88;
            puVar7 = PTR_DAT_047dcc70 + 0x10;
            local_78 = 0;
            local_70 = 0;
            local_138 = puVar4;
            local_80 = puVar7;
            if (uStack_6c != 0) {
              uVar20 = (ulong)uStack_6c - ((ulong)(uStack_6c >> 1) & 0x5555555555555555);
              uStack_6c = uStack_6c ^ uStack_6c << 2;
              uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
              uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
              uStack_6c = uStack_6c ^ uStack_6c << 0xd;
              uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (((uVar20 != 1) &&
                  (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
                  uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar20 != 2)) &&
                 ((uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
                  uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar20 != 3 &&
                  (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
                  uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar20 != 4)))) {
                (*pcVar17)(&local_80);
                for (lVar22 = uVar20 - 5; lVar22 != 0; lVar22 = lVar22 + -1) {
                  (**(code **)(local_80 + 0x10))(&local_80);
                }
              }
            }
            local_120 = PTR_DAT_047dcc78 + 0x10;
            local_f0 = CONCAT44(uStack_6c,uStack_6c);
            local_108 = 0;
            uStack_e8 = 0;
            local_130 = PTR_DAT_047dcc80 + 0x10;
            local_128 = 0;
            local_118 = uVar12;
            uStack_110 = uVar25;
            local_100 = puVar7;
            uStack_f8 = local_78;
            local_70 = uStack_6c;
            uVar12 = FUN_015d1064(&local_138);
            if ((char)puVar5[8] == '\0') {
              *(undefined8 *)(puVar5 + 9) = uVar12;
              *(undefined1 *)(puVar5 + 8) = 1;
            }
            else {
              *(undefined8 *)(puVar5 + 9) = uVar12;
            }
            puVar26 = (undefined8 *)PTR_DAT_047d4ca0;
            pbVar21 = PTR_DAT_047d4c98;
            nn::os::LockMutex(pMVar6);
            FUN_015d1340(*(undefined8 *)(lVar13 + 8),*(undefined8 *)(lVar13 + 0x10),&local_138);
            nn::os::UnlockMutex(pMVar6);
          }
        }
        else {
          uVar20 = FUN_02af21dc(lVar13,puVar27);
          if (((uVar20 & 1) == 0) && (plVar14 = *(long **)(lVar13 + 0x60), plVar14 != (long *)0x0))
          {
            (**(code **)(*plVar14 + 0x58))(plVar14,puVar5);
          }
          nn::os::LockMutex(pMVar6);
          plVar14 = *(long **)(lVar13 + 0x60);
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x30))(plVar14,puVar27);
          }
          if (*(ulong *)(puVar27 + 4) < 9) {
            plVar14 = *(long **)(lVar13 + 0x60);
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 0x18))(plVar14,puVar27);
            }
            __dest = (void *)(**(code **)(**(long **)(lVar13 + 0x40) + 0x10))
                                       (*(long **)(lVar13 + 0x40),9);
            if (__dest == (void *)0x0) goto LAB_02aedf44;
            memcpy(__dest,*(void **)(puVar27 + 2),*(size_t *)(puVar27 + 6));
            (**(code **)(**(long **)(lVar13 + 0x40) + 0x18))
                      (*(long **)(lVar13 + 0x40),*(undefined8 *)(puVar27 + 2),
                       *(undefined8 *)(puVar27 + 4));
            *(void **)(puVar27 + 2) = __dest;
            puVar27[4] = 9;
            puVar27[5] = 0;
            lVar22 = 9;
            puVar27[6] = 9;
            puVar27[7] = 0;
          }
          else {
            lVar22 = *(long *)(puVar27 + 6);
            if ((*(ulong *)(puVar27 + 4) != 9) && (lVar22 != 9)) {
              plVar14 = *(long **)(lVar13 + 0x60);
              if (plVar14 != (long *)0x0) {
                (**(code **)(*plVar14 + 0x20))(plVar14,puVar27);
              }
              lVar22 = 9;
              puVar27[6] = 9;
              puVar27[7] = 0;
            }
          }
          uVar12 = *(undefined8 *)(puVar27 + 2);
          local_e0 = PTR_DAT_047dcc68 + 0x10;
          local_128._4_4_ = *puVar27;
          puVar7 = PTR_DAT_047dcc70 + 0x10;
          local_130 = (undefined *)0x0;
          local_138 = puVar7;
          if (local_128._4_4_ != 0) {
            uVar20 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
            uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
            uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (((uVar20 != 1) &&
                (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
                local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
                local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar20 != 2)) &&
               (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
               local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
               local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar20 != 3)) {
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
              local_128._0_4_ = 0;
              if (uVar20 != 4) {
                (*pcVar17)(&local_138);
                for (lVar10 = uVar20 - 5; lVar10 != 0; lVar10 = lVar10 + -1) {
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
          local_c0 = uVar12;
          local_b8 = lVar22;
          local_a8 = puVar7;
          puStack_a0 = local_130;
          FUN_02af2338(&local_e0,plVar23 + 3);
          uVar20 = FUN_015d0a70(lVar13,puVar27);
          if ((uVar20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("ValidateElement(element)","Update",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
                       ,0x246);
          }
LAB_02aedea4:
          pbVar21 = PTR_DAT_047d4c98;
          puVar26 = (undefined8 *)PTR_DAT_047d4ca0;
        }
LAB_02aedf44:
        nn::os::UnlockMutex(pMVar6);
      }
      else {
        plVar14 = *(long **)(lVar13 + 0x60);
        if (plVar14 != (long *)0x0) {
          local_e0 = (undefined *)CONCAT44(*puVar5,(undefined4)local_e0);
          local_e0 = (undefined *)CONCAT71(local_e0._1_7_,1);
          (**(code **)(*plVar14 + 0x60))(plVar14,&local_e0);
          if ((char)local_e0 != '\0') {
            local_e0 = (undefined *)((ulong)local_e0 & 0xffffffffffffff00);
          }
        }
      }
      nn::os::UnlockMutex(pMVar6);
      if (local_140 != (long *)0x0) {
        (**(code **)(*local_140 + 0x20))();
      }
      plVar23 = (long *)*plVar23;
    } while (plVar23 != (long *)0x0);
  }
  if (param_1[0xb] != 0) {
    plVar23 = (long *)param_1[6];
    while (plVar23 != (long *)0x0) {
      plVar14 = (long *)param_1[7];
      plVar24 = (long *)*plVar23;
      uVar20 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar20 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,plVar23,0x20,8);
        plVar23 = plVar24;
      }
      else {
        FUN_00c48fe8(plVar14,plVar23,0x20,8);
        plVar23 = plVar24;
      }
    }
    uVar20 = param_1[1];
    param_1[6] = 0;
    if (uVar20 != 0) {
      uVar16 = uVar20 & 3;
      if (uVar20 - 1 < 3) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        do {
          *(undefined8 *)(*param_1 + uVar18 * 8) = 0;
          *(undefined8 *)(*param_1 + uVar18 * 8 + 8) = 0;
          *(undefined8 *)(*param_1 + uVar18 * 8 + 0x10) = 0;
          lVar13 = uVar18 * 8;
          uVar18 = uVar18 + 4;
          *(undefined8 *)(*param_1 + lVar13 + 0x18) = 0;
        } while ((uVar20 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar16 != 0) {
        lVar13 = uVar18 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar13) = 0;
          uVar16 = uVar16 - 1;
          lVar13 = lVar13 + 8;
        } while (uVar16 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  return;
}


