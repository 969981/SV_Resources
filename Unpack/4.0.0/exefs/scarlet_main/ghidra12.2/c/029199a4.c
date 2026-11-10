/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029199a4; name: FUN_029199a4
 */


undefined8 FUN_029199a4(long param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0xb4);
  uVar2 = (uint)uVar1;
  if (uVar1 < 0x14c) {
    if ((0x38 < uVar2 - 0x3b || (1L << ((ulong)(uVar2 - 0x3b) & 0x3f) & 0x101000040000001U) == 0) &&
       ((0x3f < uVar2 - 0x95 || ((1L << ((ulong)(uVar2 - 0x95) & 0x3f) & 0x8000001800000001U) == 0))
       )) {
      if (0x27 < uVar1 - 0x108) {
        return 0;
      }
      if ((1L << ((ulong)(uVar1 - 0x108) & 0x3f) & 0x8010000001U) == 0) {
        return 0;
      }
    }
  }
  else if (uVar2 == 499 || uVar1 < 499) {
    if (((0x1e < uVar2 - 0x1ae) || ((1 << (ulong)(uVar2 - 0x1ae & 0x1f) & 0x41001001U) == 0)) &&
       ((0x1b < uVar2 - 0x14c || ((1 << (ulong)(uVar2 - 0x14c & 0x1f) & 0x8100001U) == 0)))) {
      return 0;
    }
  }
  else if ((((10 < uVar2 - 0x26d) || ((1 << (ulong)(uVar2 - 0x26d & 0x1f) & 0x411U) == 0)) &&
           (uVar2 != 500)) && (uVar2 != 0x216)) {
    return 0;
  }
  return 1;
}


