/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007bf9f0; name: FUN_007bf9f0
 */


void FUN_007bf9f0(undefined8 param_1,long *param_2)

{
  if ((param_2 == (long *)0x0) &&
     (param_2 = (long *)FUN_007c4038(*(undefined8 *)PTR_DAT_047d0fc0), param_2 == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007bfa2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_2,param_1,4);
  return;
}


