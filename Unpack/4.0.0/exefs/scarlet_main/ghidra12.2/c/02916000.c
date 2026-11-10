/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


