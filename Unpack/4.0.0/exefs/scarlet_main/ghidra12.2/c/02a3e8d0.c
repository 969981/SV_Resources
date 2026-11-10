/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a3e8d0; name: FUN_02a3e8d0
 */


void FUN_02a3e8d0(long param_1)

{
  if (*(char *)(param_1 + 9) != '\0') {
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_0226f4a0(3);
    *(undefined1 *)(param_1 + 9) = 0;
  }
  return;
}


