/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ae9a90; name: FUN_02ae9a90
 */


void FUN_02ae9a90(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  MutexType *pMVar5;
  undefined *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  void *__dest;
  long *plVar13;
  long lVar14;
  code *pcVar15;
  uint *puVar16;
  ulong uVar17;
  undefined1 uVar18;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 uVar23;
  byte *pbVar24;
  uint *puVar25;
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
  undefined8 uStack_c0;
  undefined8 local_b8;
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
    pcVar15 = *(code **)(PTR_DAT_047dcc70 + 0x20);
    puVar1 = PTR_DAT_047dcc78 + 0x10;
    puVar2 = PTR_DAT_047dcc80 + 0x10;
    puVar3 = PTR_DAT_047dcc88 + 0x10;
    pbVar24 = PTR_DAT_047d4c98;
    do {
      if (((*pbVar24 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar24), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(pbVar24);
      }
      uVar10 = *(undefined8 *)PTR_DAT_047d4ca0;
      *(undefined8 *)PTR_DAT_047d4ca8 = uVar10;
      local_158 = &DAT_e4d07a996e5ef5e8;
      puVar4 = (uint *)(plVar22 + 2);
      local_150 = &DAT_03c60f6f;
      uStack_148 = 4;
      local_140 = (long *)0x0;
      lVar11 = FUN_00f844f4(uVar10,&local_158);
      pMVar5 = (MutexType *)(lVar11 + 0x80);
      nn::os::LockMutex(pMVar5);
      if ((*(byte *)(lVar11 + 0xa0) & 1) == 0) {
        nn::os::LockMutex(pMVar5);
        puVar8 = *(uint **)(lVar11 + 0x10);
        uVar21 = (long)puVar8 - (long)*(uint **)(lVar11 + 8);
        if (0 < (long)uVar21) {
          puVar16 = *(uint **)(lVar11 + 8);
          puVar20 = puVar8;
          do {
            puVar25 = puVar16 + (uVar21 / 0x60) * 0xc;
            if (*puVar25 == *puVar4) goto LAB_02ae9bd4;
            puVar7 = puVar25 + 0xc;
            if (*puVar4 <= *puVar25) {
              puVar7 = puVar16;
              puVar20 = puVar25;
            }
            uVar21 = (long)puVar20 - (long)puVar7;
            puVar16 = puVar7;
          } while (0 < (long)uVar21);
        }
        puVar25 = puVar8;
LAB_02ae9bd4:
        nn::os::UnlockMutex(pMVar5);
        if ((puVar25 == (uint *)0x0) || (puVar8 == puVar25)) {
          nn::os::LockMutex(pMVar5);
          plVar12 = *(long **)(lVar11 + 0x60);
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x38))(plVar12,puVar4);
          }
          FUN_015d0cb8(&local_88,lVar11,puVar4,1);
          if (local_88 != (uint *)0x0) {
            uVar10 = *(undefined8 *)(local_88 + 2);
            uVar23 = *(undefined8 *)(local_88 + 6);
            local_e0 = PTR_DAT_047dcc68 + 0x10;
            local_128._4_4_ = *local_88;
            puVar6 = PTR_DAT_047dcc70 + 0x10;
            local_130 = (undefined *)0x0;
            local_138 = puVar6;
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
                  (*pcVar15)(&local_138);
                  for (lVar14 = uVar21 - 5; lVar14 != 0; lVar14 = lVar14 + -1) {
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
            uVar18 = 1;
            if (*(char *)((long)plVar22 + 0x14) != '\0') {
              uVar18 = 2;
            }
            local_138 = (undefined *)CONCAT71(local_138._1_7_,uVar18);
            local_d8 = puVar2;
            local_c8 = puVar1;
            uStack_c0 = uVar10;
            local_b8 = uVar23;
            local_a8 = puVar6;
            puStack_a0 = local_130;
            plVar12 = (long *)(**(code **)(local_e0 + 0x10))(&local_e0);
            plVar13 = (long *)(**(code **)(*plVar12 + 0x28))();
            uVar21 = (**(code **)(*plVar13 + 0x18))(plVar13,1,plVar12[1]);
            if ((uVar21 & 1) == 0) {
              lVar14 = (**(code **)(local_e0 + 0x10))(&local_e0);
              *(long *)(lVar14 + 8) = *(long *)(lVar14 + 8) + 1;
            }
            else {
              uVar21 = (**(code **)(*plVar12 + 0x18))(plVar12,&local_138,1,0);
              lVar14 = (**(code **)(local_e0 + 0x10))(&local_e0);
              puVar4 = local_88;
              *(long *)(lVar14 + 8) = *(long *)(lVar14 + 8) + 1;
              if ((uVar21 & 1) != 0) {
                uVar10 = *(undefined8 *)(local_88 + 2);
                uVar23 = *(undefined8 *)(local_88 + 6);
                uStack_6c = *local_88;
                puVar6 = PTR_DAT_047dcc70 + 0x10;
                local_78 = 0;
                local_70 = 0;
                local_138 = puVar3;
                local_80 = puVar6;
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
                    (*pcVar15)(&local_80);
                    for (lVar14 = uVar21 - 5; lVar14 != 0; lVar14 = lVar14 + -1) {
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
                local_118 = uVar10;
                uStack_110 = uVar23;
                local_100 = puVar6;
                uStack_f8 = local_78;
                local_70 = uStack_6c;
                uVar10 = FUN_015d1064(&local_138);
                if ((char)puVar4[8] == '\0') {
                  *(undefined8 *)(puVar4 + 9) = uVar10;
                  *(undefined1 *)(puVar4 + 8) = 1;
                }
                else {
                  *(undefined8 *)(puVar4 + 9) = uVar10;
                }
                pbVar24 = PTR_DAT_047d4c98;
                nn::os::LockMutex(pMVar5);
                FUN_015d1340(*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10),&local_138);
                nn::os::UnlockMutex(pMVar5);
                goto LAB_02aea338;
              }
            }
            (**(code **)(**(long **)(lVar11 + 0x40) + 0x18))
                      (*(long **)(lVar11 + 0x40),*(undefined8 *)(local_88 + 2),
                       *(undefined8 *)(local_88 + 4));
            pbVar24 = PTR_DAT_047d4c98;
            lVar14 = *(long *)(lVar11 + 0x10);
            if (*(char *)(lVar14 + -0x10) != '\0') {
              *(undefined1 *)(lVar14 + -0x10) = 0;
            }
            *(long *)(lVar11 + 0x10) = lVar14 + -0x30;
          }
        }
        else {
          uVar21 = FUN_02ad6970(lVar11,puVar25);
          if (((uVar21 & 1) == 0) && (plVar12 = *(long **)(lVar11 + 0x60), plVar12 != (long *)0x0))
          {
            (**(code **)(*plVar12 + 0x58))(plVar12,puVar4);
          }
          nn::os::LockMutex(pMVar5);
          plVar12 = *(long **)(lVar11 + 0x60);
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x30))(plVar12,puVar25);
          }
          if (*(long *)(puVar25 + 4) == 0) {
            plVar12 = *(long **)(lVar11 + 0x60);
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x18))(plVar12,puVar25);
            }
            __dest = (void *)(**(code **)(**(long **)(lVar11 + 0x40) + 0x10))
                                       (*(long **)(lVar11 + 0x40),1);
            if (__dest == (void *)0x0) goto LAB_02aea338;
            memcpy(__dest,*(void **)(puVar25 + 2),*(size_t *)(puVar25 + 6));
            (**(code **)(**(long **)(lVar11 + 0x40) + 0x18))
                      (*(long **)(lVar11 + 0x40),*(undefined8 *)(puVar25 + 2),
                       *(undefined8 *)(puVar25 + 4));
            *(void **)(puVar25 + 2) = __dest;
            puVar25[4] = 1;
            puVar25[5] = 0;
            uVar10 = 1;
            puVar25[6] = 1;
            puVar25[7] = 0;
          }
          else if (*(long *)(puVar25 + 4) == 1) {
            uVar10 = *(undefined8 *)(puVar25 + 6);
          }
          else {
            if (*(long *)(puVar25 + 6) != 1) {
              plVar12 = *(long **)(lVar11 + 0x60);
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x20))(plVar12,puVar25);
              }
              puVar25[6] = 1;
              puVar25[7] = 0;
            }
            uVar10 = 1;
          }
          uVar23 = *(undefined8 *)(puVar25 + 2);
          local_e0 = PTR_DAT_047dcc68 + 0x10;
          local_128._4_4_ = *puVar25;
          puVar6 = PTR_DAT_047dcc70 + 0x10;
          local_130 = (undefined *)0x0;
          local_138 = puVar6;
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
                (*pcVar15)(&local_138);
                for (lVar14 = uVar21 - 5; lVar14 != 0; lVar14 = lVar14 + -1) {
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
          uVar18 = 1;
          if (*(char *)((long)plVar22 + 0x14) != '\0') {
            uVar18 = 2;
          }
          local_138 = (undefined *)CONCAT71(local_138._1_7_,uVar18);
          uStack_c0 = uVar23;
          local_b8 = uVar10;
          local_a8 = puVar6;
          puStack_a0 = local_130;
          plVar12 = (long *)(**(code **)(local_e0 + 0x10))(&local_e0);
          plVar13 = (long *)(**(code **)(*plVar12 + 0x28))();
          uVar21 = (**(code **)(*plVar13 + 0x18))(plVar13,1,plVar12[1]);
          if ((uVar21 & 1) != 0) {
            (**(code **)(*plVar12 + 0x18))(plVar12,&local_138,1,0);
          }
          lVar14 = (**(code **)(local_e0 + 0x10))(&local_e0);
          *(long *)(lVar14 + 8) = *(long *)(lVar14 + 8) + 1;
          uVar21 = FUN_015d0a70(lVar11,puVar25);
          pbVar24 = PTR_DAT_047d4c98;
          if ((uVar21 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("ValidateElement(element)","Update",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
                       ,0x246);
          }
        }
LAB_02aea338:
        nn::os::UnlockMutex(pMVar5);
      }
      else {
        plVar12 = *(long **)(lVar11 + 0x60);
        if (plVar12 != (long *)0x0) {
          local_e0 = (undefined *)CONCAT44(*puVar4,(undefined4)local_e0);
          local_e0 = (undefined *)CONCAT71(local_e0._1_7_,1);
          (**(code **)(*plVar12 + 0x60))(plVar12,&local_e0);
          if ((char)local_e0 != '\0') {
            local_e0 = (undefined *)((ulong)local_e0 & 0xffffffffffffff00);
          }
        }
      }
      nn::os::UnlockMutex(pMVar5);
      if (local_140 != (long *)0x0) {
        (**(code **)(*local_140 + 0x20))();
      }
      plVar22 = (long *)*plVar22;
    } while (plVar22 != (long *)0x0);
  }
  if (param_1[0xb] != 0) {
    plVar22 = (long *)param_1[6];
    while (plVar22 != (long *)0x0) {
      plVar13 = (long *)param_1[7];
      plVar12 = (long *)*plVar22;
      uVar21 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar21 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,plVar22,0x18,4);
        plVar22 = plVar12;
      }
      else {
        FUN_00c48fe8(plVar13,plVar22,0x18,4);
        plVar22 = plVar12;
      }
    }
    uVar21 = param_1[1];
    param_1[6] = 0;
    if (uVar21 != 0) {
      uVar17 = uVar21 & 3;
      if (uVar21 - 1 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          *(undefined8 *)(*param_1 + uVar19 * 8) = 0;
          *(undefined8 *)(*param_1 + uVar19 * 8 + 8) = 0;
          *(undefined8 *)(*param_1 + uVar19 * 8 + 0x10) = 0;
          lVar11 = uVar19 * 8;
          uVar19 = uVar19 + 4;
          *(undefined8 *)(*param_1 + lVar11 + 0x18) = 0;
        } while ((uVar21 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar17 != 0) {
        lVar11 = uVar19 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar11) = 0;
          uVar17 = uVar17 - 1;
          lVar11 = lVar11 + 8;
        } while (uVar17 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  return;
}


