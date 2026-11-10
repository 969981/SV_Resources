/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017e4040; name: FUN_017e4040
 */


undefined4 FUN_017e4040(undefined8 param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x20;
  if ((param_2 & 1) != 0) {
    uVar1 = 0x21;
  }
  return uVar1;
}


