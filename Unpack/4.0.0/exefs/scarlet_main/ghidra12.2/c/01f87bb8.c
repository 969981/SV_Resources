/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f87bb8; name: FUN_01f87bb8
 */


void FUN_01f87bb8(long param_1,byte param_2)

{
  if (*(char *)(param_1 + 0xff) == '\0') {
    *(byte *)(param_1 + 0xfe) = param_2 & 1;
    *(undefined2 *)(param_1 + 0xfc) = 0x100;
  }
  return;
}


