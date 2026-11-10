/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd50f4; name: FUN_01dd50f4
 */


undefined8 FUN_01dd50f4(ushort *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar2 = 1;
  uVar3 = (uint)uVar1;
  if (uVar1 < 0x304) {
    if (uVar1 < 0x1e0) {
      if (uVar3 - 0x179 < 5) {
        return uVar2;
      }
      if (uVar3 - 0x90 < 3) {
        return uVar2;
      }
      if (uVar3 - 0xf3 < 3) {
        return uVar2;
      }
      return 0;
    }
    if ((uVar3 - 0x1e0 < 9) && ((1 << (ulong)(uVar3 - 0x1e0 & 0x1f) & 0x167U) != 0)) {
      return uVar2;
    }
    uVar3 = uVar3 - 0x27e;
    if (7 < uVar3) {
      return 0;
    }
    uVar4 = 0x9f;
  }
  else {
    if (uVar3 - 0x3e2 < 0x17 && (1 << (ulong)(uVar3 - 0x3e2 & 0x1f) & 0x72000fU) != 0) {
      return uVar2;
    }
    if ((uVar3 - 0x37b < 0xf) && ((1 << (ulong)(uVar3 - 0x37b & 0x1f) & 0x407bU) != 0)) {
      return uVar2;
    }
    uVar3 = uVar1 - 0x304;
    if (0x10 < uVar3) {
      return 0;
    }
    uVar4 = 0x1e003;
  }
  if ((1 << (ulong)(uVar3 & 0x1f) & uVar4) == 0) {
    return 0;
  }
  return uVar2;
}


