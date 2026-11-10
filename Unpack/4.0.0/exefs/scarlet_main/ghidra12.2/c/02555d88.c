/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02555d88; name: FUN_02555d88
 */


undefined8
FUN_02555d88(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x02555dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(*param_4);
      return uVar1;
    }
    break;
  case 2:
    uVar1 = FUN_02561530(param_1 + 8);
    return uVar1;
  case 3:
    uVar1 = FUN_02561564(param_1 + 8);
    return uVar1;
  }
  return 0;
}


