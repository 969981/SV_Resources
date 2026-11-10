/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029149bc; name: FUN_029149bc
 */


undefined8 FUN_029149bc(long param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  uVar1 = uVar1 & 0xffff;
  if (uVar1 < 0x196) {
    if (uVar1 < 0xa2) {
      if (uVar1 - 0x56 < 0x39 && (1L << ((ulong)(uVar1 - 0x56) & 0x3f) & 0x10c000000808051U) != 0 ||
          uVar1 == 0xc) {
        return 1;
      }
      if (uVar1 == 0x20) {
        return 1;
      }
    }
    else {
      if (uVar1 - 0xa2 < 0x3e && (1L << ((ulong)(uVar1 - 0xa2) & 0x3f) & 0x2008004400040001U) != 0)
      {
        return 1;
      }
      if (uVar1 - 0xf7 < 0x27 && (1L << ((ulong)(uVar1 - 0xf7) & 0x3f) & 0x4021005001U) != 0) {
        return 1;
      }
      if (uVar1 - 0x149 < 0x2f && (1L << ((ulong)(uVar1 - 0x149) & 0x3f) & 0x420000000101U) != 0) {
        return 1;
      }
    }
  }
  else {
    if (uVar1 - 0x196 < 0x3e && (1L << ((ulong)(uVar1 - 0x196) & 0x3f) & 0x2460040010088603U) != 0)
    {
      return 1;
    }
    if (uVar1 - 0x1ea < 0x3c && (1L << ((ulong)(uVar1 - 0x1ea) & 0x3f) & 0x8200903000000c1U) != 0) {
      return 1;
    }
    if (uVar1 - 0x22b < 0x20 && (1 << (ulong)(uVar1 - 0x22b & 0x1f) & 0x80002825U) != 0) {
      return 1;
    }
  }
  return 0;
}


