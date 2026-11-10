/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016beaf0; name: FUN_016beaf0
 */


undefined4 FUN_016beaf0(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 2U >> 1 | param_1 << 0x1f;
  if (uVar1 < 8) {
    return *(undefined4 *)(&DAT_03cbf500 + (long)(int)uVar1 * 4);
  }
  return 0;
}


