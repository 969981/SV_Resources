/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029ad0ec; name: FUN_029ad0ec
 */


void FUN_029ad0ec(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar6 = (long *)FUN_00f351bc();
  lVar8 = *plVar6;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x20) + 0x10))();
  }
  plVar6 = param_1 + 2;
  FUN_00feee04(lVar8,plVar6);
  plVar1 = param_1 + 7;
  FUN_00feee04(lVar8,plVar1);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x20) + 0x18))((long *)(lVar8 + 0x20));
  }
  FUN_029adc40(param_1 + 0xd);
  plVar7 = (long *)param_1[0xc];
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 5;
    do {
      lVar8 = *plVar2;
      iVar5 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_029ad254;
  }
  if ((char)*plVar1 != '\0') {
    if ((long *)param_1[0xb] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xb] + 0x20))();
    }
    *(char *)plVar1 = '\0';
  }
  if ((char)*plVar6 != '\0') {
    if ((long *)param_1[6] != (long *)0x0) {
      (**(code **)(*(long *)param_1[6] + 0x20))();
    }
    *(char *)plVar6 = '\0';
  }
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
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
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_029ad254;
  }
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    plVar6 = param_1 + 5;
    do {
      lVar8 = *plVar6;
      iVar5 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x029ad240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
    if ((int)lVar8 == 0) {
LAB_029ad254:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


