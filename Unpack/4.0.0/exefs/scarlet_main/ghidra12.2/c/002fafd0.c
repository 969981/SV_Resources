/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002fafd0; name: FUN_002fafd0
 */


bool FUN_002fafd0(long param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_0038db40(param_1 + 0x68);
  cVar1 = *(char *)(param_1 + 0x90);
                    /* try { // try from 002faff0 to 002faff7 has its CatchHandler @ 002fb010 */
  FUN_0038db60(param_1 + 0x68);
  return cVar1 != '\0';
}


