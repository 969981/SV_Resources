/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a4c5f4; name: FUN_01a4c5f4
 */


undefined8 FUN_01a4c5f4(long param_1,long *param_2,long *param_3,uint *param_4,undefined8 param_5)

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
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  if (*(long *)(param_1 + 0xa10) != 0) {
    uVar6 = FUN_019aeb9c(*(long *)(param_1 + 0xa10),0);
    if (uVar6 != 0) {
      uVar9 = *param_4;
      uVar7 = 0;
      do {
        if (uVar6 <= uVar9) {
          uVar9 = 0;
        }
        local_68 = (long *)*param_2;
        if (local_68 != (long *)0x0) {
          plVar10 = local_68 + 5;
          do {
            lVar5 = *plVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *(int *)plVar10 = (int)lVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar5 == -1) goto LAB_01a4c8c4;
        }
        plVar10 = (long *)*param_3;
        local_70 = plVar10;
        if (plVar10 == (long *)0x0) {
          uVar8 = FUN_01a4c914(param_1,&local_68,&local_70,uVar9,param_5);
          uVar8 = uVar8 & 0xffffffff;
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
          if ((int)lVar5 == -1) goto LAB_01a4c8c4;
          uVar8 = FUN_01a4c914(param_1,&local_68,&local_70,uVar9,param_5);
          uVar8 = uVar8 & 0xffffffff;
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
            else if ((int)lVar5 == 0) goto LAB_01a4c8ec;
          }
        }
        if (local_68 != (long *)0x0) {
          plVar10 = local_68 + 5;
          do {
            lVar5 = *plVar10;
            iVar4 = (int)lVar5 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *(int *)plVar10 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
          else if ((int)lVar5 == 0) goto LAB_01a4c8ec;
        }
        if ((uVar8 & 1) != 0) {
          *param_4 = uVar9;
          return 1;
        }
        uVar7 = uVar7 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar7 != uVar6);
    }
    uVar7 = FUN_017e4040(*(undefined8 *)(param_1 + 0xa10),0);
    if (uVar6 < uVar7) {
      do {
        local_78 = (long *)*param_2;
        if (local_78 != (long *)0x0) {
          plVar10 = local_78 + 5;
          do {
            lVar5 = *plVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *(int *)plVar10 = (int)lVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar5 == -1) {
LAB_01a4c8c4:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        plVar10 = (long *)*param_3;
        local_80 = plVar10;
        if (plVar10 == (long *)0x0) {
          uVar8 = FUN_01a4c914(param_1,&local_78,&local_80,uVar6,param_5);
          uVar8 = uVar8 & 0xffffffff;
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
          if ((int)lVar5 == -1) goto LAB_01a4c8c4;
          uVar8 = FUN_01a4c914(param_1,&local_78,&local_80,uVar6,param_5);
          uVar8 = uVar8 & 0xffffffff;
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
LAB_01a4c8ec:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
        }
        if (local_78 != (long *)0x0) {
          plVar10 = local_78 + 5;
          do {
            lVar5 = *plVar10;
            iVar4 = (int)lVar5 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *(int *)plVar10 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*local_78 + 0x10))();
          }
          else if ((int)lVar5 == 0) goto LAB_01a4c8ec;
        }
        if ((uVar8 & 1) != 0) {
          *param_4 = uVar6;
          return 1;
        }
        uVar6 = uVar6 + 1;
        uVar7 = FUN_017e4040(*(undefined8 *)(param_1 + 0xa10),0);
      } while (uVar6 < uVar7);
    }
  }
  return 0;
}


