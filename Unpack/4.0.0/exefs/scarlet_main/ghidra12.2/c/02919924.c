/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02919924; name: FUN_02919924
 */


undefined8 FUN_02919924(long param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0xb4);
  uVar2 = (uint)uVar1;
  if (uVar1 < 0x1fe) {
    if ((0x34 < uVar2 - 0x12e || (1L << ((ulong)(uVar2 - 0x12e) & 0x3f) & 0x10000000001801U) == 0)
       && (uVar2 != 0xc6)) {
      return 0;
    }
  }
  else if (uVar1 < 0x281) {
    if ((uVar2 != 0x1fe) && (uVar2 != 0x223)) {
      return 0;
    }
  }
  else if (((1 < uVar2 - 0x281) && (uVar2 != 0x2a6)) && (uVar2 != 0x2c3)) {
    return 0;
  }
  return 1;
}


