/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e7a04c; name: FUN_00e7a04c
 */


void FUN_00e7a04c(long param_1,undefined8 *param_2)

{
  if (3 < *(ulong *)(param_1 + 0x70)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 **)(param_1 + *(ulong *)(param_1 + 0x70) * 8 + 0x50) = param_2;
  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
                    /* WARNING: Could not recover jumptable at 0x00e7a08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_2)(param_2,param_1);
  return;
}


