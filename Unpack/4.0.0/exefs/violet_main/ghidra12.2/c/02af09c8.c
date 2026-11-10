/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02af09c8; name: FUN_02af09c8
 */


void FUN_02af09c8(long *param_1)

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
  long lVar15;
  uint *puVar16;
  ulong uVar17;
  code *pcVar18;
  ulong uVar19;
  long lVar20;
  uint *puVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 uVar24;
  byte *pbVar25;
  uint *puVar26;
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
  ulong local_b8;
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
    pcVar18 = *(code **)(PTR_DAT_047dcc70 + 0x20);
    puVar3 = PTR_DAT_047dcc80 + 0x10;
    puVar4 = PTR_DAT_047dcc88 + 0x10;
    pbVar25 = PTR_DAT_047d4c98;
    do {
      if (((*pbVar25 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar25), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(pbVar25);
      }
      uVar12 = *(undefined8 *)PTR_DAT_047d4ca0;
      *(undefined8 *)PTR_DAT_047d4ca8 = uVar12;
      local_158 = &DAT_e4d07a996e5ef5e8;
      puVar5 = (uint *)(plVar23 + 2);
      local_150 = &DAT_03c60f6f;
      uStack_148 = 4;
      local_140 = (long *)0x0;
      lVar13 = FUN_00f844f4(uVar12,&local_158);
      lVar20 = plVar23[3];
      lVar15 = plVar23[4];
      pMVar6 = (MutexType *)(lVar13 + 0x80);
      nn::os::LockMutex(pMVar6);
      if ((*(byte *)(lVar13 + 0xa0) & 1) == 0) {
        lVar15 = lVar15 - lVar20;
        nn::os::LockMutex(pMVar6);
        puVar9 = *(uint **)(lVar13 + 0x10);
        uVar22 = (long)puVar9 - (long)*(uint **)(lVar13 + 8);
        if (0 < (long)uVar22) {
          puVar16 = *(uint **)(lVar13 + 8);
          puVar21 = puVar9;
          do {
            puVar26 = puVar16 + (uVar22 / 0x60) * 0xc;
            if (*puVar26 == *puVar5) goto LAB_02af0b24;
            puVar8 = puVar26 + 0xc;
            if (*puVar5 <= *puVar26) {
              puVar8 = puVar16;
              puVar21 = puVar26;
            }
            uVar22 = (long)puVar21 - (long)puVar8;
            puVar16 = puVar8;
          } while (0 < (long)uVar22);
        }
        puVar26 = puVar9;
LAB_02af0b24:
        nn::os::UnlockMutex(pMVar6);
        if ((puVar26 == (uint *)0x0) || (puVar9 == puVar26)) {
          nn::os::LockMutex(pMVar6);
          plVar14 = *(long **)(lVar13 + 0x60);
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x38))(plVar14,puVar5);
          }
          FUN_015d0cb8(&local_88,lVar13,puVar5,lVar15 + 5);
          if (local_88 != (uint *)0x0) {
            uVar12 = *(undefined8 *)(local_88 + 2);
            uVar22 = *(ulong *)(local_88 + 6);
            local_128._4_4_ = *local_88;
            puVar7 = PTR_DAT_047dcc70 + 0x10;
            local_130 = (undefined *)0x0;
            local_138 = puVar7;
            local_e0 = puVar1;
            if (local_128._4_4_ != 0) {
              uVar17 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555)
              ;
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
                  (*pcVar18)(&local_138);
                  for (lVar10 = uVar17 - 5; lVar10 != 0; lVar10 = lVar10 + -1) {
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
            local_b8 = uVar22;
            local_a8 = puVar7;
            puStack_a0 = local_130;
            uVar22 = FUN_015d05bc(&local_e0,lVar20,lVar15);
            puVar5 = local_88;
            if ((uVar22 & 1) == 0) {
              (**(code **)(**(long **)(lVar13 + 0x40) + 0x18))
                        (*(long **)(lVar13 + 0x40),*(undefined8 *)(local_88 + 2),
                         *(undefined8 *)(local_88 + 4));
              lVar20 = *(long *)(lVar13 + 0x10);
              if (*(char *)(lVar20 + -0x10) != '\0') {
                *(undefined1 *)(lVar20 + -0x10) = 0;
              }
              *(long *)(lVar13 + 0x10) = lVar20 + -0x30;
              goto LAB_02af1068;
            }
            uVar12 = *(undefined8 *)(local_88 + 2);
            uVar24 = *(undefined8 *)(local_88 + 6);
            uStack_6c = *local_88;
            puVar7 = PTR_DAT_047dcc70 + 0x10;
            local_78 = 0;
            local_70 = 0;
            local_138 = puVar4;
            local_80 = puVar7;
            if (uStack_6c != 0) {
              uVar22 = (ulong)uStack_6c - ((ulong)(uStack_6c >> 1) & 0x5555555555555555);
              uStack_6c = uStack_6c ^ uStack_6c << 2;
              uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
              uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
              uStack_6c = uStack_6c ^ uStack_6c << 0xd;
              uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (((uVar22 != 1) &&
                  (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
                  uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar22 != 2)) &&
                 ((uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
                  uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar22 != 3 &&
                  (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
                  uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar22 != 4)))) {
                (*pcVar18)(&local_80);
                for (lVar20 = uVar22 - 5; lVar20 != 0; lVar20 = lVar20 + -1) {
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
            uStack_110 = uVar24;
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
            pbVar25 = PTR_DAT_047d4c98;
            nn::os::LockMutex(pMVar6);
            FUN_015d1340(*(undefined8 *)(lVar13 + 8),*(undefined8 *)(lVar13 + 0x10),&local_138);
            nn::os::UnlockMutex(pMVar6);
          }
        }
        else {
          uVar22 = FUN_015d0794(lVar13,puVar26);
          if (((uVar22 & 1) == 0) && (plVar14 = *(long **)(lVar13 + 0x60), plVar14 != (long *)0x0))
          {
            (**(code **)(*plVar14 + 0x58))(plVar14,puVar5);
          }
          nn::os::LockMutex(pMVar6);
          plVar14 = *(long **)(lVar13 + 0x60);
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x30))(plVar14,puVar26);
          }
          uVar22 = lVar15 + 5;
          if (*(ulong *)(puVar26 + 4) < uVar22) {
            plVar14 = *(long **)(lVar13 + 0x60);
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 0x18))(plVar14,puVar26);
            }
            __dest = (void *)(**(code **)(**(long **)(lVar13 + 0x40) + 0x10))
                                       (*(long **)(lVar13 + 0x40),uVar22);
            if (__dest == (void *)0x0) goto LAB_02af10f8;
            memcpy(__dest,*(void **)(puVar26 + 2),*(size_t *)(puVar26 + 6));
            (**(code **)(**(long **)(lVar13 + 0x40) + 0x18))
                      (*(long **)(lVar13 + 0x40),*(undefined8 *)(puVar26 + 2),
                       *(undefined8 *)(puVar26 + 4));
            *(void **)(puVar26 + 2) = __dest;
            *(ulong *)(puVar26 + 4) = uVar22;
            *(ulong *)(puVar26 + 6) = uVar22;
            uVar17 = uVar22;
          }
          else {
            uVar17 = *(ulong *)(puVar26 + 6);
            if (*(ulong *)(puVar26 + 4) != uVar22) {
              if (*(ulong *)(puVar26 + 6) != uVar22) {
                plVar14 = *(long **)(lVar13 + 0x60);
                if (plVar14 != (long *)0x0) {
                  (**(code **)(*plVar14 + 0x20))(plVar14,puVar26);
                }
                *(ulong *)(puVar26 + 6) = uVar22;
              }
              uVar17 = uVar22;
            }
          }
          uVar12 = *(undefined8 *)(puVar26 + 2);
          local_e0 = PTR_DAT_047dcc68 + 0x10;
          local_128._4_4_ = *puVar26;
          puVar7 = PTR_DAT_047dcc70 + 0x10;
          local_130 = (undefined *)0x0;
          local_138 = puVar7;
          if (local_128._4_4_ != 0) {
            uVar22 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
            uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
            uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (((uVar22 != 1) &&
                (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
                local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
                local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar22 != 2)) &&
               (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
               local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
               local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar22 != 3)) {
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
              local_128._0_4_ = 0;
              if (uVar22 != 4) {
                (*pcVar18)(&local_138);
                for (lVar10 = uVar22 - 5; lVar10 != 0; lVar10 = lVar10 + -1) {
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
          local_b8 = uVar17;
          local_a8 = puVar7;
          puStack_a0 = local_130;
          FUN_015d05bc(&local_e0,lVar20,lVar15);
          uVar22 = FUN_015d0a70(lVar13,puVar26);
          if ((uVar22 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("ValidateElement(element)","Update",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
                       ,0x246);
          }
LAB_02af1068:
          pbVar25 = PTR_DAT_047d4c98;
        }
LAB_02af10f8:
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
    FUN_019959e0(param_1,param_1[6]);
    uVar22 = param_1[1];
    param_1[6] = 0;
    if (uVar22 != 0) {
      uVar17 = uVar22 & 3;
      if (uVar22 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          *(undefined8 *)(*param_1 + uVar19 * 8) = 0;
          *(undefined8 *)(*param_1 + uVar19 * 8 + 8) = 0;
          *(undefined8 *)(*param_1 + uVar19 * 8 + 0x10) = 0;
          lVar20 = uVar19 * 8;
          uVar19 = uVar19 + 4;
          *(undefined8 *)(*param_1 + lVar20 + 0x18) = 0;
        } while ((uVar22 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar17 != 0) {
        lVar20 = uVar19 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar20) = 0;
          uVar17 = uVar17 - 1;
          lVar20 = lVar20 + 8;
        } while (uVar17 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  return;
}


