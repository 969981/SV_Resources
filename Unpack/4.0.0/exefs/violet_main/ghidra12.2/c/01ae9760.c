/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ae9760; name: FUN_01ae9760
 */


uint FUN_01ae9760(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  short *psVar1;
  undefined8 uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  long lVar8;
  undefined4 local_3c;
  long *local_38;
  
  uVar6 = DAT_04802158;
  uVar2 = 0x950;
  if (DAT_04802150 == '\0') {
    uVar2 = 0;
  }
  FUN_01ae74fc(&local_38,param_2);
  local_3c = param_3;
  uVar7 = FUN_01aee650(param_1,uVar2,uVar6,&local_38,&local_3c);
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[6];
    psVar1 = (short *)(lVar8 + 0x1a);
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
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return uVar7 & 1;
}


