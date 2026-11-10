/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c3870; name: FUN_006c3870
 */


undefined1  [16] FUN_006c3870(int *param_1)

{
  undefined4 local_8 [2];
  
  if (*param_1 != 0) {
    local_8[0] = 0x80541;
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)local_8,"");
  }
  return *(undefined1 (*) [16])(param_1 + 4);
}


