/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02914e48; name: FUN_02914e48
 */


undefined8 FUN_02914e48(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1a0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  uVar1 = *(ushort *)(param_1 + 0xb4);
  uVar3 = (uint)uVar1;
  if (uVar1 < 0x188) {
    if (uVar1 < 0xba) {
      if ((uVar3 - 0x1a < 0x3e) &&
         ((1L << ((ulong)(uVar3 - 0x1a) & 0x3f) & 0x2000248020000001U) != 0)) {
        return 1;
      }
      if (uVar3 == 0x7a) {
        return 1;
      }
      return 0;
    }
    if ((uVar3 - 0xba < 0x1c) && ((1 << (ulong)(uVar3 - 0xba & 0x1f) & 0x8010009U) != 0)) {
      return 1;
    }
    if (0x34 < uVar3 - 0x139) {
      return 0;
    }
    uVar2 = 1L << ((ulong)(uVar3 - 0x139) & 0x3f);
    uVar4 = 0x10000000000013;
  }
  else if (uVar3 == 0x23c || uVar1 < 0x23c) {
    if ((uVar3 - 0x1f7 < 0x35) && ((1L << ((ulong)(uVar3 - 0x1f7) & 0x3f) & 0x10100010000081U) != 0)
       ) {
      return 1;
    }
    if (0x31 < uVar3 - 0x188) {
      return 0;
    }
    uVar2 = 1L << ((ulong)(uVar3 - 0x188) & 0x3f);
    uVar4 = 0x2001000000001;
  }
  else {
    if ((uVar3 - 699 < 0x3c) && ((1L << ((ulong)(uVar3 - 699) & 0x3f) & 0x800000080000005U) != 0)) {
      return 1;
    }
    if (0x2c < uVar3 - 0x23d) {
      return 0;
    }
    uVar2 = 1L << ((ulong)(uVar3 - 0x23d) & 0x3f);
    uVar4 = 0x100000004001;
  }
  if ((uVar2 & uVar4) == 0) {
    return 0;
  }
  return 1;
}


