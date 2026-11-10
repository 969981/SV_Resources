/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e74c3c; name: FUN_00e74c3c
 */


bool FUN_00e74c3c(long param_1)

{
  if (*(char *)(param_1 + 0x440) == '\x02') {
    return *(short *)(param_1 + 0x420) == 0;
  }
  return false;
}


