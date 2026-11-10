/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01587e8c; name: FUN_01587e8c
 */


void FUN_01587e8c(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *local_18;
  
  lVar5 = FUN_01588038(param_1,*param_2);
  if ((((*(long *)(lVar5 + 0xd8) != 0) && (*(short *)(*(long *)(lVar5 + 0xd8) + 0x1a) != 0)) ||
      (uVar6 = FUN_01473a8c(lVar5 + 0xc0), (uVar6 & 1) != 0)) &&
     ((*(long *)(lVar5 + 0xd0) != 0 && (FUN_01587f78(&local_18), local_18 != (long *)0x0)))) {
    lVar5 = local_18[6];
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
      (**(code **)(*local_18 + 0x50))(local_18);
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    FUN_01588114(local_18,*(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)));
  }
  return;
}


