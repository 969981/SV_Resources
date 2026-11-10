/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02154adc; name: FUN_02154adc
 */


undefined8 FUN_02154adc(long param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  
  FUN_02154b44(&local_28,*(undefined8 *)(param_1 + 8));
  uVar1 = local_28;
  local_30 = local_28;
  local_28 = 0;
  FUN_021540fc(param_1 + 0x40,&local_30);
  FUN_015a7af4(&local_30);
  if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
    (**(code **)(param_1 + 0xb0))(param_1 + 0xd0);
  }
  FUN_02154190(&local_28);
  return uVar1;
}


