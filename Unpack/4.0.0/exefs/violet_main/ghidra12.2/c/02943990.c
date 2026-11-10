/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02943990; name: FUN_02943990
 */


undefined8 FUN_02943990(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_011d3d28(*(undefined8 *)(param_1 + 8));
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  return 1;
}


