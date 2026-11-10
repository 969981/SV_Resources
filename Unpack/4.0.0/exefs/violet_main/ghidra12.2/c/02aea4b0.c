/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02aea4b0; name: FUN_02aea4b0
 */


void FUN_02aea4b0(long *param_1)

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
  char cVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  void *__dest;
  code *pcVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  byte *pbVar25;
  uint *puVar26;
  undefined8 uVar27;
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
  
  plVar22 = (long *)param_1[6];
  if (plVar22 != (long *)0x0) {
    puVar1 = PTR_DAT_047dcc68 + 0x10;
    puVar2 = PTR_DAT_047dcc78 + 0x10;
    pcVar16 = *(code **)(PTR_DAT_047dcc70 + 0x20);
    puVar3 = PTR_DAT_047dcc80 + 0x10;
    puVar4 = PTR_DAT_047dcc88 + 0x10;
    pbVar25 = PTR_DAT_047d4c98;
    do {
      puVar5 = (uint *)(plVar22 + 2);
      if (((*pbVar25 & 1) == 0) && (iVar12 = __cxa_guard_acquire(pbVar25), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(pbVar25);
      }
      uVar13 = *(undefined8 *)PTR_DAT_047d4ca0;
      *(undefined8 *)PTR_DAT_047d4ca8 = uVar13;
      local_158 = &DAT_e4d07a996e5ef5e8;
      local_150 = &DAT_03c60f6f;
      uStack_148 = 4;
      local_140 = (long *)0x0;
      lVar14 = FUN_00f844f4(uVar13,&local_158);
      pMVar6 = (MutexType *)(lVar14 + 0x80);
      nn::os::LockMutex(pMVar6);
      if ((*(byte *)(lVar14 + 0xa0) & 1) == 0) {
        nn::os::LockMutex(pMVar6);
        puVar9 = *(uint **)(lVar14 + 0x10);
        uVar21 = (long)puVar9 - (long)*(uint **)(lVar14 + 8);
        if (0 < (long)uVar21) {
          puVar17 = *(uint **)(lVar14 + 8);
          puVar20 = puVar9;
          do {
            puVar26 = puVar17 + (uVar21 / 0x60) * 0xc;
            if (*puVar26 == *puVar5) goto LAB_02aea604;
            puVar8 = puVar26 + 0xc;
            if (*puVar5 <= *puVar26) {
              puVar8 = puVar17;
              puVar20 = puVar26;
            }
            uVar21 = (long)puVar20 - (long)puVar8;
            puVar17 = puVar8;
          } while (0 < (long)uVar21);
        }
        puVar26 = puVar9;
LAB_02aea604:
        nn::os::UnlockMutex(pMVar6);
        if ((puVar26 == (uint *)0x0) || (puVar9 == puVar26)) {
          nn::os::LockMutex(pMVar6);
          plVar15 = *(long **)(lVar14 + 0x60);
          if (plVar15 != (long *)0x0) {
            (**(code **)(*plVar15 + 0x38))(plVar15,puVar5);
          }
          FUN_015d0cb8(&local_88,lVar14,puVar5,2);
          if (local_88 != (uint *)0x0) {
            uVar13 = *(undefined8 *)(local_88 + 2);
            lVar24 = *(long *)(local_88 + 6);
            local_128._4_4_ = *local_88;
            puVar7 = PTR_DAT_047dcc70 + 0x10;
            local_130 = (undefined *)0x0;
            local_138 = puVar7;
            local_e0 = puVar1;
            if (local_128._4_4_ != 0) {
              uVar21 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555)
              ;
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
              uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
              uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (((uVar21 != 1) &&
                  (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
                  local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
                  local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar21 != 2)) &&
                 (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
                 local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
                 local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar21 != 3)) {
                local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
                local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
                local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
                local_128._0_4_ = 0;
                if (uVar21 != 4) {
                  (*pcVar16)(&local_138);
                  for (lVar10 = uVar21 - 5; lVar10 != 0; lVar10 = lVar10 + -1) {
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
            local_c0 = uVar13;
            local_b8 = lVar24;
            local_a8 = puVar7;
            puStack_a0 = local_130;
            uVar21 = FUN_02af123c(&local_e0,(long)plVar22 + 0x14);
            puVar5 = local_88;
            if ((uVar21 & 1) == 0) {
              (**(code **)(**(long **)(lVar14 + 0x40) + 0x18))
                        (*(long **)(lVar14 + 0x40),*(undefined8 *)(local_88 + 2),
                         *(undefined8 *)(local_88 + 4));
              lVar24 = *(long *)(lVar14 + 0x10);
              if (*(char *)(lVar24 + -0x10) != '\0') {
                *(undefined1 *)(lVar24 + -0x10) = 0;
              }
              *(long *)(lVar14 + 0x10) = lVar24 + -0x30;
            }
            else {
              uVar13 = *(undefined8 *)(local_88 + 2);
              uVar27 = *(undefined8 *)(local_88 + 6);
              uStack_6c = *local_88;
              puVar7 = PTR_DAT_047dcc70 + 0x10;
              local_78 = 0;
              local_70 = 0;
              local_138 = puVar4;
              local_80 = puVar7;
              if (uStack_6c != 0) {
                uVar21 = (ulong)uStack_6c - ((ulong)(uStack_6c >> 1) & 0x5555555555555555);
                uStack_6c = uStack_6c ^ uStack_6c << 2;
                uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
                uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
                uStack_6c = uStack_6c ^ uStack_6c << 0xd;
                uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                if (((uVar21 != 1) &&
                    (uStack_6c = uStack_6c ^ uStack_6c << 2,
                    uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
                    uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar21 != 2)) &&
                   ((uStack_6c = uStack_6c ^ uStack_6c << 2,
                    uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
                    uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar21 != 3 &&
                    (uStack_6c = uStack_6c ^ uStack_6c << 2,
                    uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
                    uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar21 != 4)))) {
                  (*pcVar16)(&local_80);
                  for (lVar24 = uVar21 - 5; lVar24 != 0; lVar24 = lVar24 + -1) {
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
              local_118 = uVar13;
              uStack_110 = uVar27;
              local_100 = puVar7;
              uStack_f8 = local_78;
              local_70 = uStack_6c;
              uVar13 = FUN_015d1064(&local_138);
              if ((char)puVar5[8] == '\0') {
                *(undefined8 *)(puVar5 + 9) = uVar13;
                *(undefined1 *)(puVar5 + 8) = 1;
              }
              else {
                *(undefined8 *)(puVar5 + 9) = uVar13;
              }
              nn::os::LockMutex(pMVar6);
              FUN_015d1340(*(undefined8 *)(lVar14 + 8),*(undefined8 *)(lVar14 + 0x10),&local_138);
              nn::os::UnlockMutex(pMVar6);
            }
            pbVar25 = PTR_DAT_047d4c98;
          }
        }
        else {
          uVar13 = *(undefined8 *)(puVar26 + 2);
          lVar24 = *(long *)(puVar26 + 6);
          local_e0 = PTR_DAT_047dcc88 + 0x10;
          local_128._4_4_ = *puVar26;
          puVar7 = PTR_DAT_047dcc70 + 0x10;
          local_130 = (undefined *)0x0;
          local_138 = puVar7;
          if (local_128._4_4_ != 0) {
            uVar21 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555);
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
            uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
            local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
            uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (((uVar21 != 1) &&
                (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
                local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
                local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar21 != 2)) &&
               (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
               local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
               local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar21 != 3)) {
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
              local_128._0_4_ = 0;
              if (uVar21 != 4) {
                (*pcVar16)(&local_138);
                for (lVar10 = uVar21 - 5; lVar10 != 0; lVar10 = lVar10 + -1) {
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
          local_c0 = uVar13;
          local_b8 = lVar24;
          local_a8 = puVar7;
          puStack_a0 = local_130;
          cVar11 = FUN_015d1064(&local_e0);
          if ((cVar11 != '\f') && (plVar15 = *(long **)(lVar14 + 0x60), plVar15 != (long *)0x0)) {
            (**(code **)(*plVar15 + 0x58))(plVar15,puVar5);
          }
          nn::os::LockMutex(pMVar6);
          pbVar25 = PTR_DAT_047d4c98;
          plVar15 = *(long **)(lVar14 + 0x60);
          if (plVar15 != (long *)0x0) {
            (**(code **)(*plVar15 + 0x30))(plVar15,puVar26);
          }
          if (*(ulong *)(puVar26 + 4) < 2) {
            plVar15 = *(long **)(lVar14 + 0x60);
            if (plVar15 != (long *)0x0) {
              (**(code **)(*plVar15 + 0x18))(plVar15,puVar26);
            }
            __dest = (void *)(**(code **)(**(long **)(lVar14 + 0x40) + 0x10))
                                       (*(long **)(lVar14 + 0x40),2);
            if (__dest != (void *)0x0) {
              memcpy(__dest,*(void **)(puVar26 + 2),*(size_t *)(puVar26 + 6));
              (**(code **)(**(long **)(lVar14 + 0x40) + 0x18))
                        (*(long **)(lVar14 + 0x40),*(undefined8 *)(puVar26 + 2),
                         *(undefined8 *)(puVar26 + 4));
              *(void **)(puVar26 + 2) = __dest;
              puVar26[4] = 2;
              puVar26[5] = 0;
              goto LAB_02aea9b0;
            }
          }
          else {
            lVar24 = *(long *)(puVar26 + 6);
            if ((*(ulong *)(puVar26 + 4) != 2) && (lVar24 != 2)) {
              plVar15 = *(long **)(lVar14 + 0x60);
              if (plVar15 != (long *)0x0) {
                (**(code **)(*plVar15 + 0x20))(plVar15,puVar26);
              }
LAB_02aea9b0:
              lVar24 = 2;
              puVar26[6] = 2;
              puVar26[7] = 0;
            }
            uVar13 = *(undefined8 *)(puVar26 + 2);
            local_e0 = PTR_DAT_047dcc68 + 0x10;
            local_128._4_4_ = *puVar26;
            puVar7 = PTR_DAT_047dcc70 + 0x10;
            local_130 = (undefined *)0x0;
            local_138 = puVar7;
            if (local_128._4_4_ != 0) {
              uVar21 = (ulong)local_128._4_4_ - ((ulong)(local_128._4_4_ >> 1) & 0x5555555555555555)
              ;
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
              uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
              local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
              uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (((uVar21 != 1) &&
                  (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
                  local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
                  local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar21 != 2)) &&
                 (local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2,
                 local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf,
                 local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd, uVar21 != 3)) {
                local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 2;
                local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ >> 0xf;
                local_128._4_4_ = local_128._4_4_ ^ local_128._4_4_ << 0xd;
                local_128._0_4_ = 0;
                if (uVar21 != 4) {
                  (*pcVar16)(&local_138);
                  for (lVar10 = uVar21 - 5; lVar10 != 0; lVar10 = lVar10 + -1) {
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
            local_c0 = uVar13;
            local_b8 = lVar24;
            local_a8 = puVar7;
            puStack_a0 = local_130;
            FUN_02af123c(&local_e0,(long)plVar22 + 0x14);
            uVar21 = FUN_015d0a70(lVar14,puVar26);
            if ((uVar21 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("ValidateElement(element)","Update",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
                         ,0x246);
            }
          }
        }
        nn::os::UnlockMutex(pMVar6);
      }
      else {
        plVar15 = *(long **)(lVar14 + 0x60);
        if (plVar15 != (long *)0x0) {
          local_e0 = (undefined *)CONCAT44(*puVar5,(undefined4)local_e0);
          local_e0 = (undefined *)CONCAT71(local_e0._1_7_,1);
          (**(code **)(*plVar15 + 0x60))(plVar15,&local_e0);
          if ((char)local_e0 != '\0') {
            local_e0 = (undefined *)((ulong)local_e0 & 0xffffffffffffff00);
          }
        }
      }
      nn::os::UnlockMutex(pMVar6);
      if (local_140 != (long *)0x0) {
        (**(code **)(*local_140 + 0x20))();
      }
      plVar22 = (long *)*plVar22;
    } while (plVar22 != (long *)0x0);
  }
  if (param_1[0xb] != 0) {
    plVar22 = (long *)param_1[6];
    while (plVar22 != (long *)0x0) {
      plVar23 = (long *)param_1[7];
      plVar15 = (long *)*plVar22;
      uVar21 = (**(code **)(*plVar23 + 0xf8))(plVar23);
      if (((uVar21 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
        (**(code **)(*plVar23 + 0x18))(plVar23,plVar22,0x18,4);
        plVar22 = plVar15;
      }
      else {
        FUN_00c48fe8(plVar23,plVar22,0x18,4);
        plVar22 = plVar15;
      }
    }
    uVar21 = param_1[1];
    param_1[6] = 0;
    if (uVar21 != 0) {
      uVar18 = uVar21 & 3;
      if (uVar21 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          *(undefined8 *)(*param_1 + uVar19 * 8) = 0;
          *(undefined8 *)(*param_1 + uVar19 * 8 + 8) = 0;
          *(undefined8 *)(*param_1 + uVar19 * 8 + 0x10) = 0;
          lVar14 = uVar19 * 8;
          uVar19 = uVar19 + 4;
          *(undefined8 *)(*param_1 + lVar14 + 0x18) = 0;
        } while ((uVar21 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar18 != 0) {
        lVar14 = uVar19 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar14) = 0;
          uVar18 = uVar18 - 1;
          lVar14 = lVar14 + 8;
        } while (uVar18 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  return;
}


