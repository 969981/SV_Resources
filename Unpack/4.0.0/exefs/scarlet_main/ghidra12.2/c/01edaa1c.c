/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01edaa1c; name: FUN_01edaa1c
 */


undefined8 FUN_01edaa1c(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if (((uVar1 < 0x20) && ((1 << (ulong)(uVar1 & 0x1f) & 0x8047f801U) != 0)) ||
     ((uVar1 - 0x5b < 9 && ((1 << (ulong)(uVar1 - 0x5b & 0x1f) & 0x183U) != 0)))) {
    return param_1;
  }
  return 99;
}


