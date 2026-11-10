/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6cb00; name: FUN_01f6cb00
 */


undefined8 FUN_01f6cb00(ushort *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar2 = 1;
  uVar3 = (uint)uVar1;
  if (uVar1 < 0x287) {
    if (uVar1 < 0x1e9) {
      if (uVar3 - 0x181 < 2) {
        return uVar2;
      }
      if (uVar3 == 0x97) {
        return uVar2;
      }
      if (uVar3 == 0xfb) {
        return uVar2;
      }
    }
    else if (uVar3 - 0x1e9 < 6) {
      return uVar2;
    }
  }
  else {
    uVar4 = (uint)uVar1;
    if (uVar4 < 0x2f4) {
      if (uVar4 - 0x287 < 3) {
        return uVar2;
      }
      if (uVar4 - 0x2cf < 3) {
        return uVar2;
      }
    }
    else if ((((uVar3 - 0x2f4 < 0x36) &&
              ((1L << ((ulong)(uVar3 - 0x2f4) & 0x3f) & 0x38200000000001U) != 0)) ||
             (uVar3 == 0x3fe)) || (uVar3 == 0x37d)) {
      return uVar2;
    }
  }
  return 0;
}


