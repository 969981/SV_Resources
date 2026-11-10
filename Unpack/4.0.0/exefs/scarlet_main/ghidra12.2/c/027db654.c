/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027db654; name: FUN_027db654
 */


void FUN_027db654(long *param_1)

{
  if (*param_1 == 0) {
    return;
  }
  FUN_027de478();
                    /* WARNING: Could not recover jumptable at 0x027db690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],*param_1,param_1[2] - *param_1,8);
  return;
}


