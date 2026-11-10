/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298da98; name: FUN_0298da98
 */


undefined8 FUN_0298da98(long param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined4 *)(param_1 + 0x10) = *param_2;
    *(undefined1 *)(param_1 + 0xd) = 1;
    return 1;
  }
  return 0;
}


