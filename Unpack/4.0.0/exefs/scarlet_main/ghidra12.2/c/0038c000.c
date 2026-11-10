/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038c000; name: FUN_0038c000
 */


undefined8 FUN_0038c000(long *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    return 2;
  }
  if (*(char *)((long)param_1 + 9) != '\0') {
    return 5;
  }
  if (*(char *)((long)param_1 + 10) != '\0') {
    return 0xe;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x30);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return 6;
  }
                    /* WARNING: Could not recover jumptable at 0x0038c03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}


