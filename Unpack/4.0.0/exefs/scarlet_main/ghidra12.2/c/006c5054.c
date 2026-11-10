/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c5054; name: FUN_006c5054
 */


void FUN_006c5054(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cfa88 + 0x10);
  if ((long *)param_1[2] != param_1 + 1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


