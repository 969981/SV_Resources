/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0277f578; name: FUN_0277f578
 */


undefined4 FUN_0277f578(long param_1)

{
  undefined4 *puVar1;
  
  if ((*(long *)(param_1 + 0x38) == 0) || ((*(byte *)(*(long *)(param_1 + 0x38) + 0x1e8) & 1) == 0))
  {
    puVar1 = (undefined4 *)(param_1 + 0x2c);
  }
  else {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 0x38) + 0x234);
  }
  return *puVar1;
}


