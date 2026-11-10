/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02919abc; name: FUN_02919abc
 */


undefined8 FUN_02919abc(long param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0xb4);
  uVar2 = 1;
  uVar3 = (uint)uVar1;
  if (uVar1 < 0x14f) {
    if (0x9f < uVar1) {
      if ((uVar3 - 0xe1 < 0x3e) &&
         ((1L << ((ulong)(uVar3 - 0xe1) & 0x3f) & 0x2010000000181001U) != 0)) {
        return uVar2;
      }
      if ((uVar3 - 0xa0 < 0x3f) &&
         ((1L << ((ulong)(uVar3 - 0xa0) & 0x3f) & 0x6000000000000101U) != 0)) {
        return uVar2;
      }
      if (uVar1 == 0x12d) {
        return uVar2;
      }
      return 0;
    }
    if ((uVar3 - 0x59 < 0x35) && ((1L << ((ulong)(uVar3 - 0x59) & 0x3f) & 0x10844000000005U) != 0))
    {
      return uVar2;
    }
    uVar3 = uVar3 - 0x14;
    if (0x38 < uVar3) {
      return 0;
    }
    uVar4 = 0x101000000000011;
  }
  else {
    if (uVar3 != 0x225 && 0x224 < uVar1) {
      if ((uVar3 - 0x294 < 0x29) && ((1L << ((ulong)(uVar3 - 0x294) & 0x3f) & 0x10000310001U) != 0))
      {
        return uVar2;
      }
      if ((uVar3 - 0x22c < 0x3c) &&
         ((1L << ((ulong)(uVar3 - 0x22c) & 0x3f) & 0xc00000000000201U) != 0)) {
        return uVar2;
      }
      if (uVar3 == 0x226) {
        return uVar2;
      }
      return 0;
    }
    if ((uVar3 - 0x1a3 < 0x3b) &&
       ((1L << ((ulong)(uVar3 - 0x1a3) & 0x3f) & 0x458020020000001U) != 0)) {
      return uVar2;
    }
    uVar3 = uVar3 - 0x14f;
    if (0x29 < uVar3) {
      return 0;
    }
    uVar4 = 0x20000082081;
  }
  if ((1L << ((ulong)uVar3 & 0x3f) & uVar4) == 0) {
    return 0;
  }
  return uVar2;
}


