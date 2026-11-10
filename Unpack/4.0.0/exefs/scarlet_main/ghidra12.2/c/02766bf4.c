/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02766bf4; name: FUN_02766bf4
 */


undefined8 * FUN_02766bf4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  puVar6 = (undefined8 *)FUN_00cb7028(param_1,param_3);
  plVar10 = (long *)*puVar6;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar7 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar7 = *(long *)plVar10[0x1a];
    if (param_2 < *(undefined8 **)(lVar7 + 0x78)) {
      lVar8 = *(long *)(lVar7 + 0x70);
      if (lVar8 != lVar7 + 0x68) {
        lVar9 = (long)param_2 + 1;
        do {
          lVar9 = lVar9 + -1;
          if (lVar9 == 0) {
            param_2 = (undefined8 *)FUN_02766d64(*(undefined8 *)(lVar8 + 0x10));
            bVar3 = false;
            goto LAB_02766c74;
          }
          lVar8 = *(long *)(lVar8 + 8);
        } while (lVar8 != lVar7 + 0x68);
      }
    }
    bVar3 = true;
LAB_02766c74:
    do {
      lVar7 = *plVar1;
      iVar5 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
    if (!bVar3) {
      return param_2;
    }
  }
  if (((DAT_0485db70 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0485db70), iVar5 != 0)) {
    DAT_0485db60 = 0;
    DAT_0485db68 = 0;
    __cxa_guard_release(&DAT_0485db70);
  }
  return &DAT_0485db60;
}


