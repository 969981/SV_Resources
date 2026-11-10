/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0232a6f0; name: FUN_0232a6f0
 */


undefined8
FUN_0232a6f0(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0232a734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(plVar1,*param_4);
      return uVar2;
    }
    break;
  case 2:
    uVar2 = FUN_0232ce80(param_1 + 8,UNRECOVERED_JUMPTABLE);
    return uVar2;
  case 3:
    uVar2 = FUN_0232ceb8(param_1 + 8,UNRECOVERED_JUMPTABLE);
    return uVar2;
  }
  return 0;
}


