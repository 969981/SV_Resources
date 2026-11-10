/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015b82c0; name: FUN_015b82c0
 */


void FUN_015b82c0(char *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined1 *param_4)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long local_38;
  long local_18;
  
  cVar2 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar4 == 0)) {
      return;
    }
    plVar3 = (long *)(lVar4 + lVar1 + -0x28);
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x015b834c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar3,*param_4);
    return;
  }
  if (cVar2 == '\x03') {
    if (*(long *)(param_1 + 8) == 0) {
      local_38 = 0;
    }
    else {
      FUN_0196c128(&local_18);
      local_38 = local_18;
      if (local_18 != 0) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 =
               *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(local_18 + lVar1));
        }
        (*UNRECOVERED_JUMPTABLE_00)((long *)(local_18 + lVar1),*param_4);
      }
    }
    FUN_0196c0b0(&local_38);
    return;
  }
  if (((cVar2 != '\x01') && (cVar2 != '\0')) || (*(long *)(param_1 + 8) == 0)) {
    return;
  }
  plVar3 = (long *)(*(long *)(param_1 + 8) + lVar1);
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x015b830c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar3,*param_4);
  return;
}


