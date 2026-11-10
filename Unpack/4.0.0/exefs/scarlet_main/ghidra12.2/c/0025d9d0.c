/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025d9d0; name: FUN_0025d9d0
 */


bool FUN_0025d9d0(int param_1)

{
  long lVar1;
  
                    /* try { // try from 0025d9d8 to 0025d9db has its CatchHandler @ 0025d9f0 */
  lVar1 = FUN_0038f340();
  return *(int *)(lVar1 + 8) == param_1;
}


