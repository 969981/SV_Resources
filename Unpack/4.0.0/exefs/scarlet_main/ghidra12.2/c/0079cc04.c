/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079cc04; name: FUN_0079cc04
 */


undefined8 FUN_0079cc04(long param_1)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0x138) != 0) && (uVar1 = FUN_0078cdf4(), (uVar1 & 1) != 0)) {
    return 1;
  }
  if ((*(long *)(param_1 + 0x140) != 0) && (uVar1 = FUN_0078cdf4(), (uVar1 & 1) != 0)) {
    return 1;
  }
  if ((*(long *)(param_1 + 0x158) == 0) || (uVar1 = FUN_0078cdf4(), (uVar1 & 1) == 0)) {
    return 0;
  }
  return 1;
}


