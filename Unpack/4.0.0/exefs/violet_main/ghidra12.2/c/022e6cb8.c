/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022e6cb8; name: FUN_022e6cb8
 */


void FUN_022e6cb8(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_8;
  
  FUN_022e6dc8(&local_8);
  FUN_022e6e84(param_1,&local_8);
  if (local_8 != (long *)0x0) {
    lVar5 = local_8[0x13];
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
    if (sVar2 == 1) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
      (**(code **)(*local_8 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *param_1 = &PTR_LAB_045b29f8;
  param_1[0x65] = 0;
  param_1[4] = &PTR_LAB_045b2b40;
  param_1[5] = &DAT_045b2c68;
  param_1[6] = &PTR_LAB_045b2cc0;
  param_1[7] = &PTR_LAB_045b2ce8;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x69] = &PTR_FUN_045b2970;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined4 *)((long)param_1 + 0x39c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x72,0,1);
  return;
}


