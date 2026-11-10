/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e74300; name: FUN_01e74300
 */


void FUN_01e74300(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(undefined1 *)(param_1 + 0x2a02) = 0;
  if (*(char *)(param_1 + 0x2a04) != '\0') {
    if (*(char *)(param_1 + 0x2a08) != '\0') {
      *(undefined1 *)(param_1 + 0x2a08) = 0;
    }
    *(undefined1 *)(param_1 + 0x2a04) = 0;
  }
  if (*(char *)(param_1 + 0x2a14) != '\0') {
    *(undefined1 *)(param_1 + 0x2a14) = 0;
  }
  if (*(char *)(param_1 + 0x3264) != '\0') {
    *(undefined1 *)(param_1 + 0x3264) = 0;
  }
  *(undefined1 *)(param_1 + 0x3ab4) = 0;
  return;
}


