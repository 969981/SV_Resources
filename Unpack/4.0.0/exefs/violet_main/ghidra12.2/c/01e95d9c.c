/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e95d9c; name: FUN_01e95d9c
 */


void FUN_01e95d9c(undefined8 *param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x30;
  undefined1 auStack_a0 [128];
  
  lVar5 = FUN_016c7db0();
  if (lVar5 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (((*(long **)(lVar5 + 0x28) != (long *)0x0) &&
      (uVar6 = (**(code **)(**(long **)(lVar5 + 0x28) + 0x68))(), (uVar6 & 1) == 0)) ||
     (FUN_01e95eb8(auStack_a0 + 0x88,*(undefined8 *)(lVar5 + 8),param_2), unaff_x30 == (long *)0x0))
  {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_01c5dc58(lVar5 + 0x28,unaff_x30);
  FUN_01e9553c(param_1,*(undefined8 *)(lVar5 + 0x28));
  lVar5 = unaff_x30[6];
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
    (**(code **)(*unaff_x30 + 0x50))(unaff_x30);
    return;
  }
  if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


