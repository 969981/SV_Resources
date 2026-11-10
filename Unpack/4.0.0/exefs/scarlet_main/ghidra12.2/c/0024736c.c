/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0024736c; name: FUN_0024736c
 */


void FUN_0024736c(long param_1)

{
  if (*(char *)(param_1 + 0x60) != '\0') {
    thunk_FUN_006c5184(param_1 + 0x18,param_1);
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}


