/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e04254; name: FUN_00e04254
 */


void FUN_00e04254(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  short sVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x754) == 0) {
    FUN_00e95abc(local_50,param_1);
    puVar7 = local_50[0];
    if (local_50[0] == (undefined8 *)0x0) {
      return;
    }
    if (*(short *)((long)local_50[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_50[0] + 0x1a);
      sVar14 = *(short *)((long)local_50[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar14) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00e042e4;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00e042e4:
          bVar6 = false;
        }
        if (bVar6) {
          plVar15 = (long *)0x0;
          if (local_50[0][2] != 0) {
            plVar15 = (long *)(local_50[0][2] + -0x28);
          }
          goto LAB_00e0430c;
        }
        sVar14 = sVar3;
      } while (sVar3 != 0);
    }
    plVar15 = (long *)0x0;
LAB_00e0430c:
    psVar1 = (short *)(local_50[0] + 3);
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
      piVar2 = (int *)((long)local_50[0] + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_28 = *puVar7;
        FUN_00c44438(lVar12 + 0x8040,&local_28);
      }
    }
    else if (sVar14 == 0) goto LAB_00e04630;
    if (plVar15 == (long *)0x0) {
      return;
    }
    FUN_00e3353c(local_50,plVar15);
    puVar7 = local_50[0];
    if (local_50[0] != (undefined8 *)0x0) {
      if (*(short *)((long)local_50[0] + 0x1a) != 0) {
        psVar1 = (short *)((long)local_50[0] + 0x1a);
        sVar14 = *(short *)((long)local_50[0] + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar14) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar14 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_00e0443c;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00e0443c:
            bVar6 = false;
          }
          if (bVar6) {
            plVar16 = (long *)0x0;
            if (local_50[0][2] != 0) {
              plVar16 = (long *)(local_50[0][2] + -0x28);
            }
            goto LAB_00e04464;
          }
          sVar14 = sVar3;
        } while (sVar3 != 0);
      }
      plVar16 = (long *)0x0;
LAB_00e04464:
      psVar1 = (short *)(local_50[0] + 3);
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
        piVar2 = (int *)((long)local_50[0] + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_28 = *puVar7;
          FUN_00c44438(lVar12 + 0x8040,&local_28);
        }
      }
      else if (sVar14 == 0) goto LAB_00e04630;
      if (plVar16 != (long *)0x0) {
        FUN_00e92dbc(local_50,plVar15);
        if (local_50[0] != (undefined8 *)0x0) {
          if (*(short *)((long)local_50[0] + 0x1a) != 0) {
            psVar1 = (short *)((long)local_50[0] + 0x1a);
            sVar14 = *(short *)((long)local_50[0] + 0x1a);
            do {
              sVar3 = *psVar1;
              if (sVar3 == sVar14) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar6) {
                  *psVar1 = sVar14 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 != '\0') goto LAB_00e045ac;
                bVar6 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_00e045ac:
                bVar6 = false;
              }
              if (bVar6) {
                plVar17 = (long *)0x0;
                if (local_50[0][2] != 0) {
                  plVar17 = (long *)(local_50[0][2] + -0x28);
                }
                goto LAB_00e04610;
              }
              sVar14 = sVar3;
            } while (sVar3 != 0);
          }
          plVar17 = (long *)0x0;
LAB_00e04610:
          psVar1 = (short *)(local_50[0] + 3);
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
            piVar2 = (int *)((long)local_50[0] + 0x1c);
            do {
              iVar8 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar12;
              local_28 = *local_50[0];
              FUN_00c44438(lVar12 + 0x8040,&local_28);
            }
          }
          else if (sVar14 == 0) {
LAB_00e04630:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
          if (plVar17 != (long *)0x0) {
            plVar9 = (long *)FUN_00e704ec(plVar16);
            lVar12 = *plVar9;
            if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
              psVar1 = (short *)(lVar12 + 0x1a);
              sVar14 = *(short *)(lVar12 + 0x1a);
              do {
                sVar3 = *psVar1;
                if (sVar3 == sVar14) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar6) {
                    *psVar1 = sVar14 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 != '\0') goto LAB_00e04734;
                  bVar6 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB_00e04734:
                  bVar6 = false;
                }
                if (bVar6) {
                  lVar12 = *(long *)(lVar12 + 0x10);
                  if (lVar12 != 0) {
                    cVar5 = *(char *)(lVar12 + 0x48);
                    lVar13 = *(long *)(lVar12 + 8);
                    psVar1 = (short *)(lVar13 + 0x1a);
                    do {
                      sVar14 = *psVar1;
                      cVar4 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                      if (bVar6) {
                        *psVar1 = sVar14 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (sVar14 == 1) {
                      *(undefined8 *)(lVar13 + 0x10) = 0;
                      (**(code **)(*(long *)(lVar12 + -0x28) + 0x50))();
                    }
                    else if (sVar14 == 0) goto LAB_00e04388;
                    if ((cVar5 != '\0') && (*(char *)((long)plVar15 + 0x143) == '\0')) {
                      if ((char)plVar17[8] == '\0') goto switchD_00e047f8_caseD_2;
                      iVar8 = *(int *)(plVar17[0xf] + 0x2a0);
                      if (0xb < iVar8 - 1U) goto switchD_00e047f8_caseD_2;
                      switch(iVar8) {
                      case 1:
                      case 5:
                        uVar10 = FUN_00fee088(plVar17[0xf] + 0x30);
                        if ((uVar10 & 1) == 0) goto switchD_00e047f8_caseD_4;
                      default:
switchD_00e047f8_caseD_2:
                        *(undefined4 *)(param_1 + 0x750) = 0;
                        break;
                      case 4:
                      case 0xb:
                      case 0xc:
switchD_00e047f8_caseD_4:
                        if ((char)plVar17[8] != '\0') {
                          if (1 < *(int *)(&DAT_03d30718 +
                                          (long)*(int *)(plVar17[0xf] + 0x2a0) * 0x1c) - 3U) {
                            if (*(int *)(plVar17[0xf] + 0x2a0) != 0xc) goto LAB_00e04864;
                            uVar11 = 4;
                            goto LAB_00e04868;
                          }
                          uVar11 = 2;
                          goto LAB_00e04840;
                        }
LAB_00e04864:
                        uVar11 = 1;
LAB_00e04868:
                        *(undefined4 *)(param_1 + 0x750) = uVar11;
                      }
                      goto LAB_00e0486c;
                    }
                  }
                  break;
                }
                sVar14 = sVar3;
              } while (sVar3 != 0);
            }
            uVar11 = 1;
LAB_00e04840:
            *(undefined4 *)(param_1 + 0x750) = uVar11;
LAB_00e0486c:
            lVar12 = plVar17[6];
            psVar1 = (short *)(lVar12 + 0x1a);
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
              (**(code **)(*plVar17 + 0x50))(plVar17);
            }
            else if (sVar14 == 0) goto LAB_00e04388;
          }
        }
        lVar12 = plVar16[6];
        psVar1 = (short *)(lVar12 + 0x1a);
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
        else if (sVar14 == 0) goto LAB_00e04388;
      }
    }
    lVar12 = plVar15[0x13];
    psVar1 = (short *)(lVar12 + 0x1a);
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
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    else if (sVar14 == 0) {
LAB_00e04388:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  else {
    *(int *)(param_1 + 0x750) = *(int *)(param_1 + 0x754);
    *(undefined4 *)(param_1 + 0x754) = 0;
  }
  return;
}


