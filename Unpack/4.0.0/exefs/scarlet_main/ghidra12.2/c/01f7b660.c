/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7b660; name: FUN_01f7b660
 */


ulong FUN_01f7b660(ushort *param_1)

{
  return (ulong)(uint)(*(int *)(param_1 + 4) << 0x18) | (ulong)*param_1 |
         (ulong)(uint)(*(int *)(param_1 + 2) << 0x10) & 0xff0000 | (ulong)(byte)param_1[6] << 0x20 |
         (ulong)(byte)param_1[8] << 0x28 | (ulong)(byte)param_1[10] << 0x30;
}


