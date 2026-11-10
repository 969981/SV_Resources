/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0277fa08; name: FUN_0277fa08
 */


void FUN_0277fa08(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *local_18;
  
  FUN_00c5ecb4(&local_18,*(undefined8 *)*param_1,param_2 + 0x50);
  if ((((int)((ulong)(local_18[0x27] - local_18[0x26]) >> 5) != 0) &&
      (FUN_01086da0(local_18,local_18[0x26],param_1[1]),
      (local_18[0x27] - local_18[0x26] & 0x1fffffffc0U) != 0)) &&
     (FUN_01086da0(local_18,local_18[0x26] + 0x20,param_1[1]),
     0x40 < (local_18[0x27] - local_18[0x26] & 0x1fffffffe0U))) {
    uVar5 = 2;
    lVar6 = 0x40;
    do {
      FUN_01086da0(local_18,local_18[0x26] + lVar6,param_1[1]);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while (uVar5 < ((ulong)(local_18[0x27] - local_18[0x26]) >> 5 & 0xffffffff));
  }
  FUN_010f7c04();
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 5;
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
      (**(code **)(*local_18 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


