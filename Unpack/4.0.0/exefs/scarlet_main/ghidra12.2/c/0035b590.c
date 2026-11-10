/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035b590; name: FUN_0035b590
 */


void FUN_0035b590(int param_1,void *param_2,char *param_3,undefined8 param_4)

{
  if ((int)((ulong)param_4 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  inet_ntop(param_1,param_2,param_3,(socklen_t)param_4);
  return;
}


