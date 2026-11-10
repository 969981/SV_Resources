/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0168dbf8; name: FUN_0168dbf8
 */


bool FUN_0168dbf8(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *local_38;
  
  lVar8 = FUN_0168dd70(param_1,*param_2);
  if ((((*(long *)(lVar8 + 0xd8) == 0) || (*(short *)(*(long *)(lVar8 + 0xd8) + 0x1a) == 0)) &&
      (uVar10 = FUN_01473a8c(lVar8 + 0xc0), (uVar10 & 1) == 0)) ||
     ((lVar8 = *(long *)(lVar8 + 0xd0), lVar8 == 0 ||
      (FUN_014410c0(&local_38,*(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x4c))),
      local_38 == (long *)0x0)))) {
    bVar5 = false;
  }
  else {
    iVar6 = FUN_00e03574(local_38,*param_2 + (ulong)*(uint *)(param_1 + 100));
    lVar9 = FUN_01073a44(local_38,*param_2 + (ulong)*(uint *)(param_1 + 0x60));
    iVar7 = FUN_0168dd68(lVar8);
    if (lVar9 == 0x137e8707be8470ef) {
      bVar5 = iVar6 == iVar7;
    }
    else {
      bVar5 = lVar9 == 0x133a8707be4aa423 && iVar6 != iVar7;
    }
    if (local_38 != (long *)0x0) {
      lVar8 = local_38[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_38 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return bVar5;
}


