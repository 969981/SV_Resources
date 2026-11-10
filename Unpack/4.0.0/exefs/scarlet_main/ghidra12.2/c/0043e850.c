/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043e850; name: FUN_0043e850
 */


undefined8 FUN_0043e850(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x10) + 0xb0),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return 0xfffffffe;
  }
                    /* WARNING: Could not recover jumptable at 0x0043e86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,3,0,param_2);
  return uVar1;
}


