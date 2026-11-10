/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017af204; name: FUN_017af204
 */


void FUN_017af204(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_28;
  
  FUN_017b0fb8();
  lVar8 = *param_2;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) goto LAB_017af340;
  }
  plVar6 = *(long **)(param_1 + 0x38);
  *(long *)(param_1 + 0x38) = lVar8;
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 5;
    do {
      lVar8 = *plVar2;
      iVar3 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_017af2f8;
  }
  lVar8 = param_2[1];
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) {
LAB_017af340:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar6 = *(long **)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = lVar8;
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 5;
    do {
      lVar8 = *plVar2;
      iVar3 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
LAB_017af2f8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_017af3e8(param_1 + 0x48,param_2[2]);
  uVar7 = FUN_017af560(*(undefined8 *)(param_1 + 8));
  FUN_017af4a4(&local_28,uVar7);
  FUN_017af368(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = local_28;
  return;
}


