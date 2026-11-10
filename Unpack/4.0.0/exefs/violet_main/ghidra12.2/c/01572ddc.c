/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01572ddc; name: FUN_01572ddc
 */


undefined8 FUN_01572ddc(ushort *param_1)

{
  long lVar1;
  
  lVar1 = ((ulong)*param_1 & 0xf) - 1;
  if ((uint)lVar1 < 0xb) {
    return *(undefined8 *)(&DAT_03d68b18 + lVar1 * 8);
  }
  return 0;
}


