/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c70c8c; name: FUN_00c70c8c
 */


void FUN_00c70c8c(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = DAT_0485a0e8;
  if (DAT_0485a0e8 != (long *)0x0) {
    plVar1 = DAT_0485a0e8 + 5;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar7 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  lVar7 = *(long *)(param_1 + 0xb0);
  lVar2 = *(long *)(param_1 + 0xb8);
  if (lVar7 != lVar2) {
    FUN_00c70dfc(plVar6,lVar7,lVar7 + 8,lVar7 + 0x28);
    if (lVar7 + 0x30 != lVar2) {
      FUN_00c70dfc(plVar6,lVar7 + 0x30,lVar7 + 0x38,lVar7 + 0x58);
      if (lVar7 + 0x60 != lVar2) {
        FUN_00c70dfc(plVar6,lVar7 + 0x60,lVar7 + 0x68,lVar7 + 0x88);
        if (lVar7 + 0x90 != lVar2) {
          FUN_00c70dfc(plVar6,lVar7 + 0x90,lVar7 + 0x98,lVar7 + 0xb8);
          for (lVar7 = lVar7 + 0xc0; lVar7 != lVar2; lVar7 = lVar7 + 0x30) {
            FUN_00c70dfc(plVar6,lVar7,lVar7 + 8,lVar7 + 0x28);
          }
        }
      }
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar7 = *plVar1;
      iVar5 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00c70da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))(plVar6);
      return;
    }
    if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


