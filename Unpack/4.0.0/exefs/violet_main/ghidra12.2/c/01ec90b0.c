/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec90b0; name: FUN_01ec90b0
 */


void FUN_01ec90b0(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  
  *param_1 = &DAT_04555168;
  param_1[4] = &PTR_LAB_045551b0;
  param_1[5] = &PTR_LAB_045551d0;
  param_1[6] = &PTR_LAB_045551e8;
  plVar5 = (long *)param_1[0x43];
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
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (*(char *)((long)param_1 + 0x20a) != '\0') {
    *(undefined1 *)((long)param_1 + 0x20a) = 0;
  }
  if (*(char *)((long)param_1 + 0x204) != '\0') {
    *(undefined1 *)((long)param_1 + 0x204) = 0;
  }
  if (*(char *)((long)param_1 + 0x1fe) != '\0') {
    *(undefined1 *)((long)param_1 + 0x1fe) = 0;
  }
  if (*(char *)(param_1 + 0x3f) != '\0') {
    *(undefined1 *)(param_1 + 0x3f) = 0;
  }
  FUN_01ec91dc(param_1 + 0x38);
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x29];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x2c);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x19];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x1c);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[9];
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
                    /* WARNING: Could not recover jumptable at 0x01ec9178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 0xc);
  return;
}


