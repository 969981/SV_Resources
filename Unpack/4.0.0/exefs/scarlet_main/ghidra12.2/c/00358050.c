/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00358050; name: FUN_00358050
 */


void FUN_00358050(long *param_1,undefined8 param_2)

{
  if ((int)param_1[1] == 2) {
    if (*param_1 != 0) {
      FUN_00358260(param_2,*param_1);
      return;
    }
  }
  else if ((int)param_1[1] == 1) {
    if (*param_1 == 0) {
      return;
    }
    FUN_00358220(param_2,*param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


