/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079d820; name: FUN_0079d820
 */


int FUN_0079d820(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_007c7184(param_1 + 0x1194);
  return (int)((uVar1 & 0xffffffff) * 0xfffd >> 0x20) + 2;
}


