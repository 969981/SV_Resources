/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010e7f18; name: FUN_010e7f18
 */


void FUN_010e7f18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *local_38;
  
  lVar5 = *(long *)(param_1 + 0x70);
  if ((int)((ulong)(*(long *)(param_1 + 0x78) - lVar5) >> 3) * -0x33333333 != 0) {
    uVar6 = 0;
    do {
      FUN_00c5ecb4(&local_38,*(undefined8 *)(param_1 + 0x30),lVar5 + uVar6 * 0x28);
      if (local_38 != (long *)0x0) {
        FUN_010e88e0(local_38,param_2,param_3,param_4);
        if (local_38 != (long *)0x0) {
          plVar1 = local_38 + 5;
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
            (**(code **)(*local_38 + 0x10))();
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
      lVar5 = *(long *)(param_1 + 0x70);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)((int)((ulong)(*(long *)(param_1 + 0x78) - lVar5) >> 3) * -0x33333333));
  }
  return;
}


