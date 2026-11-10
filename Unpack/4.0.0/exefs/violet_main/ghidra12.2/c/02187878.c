/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02187878; name: FUN_02187878
 */


void FUN_02187878(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *local_18;
  
  lVar8 = *(long *)(param_1 + 0x108);
  if (lVar8 != 0) {
    lVar2 = *(long *)(lVar8 + 0x78);
    for (lVar7 = *(long *)(lVar8 + 0x70); lVar7 != lVar2; lVar7 = lVar7 + 0x28) {
      FUN_00c5ecb4(&local_18,*(undefined8 *)(lVar8 + 0x30),lVar7);
      FUN_00eaabc4(local_18);
      if (local_18 != (long *)0x0) {
        plVar1 = local_18 + 5;
        do {
          lVar6 = *plVar1;
          iVar5 = (int)lVar6 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
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
    }
  }
  return;
}


