/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df32ec; name: FUN_01df32ec
 */


bool FUN_01df32ec(long param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = 0;
  if (param_2 < 6) {
    uVar1 = param_2;
  }
  uVar2 = *(ushort *)(param_1 + (ulong)uVar1 * 0xc + 0x526);
  return (byte)(uVar2 >> 8) < 0x21 && (uVar2 & 0xfe) < 0x1e;
}


