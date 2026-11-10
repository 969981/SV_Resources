/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0190f9e0; name: FUN_0190f9e0
 */


void FUN_0190f9e0(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long local_28;
  
  cVar2 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar2 == '\x01') {
    if (*(long *)(param_1 + 8) != 0) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x0190fa04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    if (cVar2 == '\x03') {
      FUN_01d93d88(&local_28,param_1 + 8);
      if (local_28 != 0) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_28 + lVar1));
        }
        (*UNRECOVERED_JUMPTABLE)();
      }
      FUN_01847410(&local_28);
      return;
    }
    if (cVar2 == '\x02') {
      if ((*(long *)(param_1 + 8) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar3 != 0)) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar3 + lVar1 + -0x28));
        }
                    /* WARNING: Could not recover jumptable at 0x0190fa64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    else if ((cVar2 == '\0') && (*(long *)(param_1 + 8) != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x0190fa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}


