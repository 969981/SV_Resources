/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010ef684; name: FUN_010ef684
 */


long FUN_010ef684(long param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  FUN_00db2500();
  FUN_01060890(param_1 + 8,param_2 + 8);
  plVar5 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[6];
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
      (**(code **)(*plVar5 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  FUN_00ecc978(param_1 + 0x20,param_2 + 0x20);
  FUN_00eccc4c(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}


