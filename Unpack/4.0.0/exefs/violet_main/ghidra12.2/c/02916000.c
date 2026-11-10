/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02916000; name: FUN_02916000
 */


undefined8 FUN_02916000(long param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0xb4);
  if (*(ushort *)(param_1 + 0xb4) < 0x175) {
    if (0x34 < uVar1 - 0x11a || (1L << ((ulong)(uVar1 - 0x11a) & 0x3f) & 0x10000000002001U) == 0) {
      return 0;
    }
  }
  else if (((uVar1 != 0x175) && (uVar1 != 700)) && (uVar1 != 0x2cb)) {
    return 0;
  }
  return 1;
}


