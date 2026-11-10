/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00464860; name: FUN_00464860
 */


ulong FUN_00464860(long param_1)

{
  ulong uVar1;
  
  if (*(ulong *)(param_1 + 0x30) < *(ulong *)(param_1 + 0x38)) {
    return 0;
  }
  uVar1 = 0;
  if (*(ulong *)(param_1 + 0x18) <= *(ulong *)(param_1 + 8)) {
    uVar1 = *(ulong *)(param_1 + 0x30);
  }
  return uVar1;
}


