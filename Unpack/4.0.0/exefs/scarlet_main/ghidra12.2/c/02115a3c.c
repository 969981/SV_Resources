/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02115a3c; name: FUN_02115a3c
 */


bool FUN_02115a3c(long param_1,uint param_2)

{
  if ((param_2 & 0xff) < 5) {
    return *(char *)(param_1 + (ulong)(param_2 & 0xff) + 0x174) != '\0';
  }
  return false;
}


