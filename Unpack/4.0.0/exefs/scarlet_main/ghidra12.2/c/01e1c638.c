/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e1c638; name: FUN_01e1c638
 */


ulong FUN_01e1c638(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x138) == 0) {
    return (ulong)*(uint *)(param_1 + 300);
  }
  uVar1 = FUN_00e97b78(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x70));
  return uVar1;
}


