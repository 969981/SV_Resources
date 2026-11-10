/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b68fec; name: FUN_01b68fec
 */


undefined8
FUN_01b68fec(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined2 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x01b69030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(plVar1,*param_4);
      return uVar2;
    }
    break;
  case 2:
    uVar2 = FUN_01b6a068(param_1 + 8,UNRECOVERED_JUMPTABLE);
    return uVar2;
  case 3:
    uVar2 = FUN_01b6a0a0(param_1 + 8,UNRECOVERED_JUMPTABLE);
    return uVar2;
  }
  return 0;
}


