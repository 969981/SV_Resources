/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007984a4; name: FUN_007984a4
 */


undefined1 FUN_007984a4(long param_1)

{
  if ((*(long *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x28) == 0)) {
    return 0;
  }
  return *(undefined1 *)(*(long *)(param_1 + 0x20) + 2);
}


