/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b7c3bc; name: FUN_01b7c3bc
 */


long FUN_01b7c3bc(undefined8 param_1,undefined2 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  short sVar6;
  long lVar7;
  undefined2 local_2c [2];
  long *local_28;
  
  uVar5 = DAT_0480a460;
  FUN_00e43628(&local_28);
  local_2c[0] = param_2;
  sVar6 = FUN_01b7ca00(uVar5,&local_28,local_2c);
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[6];
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
  return (long)sVar6;
}


