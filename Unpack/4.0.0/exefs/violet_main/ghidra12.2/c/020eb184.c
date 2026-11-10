/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020eb184; name: FUN_020eb184
 */


undefined8 FUN_020eb184(long param_1,uint *param_2,uint *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  uint uVar11;
  long *local_78;
  long *local_70;
  long *local_68;
  
  if (*(long *)(param_1 + 0xa10) != 0) {
    uVar6 = FUN_019aeb9c(*(long *)(param_1 + 0xa10),0);
    if (uVar6 != 0) {
      uVar7 = *param_3;
      uVar11 = 0;
      uVar9 = *param_2;
      do {
        if (uVar6 <= uVar9) {
          uVar9 = 0;
        }
        if (uVar7 < 0x1e) {
          do {
            plVar10 = (long *)*param_4;
            local_68 = plVar10;
            if (plVar10 == (long *)0x0) {
              uVar8 = FUN_00f1386c(param_1,uVar9,uVar7,&local_68,1);
            }
            else {
              plVar1 = plVar10 + 5;
              do {
                lVar5 = *plVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *(int *)plVar1 = (int)lVar5 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((int)lVar5 == -1) goto LAB_020eb468;
              uVar8 = FUN_00f1386c(param_1,uVar9,uVar7,&local_68,1);
              if (plVar10 != (long *)0x0) {
                plVar1 = plVar10 + 5;
                do {
                  lVar5 = *plVar1;
                  iVar4 = (int)lVar5 + -1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar3) {
                    *(int *)plVar1 = iVar4;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar4 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
                else if ((int)lVar5 == 0) goto LAB_020eb490;
              }
            }
            if ((uVar8 & 1) == 0) {
              *param_2 = uVar9;
              goto LAB_020eb34c;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 != 0x1e);
        }
        uVar11 = uVar11 + 1;
        uVar7 = 0;
        uVar9 = uVar9 + 1;
      } while (uVar11 != uVar6);
    }
    if (*param_3 != 0) {
      uVar7 = 0;
      do {
        uVar11 = *param_2;
        plVar10 = (long *)*param_4;
        local_70 = plVar10;
        if (plVar10 == (long *)0x0) {
          uVar8 = FUN_00f1386c(param_1,uVar11,uVar7,&local_70,1);
        }
        else {
          plVar1 = plVar10 + 5;
          do {
            lVar5 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = (int)lVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar5 == -1) {
LAB_020eb468:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
          uVar8 = FUN_00f1386c(param_1,uVar11,uVar7,&local_70,1);
          if (plVar10 != (long *)0x0) {
            plVar1 = plVar10 + 5;
            do {
              lVar5 = *plVar1;
              iVar4 = (int)lVar5 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
            else if ((int)lVar5 == 0) {
LAB_020eb490:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
        }
        if ((uVar8 & 1) == 0) {
LAB_020eb34c:
          *param_3 = uVar7;
          return 1;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *param_3);
    }
    for (; uVar7 = FUN_017e4040(*(undefined8 *)(param_1 + 0xa10),0), uVar6 < uVar7;
        uVar6 = uVar6 + 1) {
      uVar7 = 0;
      do {
        plVar10 = (long *)*param_4;
        local_78 = plVar10;
        if (plVar10 == (long *)0x0) {
          uVar8 = FUN_00f1386c(param_1,uVar6,uVar7,&local_78,1);
        }
        else {
          plVar1 = plVar10 + 5;
          do {
            lVar5 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = (int)lVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar5 == -1) goto LAB_020eb468;
          uVar8 = FUN_00f1386c(param_1,uVar6,uVar7,&local_78,1);
          if (plVar10 != (long *)0x0) {
            plVar1 = plVar10 + 5;
            do {
              lVar5 = *plVar1;
              iVar4 = (int)lVar5 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
            else if ((int)lVar5 == 0) goto LAB_020eb490;
          }
        }
        if ((uVar8 & 1) == 0) {
          *param_2 = uVar6;
          goto LAB_020eb34c;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x1e);
    }
  }
  return 0;
}


