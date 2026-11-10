/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0204c4ac; name: FUN_0204c4ac
 */


void FUN_0204c4ac(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  short sVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  float fVar19;
  float fVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  long *local_68 [2];
  long local_58;
  long local_38;
  
  lVar8 = FUN_0204b660(param_2,*param_4);
  if ((((*(long *)(lVar8 + 0xb0) == 0) || (*(short *)(*(long *)(lVar8 + 0xb0) + 0x1a) == 0)) &&
      (uVar13 = FUN_01fb6fa4(lVar8 + 0x98), (uVar13 & 1) == 0)) ||
     (lVar8 = *(long *)(lVar8 + 0xa8), lVar8 == 0)) {
    puVar11 = (undefined1 *)FUN_00f6866c();
    *param_1 = *puVar11;
    return;
  }
  FUN_01b2f888(local_68);
  if (local_68[0] == (long *)0x0) {
    local_58 = 0;
  }
  else {
    FUN_01d8542c(&local_58);
  }
  FUN_01b2f968(local_68);
  if (local_58 != 0) {
    lVar9 = FUN_0204b660(param_2,*param_4);
    if ((((*(long *)(lVar9 + 0x88) != 0) && (*(short *)(*(long *)(lVar9 + 0x88) + 0x1a) != 0)) ||
        (uVar13 = FUN_013f7d04(lVar9 + 0x70), (uVar13 & 1) != 0)) &&
       (lVar9 = *(long *)(lVar9 + 0x80), lVar9 != 0)) {
      puVar10 = (undefined8 *)FUN_017d6f44(lVar9);
      plVar16 = (long *)*puVar10;
      if (plVar16 != (long *)0x0) {
        lVar18 = plVar16[6];
        if (*(long *)(lVar18 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar18 + 0x1a);
        do {
          sVar15 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar15 == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
          *(undefined8 *)(lVar18 + 8) = uVar12;
          *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
        }
        else if (sVar15 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        FUN_00e3353c(local_68,lVar9);
        plVar14 = local_68[0];
        if (local_68[0] == (long *)0x0) {
LAB_0204c5ac:
          puVar11 = (undefined1 *)FUN_00f6866c();
          *param_1 = *puVar11;
        }
        else {
          if (*(short *)((long)local_68[0] + 0x1a) != 0) {
            psVar1 = (short *)((long)local_68[0] + 0x1a);
            sVar15 = *(short *)((long)local_68[0] + 0x1a);
            do {
              sVar4 = *psVar1;
              if (sVar4 == sVar15) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar6) {
                  *psVar1 = sVar15 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 != '\0') goto LAB_0204c6d8;
                bVar6 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_0204c6d8:
                bVar6 = false;
              }
              if (bVar6) {
                plVar17 = (long *)0x0;
                if (local_68[0][2] != 0) {
                  plVar17 = (long *)(local_68[0][2] + -0x28);
                }
                goto LAB_0204c700;
              }
              sVar15 = sVar4;
            } while (sVar4 != 0);
          }
          plVar17 = (long *)0x0;
LAB_0204c700:
          plVar2 = local_68[0] + 3;
          do {
            sVar15 = (short)*plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(short *)plVar2 = sVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar15 == 1) {
            piVar3 = (int *)((long)local_68[0] + 0x1c);
            do {
              iVar7 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar9 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar9;
              local_38 = *plVar14;
              FUN_00c44438(lVar9 + 0x8040,&local_38);
            }
          }
          else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
          if (plVar17 == (long *)0x0) goto LAB_0204c5ac;
          plVar14 = (long *)FUN_01dfd3b8();
          lVar9 = *plVar14;
          if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
            psVar1 = (short *)(lVar9 + 0x1a);
            sVar15 = *(short *)(lVar9 + 0x1a);
LAB_0204c870:
            sVar4 = *psVar1;
            if (sVar4 == sVar15) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar15 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_0204c894;
              bVar6 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_0204c894:
              bVar6 = false;
            }
            if (!bVar6) goto code_r0x0204c89c;
            if (*(long *)(lVar9 + 0x10) != 0) {
              plVar14 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
              FUN_014410c0(local_68,*(undefined8 *)(*param_4 + (ulong)*(uint *)(param_2 + 8)));
              if (local_68[0] == (long *)0x0) {
                puVar11 = (undefined1 *)FUN_00f6866c();
              }
              else {
                auVar20 = FUN_01025bc4(local_68[0],*param_4 + (ulong)*(uint *)(param_2 + 0xe8));
                if (*(char *)(lVar8 + 0x220) == '\0') {
                  fVar23 = auVar20._4_4_;
                }
                else {
                  fVar23 = *(float *)(lVar8 + 0x1d4);
                }
                auVar21 = NEON_ext(auVar20,auVar20,8,1);
                auVar26._0_4_ = auVar20._0_4_;
                auVar26._4_4_ = fVar23;
                auVar26._8_4_ = auVar21._0_4_;
                auVar26._12_4_ = 0;
                FUN_0204c08c(auVar26,local_58);
                lVar8 = (**(code **)(*plVar14 + 0x68))(plVar14);
                fVar19 = *(float *)(lVar8 + 0x30) - auVar26._0_4_;
                fVar23 = *(float *)(lVar8 + 0x34) - fVar23;
                fVar22 = *(float *)(lVar8 + 0x38) - auVar21._0_4_;
                fVar19 = fVar19 * fVar19;
                fVar23 = fVar23 * fVar23;
                fVar22 = fVar22 * fVar22;
                auVar20._0_4_ = fVar19 + fVar23;
                auVar20._4_4_ = fVar22 + 0.0;
                auVar20._8_4_ = fVar19 + fVar23;
                auVar20._12_4_ = fVar22 + 0.0;
                auVar20 = NEON_ext(auVar20,auVar20,4,1);
                auVar21._0_4_ = auVar20._0_4_ + auVar20._4_4_;
                auVar21._4_4_ = auVar20._8_4_ + auVar20._12_4_;
                auVar21._8_4_ = auVar20._0_4_ + auVar20._4_4_;
                auVar21._12_4_ = auVar20._8_4_ + auVar20._12_4_;
                auVar20 = NEON_frsqrte(auVar21,4);
                auVar25._0_4_ = auVar21._0_4_ * auVar20._0_4_;
                auVar25._4_4_ = auVar21._4_4_ * auVar20._4_4_;
                auVar25._8_4_ = auVar21._8_4_ * auVar20._8_4_;
                auVar25._12_4_ = auVar21._12_4_ * auVar20._12_4_;
                auVar26 = NEON_frsqrts(auVar20,auVar25,4);
                auVar24._0_4_ = auVar20._0_4_ * auVar26._0_4_;
                auVar24._4_4_ = auVar20._4_4_ * auVar26._4_4_;
                auVar24._8_4_ = auVar20._8_4_ * auVar26._8_4_;
                auVar24._12_4_ = auVar20._12_4_ * auVar26._12_4_;
                auVar27._0_4_ = auVar21._0_4_ * auVar24._0_4_;
                auVar27._4_4_ = auVar21._4_4_ * auVar24._4_4_;
                auVar27._8_4_ = auVar21._8_4_ * auVar24._8_4_;
                auVar27._12_4_ = auVar21._12_4_ * auVar24._12_4_;
                NEON_frsqrts(auVar24,auVar27,4);
                FUN_0204c18c(local_58);
                FUN_0204c4a4(plVar16);
                FUN_01df7ce8(local_58);
                FUN_01e17360(plVar17,0);
                FUN_01df8710(local_58,1);
                FUN_01df9ab4(local_58,3);
                FUN_01df7b3c(local_58,1);
                FUN_01e15e4c(plVar17,1);
                puVar11 = (undefined1 *)FUN_013e253c();
              }
              *param_1 = *puVar11;
              if (local_68[0] != (long *)0x0) {
                lVar8 = local_68[0][6];
                psVar1 = (short *)(lVar8 + 0x1a);
                do {
                  sVar15 = *psVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar6) {
                    *psVar1 = sVar15 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (sVar15 == 1) {
                  *(undefined8 *)(lVar8 + 0x10) = 0;
                  (**(code **)(*local_68[0] + 0x50))();
                }
                else if (sVar15 == 0) goto LAB_0204c5dc;
              }
              (**(code **)(*plVar14 + 0x60))(plVar14);
              goto LAB_0204c73c;
            }
          }
LAB_0204c730:
          puVar11 = (undefined1 *)FUN_00f6866c();
          *param_1 = *puVar11;
LAB_0204c73c:
          lVar8 = plVar17[6];
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar15 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar15 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*plVar17 + 0x50))(plVar17);
          }
          else if (sVar15 == 0) goto LAB_0204c5dc;
        }
        lVar8 = plVar16[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar15 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar15 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar16 + 0x50))(plVar16);
        }
        else if (sVar15 == 0) {
LAB_0204c5dc:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        goto LAB_0204c664;
      }
    }
  }
  puVar11 = (undefined1 *)FUN_00f6866c();
  *param_1 = *puVar11;
LAB_0204c664:
  FUN_019c51a8(&local_58);
  return;
code_r0x0204c89c:
  sVar15 = sVar4;
  if (sVar4 == 0) goto LAB_0204c730;
  goto LAB_0204c870;
}


