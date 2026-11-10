/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02053708; name: FUN_02053708
 */


void FUN_02053708(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  short *psVar1;
  float *pfVar2;
  float *pfVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  float local_44;
  float fStack_40;
  float local_3c;
  long *local_38;
  
  lVar7 = FUN_02053858(param_2,*param_4);
  if ((((*(long *)(lVar7 + 0xd8) == 0) || (*(short *)(*(long *)(lVar7 + 0xd8) + 0x1a) == 0)) &&
      (uVar9 = FUN_01473a8c(lVar7 + 0xc0), (uVar9 & 1) == 0)) ||
     (lVar7 = *(long *)(lVar7 + 0xd0), lVar7 == 0)) {
    puVar8 = (undefined1 *)FUN_00f6866c();
    *param_1 = *puVar8;
  }
  else {
    FUN_014410c0(&local_38,*(undefined8 *)(*param_4 + (ulong)*(uint *)(param_2 + 8)));
    local_3c = (float)FUN_00fe4dd4(local_38,*param_4 + (ulong)*(uint *)(param_2 + 0xe8));
    local_44 = 100.0;
    fStack_40 = 0.0;
    pfVar2 = &local_44;
    if (local_3c <= 100.0) {
      pfVar2 = &local_3c;
    }
    pfVar3 = &fStack_40;
    if (0.0 <= local_3c) {
      pfVar3 = pfVar2;
    }
    FUN_02053934(*pfVar3,lVar7);
    puVar8 = (undefined1 *)FUN_015c0588();
    *param_1 = *puVar8;
    if (local_38 != (long *)0x0) {
      lVar7 = local_38[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_38 + 0x50))();
      }
      else if (sVar4 == 0) {
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


