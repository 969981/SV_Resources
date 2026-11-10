/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003580b0; name: FUN_003580b0
 */


void FUN_003580b0(long *param_1,undefined8 param_2)

{
  if ((int)param_1[1] == 2) {
    if (*param_1 != 0) {
      FUN_00358280(param_2);
      return;
    }
  }
  else if (((int)param_1[1] == 1) && (*param_1 != 0)) {
    FUN_00358240(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


