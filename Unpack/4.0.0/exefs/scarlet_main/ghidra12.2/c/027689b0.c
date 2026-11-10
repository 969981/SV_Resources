/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027689b0; name: FUN_027689b0
 */


void FUN_027689b0(long param_1)

{
  if ((*(char *)(param_1 + 0x333) == '\0') && (*(char *)(param_1 + 0x335) != '\0')) {
    FUN_00ea7e24(param_1);
    *(undefined1 *)(param_1 + 0x335) = 0;
  }
  return;
}


