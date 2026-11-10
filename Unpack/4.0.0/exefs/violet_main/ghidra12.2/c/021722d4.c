/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021722d4; name: FUN_021722d4
 */


undefined8 FUN_021722d4(undefined8 param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;
  
  uVar2 = *param_2;
  if ((uVar2 - 0x60 < 0x1b) ||
     (uVar1 = uVar2 - 0xe0, uVar1 < 0x1d && (1 << (ulong)(uVar1 & 0x1f) & 0x1c5aefd7U) != 0)) {
    uVar2 = uVar2 - 0x20;
  }
  else {
    if (uVar2 != 0x153) {
      return 0;
    }
    uVar2 = 0x152;
  }
  *param_2 = uVar2;
  return 1;
}


