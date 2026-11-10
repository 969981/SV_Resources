/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec7600; name: FUN_01ec7600
 */


void FUN_01ec7600(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  *param_1 = &DAT_04555058;
  param_1[4] = &PTR_LAB_045550a8;
  param_1[5] = &PTR_LAB_045550c8;
  pcVar9 = (code *)param_1[0x31];
  param_1[6] = &PTR_LAB_045550e0;
  param_1[7] = &PTR_LAB_045550f8;
  if (pcVar9 != (code *)0x0) {
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    (*pcVar9)(param_1 + 0x34);
  }
  pcVar9 = (code *)param_1[0x21];
  if (pcVar9 != (code *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    (*pcVar9)(param_1 + 0x24);
  }
  pcVar9 = (code *)param_1[0x11];
  if (pcVar9 != (code *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    (*pcVar9)(param_1 + 0x14);
  }
  plVar6 = (long *)param_1[0xf];
  if (plVar6 != (long *)0x0) {
    lVar10 = plVar6[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  lVar10 = param_1[8];
  if (lVar10 == 0) {
    return;
  }
  lVar3 = param_1[10];
  plVar6 = (long *)param_1[0xb];
  param_1[9] = lVar10;
  uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_00c4e600();
    if (0 < *(int *)(lVar8 + 0x12c8)) {
      FUN_00c48fe8(plVar6,lVar10,lVar3 - lVar10,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01ec7758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar10,lVar3 - lVar10,0x10);
  return;
}


