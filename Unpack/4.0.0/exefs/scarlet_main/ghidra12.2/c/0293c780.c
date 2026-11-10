/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293c780; name: FUN_0293c780
 */


undefined8 FUN_0293c780(long param_1)

{
  if (*(char *)(param_1 + 0x42) == '\0') {
    *(undefined1 *)(param_1 + 0x42) = 1;
    return 1;
  }
  return 0;
}


