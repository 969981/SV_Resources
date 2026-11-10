/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a7470; name: FUN_024a7470
 */


void FUN_024a7470(undefined8 param_1,undefined4 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar5;
  
  switch(param_2) {
  case 0:
    param_4 = (long *)param_4[1];
    if (param_4 != (long *)0x0) {
      plVar1 = param_4 + 1;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        piVar5 = (int *)((long)param_4 + 0xc);
        (**(code **)(*param_4 + 0x10))(param_4);
        do {
          iVar4 = *piVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(*param_4 + 0x18);
          goto LAB_024a74f4;
        }
      }
    }
    break;
  case 1:
    param_4 = (long *)*param_4;
    if (param_4 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_4 + 8);
LAB_024a74f4:
                    /* WARNING: Could not recover jumptable at 0x024a74fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_4);
      return;
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_024a7530();
  }
  return;
}


