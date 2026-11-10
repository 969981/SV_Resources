/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e02068; name: FUN_00e02068
 */


void FUN_00e02068(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  do {
    while( true ) {
      do {
        lVar5 = *(long *)(param_1 + 0x10);
        if (lVar5 == param_2) {
          return;
        }
        *(long *)(param_1 + 0x10) = lVar5 + -0x10;
        plVar6 = *(long **)(lVar5 + -8);
      } while (plVar6 == (long *)0x0);
      plVar1 = plVar6 + 5;
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
      if (iVar4 != 0) break;
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  } while ((int)lVar5 != 0);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
             ,0x58,"Reference counter underflows.");
}


