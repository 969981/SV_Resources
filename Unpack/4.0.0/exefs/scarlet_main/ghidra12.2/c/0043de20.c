/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043de20; name: FUN_0043de20
 */


undefined8 FUN_0043de20(int *param_1,int *param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*param_1 != *param_2) {
    return 0xffffffff;
  }
  if ((*(long *)(param_1 + 4) == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 4) + 0x90),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return 0xfffffffe;
  }
                    /* WARNING: Could not recover jumptable at 0x0043de40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}


