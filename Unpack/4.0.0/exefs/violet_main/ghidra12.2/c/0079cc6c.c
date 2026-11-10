/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079cc6c; name: FUN_0079cc6c
 */


undefined8 FUN_0079cc6c(long param_1)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0x160) != 0) && (uVar1 = FUN_0078cdf4(), (uVar1 & 1) != 0)) {
    return 1;
  }
  if ((*(long *)(param_1 + 0x148) == 0) || (uVar1 = FUN_0078cdf4(), (uVar1 & 1) == 0)) {
    return 0;
  }
  return 1;
}


