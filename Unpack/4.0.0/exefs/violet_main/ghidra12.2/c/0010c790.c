/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0010c790; name: FUN_0010c790
 */


undefined4 FUN_0010c790(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 + 0x96cdbdb5U >> 0x18 | (param_1 + 0x96cdbdb5U) * 0x100;
  if (uVar1 < 6) {
    return *(undefined4 *)(&DAT_03cb4b60 + (long)(int)uVar1 * 4);
  }
  return 0;
}


