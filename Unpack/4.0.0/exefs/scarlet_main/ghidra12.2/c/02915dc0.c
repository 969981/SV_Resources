/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02915dc0; name: FUN_02915dc0
 */


undefined8 FUN_02915dc0(long param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0xb4);
  uVar2 = (uint)uVar1;
  if (uVar1 < 0x206) {
    if (uVar2 == 0x163 || uVar1 < 0x163) {
      if (((0x28 < uVar2 - 0xc3) || ((1L << ((ulong)(uVar2 - 0xc3) & 0x3f) & 0x1000004042dU) == 0))
         && ((uVar2 != 0x35 && (uVar2 != 0x12e)))) {
        return 0;
      }
    }
    else if ((((0x3e < uVar2 - 0x1ad) ||
              ((1L << ((ulong)(uVar2 - 0x1ad) & 0x3f) & 0x4801000000002101U) == 0)) &&
             (uVar2 != 0x164)) && (uVar2 != 0x1fe)) {
      return 0;
    }
  }
  else if ((0x2b < uVar2 - 0x2a4 || (1L << ((ulong)(uVar2 - 0x2a4) & 0x3f) & 0x80a88002a85U) == 0)
          && ((0x3d < uVar2 - 0x206 ||
              ((1L << ((ulong)(uVar2 - 0x206) & 0x3f) & 0x2400200020000001U) == 0)))) {
    if (0x30 < uVar2 - 0x252) {
      return 0;
    }
    if ((1L << ((ulong)(uVar2 - 0x252) & 0x3f) & 0x1800000001001U) == 0) {
      return 0;
    }
  }
  return 1;
}


