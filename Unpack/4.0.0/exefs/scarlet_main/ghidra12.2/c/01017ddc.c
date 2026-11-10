/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01017ddc; name: FUN_01017ddc
 */


long * FUN_01017ddc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_28;
  
  plVar5 = (long *)FUN_010183a4(param_2,param_3,param_4);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x58))(plVar5);
  }
  FUN_01017edc(param_1);
  local_28 = plVar5;
  FUN_00df8c30(*(undefined8 *)(param_1 + 200),&local_28);
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[0x13];
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
  if (*(long *)(param_1 + 0xe8) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x48);
  }
  FUN_01018028(plVar5,uVar6);
  (**(code **)(plVar5[4] + 0x68))();
  return plVar5;
}


