/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f4f38c; name: FUN_00f4f38c
 */


undefined8 FUN_00f4f38c(long param_1)

{
  short *psVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 in_q3 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float local_120;
  float fStack_11c;
  float fStack_118;
  undefined1 *local_100;
  char *local_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined1 *local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  long local_a8;
  long lStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long *local_70 [2];
  
  uVar20 = in_q3._8_8_;
  uVar13 = in_q3._0_8_;
  plVar7 = (long *)FUN_00f48cd0();
  lVar10 = *plVar7;
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar5 = *(short *)(lVar10 + 0x1a);
    do {
      sVar6 = *psVar1;
      if (sVar6 == sVar5) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00f4f418;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f4f418:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar10 + 0x10) == 0) {
          return 0;
        }
        plVar16 = (long *)(*(long *)(lVar10 + 0x10) + -0x28);
        FUN_00d8fb98(&local_a8,PTR_DAT_047d9c48);
        plVar7 = (long *)FUN_00cb7028(plVar16,&local_a8);
        plVar7 = (long *)*plVar7;
        if (plVar7 != (long *)0x0) {
          plVar11 = plVar7 + 5;
          do {
            lVar10 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = (int)lVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((int)lVar10 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x20))();
        }
        if (plVar7 == (long *)0x0) {
          uVar13 = 0;
        }
        else {
          FUN_01e3c714(local_70,plVar7);
          if (local_70[0] == (long *)0x0) {
            uVar13 = 0;
          }
          else {
            local_90 = *(long **)(param_1 + 8);
            local_a8 = 0;
            lStack_a0 = 0;
            local_78 = 0;
            local_100 = (undefined1 *)((ulong)local_100 & 0xffffffff00000000);
            local_98 = 0;
            local_88 = 0x3fffffffffffffff;
            uStack_80 = 0;
            if (0 < (int)(((uint)((int)local_70[0][0x4a] - (int)local_70[0][0x49]) >> 4) *
                         -0x55550000)) {
              iVar12 = 0;
              do {
                uVar8 = FUN_01fada90(local_70[0],iVar12);
                if ((uVar8 & 1) != 0) {
                  FUN_016ab574(&local_a8,&local_100);
                }
                iVar12 = iVar12 + 1;
                local_100 = (undefined1 *)CONCAT44(local_100._4_4_,iVar12);
              } while (iVar12 < (short)((short)((uint)((int)local_70[0][0x4a] -
                                                      (int)local_70[0][0x49]) >> 4) * -0x5555));
            }
            local_100 = (undefined1 *)0x57e473b62b1b4512;
            local_f8 = "neck";
            local_f0 = 4;
            local_e8 = (long *)0x0;
            local_c8 = &DAT_afc4d6c05abef19e;
            pcStack_c0 = "default";
            local_b8 = 7;
            local_b0 = (long *)0x0;
            sVar5 = FUN_01407a7c(plVar16,&local_100,&local_c8);
            if (local_b0 != (long *)0x0) {
              (**(code **)(*local_b0 + 0x20))();
            }
            if (local_e8 != (long *)0x0) {
              (**(code **)(*local_e8 + 0x20))();
            }
            local_e8 = *(long **)(param_1 + 8);
            local_100 = (undefined1 *)0x0;
            local_f8 = (char *)0x0;
            local_d0 = 0;
            local_f0 = 0;
            local_e0 = 0x3fffffffffffffff;
            local_d8 = 0;
            plVar11 = (long *)(param_1 + 0xd8);
            lVar10 = *plVar11;
            if (lVar10 != 0) {
              plVar2 = *(long **)(param_1 + 0xf0);
              *(long *)(param_1 + 0xe0) = lVar10;
              lVar15 = *(long *)(param_1 + 0xe8) - lVar10;
              uVar8 = (**(code **)(*plVar2 + 0xf8))(plVar2);
              if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
                (**(code **)(*plVar2 + 0x18))(plVar2,lVar10,lVar15,4);
              }
              else {
                FUN_00c48fe8(plVar2,lVar10,lVar15,4);
              }
              *(undefined8 *)(param_1 + 0xe0) = 0;
              *(undefined8 *)(param_1 + 0xe8) = 0;
              *plVar11 = 0;
            }
            *(undefined8 *)(param_1 + 0x100) = local_d8;
            *(ulong *)(param_1 + 0x108) = CONCAT44(uStack_cc,local_d0);
            *(long **)(param_1 + 0xf0) = local_e8;
            *(undefined8 *)(param_1 + 0xf8) = local_e0;
            *(undefined8 *)(param_1 + 0xe0) = 0;
            *(undefined8 *)(param_1 + 0xe8) = 0;
            *plVar11 = 0;
            local_f8 = (char *)0x0;
            local_f0 = 0;
            local_100 = (undefined1 *)0x0;
            FUN_0194549c(&local_100);
            if (lStack_a0 != local_a8) {
              uVar8 = 0;
              do {
                uVar18 = uVar13;
                uVar21 = uVar20;
                if (sVar5 != -1) {
                  uVar14 = uVar8 & 0xffffffff;
                  do {
                    sVar6 = FUN_00c9edd0(local_70[0],uVar14);
                    if (((int)uVar14 == (int)sVar5) || (sVar6 == sVar5)) goto LAB_00f4f724;
                    uVar14 = (ulong)(uint)(int)sVar6;
                    uVar18 = uVar13;
                    uVar21 = uVar20;
                  } while (sVar6 != -1);
                }
                local_100 = &DAT_afc4d6c05abef19e;
                local_f8 = "default";
                local_f0 = 7;
                local_e8 = (long *)0x0;
                FUN_00e7c820(plVar16,*(undefined4 *)(local_a8 + uVar8 * 4),&local_100);
                uVar13 = uVar18;
                uVar20 = uVar21;
                if (local_e8 != (long *)0x0) {
                  (**(code **)(*local_e8 + 0x20))();
                }
                lVar10 = *(long *)(param_1 + 0xd8);
                if (*(long *)(param_1 + 0xe0) != lVar10) {
                  uVar14 = 0;
                  uVar19 = uVar13;
                  uVar22 = uVar20;
                  do {
                    local_100 = &DAT_afc4d6c05abef19e;
                    local_f8 = "default";
                    local_f0 = 7;
                    local_e8 = (long *)0x0;
                    FUN_00e7c820(plVar16,*(undefined4 *)(lVar10 + uVar14 * 4),&local_100);
                    uVar13 = uVar19;
                    uVar20 = uVar22;
                    if (local_e8 != (long *)0x0) {
                      (**(code **)(*local_e8 + 0x20))();
                    }
                    local_120 = (float)uVar18;
                    fStack_11c = (float)((ulong)uVar18 >> 0x20);
                    fStack_118 = (float)uVar21;
                    local_120 = (float)uVar19 - local_120;
                    fStack_11c = (float)((ulong)uVar19 >> 0x20) - fStack_11c;
                    fStack_118 = (float)uVar22 - fStack_118;
                    local_120 = local_120 * local_120;
                    fStack_11c = fStack_11c * fStack_11c;
                    fStack_118 = fStack_118 * fStack_118;
                    auVar17._0_4_ = local_120 + fStack_11c;
                    auVar17._4_4_ = fStack_118 + 0.0;
                    auVar17._8_4_ = local_120 + fStack_11c;
                    auVar17._12_4_ = fStack_118 + 0.0;
                    auVar17 = NEON_ext(auVar17,auVar17,4,1);
                    if (auVar17._0_4_ + auVar17._4_4_ <
                        *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x158))
                    goto LAB_00f4f724;
                    uVar14 = uVar14 + 1;
                    lVar10 = *(long *)(param_1 + 0xd8);
                    uVar19 = uVar13;
                    uVar22 = uVar20;
                  } while (uVar14 < (ulong)(*(long *)(param_1 + 0xe0) - lVar10 >> 2));
                }
                FUN_016ab574(plVar11,local_a8 + uVar8 * 4);
LAB_00f4f724:
                uVar8 = uVar8 + 1;
              } while (uVar8 < (ulong)(lStack_a0 - local_a8 >> 2));
            }
            FUN_0194549c(&local_a8);
            if (local_70[0] != (long *)0x0) {
              plVar11 = local_70[0] + 5;
              do {
                lVar10 = *plVar11;
                iVar12 = (int)lVar10 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar4) {
                  *(int *)plVar11 = iVar12;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar12 == 0) {
                (**(code **)(*local_70[0] + 0x10))();
              }
              else if ((int)lVar10 == 0) goto LAB_00f4f888;
            }
            uVar13 = 1;
          }
          plVar11 = plVar7 + 5;
          do {
            lVar10 = *plVar11;
            iVar12 = (int)lVar10 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = iVar12;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
          else if ((int)lVar10 == 0) {
LAB_00f4f888:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        (**(code **)(*plVar16 + 0x60))(plVar16);
        return uVar13;
      }
      sVar5 = sVar6;
    } while (sVar6 != 0);
  }
  return 0;
}


