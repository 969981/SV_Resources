/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a0930; name: FUN_010a0930
 */


void FUN_010a0930(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *local_70;
  long *local_68;
  long *local_60;
  undefined1 auStack_58 [8];
  
  lVar12 = *(long *)(param_1 + 0x38);
  uVar10 = 0;
  do {
    plVar11 = *(long **)(lVar12 + uVar10 * 8 + 0xa0);
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 5;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)lVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar7 == -1) goto LAB_010a0c24;
      plVar8 = (long *)FUN_010a0d38(auStack_58,*(undefined8 *)(param_1 + 8));
      if (plVar8 == (long *)0x0) {
        FUN_010a0f48(0,plVar11);
        local_60 = (long *)0x0;
        FUN_010a1220(param_1,&local_60);
        local_68 = (long *)0x0;
        FUN_010a0c4c(param_1,*(undefined8 *)(param_1 + 0x150),uVar10 & 0xffffffff,&local_68);
        local_70 = (long *)0x0;
        FUN_010a0c4c(param_1,*(undefined8 *)(param_1 + 0x170),uVar10 & 0xffffffff,&local_70);
      }
      else {
        plVar2 = plVar8 + 5;
        do {
          lVar7 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = (int)lVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar7 == -1) {
LAB_010a0c24:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        FUN_010a0f48(plVar8,plVar11);
        do {
          lVar7 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = (int)lVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        local_60 = plVar8;
        if ((int)lVar7 == -1) goto LAB_010a0c24;
        FUN_010a1220(param_1,&local_60);
        if (plVar8 != (long *)0x0) {
          plVar3 = plVar8 + 5;
          do {
            lVar7 = *plVar3;
            iVar6 = (int)lVar7 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *(int *)plVar3 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
          else if ((int)lVar7 == 0) goto LAB_010a0b68;
        }
        do {
          lVar7 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = (int)lVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar7 == -1) goto LAB_010a0c24;
        do {
          lVar7 = *plVar2;
          iVar6 = (int)lVar7 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
        else if ((int)lVar7 == 0) goto LAB_010a0b68;
        uVar9 = *(undefined8 *)(param_1 + 0x150);
        do {
          lVar7 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = (int)lVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        local_68 = plVar8;
        if ((int)lVar7 == -1) goto LAB_010a0c24;
        FUN_010a0c4c(param_1,uVar9,uVar10 & 0xffffffff,&local_68);
        if (plVar8 != (long *)0x0) {
          plVar3 = plVar8 + 5;
          do {
            lVar7 = *plVar3;
            iVar6 = (int)lVar7 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *(int *)plVar3 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
          else if ((int)lVar7 == 0) goto LAB_010a0b68;
        }
        uVar9 = *(undefined8 *)(param_1 + 0x170);
        do {
          lVar7 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = (int)lVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        local_70 = plVar8;
        if ((int)lVar7 == -1) goto LAB_010a0c24;
        FUN_010a0c4c(param_1,uVar9,uVar10 & 0xffffffff,&local_70);
        if (plVar8 != (long *)0x0) {
          plVar3 = plVar8 + 5;
          do {
            lVar7 = *plVar3;
            iVar6 = (int)lVar7 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *(int *)plVar3 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
          else if ((int)lVar7 == 0) goto LAB_010a0b68;
        }
        do {
          lVar7 = *plVar2;
          iVar6 = (int)lVar7 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
        else if ((int)lVar7 == 0) goto LAB_010a0b68;
      }
      do {
        lVar7 = *plVar1;
        iVar6 = (int)lVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      else if ((int)lVar7 == 0) {
LAB_010a0b68:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == 5) {
      return;
    }
  } while( true );
}


