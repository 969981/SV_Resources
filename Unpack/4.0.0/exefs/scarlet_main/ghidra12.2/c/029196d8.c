/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029196d8; name: FUN_029196d8
 */


undefined8 FUN_029196d8(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1a0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  uVar1 = *(ushort *)(param_1 + 0xb4);
  uVar2 = (ulong)uVar1;
  uVar3 = (uint)uVar1;
  if (uVar1 < 0x129) {
    if ((uVar3 - 0x57 < 0x26) && ((1L << ((ulong)(uVar3 - 0x57) & 0x3f) & 0x2810180001U) != 0)) {
      return 1;
    }
    if ((uVar3 - 0xe1 < 0x33) && ((1L << ((ulong)(uVar3 - 0xe1) & 0x3f) & 0x4800000001401U) != 0)) {
      return 1;
    }
    if (0x35 < uVar3) {
      return 0;
    }
    uVar5 = 0x20000006000200;
  }
  else {
    uVar4 = (uint)uVar1;
    if (uVar4 < 0x1a8) {
      if ((uVar4 - 0x129 < 0x38) &&
         ((1L << ((ulong)(uVar4 - 0x129) & 0x3f) & 0x80000040000831U) != 0)) {
        return 1;
      }
      if (uVar4 == 0x188) {
        return 1;
      }
      return 0;
    }
    if (uVar3 != 0x1fd && 0x1fc < uVar1) {
      if (uVar3 != 0x26b && 0x26a < uVar1) {
        if (uVar3 == 0x26c) {
          return 1;
        }
        if (uVar3 == 0x2a6) {
          return 1;
        }
        return 0;
      }
      if (uVar3 == 0x1fe) {
        return 1;
      }
      if (uVar3 == 0x230) {
        return 1;
      }
      return 0;
    }
    uVar2 = (ulong)(uVar3 - 0x1a8);
    if (0x25 < uVar3 - 0x1a8) {
      return 0;
    }
    uVar5 = 0x2040000111;
  }
  if ((1L << (uVar2 & 0x3f) & uVar5) == 0) {
    return 0;
  }
  return 1;
}


