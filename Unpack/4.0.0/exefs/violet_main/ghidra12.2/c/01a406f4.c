/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a406f4; name: FUN_01a406f4
 */


void FUN_01a406f4(long param_1,uint param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x90));
  uVar9 = *(ulong *)(param_1 + 0x30);
  uVar7 = (ulong)param_2;
  if ((uVar9 & uVar9 - 1) == 0) {
    plVar10 = *(long **)(*(long *)(param_1 + 0x28) + (ulong)((int)uVar9 - 1U & param_2) * 8);
    do {
      do {
        plVar10 = (long *)*plVar10;
      } while (plVar10[1] != uVar7);
    } while (*(uint *)(plVar10 + 2) != param_2);
  }
  else {
    uVar11 = uVar7;
    if (uVar9 <= uVar7) {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = uVar7 / uVar9;
      }
      uVar11 = uVar7 - uVar11 * uVar9;
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x28) + uVar11 * 8);
    do {
      do {
        plVar10 = (long *)*plVar10;
      } while (plVar10[1] != uVar7);
    } while (*(uint *)(plVar10 + 2) != param_2);
  }
  lVar8 = *(long *)((long)plVar10 + 0x18);
  plVar10 = (long *)*param_3;
  if (plVar10 != (long *)0x0) {
    plVar6 = plVar10 + 5;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) {
LAB_01a40858:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) goto LAB_01a40858;
  }
  plVar6 = *(long **)(lVar8 + 0xe0);
  *(long **)(lVar8 + 0xe0) = plVar10;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar8 = *plVar1;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_01a40880;
  }
  if (plVar10 != (long *)0x0) {
    plVar6 = plVar10 + 5;
    do {
      lVar8 = *plVar6;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar8 == 0) {
LAB_01a40880:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x90));
  return;
}


