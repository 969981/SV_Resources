/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215b614; name: FUN_0215b614
 */


void FUN_0215b614(long param_1)

{
  undefined8 local_28;
  undefined8 local_8;
  
  FUN_0215ddd4(&local_8,*(undefined8 *)(param_1 + 8));
  local_28 = local_8;
  local_8 = 0;
  FUN_021540fc(param_1 + 0x40,&local_28);
  FUN_015a7af4(&local_28);
  if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
    (**(code **)(param_1 + 0xb0))(param_1 + 0xd0);
  }
  return;
}


