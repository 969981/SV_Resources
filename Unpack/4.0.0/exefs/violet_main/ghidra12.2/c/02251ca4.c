/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02251ca4; name: FUN_02251ca4
 */


void FUN_02251ca4(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_28;
  undefined4 local_24;
  
  plVar5 = *(long **)(param_1 + 0x70);
  if (plVar5 != (long *)0x0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    lVar6 = plVar5[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_02251d9c(param_1 + 0x88);
  FUN_02251e4c(param_1 + 0xf0);
  FUN_02251efc(param_1 + 0x158);
  FUN_02251fac(param_1 + 0x1c0);
  FUN_0225205c(param_1 + 0x228);
  if (*(long *)(param_1 + 0x78) != 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    local_24 = 0;
    FUN_0225210c(DAT_04842700,&local_24);
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    local_28 = 1;
    FUN_0225210c(DAT_04842700,&local_28);
  }
  return;
}


