/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cef230; name: FUN_00cef230
 */


void FUN_00cef230(long *param_1,undefined1 param_2 [16],long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  short *psVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  short sVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 extraout_d0;
  float fVar17;
  float fVar18;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80 [2];
  undefined8 local_68;
  
  uVar16 = param_2._0_8_;
  plVar13 = (long *)(param_3 + 0x28);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar7) {
      *plVar13 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_00cef27c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_3 + 0x30));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_3 + 0x30));
        while (*plVar13 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *plVar13 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00cef27c;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar7) {
      *plVar13 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00cef27c:
  plVar13 = *(long **)(param_3 + 0x40);
  plVar12 = *(long **)(param_3 + 0x48);
  if (plVar13 == plVar12) {
LAB_00cef3fc:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 8) = 0;
LAB_00cef408:
    *(undefined8 *)(param_3 + 0x28) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_3 + 0x30));
    return;
  }
  puVar1 = PTR_DAT_047dd9a0 + 0x10;
  puVar2 = PTR_DAT_047dd998 + 0x10;
LAB_00cef318:
  lVar15 = *plVar13;
  lVar9 = *(long *)(lVar15 + 0x808);
  if ((lVar9 != 0) && (plVar10 = *(long **)(lVar9 + 0x180), plVar10 != (long *)0x0)) {
    uVar11 = (**(code **)(*plVar10 + 0x10))(uVar16);
    uVar16 = extraout_d0;
    if ((uVar11 & 1) != 0) {
      plVar10 = *(long **)(*(long *)(lVar15 + 0x808) + 0x180);
      if (plVar10 == (long *)0x0) {
        lVar9 = 0;
      }
      else {
        lVar9 = (**(code **)(*plVar10 + 0x40))();
      }
      local_90 = 0;
      uStack_88 = 0;
      local_b8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      local_a8 = (long *)0x0;
      local_c0 = puVar1;
      FUN_00cf0234(&local_b8,lVar9 + 8);
      plVar10 = *(long **)(lVar9 + 0x18);
      if (plVar10 != (long *)0x0) {
        lVar15 = *(long *)((long)plVar10 + 0x30);
        if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar4 = (short *)(lVar15 + 0x1a);
        do {
          sVar14 = *psVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar4,0x10);
          if (bVar7) {
            *psVar4 = sVar14 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar14 == 0) {
          uVar16 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          *(undefined8 *)(lVar15 + 8) = uVar16;
          *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
        }
        else if (sVar14 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      if (local_a8 != (long *)0x0) {
        lVar15 = local_a8[6];
        psVar4 = (short *)(lVar15 + 0x1a);
        do {
          sVar14 = *psVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar4,0x10);
          if (bVar7) {
            *psVar4 = sVar14 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar14 == 1) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
          lVar15 = *local_a8;
          local_a8 = plVar10;
          (**(code **)(lVar15 + 0x50))();
          plVar10 = local_a8;
        }
        else {
          local_a8 = plVar10;
          if (sVar14 == 0) goto LAB_00cef61c;
        }
      }
      local_a8 = plVar10;
      FUN_00cef9d0(&local_a0,lVar9 + 0x20);
      FUN_00ceffd4(&local_90,lVar9 + 0x30);
      local_c0 = puVar2;
      if ((local_b8 != 0) && ((*(byte *)(local_b8 + 0x1e8) & 1) != 0)) {
        lVar9 = *(long *)(local_b8 + 0x210);
        fVar17 = (float)*(undefined8 *)(lVar9 + 0x40);
        fVar18 = (float)*(undefined8 *)(lVar9 + 0x48);
        if ((fVar17 <= param_2._0_4_ &&
             param_2._0_4_ <= fVar17 + (float)*(undefined8 *)(lVar9 + 0x60)) &&
           ((fVar18 <= param_2._8_4_ &&
            (param_2._8_4_ <= fVar18 + (float)*(undefined8 *)(lVar9 + 0x68))))) {
          *param_1 = (long)(PTR_DAT_047dd9a0 + 0x10);
          plVar13 = param_1 + 1;
          *plVar13 = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          do {
            lVar9 = local_b0;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(&local_b0,0x10);
            if (bVar7) {
              local_b0 = 0;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          plVar12 = (long *)*plVar13;
          *plVar13 = 0;
          if (plVar12 != (long *)0x0) {
            lVar15 = plVar12[6];
            psVar4 = (short *)(lVar15 + 0x1a);
            do {
              sVar14 = *psVar4;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar4,0x10);
              if (bVar7) {
                *psVar4 = sVar14 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar14 == 1) {
              *(undefined8 *)(lVar15 + 0x10) = 0;
              (**(code **)(*plVar12 + 0x50))();
            }
            else if (sVar14 == 0) goto LAB_00cef61c;
          }
          lVar15 = local_b8;
          local_b8 = 0;
          *plVar13 = lVar15;
          FUN_00cf0f98(local_80,lVar9);
          plVar12 = (long *)0x0;
          if (local_80[0] != (undefined8 *)0x0) {
            if (*(short *)((long)local_80[0] + 0x1a) == 0) {
              plVar12 = (long *)0x0;
            }
            else {
              psVar4 = (short *)((long)local_80[0] + 0x1a);
              sVar14 = *(short *)((long)local_80[0] + 0x1a);
              do {
                sVar5 = *psVar4;
                if (sVar5 == sVar14) {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(psVar4,0x10);
                  if (bVar7) {
                    *psVar4 = sVar14 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 != '\0') goto LAB_00cef7d4;
                  bVar7 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB_00cef7d4:
                  bVar7 = false;
                }
                if (bVar7) {
                  plVar12 = (long *)0x0;
                  if (local_80[0][2] != 0) {
                    plVar12 = (long *)(local_80[0][2] + -0x28);
                  }
                  break;
                }
                plVar12 = (long *)0x0;
                sVar14 = sVar5;
              } while (sVar5 != 0);
            }
          }
          if ((long *)*plVar13 != plVar12) {
            FUN_021dc038(plVar13);
            lVar9 = 0;
          }
          param_1[2] = lVar9;
          if (plVar12 != (long *)0x0) {
            lVar9 = plVar12[6];
            psVar4 = (short *)(lVar9 + 0x1a);
            do {
              sVar14 = *psVar4;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar4,0x10);
              if (bVar7) {
                *psVar4 = sVar14 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar14 == 1) {
              *(undefined8 *)(lVar9 + 0x10) = 0;
              (**(code **)(*plVar12 + 0x50))();
            }
            else if (sVar14 == 0) goto LAB_00cef61c;
          }
          if (local_80[0] != (undefined8 *)0x0) {
            psVar4 = (short *)(local_80[0] + 3);
            do {
              sVar14 = *psVar4;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar4,0x10);
              if (bVar7) {
                *psVar4 = sVar14 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar14 == 1) {
              piVar3 = (int *)((long)local_80[0] + 0x1c);
              do {
                iVar8 = *piVar3;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar7) {
                  *piVar3 = -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar8 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar9 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar9;
                local_68 = *local_80[0];
                FUN_00c44438(lVar9 + 0x8040,&local_68);
              }
            }
            else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          plVar13 = (long *)param_1[3];
          param_1[3] = 0;
          if (plVar13 != (long *)0x0) {
            lVar9 = plVar13[6];
            psVar4 = (short *)(lVar9 + 0x1a);
            do {
              sVar14 = *psVar4;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar4,0x10);
              if (bVar7) {
                *psVar4 = sVar14 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar14 == 1) {
              *(undefined8 *)(lVar9 + 0x10) = 0;
              (**(code **)(*plVar13 + 0x50))();
            }
            else if (sVar14 == 0) {
LAB_00cef61c:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          plVar13 = local_a8;
          local_a8 = (long *)0x0;
          param_1[3] = (long)plVar13;
          FUN_00ecc978(param_1 + 4,&local_a0);
          FUN_00eccc4c(param_1 + 6,&local_90);
          *param_1 = (long)(PTR_DAT_047dd998 + 0x10);
          *(undefined1 *)(param_1 + 8) = 1;
          FUN_00cef86c(&local_c0);
          goto LAB_00cef408;
        }
      }
      uVar16 = FUN_00cef86c(&local_c0);
    }
  }
  plVar13 = plVar13 + 1;
  if (plVar13 == plVar12) goto LAB_00cef3fc;
  goto LAB_00cef318;
}


