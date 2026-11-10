/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fed67c; name: FUN_01fed67c
 */


void FUN_01fed67c(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  
  lVar7 = *(long *)(param_1 + 0x150);
  if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) {
LAB_01fed698:
    uVar6 = (uint)*(byte *)(param_1 + 0x128);
LAB_01fed69c:
    FUN_010e29c8(param_1,uVar6);
    *(undefined1 *)(param_1 + 0x1a0) = 1;
    return;
  }
  psVar1 = (short *)(lVar7 + 0x1a);
  sVar8 = *(short *)(lVar7 + 0x1a);
LAB_01fed6cc:
  sVar2 = *psVar1;
  if (sVar2 == sVar8) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_01fed6f0;
    bVar4 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01fed6f0:
    bVar4 = false;
  }
  if (!bVar4) goto code_r0x01fed6f8;
  lVar7 = *(long *)(lVar7 + 0x10);
  if (lVar7 != 0) {
    plVar9 = (long *)(lVar7 + -0x28);
    uVar5 = FUN_01fed794(plVar9);
    lVar7 = *(long *)(lVar7 + 0x70);
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar8 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar8 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))(plVar9);
    }
    else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01fed7a4(param_1);
      goto LAB_01fed69c;
    }
  }
  goto LAB_01fed698;
code_r0x01fed6f8:
  sVar8 = sVar2;
  if (sVar2 == 0) goto LAB_01fed698;
  goto LAB_01fed6cc;
}


