/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02781480; name: FUN_02781480
 */


void FUN_02781480(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *local_18;
  
  if (*(long *)(param_2 + 8) == *(long *)*param_1) {
    FUN_00c5ecb4(&local_18,*(undefined8 *)param_1[1],param_2 + 0x50);
    if ((int)((ulong)(local_18[0x27] - local_18[0x26]) >> 5) != 0) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        FUN_01086da0(local_18,local_18[0x26] + lVar5,param_1[2]);
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar6 < ((ulong)(local_18[0x27] - local_18[0x26]) >> 5 & 0xffffffff));
    }
    FUN_010f7c04();
    if (local_18 != (long *)0x0) {
      plVar1 = local_18 + 5;
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
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
      else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


