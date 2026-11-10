/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01914498; name: FUN_01914498
 */


void FUN_01914498(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *local_40;
  undefined4 local_34;
  long *local_18;
  
  lVar5 = FUN_019145f0(param_1,*param_2);
  if ((((*(long *)(lVar5 + 0xd8) != 0) && (*(short *)(*(long *)(lVar5 + 0xd8) + 0x1a) != 0)) ||
      (uVar6 = FUN_01473a8c(lVar5 + 0xc0), (uVar6 & 1) != 0)) &&
     ((*(long *)(lVar5 + 0xd0) != 0 && (FUN_01587f78(&local_18), local_18 != (long *)0x0)))) {
    local_34 = FUN_019146c8();
    FUN_014410c0(&local_40,*(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x4c)));
    FUN_00d96aec(local_40,*param_2 + (ulong)*(uint *)(param_1 + 0x60),&local_34);
    if (local_40 != (long *)0x0) {
      lVar5 = local_40[6];
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
        (**(code **)(*local_40 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_019145c8;
    }
    if (local_18 != (long *)0x0) {
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
        (**(code **)(*local_18 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_019145c8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


