/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007df310; name: FUN_007df310
 */


undefined1 FUN_007df310(ulong param_1)

{
  undefined1 uVar1;
  
  uVar1 = PTR_DAT_047d1428[param_1 & 0xff];
  PTR_DAT_047d1428[param_1 & 0xff] = 0;
  return uVar1;
}


