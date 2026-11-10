/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00152510; name: FUN_00152510
 */


long FUN_00152510(uint param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x112;
  if ((0x3b00U >> (ulong)(param_1 & 0x1f) & 1) != 0) {
    lVar1 = 0x18;
  }
  lVar2 = param_2 + 0x7fffe;
  if (-1 < param_2 + 0x3ffff) {
    lVar2 = param_2 + 0x3ffff;
  }
  return param_2 + lVar1 * (lVar2 >> 0x12);
}


