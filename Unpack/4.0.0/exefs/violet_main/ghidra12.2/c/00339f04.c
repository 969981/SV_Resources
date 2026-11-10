/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00339f04; name: FUN_00339f04
 */


long FUN_00339f04(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x58);
  if (param_2 != 0) {
    lVar1 = ((ulong)((int)lVar1 + 0xf) & 0xfffffff0) + param_2;
  }
  return lVar1 + 0x50;
}


