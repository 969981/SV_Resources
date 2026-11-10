/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00badab8; name: FUN_00badab8
 */


void FUN_00badab8(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  (*(code *)param_1[1])(param_1[3]);
  if ((param_1 == (long *)0x0) || ((char)lVar1 == '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00badaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}


