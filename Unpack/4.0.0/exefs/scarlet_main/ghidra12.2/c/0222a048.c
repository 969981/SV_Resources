/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0222a048; name: FUN_0222a048
 */


void FUN_0222a048(undefined8 param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  char **ppcVar3;
  ulong *puVar4;
  long **pplVar5;
  short sVar6;
  char cVar7;
  ulong uVar8;
  ulong *puVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  short sVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ulong local_e8;
  undefined *puStack_e0;
  undefined8 local_d8;
  long *local_d0;
  ulong local_c8;
  char *local_c0;
  ulong local_b8;
  long *local_b0;
  long *local_a8;
  char *local_a0;
  ulong local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  ulong *local_60;
  undefined8 uStack_58;
  
  uVar12 = FUN_017350a8();
  if ((uVar12 & 1) == 0) {
    local_80 = *(undefined8 *)(param_2 + 0x110);
    uStack_78 = *(undefined8 *)(param_2 + 0x118);
    local_70 = *(undefined8 *)(param_2 + 0x120);
    plVar22 = *(long **)(param_2 + 0x128);
    local_68 = plVar22;
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
    if (*(code **)(param_2 + 0x10) == (code *)0x0) {
      local_60 = (ulong *)0x0;
      uStack_58 = 0;
    }
    else {
      (**(code **)(param_2 + 0x10))(&local_60,param_2 + 0x30,&local_80);
      plVar22 = local_68;
    }
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
    if (local_60 != (ulong *)0x0) {
      if (*(short *)((long)local_60 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_60 + 0x1a);
        sVar18 = *(short *)((long)local_60 + 0x1a);
LAB_0222a114:
        sVar6 = *psVar1;
        if (sVar6 == sVar18) {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar18 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_0222a138;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0222a138:
          bVar10 = false;
        }
        if (!bVar10) goto code_r0x0222a140;
        uVar12 = local_60[2];
        if (uVar12 == 0) goto LAB_0222a584;
        lVar16 = FUN_0222a6d4(uVar12 + 0xe0,&local_c8);
        if (lVar16 != 0) {
          puVar13 = (undefined8 *)FUN_01a6a8cc();
          plVar22 = (long *)*puVar13;
          if (plVar22 != (long *)0x0) {
            lVar16 = plVar22[6];
            if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar16 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar10) {
                *psVar1 = sVar18 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar18 == 0) {
              uVar15 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
              *(undefined8 *)(lVar16 + 8) = uVar15;
              *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
            }
            else if (sVar18 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
            local_e8 = 0x91fc4aa14b691c6;
            puStack_e0 = &DAT_03c41801;
            local_d8 = 4;
            local_d0 = (long *)0x0;
            FUN_01315eac(&local_c8,param_2,&local_e8);
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            bVar10 = (char)local_c8 != '\0';
            ppcVar3 = (char **)PTR_DAT_047d3e30;
            if (bVar10) {
              ppcVar3 = &local_c0;
            }
            local_a0 = *ppcVar3;
            puVar4 = (ulong *)(PTR_DAT_047d3e30 + 8);
            if (bVar10) {
              puVar4 = &local_b8;
            }
            local_98 = *puVar4;
            pplVar5 = (long **)(PTR_DAT_047d3e30 + 0x10);
            if (bVar10) {
              pplVar5 = &local_b0;
            }
            local_90 = *pplVar5;
            pplVar5 = (long **)(PTR_DAT_047d3e30 + 0x18);
            if (bVar10) {
              pplVar5 = &local_a8;
            }
            local_88 = *pplVar5;
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x18))();
            }
            if ((char)local_c8 != '\0') {
              if (local_a8 != (long *)0x0) {
                (**(code **)(*local_a8 + 0x20))();
              }
              local_c8 = local_c8 & 0xffffffffffffff00;
            }
            if (local_d0 != (long *)0x0) {
              (**(code **)(*local_d0 + 0x20))();
            }
            local_e8 = FUN_01ea60f0(plVar22,plVar22 + 0x17,&local_a0);
            if ((local_e8 & 0xff) != 0) {
              local_c8 = 0xb68ecfd63e1bae28;
              local_c0 = "Easing";
              local_b8 = 6;
              local_b0 = (long *)0x0;
              uVar14 = FUN_01470908(param_2,&local_c8);
              if (local_b0 != (long *)0x0) {
                (**(code **)(*local_b0 + 0x20))();
              }
              uVar17 = *(ulong *)(param_2 + 0x160);
              fVar25 = 0.0;
              if (uVar17 != 0) {
                uVar19 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
                uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
                uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                if (uVar19 < 2) {
                  uVar20 = uVar17 - 1 & 0x55c0d7a581349f0f;
                }
                else {
                  uVar20 = 0x55c0d7a581349f0f;
                  if (uVar17 < 0x55c0d7a581349f10) {
                    uVar20 = 0;
                    if (uVar17 != 0) {
                      uVar20 = 0x55c0d7a581349f0f / uVar17;
                    }
                    uVar20 = 0x55c0d7a581349f0f - uVar20 * uVar17;
                  }
                }
                fVar25 = 0.0;
                plVar21 = *(long **)(*(long *)(param_2 + 0x158) + uVar20 * 8);
                if (plVar21 != (long *)0x0) {
                  plVar21 = (long *)*plVar21;
                  fVar25 = 0.0;
                  if (plVar21 != (long *)0x0) {
                    if (uVar19 < 2) {
                      do {
                        if (plVar21[1] == 0x55c0d7a581349f0f) {
                          if (plVar21[2] == 0x55c0d7a581349f0f) {
LAB_0222a4bc:
                            fVar25 = *(float *)(plVar21 + 6);
                            goto LAB_0222a4c0;
                          }
                        }
                        else if ((plVar21[1] & uVar17 - 1) != uVar20) break;
                        plVar21 = (long *)*plVar21;
                      } while (plVar21 != (long *)0x0);
                    }
                    else {
                      do {
                        uVar19 = plVar21[1];
                        if (uVar19 == 0x55c0d7a581349f0f) {
                          if (plVar21[2] == 0x55c0d7a581349f0f) goto LAB_0222a4bc;
                        }
                        else {
                          if (uVar17 <= uVar19) {
                            uVar8 = 0;
                            if (uVar17 != 0) {
                              uVar8 = uVar19 / uVar17;
                            }
                            uVar19 = uVar19 - uVar8 * uVar17;
                          }
                          if (uVar19 != uVar20) break;
                        }
                        plVar21 = (long *)*plVar21;
                      } while (plVar21 != (long *)0x0);
                    }
                    fVar25 = 0.0;
                  }
                }
              }
LAB_0222a4c0:
              local_c8 = 0x3d624cadc9932412;
              local_c0 = "Param";
              local_b8 = 5;
              local_b0 = (long *)0x0;
              uVar17 = FUN_01180d38(param_2,&local_c8);
              fVar24 = 0.0;
              if ((uVar17 & 0xff) != 0) {
                fVar24 = (float)(uVar17 >> 0x20);
              }
              if (local_b0 != (long *)0x0) {
                (**(code **)(*local_b0 + 0x20))();
              }
              uVar17 = 0;
              if ((uVar14 & 0xff) != 0) {
                uVar17 = uVar14 >> 0x20;
              }
              fVar23 = (float)(**(code **)(PTR_PTR_047d9248 + uVar17 * 8))(param_1);
              FUN_01ea6434(fVar25 + (fVar24 - fVar25) * fVar23,plVar22,&local_e8);
            }
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
            lVar16 = plVar22[6];
            psVar1 = (short *)(lVar16 + 0x1a);
            do {
              sVar18 = *psVar1;
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar10) {
                *psVar1 = sVar18 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar16 + 0x10) = 0;
              (**(code **)(*plVar22 + 0x50))(plVar22);
            }
            else if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
        }
        (**(code **)(*(long *)(uVar12 - 0x28) + 0x60))((long *)(uVar12 - 0x28));
LAB_0222a580:
        if (local_60 == (ulong *)0x0) {
          return;
        }
      }
LAB_0222a584:
      puVar9 = local_60;
      puVar4 = local_60 + 3;
      do {
        sVar18 = (short)*puVar4;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar10) {
          *(short *)puVar4 = sVar18 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar18 == 1) {
        piVar2 = (int *)((long)local_60 + 0x1c);
        do {
          iVar11 = *piVar2;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar10) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar16 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar16;
          local_c8 = *puVar9;
          FUN_00c44438(lVar16 + 0x8040,&local_c8);
        }
      }
      else if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x0222a140:
  sVar18 = sVar6;
  if (sVar6 == 0) goto LAB_0222a580;
  goto LAB_0222a114;
}


