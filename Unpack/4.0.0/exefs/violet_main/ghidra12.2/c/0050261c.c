/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0050261c; name: FUN_0050261c
 */


undefined8 * FUN_0050261c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return puVar1;
  }
  return (undefined8 *)*puVar1;
}


