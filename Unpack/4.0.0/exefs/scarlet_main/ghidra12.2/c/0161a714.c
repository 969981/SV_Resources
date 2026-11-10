/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0161a714; name: FUN_0161a714
 */


void FUN_0161a714(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = param_1[0x93];
  *param_1 = &DAT_045ffe38;
  param_1[4] = &PTR_LAB_045ffe70;
  param_1[0x93] = 0;
  if (lVar6 != 0) {
    FUN_017b2850(param_1 + 0x94);
  }
  FUN_010af7b0(param_1 + 0x8d,0);
  lVar6 = param_1[0x89];
  param_1[0x89] = 0;
  if (lVar6 != 0) {
    FUN_010b03b0(param_1 + 0x8a);
  }
  FUN_0161a918(param_1 + 0x34);
  FUN_0161a850(param_1 + 0x26);
  FUN_0161a850(param_1 + 0x19);
  FUN_0161a850(param_1 + 0xc);
  plVar5 = (long *)param_1[0xb];
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_0161a828;
  }
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_0161a828:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_01958568(param_1 + 9);
  FUN_019584f0(param_1 + 8);
  return;
}


