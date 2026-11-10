/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00359e50; name: FUN_00359e50
 */


void FUN_00359e50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(code **)(param_1 + 8) = FUN_00359e70;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x30) = param_4;
  return;
}


