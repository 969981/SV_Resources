/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d42424; name: FUN_01d42424
 */


undefined8 FUN_01d42424(long *param_1,char *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = (code *)*param_1;
  uVar1 = param_1[1];
  if (*param_2 == '\x01') {
    if (*(long *)(param_2 + 8) != 0) {
      if ((uVar1 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 =
             *(code **)(UNRECOVERED_JUMPTABLE_00 +
                       *(long *)(*(long *)(param_2 + 8) + ((long)uVar1 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x01d4244c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE_00)();
      return uVar2;
    }
  }
  else if ((*param_2 == '\0') && (*(long *)(param_2 + 8) != 0)) {
    if ((uVar1 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 =
           *(code **)(UNRECOVERED_JUMPTABLE_00 +
                     *(long *)(*(long *)(param_2 + 8) + ((long)uVar1 >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x01d4246c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE_00)();
    return uVar2;
  }
  return 0;
}


