/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e262fc; name: FUN_01e262fc
 */


void FUN_01e262fc(long param_1)

{
  undefined8 local_8;
  
  local_8 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_01155fc4(&local_8);
  FUN_00db2500(param_1 + 0x28);
  return;
}


