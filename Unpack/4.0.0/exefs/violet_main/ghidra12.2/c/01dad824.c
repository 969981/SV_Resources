/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dad824; name: FUN_01dad824
 */


void FUN_01dad824(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d3a88;
  *param_1 = &PTR_LAB_045400f8;
  *(undefined8 *)puVar1 = 0;
  if (param_1[3] != 0) {
    (**(code **)(*(long *)param_1[1] + 0xe8))();
  }
  FUN_01dadbd8(param_1);
  return;
}


