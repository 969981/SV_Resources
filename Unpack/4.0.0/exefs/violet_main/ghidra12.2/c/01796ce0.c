/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01796ce0; name: FUN_01796ce0
 */


void FUN_01796ce0(undefined8 *param_1,char *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  cVar2 = *param_2;
  lVar1 = (long)param_4 >> 1;
  if (cVar2 != '\x02') {
    if (cVar2 == '\x03') {
      FUN_01797608(param_2 + 8);
      return;
    }
    if (cVar2 == '\x01') {
      if (*(long *)(param_2 + 8) != 0) {
        if ((param_4 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar1));
        }
                    /* WARNING: Could not recover jumptable at 0x01796d44. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x01796d20. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x01796d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


