/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01619a4c; name: FUN_01619a4c
 */


void FUN_01619a4c(long param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  do {
    while( true ) {
      do {
        lVar5 = *(long *)(param_1 + 0x10);
        if (lVar5 == param_2) {
          return;
        }
        *(long *)(param_1 + 0x10) = lVar5 + -8;
        plVar6 = *(long **)(lVar5 + -8);
      } while (plVar6 == (long *)0x0);
      lVar5 = plVar6[6];
      psVar1 = (short *)(lVar5 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 != 1) break;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))(plVar6);
    }
  } while (sVar2 != 0);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


