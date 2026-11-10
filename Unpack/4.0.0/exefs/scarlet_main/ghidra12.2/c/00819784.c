/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00819784; name: FUN_00819784
 */


undefined8 FUN_00819784(long param_1,undefined1 *param_2)

{
  if ((param_2 == (undefined1 *)0x0) || (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x18))) {
    return 0;
  }
  *param_2 = *(undefined1 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  return 1;
}


