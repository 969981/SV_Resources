/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf2638; name: FUN_00cf2638
 */


long FUN_00cf2638(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x210);
  if (*(long *)(lVar1 + 0xa8) == *(long *)(lVar1 + 0xa0)) {
    return *(long *)(*(long *)(lVar1 + 0xd8) + (param_2 & 0xff) * 0x20);
  }
  return *(long *)(lVar1 + 0xa0) + (param_2 & 0xff) * 0x20;
}


