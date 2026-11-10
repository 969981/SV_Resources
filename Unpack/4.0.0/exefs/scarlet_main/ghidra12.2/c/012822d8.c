/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012822d8; name: FUN_012822d8
 */


undefined8 FUN_012822d8(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x250) == '\0') {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x012822ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x88))();
  return uVar1;
}


