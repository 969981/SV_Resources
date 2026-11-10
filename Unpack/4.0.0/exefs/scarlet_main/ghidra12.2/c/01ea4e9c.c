/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea4e9c; name: FUN_01ea4e9c
 */


void FUN_01ea4e9c(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  
  *param_1 = &DAT_04553cc0;
  param_1[6] = &PTR_LAB_04553d48;
  pcVar6 = (code *)param_1[0x84b];
  param_1[4] = &PTR_LAB_04553d08;
  param_1[5] = &PTR_LAB_04553d28;
  if (pcVar6 != (code *)0x0) {
    param_1[0x84d] = 0;
    param_1[0x84c] = 0;
    param_1[0x84b] = 0;
    param_1[0x84a] = 0;
    (*pcVar6)(param_1 + 0x84e);
  }
  pcVar6 = (code *)param_1[0x83b];
  if (pcVar6 != (code *)0x0) {
    param_1[0x83d] = 0;
    param_1[0x83c] = 0;
    param_1[0x83b] = 0;
    param_1[0x83a] = 0;
    (*pcVar6)(param_1 + 0x83e);
  }
  pcVar6 = (code *)param_1[0x829];
  if (pcVar6 != (code *)0x0) {
    param_1[0x82b] = 0;
    param_1[0x82a] = 0;
    param_1[0x829] = 0;
    param_1[0x828] = 0;
    (*pcVar6)(param_1 + 0x82c);
  }
  FUN_01ea5028(param_1 + 0x820);
  FUN_01ea50c8(param_1 + 0x819);
  FUN_01ea51c8(param_1 + 0x812);
  FUN_01ea5270(param_1 + 0x80b);
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[6];
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
      (**(code **)(*plVar5 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_01ea4fb4;
  }
  plVar5 = (long *)param_1[9];
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[6];
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
                    /* WARNING: Could not recover jumptable at 0x01ea5024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x50))();
      return;
    }
    if (sVar2 == 0) {
LAB_01ea4fb4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


