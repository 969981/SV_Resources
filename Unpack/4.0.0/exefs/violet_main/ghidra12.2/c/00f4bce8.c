/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f4bce8; name: FUN_00f4bce8
 */


undefined8 FUN_00f4bce8(long param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  undefined1 in_q3 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  undefined1 *local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined1 *local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long *local_70 [2];
  
  uVar19 = in_q3._8_8_;
  uVar15 = in_q3._0_8_;
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
        if (cVar3 != '\0') goto LAB_00f4bd74;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f4bd74:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar10 + 0x10) == 0) {
          return 0;
        }
        plVar11 = (long *)(*(long *)(lVar10 + 0x10) + -0x28);
        FUN_00d8fb98(&local_a8,PTR_DAT_047d9c48);
        plVar7 = (long *)FUN_00cb7028(plVar11,&local_a8);
        plVar7 = (long *)*plVar7;
        if (plVar7 != (long *)0x0) {
          plVar17 = plVar7 + 5;
          do {
            lVar10 = *plVar17;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar4) {
              *(int *)plVar17 = (int)lVar10 + 1;
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
          uVar15 = 0;
        }
        else {
          FUN_01e3c714(local_70,plVar7);
          if (local_70[0] == (long *)0x0) {
            uVar15 = 0;
          }
          else {
            local_90 = *(long **)(param_1 + 8);
            local_a8 = 0;
            local_a0 = 0;
            local_78 = 0;
            local_c8 = (undefined1 *)((ulong)local_c8 & 0xffffffff00000000);
            local_98 = 0;
            local_88 = 0x3fffffffffffffff;
            uStack_80 = 0;
            if (0 < (int)(((uint)((int)local_70[0][0x4a] - (int)local_70[0][0x49]) >> 4) *
                         -0x55550000)) {
              iVar14 = 0;
              do {
                uVar8 = FUN_01fada90(local_70[0],iVar14);
                if ((uVar8 & 1) != 0) {
                  FUN_0147ce9c(&local_a8,&local_c8);
                }
                iVar14 = iVar14 + 1;
                local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,iVar14);
              } while (iVar14 < (short)((short)((uint)((int)local_70[0][0x4a] -
                                                      (int)local_70[0][0x49]) >> 4) * -0x5555));
            }
            local_c8 = (undefined1 *)0x57e473b62b1b4512;
            pcStack_c0 = "neck";
            local_b8 = 4;
            local_b0 = (long *)0x0;
            local_e8 = &DAT_afc4d6c05abef19e;
            pcStack_e0 = "default";
            local_d8 = 7;
            local_d0 = (long *)0x0;
            sVar5 = FUN_01407a7c(plVar11,&local_c8,&local_e8);
            if (local_d0 != (long *)0x0) {
              (**(code **)(*local_d0 + 0x20))();
            }
            if (local_b0 != (long *)0x0) {
              (**(code **)(*local_b0 + 0x20))();
            }
            uVar12 = *(undefined8 *)(param_1 + 8);
            puVar2 = (undefined8 *)(param_1 + 0x15e0);
            lVar10 = *(long *)(param_1 + 0x15e0);
            if (lVar10 != 0) {
              *(long *)(param_1 + 0x15e8) = lVar10;
              lVar13 = *(long *)(param_1 + 0x15f0) - lVar10;
              plVar17 = *(long **)(param_1 + 0x15f8);
              uVar8 = (**(code **)(*plVar17 + 0xf8))(plVar17);
              if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
                (**(code **)(*plVar17 + 0x18))(plVar17,lVar10,lVar13,4);
              }
              else {
                FUN_00c48fe8(plVar17,lVar10,lVar13,4);
              }
              *(undefined8 *)(param_1 + 0x15e8) = 0;
              *(undefined8 *)(param_1 + 0x15f0) = 0;
              *puVar2 = 0;
            }
            *(undefined8 *)(param_1 + 0x1600) = 0x3fffffffffffffff;
            *(undefined8 *)(param_1 + 0x15f8) = uVar12;
            *(undefined8 *)(param_1 + 0x1608) = 0;
            *(undefined4 *)(param_1 + 0x1610) = 0;
            *puVar2 = 0;
            *(undefined8 *)(param_1 + 0x15e8) = 0;
            *(undefined8 *)(param_1 + 0x15f0) = 0;
            if (local_a0 != local_a8) {
              uVar8 = 0;
              do {
                uVar12 = uVar15;
                uVar20 = uVar19;
                if (sVar5 != -1) {
                  uVar16 = uVar8 & 0xffffffff;
                  do {
                    sVar6 = FUN_00c9edd0(local_70[0],uVar16);
                    if (((int)uVar16 == (int)sVar5) || (sVar6 == sVar5)) goto LAB_00f4c06c;
                    uVar16 = (ulong)(uint)(int)sVar6;
                    uVar12 = uVar15;
                    uVar20 = uVar19;
                  } while (sVar6 != -1);
                }
                local_c8 = &DAT_afc4d6c05abef19e;
                pcStack_c0 = "default";
                local_b8 = 7;
                local_b0 = (long *)0x0;
                FUN_00e7c820(plVar11,*(undefined4 *)(local_a8 + uVar8 * 4),&local_c8);
                uVar15 = uVar12;
                uVar19 = uVar20;
                if (local_b0 != (long *)0x0) {
                  (**(code **)(*local_b0 + 0x20))();
                }
                lVar10 = *(long *)(param_1 + 0x15e0);
                if (*(long *)(param_1 + 0x15e8) != lVar10) {
                  uVar16 = 0;
                  do {
                    local_c8 = &DAT_afc4d6c05abef19e;
                    pcStack_c0 = "default";
                    local_b8 = 7;
                    local_b0 = (long *)0x0;
                    FUN_00e7c820(plVar11,*(undefined4 *)(lVar10 + uVar16 * 4),&local_c8);
                    if (local_b0 != (long *)0x0) {
                      (**(code **)(*local_b0 + 0x20))();
                    }
                    local_100 = (float)uVar12;
                    fStack_fc = (float)((ulong)uVar12 >> 0x20);
                    fStack_f8 = (float)uVar20;
                    local_100 = (float)uVar15 - local_100;
                    fStack_fc = (float)((ulong)uVar15 >> 0x20) - fStack_fc;
                    fStack_f8 = (float)uVar19 - fStack_f8;
                    local_100 = local_100 * local_100;
                    fStack_fc = fStack_fc * fStack_fc;
                    fStack_f8 = fStack_f8 * fStack_f8;
                    auVar18._0_4_ = local_100 + fStack_fc;
                    auVar18._4_4_ = fStack_f8 + 0.0;
                    auVar18._8_4_ = local_100 + fStack_fc;
                    auVar18._12_4_ = fStack_f8 + 0.0;
                    auVar18 = NEON_ext(auVar18,auVar18,4,1);
                    if (auVar18._0_4_ + auVar18._4_4_ <
                        *(float *)(param_1 + 0x15a8) * *(float *)(param_1 + 0x15a8))
                    goto LAB_00f4c06c;
                    uVar16 = uVar16 + 1;
                    lVar10 = *(long *)(param_1 + 0x15e0);
                  } while (uVar16 < (ulong)(*(long *)(param_1 + 0x15e8) - lVar10 >> 2));
                }
                FUN_0147ce9c(puVar2,local_a8 + uVar8 * 4);
LAB_00f4c06c:
                uVar8 = uVar8 + 1;
              } while (uVar8 < (ulong)(local_a0 - local_a8 >> 2));
            }
            plVar17 = local_90;
            lVar10 = local_a8;
            if (local_a8 != 0) {
              lVar13 = local_98 - local_a8;
              local_a0 = local_a8;
              uVar8 = (**(code **)(*local_90 + 0xf8))(local_90);
              if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
                (**(code **)(*plVar17 + 0x18))(plVar17,lVar10,lVar13,4);
              }
              else {
                FUN_00c48fe8(plVar17,lVar10,lVar13,4);
              }
            }
            if (local_70[0] != (long *)0x0) {
              plVar17 = local_70[0] + 5;
              do {
                lVar10 = *plVar17;
                iVar14 = (int)lVar10 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar4) {
                  *(int *)plVar17 = iVar14;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar14 == 0) {
                (**(code **)(*local_70[0] + 0x10))();
              }
              else if ((int)lVar10 == 0) goto LAB_00f4c234;
            }
            uVar15 = 1;
          }
          plVar17 = plVar7 + 5;
          do {
            lVar10 = *plVar17;
            iVar14 = (int)lVar10 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar4) {
              *(int *)plVar17 = iVar14;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar14 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
          else if ((int)lVar10 == 0) {
LAB_00f4c234:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        (**(code **)(*plVar11 + 0x60))(plVar11);
        return uVar15;
      }
      sVar5 = sVar6;
    } while (sVar6 != 0);
  }
  return 0;
}


