/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003548f0; name: thunk_FUN_00354f70
 */


bool thunk_FUN_00354f70(void)

{
  if (DAT_047ef690 == 0) {
    return false;
  }
  return *(char *)(DAT_047ef690 + 9) != '\0';
}


