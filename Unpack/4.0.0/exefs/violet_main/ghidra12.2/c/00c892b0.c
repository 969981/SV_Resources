/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c892b0; name: FUN_00c892b0
 */


void FUN_00c892b0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *local_70;
  long *local_68;
  
  lVar17 = param_1[0x11];
  if (param_1[0x12] != lVar17) {
    uVar15 = 0;
    do {
      plVar2 = (long *)(lVar17 + uVar15 * 0x10);
      if (((char)param_1[0x19] == '\0') || ((char)param_1[0x29] == '\0')) {
        local_68 = param_1;
        FUN_00c89d64(*plVar2,&local_68);
        local_70 = (long *)0x0;
        local_68 = (long *)0x0;
        FUN_00c89a1c(*plVar2,&local_70,0,&local_68,0,1,0);
        lVar17 = *plVar2;
        if (*(char *)(lVar17 + 0x168) != '\0') {
          *(undefined8 *)(lVar17 + 0x168) = 0;
LAB_00c89618:
          *(undefined1 *)(lVar17 + 0x19a) = 1;
        }
LAB_00c89510:
        FUN_00c4d200(*plVar2);
      }
      else {
        uVar7 = (**(code **)(*(long *)(param_1[9] + 0x30) + 0x18))();
        if ((uVar7 & 0xff) != 0) {
          if (*(long *)(param_1[0x21] + 0x38) == 0) {
            lVar17 = 0;
          }
          else {
            lVar17 = *(long *)(*(long *)(param_1[0x21] + 0x38) + 0x30);
          }
          lVar4 = param_1[0x11];
          lVar10 = param_1[0x12];
          lVar18 = *plVar2;
          plVar14 = (long *)(lVar18 + 0x70);
          lVar8 = nn::os::GetCurrentThread();
          do {
            lVar12 = *plVar14;
            lVar13 = *(long *)(lVar18 + 0x78);
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar11) {
              *plVar14 = lVar12;
              *(long *)(lVar18 + 0x78) = lVar13;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_00c8934c:
          while ((lVar12 != 0 && (lVar8 != lVar12))) {
            nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x80));
            do {
              lVar12 = *plVar14;
              lVar13 = *(long *)(lVar18 + 0x78);
              cVar5 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar11) {
                *plVar14 = lVar12;
                *(long *)(lVar18 + 0x78) = lVar13;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          do {
            lVar3 = *plVar14;
            if (lVar3 != lVar12 || *(long *)(lVar18 + 0x78) != lVar13) {
              bVar11 = false;
              ClearExclusiveLocal();
              goto LAB_00c8937c;
            }
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar11) {
              *plVar14 = lVar12;
              *(long *)(lVar18 + 0x74) = lVar13 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          bVar11 = true;
LAB_00c8937c:
          if (!bVar11) {
            lVar12 = lVar3;
            lVar13 = *(long *)(lVar18 + 0x78);
            goto LAB_00c8934c;
          }
          lVar8 = *(long *)(lVar18 + 0x30);
          lVar17 = lVar17 + uVar15 * 0x20;
          lVar4 = lVar17 + (lVar10 - lVar4) * 2;
          if ((int)((ulong)(*(long *)(lVar18 + 0x38) - lVar8) >> 3) != 0) {
            uVar16 = 0;
            do {
              uVar9 = *(undefined8 *)(*(long *)(lVar8 + uVar16 * 8) + 200);
              if (*(long *)(param_1[0x22] + 0x30) == 0) {
                local_68 = (long *)0x0;
              }
              else {
                local_68 = *(long **)(*(long *)(param_1[0x22] + 0x30) + 0x60);
                if (local_68 != (long *)0x0) {
                  plVar1 = local_68 + 5;
                  do {
                    lVar10 = *plVar1;
                    cVar5 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar11) {
                      *(int *)plVar1 = (int)lVar10 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if ((int)lVar10 == -1) goto LAB_00c89688;
                }
              }
              FUN_00c896e4(uVar9,0x1f,uVar7 >> 0x20,&local_68);
              if (local_68 != (long *)0x0) {
                plVar1 = local_68 + 5;
                do {
                  lVar10 = *plVar1;
                  iVar6 = (int)lVar10 + -1;
                  cVar5 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar11) {
                    *(int *)plVar1 = iVar6;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar6 == 0) {
                  (**(code **)(*local_68 + 0x10))();
                }
                else if ((int)lVar10 == 0) goto LAB_00c896bc;
              }
              lVar8 = *(long *)(lVar18 + 0x30);
              uVar16 = uVar16 + 1;
            } while (uVar16 < ((ulong)(*(long *)(lVar18 + 0x38) - lVar8) >> 3 & 0xffffffff));
          }
          do {
            lVar10 = *plVar14;
            lVar8 = *(long *)(lVar18 + 0x78);
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar11) {
              *plVar14 = lVar10;
              *(long *)(lVar18 + 0x78) = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            lVar12 = *plVar14;
            lVar13 = *(long *)(lVar18 + 0x78);
            if (lVar12 != lVar10 || lVar13 != lVar8) {
              bVar11 = false;
              ClearExclusiveLocal();
              goto LAB_00c89470;
            }
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar11) {
              *plVar14 = lVar10;
              *(long *)(lVar18 + 0x74) = lVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          bVar11 = true;
LAB_00c89470:
          if (!bVar11) {
            do {
              lVar10 = *plVar14;
              lVar8 = *(long *)(lVar18 + 0x78);
              if (lVar10 != lVar12 || lVar8 != lVar13) {
                bVar11 = false;
                ClearExclusiveLocal();
                goto joined_r0x00c89628;
              }
              cVar5 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar11) {
                *plVar14 = lVar12;
                *(long *)(lVar18 + 0x74) = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            bVar11 = true;
joined_r0x00c89628:
            if (!bVar11) {
              do {
                lVar12 = *plVar14;
                lVar13 = *(long *)(lVar18 + 0x78);
                if (lVar12 != lVar10 || lVar13 != lVar8) {
                  bVar11 = false;
                  ClearExclusiveLocal();
                  lVar10 = lVar12;
                  lVar8 = lVar13;
                  goto joined_r0x00c89628;
                }
                cVar5 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar11) {
                  *plVar14 = lVar10;
                  *(long *)(lVar18 + 0x74) = lVar8 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              bVar11 = true;
              lVar10 = lVar12;
              lVar8 = lVar13;
              goto joined_r0x00c89628;
            }
          }
          nn::os::SignalLightEvent((LightEventType *)(lVar18 + 0x80));
          lVar10 = *plVar2;
          if (*(long *)(param_1[0x21] + 0x30) == 0) {
            plVar14 = (long *)0x0;
            local_70 = (long *)0x0;
          }
          else {
            local_70 = *(long **)(*(long *)(param_1[0x21] + 0x30) + 0x60);
            if (local_70 == (long *)0x0) {
              plVar14 = (long *)0x0;
            }
            else {
              plVar14 = local_70 + 5;
              do {
                lVar8 = *plVar14;
                cVar5 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar11) {
                  *(int *)plVar14 = (int)lVar8 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((int)lVar8 == -1) {
LAB_00c89688:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","IncrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                           ,0x53,"Reference counter overflows.");
              }
              plVar14 = local_70;
            }
          }
          local_68 = (long *)0x0;
          FUN_00c89a1c(lVar10,&local_70,lVar17,&local_68,0,1,0);
          if (plVar14 != (long *)0x0) {
            plVar1 = plVar14 + 5;
            do {
              lVar17 = *plVar1;
              iVar6 = (int)lVar17 + -1;
              cVar5 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar11) {
                *(int *)plVar1 = iVar6;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
            else if ((int)lVar17 == 0) {
LAB_00c896bc:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          lVar17 = *plVar2;
          if ((*(char *)(lVar17 + 0x168) == '\0') || (*(long *)(lVar17 + 0x170) != lVar4)) {
            *(undefined8 *)(lVar17 + 0x168) = 1;
            *(long *)(lVar17 + 0x170) = lVar4;
            goto LAB_00c89618;
          }
          goto LAB_00c89510;
        }
      }
      lVar17 = param_1[0x11];
      uVar15 = uVar15 + 1;
    } while (uVar15 < (ulong)(param_1[0x12] - lVar17 >> 4));
  }
  return;
}


