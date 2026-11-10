/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b9b5c; name: FUN_028b9b5c
 */


void FUN_028b9b5c(long param_1)

{
  undefined8 local_8;
  
  FUN_00db2500(param_1 + 0x28);
  local_8 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  FUN_028b9b94(&local_8);
  return;
}


