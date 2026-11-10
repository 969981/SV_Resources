/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a685c8; name: FUN_00a685c8
 */


void FUN_00a685c8(long param_1,undefined8 param_2,int param_3,uint param_4,undefined8 param_5,
                 int param_6,int param_7,int param_8)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  int local_70;
  int local_6c;
  long *local_68;
  
  if ((int)param_5 == 1) {
    FUN_01dc5d2c(param_1,param_2,param_3,param_4,param_5,0,
                 *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x90),param_7,param_8);
  }
  else if ((int)param_5 == 0) {
    if ((int)param_2 == 0) {
      if (param_8 != 0) {
        iVar13 = 0;
        do {
          if (param_7 != 0) {
            iVar14 = 0;
            do {
              uVar9 = *(undefined8 *)(param_1 + 0x38);
              iVar2 = param_4 % 6 + (iVar13 + param_4 / 6) * 6 + iVar14;
              plVar11 = *(long **)(param_1 + 0x48);
              local_68 = plVar11;
              if (plVar11 == (long *)0x0) {
                FUN_00f139bc(uVar9,&local_68,param_3,iVar2);
              }
              else {
                plVar1 = plVar11 + 5;
                do {
                  lVar8 = *plVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *(int *)plVar1 = (int)lVar8 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if ((int)lVar8 == -1) goto LAB_00a68ae4;
                FUN_00f139bc(uVar9,&local_68,param_3,iVar2);
                if (plVar11 != (long *)0x0) {
                  plVar1 = plVar11 + 5;
                  do {
                    lVar8 = *plVar1;
                    iVar5 = (int)lVar8 + -1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar4) {
                      *(int *)plVar1 = iVar5;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar5 == 0) {
                    (**(code **)(*plVar11 + 0x10))(plVar11);
                  }
                  else if ((int)lVar8 == 0) goto LAB_00a68b0c;
                }
              }
              plVar11 = *(long **)(param_1 + 0x48);
              if ((plVar11 == (long *)0x0) ||
                 ((*(byte *)(*(long *)(plVar11[0xe] + 0x10) + 4) >> 2 & 1) != 0)) {
LAB_00a68834:
                local_70 = 0;
                uVar9 = *(undefined8 *)(param_1 + 0x38);
                local_78 = plVar11;
                local_6c = param_6;
                if (plVar11 != (long *)0x0) {
                  plVar11 = plVar11 + 5;
                  do {
                    lVar8 = *plVar11;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar4) {
                      *(int *)plVar11 = (int)lVar8 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if ((int)lVar8 == -1) goto LAB_00a68ae4;
                }
                uVar7 = FUN_020eb184(uVar9,&local_6c,&local_70,&local_78);
                if (local_78 != (long *)0x0) {
                  plVar11 = local_78 + 5;
                  do {
                    lVar8 = *plVar11;
                    iVar5 = (int)lVar8 + -1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar4) {
                      *(int *)plVar11 = iVar5;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar5 == 0) {
                    (**(code **)(*local_78 + 0x10))();
                  }
                  else if ((int)lVar8 == 0) goto LAB_00a68b0c;
                }
                if ((local_6c == param_6 && ((uVar7 ^ 0xffffffff) & 1) == 0) &&
                   ((param_6 != param_3 || (iVar2 != local_70)))) {
                  uVar9 = *(undefined8 *)(param_1 + 0x38);
                  plVar11 = *(long **)(param_1 + 0x48);
                  local_80 = plVar11;
                  if (plVar11 == (long *)0x0) {
                    FUN_00f139bc(uVar9,&local_80,param_3,iVar2);
                  }
                  else {
                    plVar1 = plVar11 + 5;
                    do {
                      lVar8 = *plVar1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar4) {
                        *(int *)plVar1 = (int)lVar8 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if ((int)lVar8 == -1) goto LAB_00a68ae4;
                    FUN_00f139bc(uVar9,&local_80,param_3,iVar2);
                    if (plVar11 != (long *)0x0) {
                      plVar1 = plVar11 + 5;
                      do {
                        lVar8 = *plVar1;
                        iVar5 = (int)lVar8 + -1;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                        if (bVar4) {
                          *(int *)plVar1 = iVar5;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar5 == 0) {
                        (**(code **)(*plVar11 + 0x10))(plVar11);
                      }
                      else if ((int)lVar8 == 0) goto LAB_00a68b0c;
                    }
                  }
                  plVar11 = *(long **)(param_1 + 0x48);
                  if (plVar11 != (long *)0x0) {
                    if ((*(byte *)(*(long *)(plVar11[0xe] + 0x10) + 4) >> 2 & 1) == 0) {
                      sVar6 = FUN_00cf44f4();
                      if (sVar6 == 0) goto LAB_00a68a14;
                      local_88 = *(long **)(param_1 + 0x48);
                      uVar9 = *(undefined8 *)(param_1 + 0x38);
                      if (local_88 != (long *)0x0) goto LAB_00a68954;
                      plVar11 = (long *)0x0;
                    }
                    else {
                      uVar9 = *(undefined8 *)(param_1 + 0x38);
                      local_88 = plVar11;
LAB_00a68954:
                      plVar11 = local_88 + 5;
                      do {
                        lVar8 = *plVar11;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                        if (bVar4) {
                          *(int *)plVar11 = (int)lVar8 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if ((int)lVar8 == -1) goto LAB_00a68ae4;
                      plVar11 = local_88;
                    }
                    FUN_0152ee44(uVar9,&local_88,local_6c,local_70);
                    if (plVar11 != (long *)0x0) {
                      plVar1 = plVar11 + 5;
                      do {
                        lVar8 = *plVar1;
                        iVar5 = (int)lVar8 + -1;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                        if (bVar4) {
                          *(int *)plVar1 = iVar5;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar5 == 0) {
                        (**(code **)(*plVar11 + 0x10))(plVar11);
                      }
                      else if ((int)lVar8 == 0) goto LAB_00a68b0c;
                    }
                    uVar9 = *(undefined8 *)(param_1 + 0x38);
                    plVar11 = *(long **)(param_1 + 0x48);
                    local_90 = plVar11;
                    if (plVar11 == (long *)0x0) {
                      FUN_0152ed18(uVar9,param_3,iVar2,&local_90);
                    }
                    else {
                      plVar1 = plVar11 + 5;
                      do {
                        lVar8 = *plVar1;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                        if (bVar4) {
                          *(int *)plVar1 = (int)lVar8 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if ((int)lVar8 == -1) goto LAB_00a68ae4;
                      FUN_0152ed18(uVar9,param_3,iVar2,&local_90);
                      if (plVar11 != (long *)0x0) {
                        plVar1 = plVar11 + 5;
                        do {
                          lVar8 = *plVar1;
                          iVar5 = (int)lVar8 + -1;
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                          if (bVar4) {
                            *(int *)plVar1 = iVar5;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (iVar5 == 0) {
                          (**(code **)(*plVar11 + 0x10))(plVar11);
                        }
                        else if ((int)lVar8 == 0) goto LAB_00a68b0c;
                      }
                    }
                    FUN_01dc6528(*(undefined8 *)(param_1 + 0x40),param_3,iVar2,local_6c,local_70);
                  }
                }
              }
              else {
                sVar6 = FUN_00cf44f4();
                if (sVar6 != 0) {
                  plVar11 = *(long **)(param_1 + 0x48);
                  goto LAB_00a68834;
                }
              }
LAB_00a68a14:
              iVar14 = iVar14 + 1;
            } while (iVar14 != param_7);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 != param_8);
      }
    }
    else if (param_8 != 0) {
      iVar13 = 0;
      do {
        lVar8 = (**(code **)(**(long **)(param_1 + 0x30) + 0x68))
                          (*(long **)(param_1 + 0x30),param_4);
        if (((lVar8 != 0) && (lVar12 = *(long *)(param_1 + 0x48), lVar12 != 0)) &&
           ((FUN_00feea48(lVar12,lVar8),
            (*(byte *)(*(long *)(*(long *)(lVar12 + 0x70) + 0x10) + 4) >> 2 & 1) != 0 ||
            (sVar6 = FUN_00cf44f4(), sVar6 != 0)))) {
          local_6c = 0;
          uVar9 = *(undefined8 *)(param_1 + 0x38);
          plVar11 = *(long **)(param_1 + 0x48);
          local_98 = plVar11;
          if (plVar11 == (long *)0x0) {
            uVar10 = FUN_02ad4fac(uVar9,&local_98,param_6,&local_6c);
          }
          else {
            plVar1 = plVar11 + 5;
            do {
              lVar8 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = (int)lVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((int)lVar8 == -1) {
LAB_00a68ae4:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
            uVar10 = FUN_02ad4fac(uVar9,&local_98,param_6,&local_6c);
            if (plVar11 != (long *)0x0) {
              plVar1 = plVar11 + 5;
              do {
                lVar8 = *plVar1;
                iVar14 = (int)lVar8 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *(int *)plVar1 = iVar14;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar14 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
              else if ((int)lVar8 == 0) {
LAB_00a68b0c:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint32_t>::max()",
                           "DecrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                           ,0x58,"Reference counter underflows.");
              }
            }
          }
          if ((uVar10 & 1) != 0) {
            (**(code **)(**(long **)(param_1 + 0x30) + 0x48))(*(long **)(param_1 + 0x30),param_4);
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != param_8);
    }
  }
  return;
}


