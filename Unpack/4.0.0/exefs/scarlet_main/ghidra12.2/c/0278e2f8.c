/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278e2f8; name: FUN_0278e2f8
 */


ulong FUN_0278e2f8(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  return ((ulong)(*(byte *)(param_1 + (uVar1 >> 3)) >> (uVar1 & 7) & 1) |
         (ulong)(*(byte *)(param_1 + (uVar1 + 1 >> 3)) >> (uVar1 + 1 & 7) & 1) << 1) << 8 |
         ((ulong)(*(byte *)(param_1 + (uVar1 + 2 >> 3)) >> (uVar1 + 2 & 7) & 1) |
         (ulong)(*(byte *)(param_1 + (uVar1 + 3 >> 3)) >> (uVar1 + 3 & 7) & 1) << 1) << 10 | 1;
}


