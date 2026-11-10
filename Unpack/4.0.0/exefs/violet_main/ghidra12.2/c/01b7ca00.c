/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b7ca00; name: FUN_01b7ca00
 */


undefined4 FUN_01b7ca00(code *param_1,undefined8 *param_2,undefined2 *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  long *local_8;
  
  local_8 = (long *)*param_2;
  *param_2 = 0;
  uVar5 = (*param_1)(&local_8,*param_3);
  if (local_8 != (long *)0x0) {
    lVar6 = local_8[6];
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
  return uVar5;
}


