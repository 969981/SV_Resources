/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002228d4; name: FUN_002228d4
 */


void FUN_002228d4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cbe78 + 0x10);
  if ((char)param_1[1] == '\0') {
    return;
  }
  if (*(long **)PTR_DAT_047cbe70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Could not recover jumptable at 0x0022290c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)PTR_DAT_047cbe70 + 0x18))();
  return;
}


