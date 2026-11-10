/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0136a910; name: FUN_0136a910
 */


void FUN_0136a910(long param_1)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  long *local_38;
  long *local_18;
  
  iVar2 = *(int *)(*(long *)(param_1 + 0xe0) + 0x34);
  bVar3 = *(byte *)(*(long *)(param_1 + 0xe0) + 0x8d);
  uVar8 = FUN_00f7e2a0(iVar2,bVar3,0);
  if (((uVar8 & 1) != 0) &&
     ((*(long *)(*(long *)(param_1 + 0x48) + 0xb8) != 0 ||
      ((iVar2 == 2 && ((bVar3 - 5 < 2 || (bVar3 - 1 < 3)))))))) {
    FUN_0136ae88(*(undefined8 *)(param_1 + 0x58),*(long *)(param_1 + 0x48),0);
    local_18 = *(long **)(param_1 + 0x50);
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    if (local_18 != (long *)0x0) {
      plVar1 = local_18 + 5;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)lVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar7 == -1) goto LAB_0136ada0;
    }
    FUN_0136adc8(uVar9,&local_18);
    if (local_18 != (long *)0x0) {
      plVar1 = local_18 + 5;
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
        (**(code **)(*local_18 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_0136ac64;
    }
  }
  uVar8 = FUN_00f7e2a0(iVar2,bVar3,1);
  uVar10 = (uint)bVar3;
  if (((uVar8 & 1) != 0) &&
     ((*(long *)(*(long *)(param_1 + 0x48) + 0xc0) != 0 ||
      ((iVar2 == 2 && ((uVar10 - 5 < 2 || (uVar10 - 1 < 3)))))))) {
    FUN_0136ae88(*(undefined8 *)(param_1 + 0x60),*(long *)(param_1 + 0x48),0);
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    local_18 = *(long **)(param_1 + 0x50);
    if (local_18 != (long *)0x0) {
      plVar1 = local_18 + 5;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)lVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar7 == -1) goto LAB_0136ada0;
    }
    FUN_0136adc8(uVar9,&local_18);
    if (local_18 != (long *)0x0) {
      plVar1 = local_18 + 5;
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
        (**(code **)(*local_18 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_0136ac64;
    }
  }
  uVar8 = FUN_00f7e2a0(iVar2,bVar3,2);
  if (((uVar8 & 1) != 0) &&
     ((*(long *)(*(long *)(param_1 + 0x48) + 200) != 0 ||
      ((iVar2 == 2 && ((uVar10 - 5 < 2 || (uVar10 - 1 < 3)))))))) {
    FUN_0136ae88(*(undefined8 *)(param_1 + 0x68),*(long *)(param_1 + 0x48),0);
    uVar9 = *(undefined8 *)(param_1 + 0x68);
    local_18 = *(long **)(param_1 + 0x50);
    if (local_18 != (long *)0x0) {
      plVar1 = local_18 + 5;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)lVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar7 == -1) goto LAB_0136ada0;
    }
    FUN_0136adc8(uVar9,&local_18);
    if (local_18 != (long *)0x0) {
      plVar1 = local_18 + 5;
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
        (**(code **)(*local_18 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_0136ac64;
    }
  }
  uVar8 = FUN_00f7e2a0(iVar2,bVar3,3);
  if (((uVar8 & 1) != 0) &&
     ((*(long *)(*(long *)(param_1 + 0x48) + 0xd0) != 0 ||
      ((iVar2 == 2 && ((uVar10 - 5 < 2 || (uVar10 - 1 < 3)))))))) {
    FUN_0136ae88(*(undefined8 *)(param_1 + 0x70),*(long *)(param_1 + 0x48),0);
    uVar9 = *(undefined8 *)(param_1 + 0x70);
    local_18 = *(long **)(param_1 + 0x50);
    if (local_18 != (long *)0x0) {
      plVar1 = local_18 + 5;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)lVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar7 == -1) goto LAB_0136ada0;
    }
    FUN_0136adc8(uVar9,&local_18);
    if (local_18 != (long *)0x0) {
      plVar1 = local_18 + 5;
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
        (**(code **)(*local_18 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_0136ac64;
    }
  }
  uVar8 = FUN_00f7e2a0(iVar2,bVar3,4);
  if (((uVar8 & 1) != 0) &&
     ((*(long *)(*(long *)(param_1 + 0x48) + 0xd8) != 0 ||
      ((iVar2 == 2 && ((uVar10 - 5 < 2 || (uVar10 - 1 < 3)))))))) {
    FUN_0136ae88(*(undefined8 *)(param_1 + 0x78),*(long *)(param_1 + 0x48),0);
    uVar9 = *(undefined8 *)(param_1 + 0x78);
    local_18 = *(long **)(param_1 + 0x50);
    if (local_18 != (long *)0x0) {
      plVar1 = local_18 + 5;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)lVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar7 == -1) goto LAB_0136ada0;
    }
    FUN_0136adc8(uVar9,&local_18);
    if (local_18 != (long *)0x0) {
      plVar1 = local_18 + 5;
      do {
        lVar7 = *plVar1;
        iVar2 = (int)lVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar2;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 == 0) {
        (**(code **)(*local_18 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_0136ac64;
    }
  }
  if (*(char *)(*(long *)(param_1 + 0xe0) + 0x710) != '\0') {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x50))
              (*(long **)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x48));
    uVar9 = *(undefined8 *)(param_1 + 0xa8);
    local_38 = *(long **)(param_1 + 0x50);
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 5;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)lVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar7 == -1) {
LAB_0136ada0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    FUN_0137f818(uVar9,&local_38);
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 5;
      do {
        lVar7 = *plVar1;
        iVar2 = (int)lVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar2;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar7 == 0) {
LAB_0136ac64:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


