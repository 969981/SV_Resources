/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0181c79c; name: FUN_0181c79c
 */


void FUN_0181c79c(undefined8 *param_1,char *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  cVar2 = *param_2;
  lVar1 = (long)param_4 >> 1;
  if (cVar2 != '\x02') {
    if (cVar2 == '\x03') {
      FUN_0181c97c(param_2 + 8);
      return;
    }
    if (cVar2 == '\x01') {
      if (*(long *)(param_2 + 8) != 0) {
        if ((param_4 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar1));
        }
                    /* WARNING: Could not recover jumptable at 0x0181c800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    else if ((cVar2 == '\0') && (*(long *)(param_2 + 8) != 0)) {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x0181c7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if ((*(long *)(param_2 + 8) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar3 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar3 + lVar1 + -0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x0181c830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


