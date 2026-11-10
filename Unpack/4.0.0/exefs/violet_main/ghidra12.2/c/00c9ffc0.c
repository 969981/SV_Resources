/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c9ffc0; name: FUN_00c9ffc0
 */


void FUN_00c9ffc0(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long *local_8;
  
  uVar5 = (**(code **)(*param_1 + 0x68))();
  if ((uVar5 & 1) == 0) {
    return;
  }
  FUN_00ca0234(param_1);
  FUN_00ca03fc(&local_8,param_1);
  if (local_8 != (long *)0x0) {
    if (*(char *)(local_8[0xb] + 0x33) == '\0') {
      *(undefined2 *)((long)param_1 + 0xfd) = 1;
    }
    lVar7 = local_8[6];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_8 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (*(char *)((long)param_1 + 0xfd) == '\0') {
    pcVar6 = *(code **)(*param_1 + 0x70);
  }
  else {
    pcVar6 = *(code **)(*param_1 + 0x60);
  }
  (*pcVar6)(param_1);
  FUN_00ca00ac(param_1);
  return;
}


