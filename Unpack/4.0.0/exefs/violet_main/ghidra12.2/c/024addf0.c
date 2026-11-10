/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024addf0; name: FUN_024addf0
 */


void FUN_024addf0(undefined8 param_1,undefined4 param_2,undefined8 param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  switch(param_2) {
  case 0:
    plVar5 = (long *)param_4[1];
    if (plVar5 == (long *)0x0) {
      return;
    }
    piVar1 = (int *)((long)plVar5 + 0xc);
    do {
      iVar4 = *piVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 1:
    plVar5 = (long *)param_4[1];
    if (plVar5 == (long *)0x0) {
      return;
    }
    piVar1 = (int *)((long)plVar5 + 0xc);
    do {
      iVar4 = *piVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 2:
    if ((long *)*param_4 == (long *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)*param_4 + 8);
    goto LAB_024ade64;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_024a7530();
  }
  if (iVar4 != 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x18);
LAB_024ade64:
                    /* WARNING: Could not recover jumptable at 0x024ade68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


