/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016bdfdc; name: FUN_016bdfdc
 */


void FUN_016bdfdc(long param_1,undefined1 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  puVar6 = *(undefined1 **)(param_1 + 0x10);
  do {
    do {
      puVar5 = puVar6;
      if (puVar5 == param_2) {
        return;
      }
      puVar6 = puVar5 + -0x20;
      *(undefined1 **)(param_1 + 0x10) = puVar6;
    } while (puVar5[-0x20] == '\0');
    if (*(long *)(puVar5 + -0x18) != 0) {
      psVar1 = (short *)(*(long *)(puVar5 + -0x18) + 0x18);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        FUN_0116e168();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    *puVar6 = 0;
    puVar6 = *(undefined1 **)(param_1 + 0x10);
  } while( true );
}


