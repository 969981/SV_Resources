/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014aeb20; name: FUN_014aeb20
 */


bool FUN_014aeb20(long param_1,byte param_2)

{
  if (param_2 < 5) {
    return *(char *)(param_1 + (ulong)param_2 + 0x174) != '\0';
  }
  return false;
}


