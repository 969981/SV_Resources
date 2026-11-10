/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02172330; name: FUN_02172330
 */


undefined8 FUN_02172330(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  if ((uVar1 - 0x430 < 0x20) ||
     (uVar2 = uVar1 - 0xe3, uVar2 < 0x1c && (1 << (ulong)(uVar2 & 0x1f) & 0xc60a205U) != 0)) {
    *param_1 = uVar1 - 0x20;
    return 1;
  }
  return 0;
}


