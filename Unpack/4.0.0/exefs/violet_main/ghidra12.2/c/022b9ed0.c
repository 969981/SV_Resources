/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022b9ed0; name: FUN_022b9ed0
 */


void FUN_022b9ed0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  short *psVar1;
  undefined8 uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined4 local_24;
  long *local_8;
  
  uVar2 = 0xa0;
  if (DAT_04846330 == '\0') {
    uVar2 = 0;
  }
  local_24 = param_3;
  FUN_022bb8d0(&local_8,param_2,uVar2,DAT_04846338,&local_24);
  FUN_022bb940(param_1,&local_8);
  if (local_8 != (long *)0x0) {
    lVar6 = local_8[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_8 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


