/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eaad24; name: FUN_00eaad24
 */


void FUN_00eaad24(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *local_18;
  
  if (*(char *)(param_1 + 0x1a1) != '\0') {
    if (*(long *)(param_1 + 0x98) != 0) {
      plVar1 = (long *)(param_1 + 0x40);
      FUN_00f6036c(plVar1,*(undefined8 *)(param_1 + 0x70));
      lVar6 = *(long *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x70) = 0;
      if ((((lVar6 != 0) && (*(undefined8 *)*plVar1 = 0, lVar6 != 1)) &&
          (*(undefined8 *)(*plVar1 + 8) = 0, lVar6 != 2)) &&
         (*(undefined8 *)(*plVar1 + 0x10) = 0, lVar6 != 3)) {
        lVar7 = 3;
        do {
          *(undefined8 *)(*plVar1 + lVar7 * 8) = 0;
          lVar7 = lVar7 + 1;
        } while (lVar6 != lVar7);
      }
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    lVar7 = *(long *)(param_1 + 0xb8);
    for (lVar6 = *(long *)(param_1 + 0xb0); lVar6 != lVar7; lVar6 = lVar6 + 0x28) {
      FUN_00fff1a4(&local_18,*(undefined8 *)(param_1 + 0x30),lVar6);
      FUN_00eb03b0(param_1,&local_18);
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
    FUN_00eb03b0(param_1,param_1 + 0xa8);
    *(undefined1 *)(param_1 + 0x1a1) = 0;
  }
  return;
}


