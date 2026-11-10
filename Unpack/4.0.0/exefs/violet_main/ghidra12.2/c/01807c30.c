/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01807c30; name: FUN_01807c30
 */


void FUN_01807c30(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  short *psVar2;
  short sVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long *local_70;
  long *local_68;
  
  lVar14 = param_1[3];
  *(undefined4 *)(lVar14 + 0xc) = 0;
  if (param_1[0x11] != *param_2) {
    plVar13 = *(long **)param_1[0x22];
    if (plVar13 != (long *)((long *)param_1[0x22])[1]) {
      do {
        lVar11 = FUN_0180862c(*plVar13 + 0x108,&local_68);
        if ((lVar11 == 0) || (*(int *)(lVar11 + 0x1d0) == 4)) {
          plVar13 = (long *)FUN_01808c9c(param_1[0x22],plVar13);
        }
        else {
          uVar4 = *(undefined4 *)(lVar14 + 8);
          plVar13 = plVar13 + 1;
          *(undefined1 *)(lVar11 + 0x1d4) = 1;
          *(undefined4 *)(lVar11 + 0x1e0) = uVar4;
        }
      } while (plVar13 != *(long **)(param_1[0x22] + 8));
    }
    iVar8 = *(int *)(param_1 + 0x1d);
    uVar1 = iVar8 + 2;
    if (-1 < iVar8 + 1) {
      uVar1 = iVar8 + 1;
    }
    *(uint *)(param_1 + 0x1d) = (iVar8 + 1) - (uVar1 & 0xfffffffe);
    lVar14 = *(long *)param_1[0x1e];
    lVar11 = ((long *)param_1[0x1e])[1];
    if (lVar14 != lVar11) {
      pbVar16 = PTR_DAT_047d89c8;
      puVar17 = PTR_LAB_047d9110;
      plVar13 = (long *)PTR_DAT_047d89d0;
      do {
        if (*(long *)(lVar14 + 0x20) == *param_2) {
          plVar9 = (long *)FUN_012f9d00(*param_1);
          local_68 = plVar9;
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x58))(plVar9);
          }
          uVar10 = FUN_01808800(plVar9,plVar9[1]);
          local_70 = (long *)param_1[(long)*(int *)(param_1 + 0x1d) + 0x1b];
          if (local_70 != (long *)0x0) {
            lVar15 = local_70[6];
            if (*(long *)(lVar15 + 0x10) == 0) goto LAB_018081a0;
            psVar2 = (short *)(lVar15 + 0x1a);
            do {
              sVar3 = *psVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar6) {
                *psVar2 = sVar3 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar3 == 0) {
              uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
              *(undefined8 *)(lVar15 + 8) = uVar12;
              *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
            }
            else if (sVar3 == -1) goto LAB_018081c0;
          }
          FUN_01808ed0(uVar10,lVar14,&local_70);
          if (local_70 != (long *)0x0) {
            lVar15 = local_70[6];
            psVar2 = (short *)(lVar15 + 0x1a);
            do {
              sVar3 = *psVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar6) {
                *psVar2 = sVar3 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar3 == 1) {
              *(undefined8 *)(lVar15 + 0x10) = 0;
              (**(code **)(*local_70 + 0x50))();
            }
            else if (sVar3 == 0) {
LAB_0180807c:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          plVar9 = (long *)local_68[0x8c];
          if (plVar9 != (long *)0x0) {
            lVar15 = plVar9[6];
            if (*(long *)(lVar15 + 0x10) == 0) {
LAB_018081a0:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar2 = (short *)(lVar15 + 0x1a);
            do {
              sVar3 = *psVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar6) {
                *psVar2 = sVar3 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar3 == 0) {
              uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
              *(undefined8 *)(lVar15 + 8) = uVar10;
              *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
            }
            else if (sVar3 == -1) {
LAB_018081c0:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
          }
          puVar7 = PTR_DAT_047d89d8;
          if (((*pbVar16 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar16), iVar8 != 0)) {
            FUN_00100190(puVar17,plVar13,&PTR_LOOP_04483000);
            __cxa_guard_release(pbVar16);
          }
          lVar15 = *plVar13;
          *(long *)puVar7 = lVar15;
          lVar18 = *(long *)(lVar15 + 0x38);
          plVar13 = (long *)(lVar18 + 0x1d0);
          lVar15 = nn::os::GetCurrentThread();
LAB_01807e80:
          if (*plVar13 == 0) goto code_r0x01807e88;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x1d8));
          do {
            if (*plVar13 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x1d8));
                while (*plVar13 == 0) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar6) {
                    *plVar13 = lVar15;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_01807e90;
                }
              } while( true );
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = lVar15;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_01807e90:
          FUN_00e220f4(lVar18,0,plVar9[8]);
          lVar19 = plVar9[9];
          plVar13 = (long *)(lVar19 + 0x1d0);
          lVar15 = nn::os::GetCurrentThread();
          while (*plVar13 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = lVar15;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01807ec0;
          }
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1d8));
          do {
            if (*plVar13 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1d8));
                while (*plVar13 == 0) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar6) {
                    *plVar13 = lVar15;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_01807ec0;
                }
              } while( true );
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = lVar15;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_01807ec0:
          *(undefined8 *)(lVar18 + 0x1d0) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar18 + 0x1d8));
          pbVar16 = PTR_DAT_047d89c8;
          if (((*PTR_DAT_047d89c8 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
            __cxa_guard_release(pbVar16);
          }
          plVar13 = (long *)PTR_DAT_047d89d0;
          lVar15 = *(long *)PTR_DAT_047d89d0;
          *(long *)PTR_DAT_047d89d8 = lVar15;
          FUN_00e220f4(lVar19,0,*(undefined8 *)(lVar15 + 0x40));
          *(undefined8 *)(lVar19 + 0x1d0) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x1d8));
          puVar17 = PTR_LAB_047d9110;
          if (plVar9 != (long *)0x0) {
            lVar15 = plVar9[6];
            psVar2 = (short *)(lVar15 + 0x1a);
            do {
              sVar3 = *psVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar6) {
                *psVar2 = sVar3 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar3 == 1) {
              *(undefined8 *)(lVar15 + 0x10) = 0;
              (**(code **)(*plVar9 + 0x50))(plVar9);
            }
            else if (sVar3 == 0) goto LAB_0180807c;
          }
          FUN_018081e8(param_1[0x22],&local_68);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x60))();
          }
        }
        lVar14 = lVar14 + 0x60;
      } while (lVar14 != lVar11);
    }
  }
  param_1[0x15] = param_1[0x11];
  param_1[0x16] = param_1[0x12];
  plVar13 = (long *)param_1[0x14];
  param_1[0x17] = param_1[0x13];
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  plVar9 = (long *)param_1[0x18];
  param_1[0x18] = plVar13;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  param_1[0x11] = *param_2;
  param_1[0x12] = param_2[1];
  param_1[0x13] = param_2[2];
  plVar13 = (long *)param_2[3];
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  plVar9 = (long *)param_1[0x14];
  param_1[0x14] = plVar13;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  FUN_018081fc(param_1,0);
  return;
code_r0x01807e88:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar6) {
    *plVar13 = lVar15;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01807e90;
  goto LAB_01807e80;
}


