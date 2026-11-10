/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00edd288; name: FUN_00edd288
 */


void FUN_00edd288(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_30;
  long *plStack_28;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x210);
  FUN_00eddc28(&plStack_28,*param_2,lVar6,
               (int)((ulong)(*(long *)(*(long *)(param_1 + 0x38) + 0x218) - lVar6) >> 3) *
               -0x42108421,*(undefined8 *)(param_1 + 8));
  FUN_00edd38c(&local_30,*param_2,&plStack_28,0);
  plVar5 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
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
    else if ((int)lVar6 == 0) goto LAB_00edd344;
  }
  *(undefined8 *)(param_1 + 0x70) = local_30;
  if (plStack_28 != (long *)0x0) {
    plVar5 = plStack_28 + 5;
    do {
      lVar6 = *plVar5;
      iVar4 = (int)lVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plStack_28 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
LAB_00edd344:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


