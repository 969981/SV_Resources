/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007bfae0; name: FUN_007bfae0
 */


undefined8 FUN_007bfae0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + -0x20;
  if ((*(ulong *)(param_1 + -8) & 1) != 0) {
    lVar1 = *(ulong *)(param_1 + -8) - 1;
  }
  return *(undefined8 *)(lVar1 + 0x18);
}


