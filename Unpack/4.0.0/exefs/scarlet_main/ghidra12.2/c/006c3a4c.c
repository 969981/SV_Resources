/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c3a4c; name: FUN_006c3a4c
 */


char FUN_006c3a4c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 != '\x1c') {
    cVar1 = '\x10';
  }
  return cVar1;
}


