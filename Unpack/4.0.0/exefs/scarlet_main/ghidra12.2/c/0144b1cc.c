/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0144b1cc; name: FUN_0144b1cc
 */


undefined8 FUN_0144b1cc(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  uVar5 = FUN_0144b2b8();
  plVar6 = *(long **)(param_2 + 0x30);
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
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  plVar6 = *(long **)(param_1 + 0x10);
  uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
    (**(code **)(*plVar6 + 0x18))(plVar6,param_2,0x40,8);
    return uVar5;
  }
  FUN_00c48fe8(plVar6,param_2,0x40,8);
  return uVar5;
}


