/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018a11c0; name: FUN_018a11c0
 */


void FUN_018a11c0(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  cVar1 = *param_1;
  if (cVar1 == '\x02') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar3 == 0)) {
      return;
    }
    plVar2 = (long *)(lVar3 + ((long)param_3 >> 1) + -0x28);
  }
  else {
    if (cVar1 == '\x03') {
      FUN_018a17e8(param_1 + 8,UNRECOVERED_JUMPTABLE);
      return;
    }
    if ((cVar1 != '\x01') && (cVar1 != '\0')) {
      return;
    }
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    plVar2 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x018a11f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,param_4);
  return;
}


