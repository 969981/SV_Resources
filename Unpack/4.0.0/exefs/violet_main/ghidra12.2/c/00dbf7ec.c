/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dbf7ec; name: FUN_00dbf7ec
 */


bool FUN_00dbf7ec(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00dbf838(*(undefined8 *)(param_1 + 0x70));
  uVar2 = FUN_00dbfb7c(*(undefined8 *)(param_1 + 0x70));
  return (uVar1 & 0xfff0 ^ uVar1 >> 0x10 ^ uVar2 >> 0x10 ^ uVar2 & 0xfff0) < 0x10;
}


