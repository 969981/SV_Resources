/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b7a064; name: FUN_02b7a064
 */


undefined8 FUN_02b7a064(long param_1)

{
  long lVar1;
  
  lVar1 = 0x40;
  if (*(int *)(param_1 + 0x3c) != 1) {
    lVar1 = 0x28;
  }
  return *(undefined8 *)(param_1 + lVar1);
}


