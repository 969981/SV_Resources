/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ada7c8; name: FUN_00ada7c8
 */


void FUN_00ada7c8(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  if (*(char *)(param_2 + 0x88) != '\0') {
    memcpy(param_1 + 4,(void *)(param_2 + 0x8c),0x11c);
    *param_1 = 1;
  }
  return;
}


