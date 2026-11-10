/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0205a134; name: FUN_0205a134
 */


undefined8 FUN_0205a134(long param_1,uint param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  bool bVar13;
  short sVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  float fVar23;
  undefined1 auVar25 [16];
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  ulong uStack_68;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  puVar8 = PTR_DAT_047d6528;
  if (*(char *)(param_1 + 0xc0) != '\0') {
    if (param_2 < 2) {
      uVar11 = *(undefined8 *)(param_1 + 0xd0);
      uVar7 = *(undefined8 *)(param_1 + 0xd8);
      plVar16 = (long *)(param_1 + 0xa0);
      lVar10 = nn::os::GetCurrentThread();
      do {
        if (*plVar16 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
            while (*plVar16 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar6) {
                *plVar16 = lVar10;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_0205a188;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_0205a188:
      plVar16 = *(long **)(param_1 + 0x40);
      plVar3 = *(long **)(param_1 + 0x48);
      if (plVar16 == plVar3) {
        bVar6 = false;
      }
      else {
        bVar6 = false;
        local_60 = (float)uVar11;
        fStack_5c = (float)((ulong)uVar11 >> 0x20);
        fStack_58 = (float)uVar7;
        if (param_2 == 0) {
          auVar25 = ZEXT816(0);
          do {
            if (((*plVar16 != 0) && (*(short *)(*plVar16 + 0x1a) != 0)) &&
               (lVar10 = *plVar16, lVar10 != 0)) {
              fVar22 = auVar25._0_4_;
              if (*(short *)(lVar10 + 0x1a) != 0) {
                psVar1 = (short *)(lVar10 + 0x1a);
                sVar14 = *(short *)(lVar10 + 0x1a);
                do {
                  sVar4 = *psVar1;
                  if (sVar4 == sVar14) {
                    cVar5 = '\x01';
                    bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar13) {
                      *psVar1 = sVar14 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 != '\0') goto LAB_0205a450;
                    bVar13 = true;
                  }
                  else {
                    ClearExclusiveLocal();
LAB_0205a450:
                    bVar13 = false;
                  }
                  if (bVar13) {
                    if (*(long *)(lVar10 + 0x10) != 0) {
                      plVar15 = (long *)(*(long *)(lVar10 + 0x10) + -0x28);
                      lVar10 = (**(code **)(*plVar15 + 0x68))(plVar15);
                      fVar23 = *(float *)(lVar10 + 0x30) - local_60;
                      fVar26 = *(float *)(lVar10 + 0x34) - fStack_5c;
                      fVar27 = *(float *)(lVar10 + 0x38) - fStack_58;
                      fVar23 = fVar23 * fVar23;
                      fVar26 = fVar26 * fVar26;
                      fVar27 = fVar27 * fVar27;
                      auVar20._0_4_ = fVar23 + fVar26;
                      auVar20._4_4_ = fVar27 + 0.0;
                      auVar20._8_4_ = fVar23 + fVar26;
                      auVar20._12_4_ = fVar27 + 0.0;
                      auVar25 = NEON_ext(auVar20,auVar20,4,1);
                      fVar23 = auVar25._0_4_ + auVar25._4_4_;
                      auVar21._0_8_ = CONCAT44(auVar25._8_4_ + auVar25._12_4_,fVar23);
                      auVar21._8_4_ = auVar25._0_4_ + auVar25._4_4_;
                      auVar21._12_4_ = auVar25._8_4_ + auVar25._12_4_;
                      uStack_88 = auVar21._8_8_;
                      if (fVar23 <= fVar22) {
                        uStack_88 = 0;
                        local_90 = (ulong)(uint)fVar22;
                      }
                      else {
                        lVar10 = (**(code **)(*plVar15 + 0x68))(plVar15);
                        if (!bVar6) {
                          bVar6 = true;
                        }
                        uStack_68 = (ulong)SUB164(*(undefined1 (*) [16])(lVar10 + 0x30),8);
                        local_70 = SUB168(*(undefined1 (*) [16])(lVar10 + 0x30),0);
                        local_90 = auVar21._0_8_;
                      }
                      (**(code **)(*plVar15 + 0x60))(plVar15);
                      auVar25._8_8_ = uStack_88;
                      auVar25._0_8_ = local_90;
                      goto LAB_0205a404;
                    }
                    break;
                  }
                  sVar14 = sVar4;
                } while (sVar4 != 0);
              }
              auVar25 = ZEXT416((uint)fVar22);
            }
LAB_0205a404:
            plVar16 = plVar16 + 2;
          } while (plVar16 != plVar3);
        }
        else {
          auVar24 = ZEXT816(0x7f7fffff);
          do {
            if (((*plVar16 != 0) && (*(short *)(*plVar16 + 0x1a) != 0)) &&
               (lVar10 = *plVar16, lVar10 != 0)) {
              fVar22 = auVar24._0_4_;
              if (*(short *)(lVar10 + 0x1a) != 0) {
                psVar1 = (short *)(lVar10 + 0x1a);
                sVar14 = *(short *)(lVar10 + 0x1a);
                do {
                  sVar4 = *psVar1;
                  if (sVar4 == sVar14) {
                    cVar5 = '\x01';
                    bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar13) {
                      *psVar1 = sVar14 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 != '\0') goto LAB_0205a210;
                    bVar13 = true;
                  }
                  else {
                    ClearExclusiveLocal();
LAB_0205a210:
                    bVar13 = false;
                  }
                  if (bVar13) {
                    if (*(long *)(lVar10 + 0x10) != 0) {
                      plVar15 = (long *)(*(long *)(lVar10 + 0x10) + -0x28);
                      lVar10 = (**(code **)(*plVar15 + 0x68))(plVar15);
                      fVar23 = *(float *)(lVar10 + 0x30) - local_60;
                      fVar26 = *(float *)(lVar10 + 0x34) - fStack_5c;
                      fVar27 = *(float *)(lVar10 + 0x38) - fStack_58;
                      fVar23 = fVar23 * fVar23;
                      fVar26 = fVar26 * fVar26;
                      fVar27 = fVar27 * fVar27;
                      auVar18._0_4_ = fVar23 + fVar26;
                      auVar18._4_4_ = fVar27 + 0.0;
                      auVar18._8_4_ = fVar23 + fVar26;
                      auVar18._12_4_ = fVar27 + 0.0;
                      auVar25 = NEON_ext(auVar18,auVar18,4,1);
                      fVar23 = auVar25._0_4_ + auVar25._4_4_;
                      auVar19._0_8_ = CONCAT44(auVar25._8_4_ + auVar25._12_4_,fVar23);
                      auVar19._8_4_ = auVar25._0_4_ + auVar25._4_4_;
                      auVar19._12_4_ = auVar25._8_4_ + auVar25._12_4_;
                      uStack_88 = auVar19._8_8_;
                      if (fVar22 <= fVar23) {
                        uStack_88 = 0;
                        local_90 = (ulong)(uint)fVar22;
                      }
                      else {
                        lVar10 = (**(code **)(*plVar15 + 0x68))(plVar15);
                        if (!bVar6) {
                          bVar6 = true;
                        }
                        uStack_68 = (ulong)SUB164(*(undefined1 (*) [16])(lVar10 + 0x30),8);
                        local_70 = SUB168(*(undefined1 (*) [16])(lVar10 + 0x30),0);
                        local_90 = auVar19._0_8_;
                      }
                      (**(code **)(*plVar15 + 0x60))(plVar15);
                      auVar24._8_8_ = uStack_88;
                      auVar24._0_8_ = local_90;
                      goto LAB_0205a1c4;
                    }
                    break;
                  }
                  sVar14 = sVar4;
                } while (sVar4 != 0);
              }
              auVar24 = ZEXT416((uint)fVar22);
            }
LAB_0205a1c4:
            plVar16 = plVar16 + 2;
          } while (plVar16 != plVar3);
        }
      }
      *(undefined8 *)(param_1 + 0xa0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xa8));
      if (bVar6) {
LAB_0205a3c0:
        if (*(char *)(param_1 + 0xc0) == '\0') {
          *(undefined1 *)(param_1 + 0xc0) = 1;
        }
        else {
          *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0xd0);
          *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xd8);
        }
        *(ulong *)(param_1 + 0xd8) = uStack_68;
        *(undefined8 *)(param_1 + 0xd0) = local_70;
        return 1;
      }
    }
    else if (param_2 == 2) {
      local_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      lVar10 = *(long *)(param_1 + 0x78);
      if ((lVar10 != 0) && (puVar17 = *(undefined8 **)(lVar10 + 8), puVar17 != (undefined8 *)0x0)) {
        if (((*PTR_DAT_047d6520 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar9 != 0)) {
          uVar11 = FUN_0151c130();
          *(undefined8 *)puVar8 = uVar11;
          __cxa_guard_release(PTR_DAT_047d6520);
        }
        do {
          if (puVar17 == (undefined8 *)puVar8) {
            FUN_00d7c390(&local_50,(long *)(param_1 + 0x78));
            break;
          }
          puVar17 = (undefined8 *)*puVar17;
        } while (puVar17 != (undefined8 *)0x0);
      }
      puVar17 = local_50;
      if (local_50 != (undefined8 *)0x0) {
        if (*(short *)((long)local_50 + 0x1a) != 0) {
          psVar1 = (short *)((long)local_50 + 0x1a);
          sVar14 = *(short *)((long)local_50 + 0x1a);
          do {
            sVar4 = *psVar1;
            if (sVar4 == sVar14) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar14 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_0205a38c;
              bVar6 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_0205a38c:
              bVar6 = false;
            }
            if (bVar6) {
              plVar16 = (long *)0x0;
              if (local_50[2] != 0) {
                plVar16 = (long *)(local_50[2] + -0x28);
              }
              goto LAB_0205a558;
            }
            sVar14 = sVar4;
          } while (sVar4 != 0);
        }
        plVar16 = (long *)0x0;
LAB_0205a558:
        psVar1 = (short *)(local_50 + 3);
        do {
          sVar14 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar14 == 1) {
          piVar2 = (int *)((long)local_50 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_28 = *puVar17;
            FUN_00c44438(lVar10 + 0x8040,&local_28);
          }
        }
        else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
        if (plVar16 != (long *)0x0) {
          lVar10 = (**(code **)(*plVar16 + 0x68))(plVar16);
          lVar12 = plVar16[6];
          psVar1 = (short *)(lVar12 + 0x1a);
          uStack_68 = (ulong)SUB164(*(undefined1 (*) [16])(lVar10 + 0x30),8);
          local_70 = SUB168(*(undefined1 (*) [16])(lVar10 + 0x30),0);
          do {
            sVar14 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar14 == 1) {
            *(undefined8 *)(lVar12 + 0x10) = 0;
            (**(code **)(*plVar16 + 0x50))(plVar16);
          }
          else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          goto LAB_0205a3c0;
        }
      }
    }
  }
  return 0;
}


