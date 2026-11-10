/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fd207c; name: FUN_01fd207c
 */


bool FUN_01fd207c(long param_1)

{
  long lVar1;
  
  if ((((*(char *)(param_1 + 0x40) == '\0') ||
       (lVar1 = *(long *)(param_1 + 0x78), *(char *)(lVar1 + 0x14f) != '\0')) ||
      (*(char *)(lVar1 + 0x14a) != '\0')) || (*(char *)(lVar1 + 0x149) == '\0')) {
    return false;
  }
  return *(char *)(lVar1 + 0x148) == '\0';
}


