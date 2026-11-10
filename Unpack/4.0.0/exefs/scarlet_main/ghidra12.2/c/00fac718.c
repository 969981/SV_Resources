/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fac718; name: FUN_00fac718
 */


void FUN_00fac718(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (3 < *(uint *)(param_2 + 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_02716170();
  }
  plVar5 = *(long **)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 8);
  (**(code **)(*plVar5 + 0x28))(&local_40,plVar5,param_2[2],param_2[3]);
  plVar5 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = local_40;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar6 = *plVar1;
      iVar4 = (int)lVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(param_1 + 0x40) = local_38;
  *(undefined8 *)(param_1 + 0x48) = local_30;
  *(undefined8 *)(param_1 + 0x50) = local_28;
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    lVar6 = (**(code **)(**(long **)(param_1 + 0x40) + 0x80))();
    if (((*(long **)(param_1 + 0x40) != (long *)0x0) &&
        (lVar7 = (**(code **)(**(long **)(param_1 + 0x40) + 0x88))(), lVar6 != 0)) && (lVar7 != 0))
    {
      FUN_00fac824(param_1 + 0x58,lVar6,lVar7);
    }
  }
  return;
}


