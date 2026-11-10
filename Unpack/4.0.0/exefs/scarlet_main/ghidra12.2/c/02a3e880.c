/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a3e880; name: FUN_02a3e880
 */


void FUN_02a3e880(float param_1,long param_2)

{
  if (*(char *)(param_2 + 9) == '\0') {
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined1 *)(param_2 + 8) = 0;
    *(long *)(param_2 + 0x10) = (long)(param_1 * 1000.0);
    FUN_0226f404(3);
    *(undefined1 *)(param_2 + 9) = 1;
  }
  return;
}


