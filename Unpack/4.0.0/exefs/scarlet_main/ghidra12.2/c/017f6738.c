/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f6738; name: FUN_017f6738
 */


void FUN_017f6738(long param_1)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_28;
  
  for (plVar9 = *(long **)(param_1 + 0x60); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    plVar7 = (long *)plVar9[3];
    plVar9[3] = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar8 = *plVar1;
        iVar6 = (int)lVar8 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar8 == 0) goto LAB_017f6980;
    }
  }
  for (plVar9 = *(long **)(param_1 + 200); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    plVar7 = (long *)plVar9[3];
    plVar9[3] = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar8 = *plVar1;
        iVar6 = (int)lVar8 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
LAB_017f6980:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  FUN_017f69a8(param_1 + 0x30);
  FUN_017f6a60(param_1 + 0x98);
  plVar9 = *(long **)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_017f68e8;
  }
  FUN_017f6c90(param_1 + 0x108,0);
  FUN_017f6b18(param_1 + 0x110,0);
  plVar9 = *(long **)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = 0;
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_017f68e8;
  }
  plVar9 = *(long **)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_017f68e8;
  }
  plVar9 = *(long **)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_017f68e8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  local_28 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = 0;
  FUN_016712fc(&local_28);
  FUN_017f6dcc(param_1 + 0x138,0);
  FUN_017f6bd4(param_1 + 0x140,0);
  return;
}


