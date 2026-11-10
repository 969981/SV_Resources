/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6f5d0; name: FUN_00c6f5d0
 */


/* WARNING: Removing unreachable block (ram,0x00c6f6bc) */
/* WARNING: Removing unreachable block (ram,0x00c6f6c0) */
/* WARNING: Removing unreachable block (ram,0x00c6f6c8) */
/* WARNING: Removing unreachable block (ram,0x00c6f6d0) */
/* WARNING: Removing unreachable block (ram,0x00c6f710) */
/* WARNING: Removing unreachable block (ram,0x00c6f6d4) */

int FUN_00c6f5d0(long param_1,undefined8 *param_2,undefined4 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long local_50 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long *local_28;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0xb0) + 0x90);
    lVar6 = *(long *)(lVar7 + 0x2a0);
    lVar7 = *(long *)(lVar7 + 0x2a8);
    if ((lVar6 != lVar7) || (*param_4 != 0)) {
      if (-1 < *(int *)(param_1 + 0xb8)) {
        return *(int *)(param_1 + 0xb8);
      }
      local_50[0] = 0;
      if (lVar6 != lVar7) {
        local_50[0] = lVar6;
      }
      local_28 = (long *)0x0;
      uStack_38 = param_2[1];
      local_40 = *param_2;
      param_4 = (long *)*param_4;
      local_30 = param_3;
      if (param_4 != (long *)0x0) {
        plVar1 = param_4 + 5;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      local_28 = param_4;
      iVar5 = (**(code **)(param_1 + 0x30))(param_1 + 0x50,local_50);
      if (local_28 == (long *)0x0) {
        return iVar5;
      }
      plVar1 = local_28 + 5;
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
        (**(code **)(*local_28 + 0x10))();
        return iVar5;
      }
      if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
      return iVar5;
    }
  }
  return 0;
}


