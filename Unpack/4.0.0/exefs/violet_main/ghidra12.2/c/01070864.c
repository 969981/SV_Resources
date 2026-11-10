/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01070864; name: FUN_01070864
 */


void FUN_01070864(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *local_28;
  undefined8 local_8;
  
  local_8 = 0;
  if (*(short *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x8a) != 0) {
    FUN_01070a58(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38));
    local_8 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38);
  }
  uVar5 = FUN_015799ec(param_1);
  FUN_0107093c(&local_28,uVar5,&local_8);
  FUN_01579b10(param_1,&local_28);
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[6];
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
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


