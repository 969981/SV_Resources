/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


