/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e53a0c; name: FUN_02e53a0c
 */


undefined8 FUN_02e53a0c(long *param_1)

{
  undefined8 uVar1;
  
  if (((*param_1 == 0) || (param_1[1] == 0)) || (*(short *)(param_1[1] + 0x1a) == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x02e53a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)*param_1 + 0x20))();
  return uVar1;
}


