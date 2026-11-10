/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0284c0b8; name: FUN_0284c0b8
 */


void FUN_0284c0b8(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x10) = param_2;
  *(undefined2 *)(param_1 + 0x12) = param_2;
  *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) | 2;
  return;
}


