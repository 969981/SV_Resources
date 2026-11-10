/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01018d88; name: FUN_01018d88
 */


long * FUN_01018d88(long param_1,undefined8 param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_30;
  long *local_28;
  
  uVar6 = FUN_01019ac8(param_2,param_3);
  FUN_01018efc(&local_28,uVar6);
  plVar5 = local_28;
  FUN_01017edc(param_1);
  local_30 = local_28;
  local_28 = (long *)0x0;
  FUN_00df8c30(*(undefined8 *)(param_1 + 200),&local_30);
  if (local_30 != (long *)0x0) {
    lVar7 = local_30[0x13];
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
      (**(code **)(*local_30 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (*(long *)(param_1 + 0xe8) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x48);
  }
  FUN_01018028(plVar5,uVar6);
  (**(code **)(plVar5[4] + 0x68))();
  FUN_01018e84(&local_28);
  return plVar5;
}


