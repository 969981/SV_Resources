/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00362550; name: FUN_00362550
 */


uint FUN_00362550(void)

{
  uint uVar1;
  
  uVar1 = FUN_00362c20(0,0);
  if (-1 < (int)uVar1) {
    nnsocketClose(uVar1);
  }
  return ~uVar1 >> 0x1f;
}


