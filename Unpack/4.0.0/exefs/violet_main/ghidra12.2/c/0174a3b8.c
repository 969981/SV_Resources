/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0174a3b8; name: FUN_0174a3b8
 */


void FUN_0174a3b8(long param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  code *pcVar11;
  short sVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 *local_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [96];
  long *local_80;
  long *local_78;
  undefined8 local_70 [2];
  
  plVar16 = *(long **)(param_1 + 0xf0);
  plVar13 = *(long **)(param_1 + 0xf8);
  if (plVar16 != plVar13) {
    do {
      plVar18 = (long *)*plVar16;
      if (plVar18 != (long *)0x0) {
        lVar14 = plVar18[6];
        if (*(long *)(lVar14 + 0x10) == 0) {
LAB_0174aa18:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar14 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar12 == 0) {
          uVar17 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
          *(undefined8 *)(lVar14 + 8) = uVar17;
          *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
        }
        else if (sVar12 == -1) goto LAB_0174aa38;
        if ((int)plVar18[8] == 1) {
          local_100 = (undefined8 *)0x0;
          local_f8 = (code *)0x0;
          FUN_00c43ef0(&local_100,param_1 + 0x30);
          local_80 = (long *)0x0;
          local_78 = (long *)0x0;
          if (local_100[2] == param_1 + 0x28) {
            FUN_015d2a6c(&local_80,&local_100);
          }
          puVar7 = local_100;
          if (local_100 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_100 + 3);
            do {
              sVar12 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar12 == 1) {
              piVar3 = (int *)((long)local_100 + 0x1c);
              do {
                iVar9 = *piVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar6) {
                  *piVar3 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar14 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar14;
                local_70[0] = *puVar7;
                FUN_00c44438(lVar14 + 0x8040,local_70);
              }
            }
            else if (sVar12 == 0) goto LAB_0174a6cc;
          }
          plVar8 = local_80;
          if (local_80 == (long *)0x0) {
            plVar15 = (long *)0x0;
          }
          else {
            if (*(short *)((long)local_80 + 0x1a) != 0) {
              psVar1 = (short *)((long)local_80 + 0x1a);
              sVar12 = *(short *)((long)local_80 + 0x1a);
              do {
                sVar4 = *psVar1;
                if (sVar4 == sVar12) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar6) {
                    *psVar1 = sVar12 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 != '\0') goto LAB_0174a830;
                  bVar6 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB_0174a830:
                  bVar6 = false;
                }
                if (bVar6) {
                  plVar15 = (long *)0x0;
                  if (local_80[2] != 0) {
                    plVar15 = (long *)(local_80[2] + -0x28);
                  }
                  goto LAB_0174a870;
                }
                sVar12 = sVar4;
              } while (sVar4 != 0);
            }
            plVar15 = (long *)0x0;
LAB_0174a870:
            plVar2 = local_80 + 3;
            do {
              sVar12 = (short)*plVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *(short *)plVar2 = sVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar12 == 1) {
              piVar3 = (int *)((long)local_80 + 0x1c);
              do {
                iVar9 = *piVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar6) {
                  *piVar3 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar14 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar14;
                local_100 = (undefined8 *)*plVar8;
                FUN_00c44438(lVar14 + 0x8040,&local_100);
              }
            }
            else if (sVar12 == 0) goto LAB_0174a6cc;
          }
          if (((*PTR_DAT_047da868 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047da868), iVar9 != 0)) {
            FUN_00100190(&LAB_00ae377c,PTR_DAT_047da870,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047da868);
          }
          uVar17 = *(undefined8 *)PTR_DAT_047da870;
          *(undefined8 *)PTR_DAT_047da878 = uVar17;
          local_80 = plVar15;
          if (plVar15 != (long *)0x0) {
            lVar14 = plVar15[6];
            if (*(long *)(lVar14 + 0x10) == 0) goto LAB_0174aa18;
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar12 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar12 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar12 == 0) {
              uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
              *(undefined8 *)(lVar14 + 8) = uVar10;
              *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
            }
            else if (sVar12 == -1) goto LAB_0174aa38;
          }
          lVar14 = plVar18[6];
          local_78 = plVar18;
          if (*(long *)(lVar14 + 0x10) == 0) goto LAB_0174aa18;
          psVar1 = (short *)(lVar14 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar12 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar12 == 0) {
            uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
            *(undefined8 *)(lVar14 + 8) = uVar10;
            *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
          }
          else if (sVar12 == -1) {
LAB_0174aa38:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
          local_f0 = 0;
          uStack_e8 = 0;
          local_100 = (undefined8 *)0x0;
          local_f8 = (code *)0x0;
          FUN_0174ab14(&local_100,&local_80);
          local_110 = (undefined8 *)0x0;
          uStack_108 = 0;
          FUN_0174ab80(uVar17,&local_100,&local_110);
          puVar7 = local_110;
          if (local_110 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_110 + 3);
            do {
              sVar12 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar12 == 1) {
              piVar3 = (int *)((long)local_110 + 0x1c);
              do {
                iVar9 = *piVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar6) {
                  *piVar3 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar14 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar14;
                local_70[0] = *puVar7;
                FUN_00c44438(lVar14 + 0x8040,local_70);
              }
            }
            else if (sVar12 == 0) {
LAB_0174a6cc:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          pcVar11 = local_f8;
          if (local_f8 != (code *)0x0) {
            local_f0 = 0;
            uStack_e8 = 0;
            local_100 = (undefined8 *)0x0;
            local_f8 = (code *)0x0;
            (*pcVar11)(auStack_e0);
          }
          if (local_78 != (long *)0x0) {
            lVar14 = local_78[6];
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar12 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar12 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*local_78 + 0x50))();
            }
            else if (sVar12 == 0) goto LAB_0174a72c;
          }
          if (local_80 != (long *)0x0) {
            lVar14 = local_80[6];
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar12 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar12 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*local_80 + 0x50))();
            }
            else if (sVar12 == 0) goto LAB_0174a72c;
          }
          if (plVar15 != (long *)0x0) {
            lVar14 = plVar15[6];
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar12 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar12 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              pcVar11 = *(code **)(*plVar15 + 0x50);
              goto LAB_0174a794;
            }
            if (sVar12 == 0) goto LAB_0174a72c;
          }
        }
        else if ((int)plVar18[8] == 0) {
          if (*(char *)(param_1 + 0x140) == '\0') {
            iVar9 = *(int *)(param_1 + 0x48);
            if (iVar9 == 1) {
              if ((*(char *)(param_1 + 0xd0) != '\0') &&
                 (pcVar11 = (code *)plVar18[10], pcVar11 != (code *)0x0)) {
                lVar14 = param_1 + 0xd8;
                plVar15 = plVar18 + 0xe;
LAB_0174a660:
                (*pcVar11)(plVar15,lVar14);
              }
            }
            else if (iVar9 == 2) {
              pcVar11 = (code *)plVar18[0x1a];
              if (pcVar11 != (code *)0x0) {
                lVar14 = param_1 + 0xe0;
                plVar15 = plVar18 + 0x1e;
                goto LAB_0174a660;
              }
            }
            else if (iVar9 == 3) goto LAB_0174a788;
          }
          else {
LAB_0174a788:
            pcVar11 = (code *)plVar18[0x2a];
            if (pcVar11 != (code *)0x0) {
              plVar15 = plVar18 + 0x2e;
LAB_0174a794:
              (*pcVar11)(plVar15);
            }
          }
        }
        lVar14 = plVar18[6];
        psVar1 = (short *)(lVar14 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar14 + 0x10) = 0;
          (**(code **)(*plVar18 + 0x50))(plVar18);
        }
        else if (sVar12 == 0) goto LAB_0174a72c;
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar13);
    plVar16 = *(long **)(param_1 + 0xf0);
    plVar13 = *(long **)(param_1 + 0xf8);
    while (plVar13 != plVar16) {
      plVar13 = plVar13 + -1;
      plVar18 = (long *)*plVar13;
      if (plVar18 != (long *)0x0) {
        lVar14 = plVar18[6];
        psVar1 = (short *)(lVar14 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar14 + 0x10) = 0;
          (**(code **)(*plVar18 + 0x50))();
        }
        else if (sVar12 == 0) {
LAB_0174a72c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
  }
  *(long **)(param_1 + 0xf8) = plVar16;
  return;
}


