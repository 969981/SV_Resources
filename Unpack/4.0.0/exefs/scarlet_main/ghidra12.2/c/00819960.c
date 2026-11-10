/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00819960; name: FUN_00819960
 */


undefined8 FUN_00819960(long param_1,ulong param_2)

{
  if ((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) < param_2) {
    return 0;
  }
  *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + param_2;
  return 1;
}


