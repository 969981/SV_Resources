/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a48610; name: FUN_01a48610
 */


void FUN_01a48610(ulong param_1)

{
  if (param_1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02901520();
  }
  operator_new(param_1 << 2);
  return;
}


