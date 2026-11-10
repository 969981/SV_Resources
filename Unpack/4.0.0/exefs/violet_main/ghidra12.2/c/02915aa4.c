/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02915aa4; name: FUN_02915aa4
 */


undefined8 FUN_02915aa4(long param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  uint uVar4;
  uint uVar3;
  ulong uVar5;
  
  uVar1 = *(ushort *)(param_1 + 0xb4);
  uVar2 = 1;
  uVar3 = (uint)uVar1;
  uVar4 = (uint)uVar1;
  if (uVar1 < 0x1aa) {
    if (0xb5 < uVar1) {
      if ((uVar4 - 0xb6 < 0x3d) &&
         ((1L << ((ulong)(uVar4 - 0xb6) & 0x3f) & 0x102000008097a081U) != 0)) {
        return uVar2;
      }
      if ((uVar4 - 0x12e < 0x37) &&
         ((1L << ((ulong)(uVar4 - 0x12e) & 0x3f) & 0x5410000300000dU) != 0)) {
        return uVar2;
      }
      if (uVar3 == 0x11e) {
        return uVar2;
      }
      return 0;
    }
    if ((uVar4 - 0x2d < 0x35) && ((1L << ((ulong)(uVar4 - 0x2d) & 0x3f) & 0x10040804000105U) != 0))
    {
      return uVar2;
    }
    uVar3 = uVar4 - 0x71;
    if (0x3f < uVar3) {
      return 0;
    }
    uVar5 = 0x8000000000000201;
  }
  else {
    if (uVar4 != 0x280 && 0x27f < uVar1) {
      if ((uVar4 - 0x29a < 0x36) &&
         ((1L << ((ulong)(uVar4 - 0x29a) & 0x3f) & 0x202a0000a09411U) != 0)) {
        return uVar2;
      }
      if (uVar3 - 0x281 < 2) {
        return uVar2;
      }
      return 0;
    }
    if ((uVar3 - 0x233 < 0x2c) && ((1L << ((ulong)(uVar3 - 0x233) & 0x3f) & 0x808d0012001U) != 0)) {
      return uVar2;
    }
    if ((uVar3 - 0x1aa < 0x3f) &&
       ((1L << ((ulong)(uVar3 - 0x1aa) & 0x3f) & 0x4008040000010809U) != 0)) {
      return uVar2;
    }
    uVar3 = uVar3 - 0x1eb;
    if (0x3a < uVar3) {
      return 0;
    }
    uVar5 = 0x500000008080001;
  }
  if ((1L << ((ulong)uVar3 & 0x3f) & uVar5) == 0) {
    return 0;
  }
  return uVar2;
}


