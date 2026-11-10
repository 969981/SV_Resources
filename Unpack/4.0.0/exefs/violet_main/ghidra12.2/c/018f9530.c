/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018f9530; name: FUN_018f9530
 */


void FUN_018f9530(undefined8 *param_1,long param_2,long *param_3,long *param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 *local_68 [2];
  undefined8 local_58;
  
  if ((*(byte *)(param_2 + 0x278) & 1) != 0) {
    plVar13 = *(long **)(param_2 + 0x178);
    plVar4 = *(long **)(param_2 + 0x180);
    if (plVar13 == plVar4) {
LAB_018f9580:
      if ((plVar13 != plVar4) && (lVar16 = *plVar13, lVar16 != 0)) {
        plVar13 = (long *)(lVar16 + 0x48);
        lVar10 = nn::os::GetCurrentThread();
        while (*plVar13 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_018f95ac;
        }
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x50));
        do {
          if (*plVar13 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x50));
              while (*plVar13 == 0) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar6) {
                  *plVar13 = lVar10;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_018f95ac;
              }
            } while( true );
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_018f95ac:
        puVar8 = PTR_DAT_047d9278;
        puVar7 = PTR_DAT_047d9270;
        plVar13 = *(long **)(lVar16 + 0xb0);
        plVar4 = *(long **)(lVar16 + 0xb8);
        if (plVar13 == plVar4) {
LAB_018f96dc:
          plVar13 = *(long **)(lVar16 + 0x78);
          plVar4 = *(long **)(lVar16 + 0x80);
          if (plVar13 != plVar4) {
            do {
              plVar15 = (long *)*plVar13;
              puVar11 = (undefined8 *)(**(code **)plVar15[1])(plVar15 + 1);
              if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
                uVar12 = FUN_01e19d1c();
                *(undefined8 *)puVar8 = uVar12;
                __cxa_guard_release(puVar7);
              }
              for (; puVar11 != (undefined8 *)0x0; puVar11 = (undefined8 *)*puVar11) {
                if (puVar11 == (undefined8 *)puVar8) {
                  plVar15 = (long *)(**(code **)(*plVar15 + 0x40))(plVar15);
                  if (*param_4 == *plVar15) goto LAB_018f9748;
                  break;
                }
              }
              plVar13 = plVar13 + 1;
            } while (plVar13 != plVar4);
            plVar13 = plVar4;
LAB_018f9748:
            if ((plVar13 != *(long **)(lVar16 + 0x80)) && (lVar10 = *plVar13, lVar10 != 0)) {
              lVar14 = *(long *)(lVar10 + 0x10);
              if (*(long *)(lVar14 + 0x10) == 0) {
LAB_018f999c:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("m_object != nullptr","AddReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x3d);
              }
              plVar13 = (long *)(lVar10 + -0x20);
              psVar1 = (short *)(lVar14 + 0x1a);
              do {
                sVar3 = *psVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar6) {
                  *psVar1 = sVar3 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar3 == 0) goto LAB_018f97cc;
LAB_018f9664:
              if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","AddReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x58,"Reference counter overflows.");
              }
              goto LAB_018f9758;
            }
          }
LAB_018f9754:
          plVar13 = (long *)0x0;
        }
        else {
          do {
            plVar15 = (long *)*plVar13;
            puVar11 = (undefined8 *)(**(code **)plVar15[1])(plVar15 + 1);
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
              uVar12 = FUN_01e19d1c();
              *(undefined8 *)puVar8 = uVar12;
              __cxa_guard_release(puVar7);
            }
            for (; puVar11 != (undefined8 *)0x0; puVar11 = (undefined8 *)*puVar11) {
              if (puVar11 == (undefined8 *)puVar8) {
                plVar15 = (long *)(**(code **)(*plVar15 + 0x40))(plVar15);
                if (*param_4 == *plVar15) goto LAB_018f9628;
                break;
              }
            }
            plVar13 = plVar13 + 1;
          } while (plVar13 != plVar4);
          plVar13 = plVar4;
LAB_018f9628:
          if (plVar13 == *(long **)(lVar16 + 0xb8)) goto LAB_018f96dc;
          lVar10 = *plVar13;
          if (lVar10 == 0) goto LAB_018f9754;
          lVar14 = *(long *)(lVar10 + 0x10);
          if (*(long *)(lVar14 + 0x10) == 0) goto LAB_018f999c;
          plVar13 = (long *)(lVar10 + -0x20);
          psVar1 = (short *)(lVar14 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar3 != 0) goto LAB_018f9664;
LAB_018f97cc:
          uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
          *(undefined8 *)(lVar14 + 8) = uVar12;
          *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
        }
LAB_018f9758:
        *(undefined8 *)(lVar16 + 0x48) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar16 + 0x50));
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x18))(local_68,plVar13);
          *param_1 = 0;
          param_1[1] = 0;
          puVar11 = local_68[0];
          if ((long *)local_68[0][2] == plVar13 + 5) {
            FUN_018f99f8(param_1,local_68);
            puVar11 = local_68[0];
          }
          if (puVar11 != (undefined8 *)0x0) {
            psVar1 = (short *)(puVar11 + 3);
            do {
              sVar3 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar3 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)puVar11 + 0x1c);
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
                lVar16 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar16;
                local_58 = *puVar11;
                FUN_00c44438(lVar16 + 0x8040,&local_58);
              }
            }
            else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          lVar16 = plVar13[6];
          psVar1 = (short *)(lVar16 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar16 + 0x10) = 0;
            (**(code **)(*plVar13 + 0x50))(plVar13);
            return;
          }
          if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return;
        }
      }
    }
    else {
      do {
        if (*(long *)(*plVar13 + 0x1d0) == *param_3) goto LAB_018f9580;
        plVar13 = plVar13 + 1;
      } while (plVar4 != plVar13);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


