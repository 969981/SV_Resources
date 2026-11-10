/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ec1e4; name: FUN_001ec1e4
 */


void FUN_001ec1e4(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0xe));
      *(undefined8 *)(param_1 + 0xe) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    FUN_001cb68c(param_1 + 6,0);
    FUN_001ec308(*(undefined8 *)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = 0;
    FUN_001ec308(*(undefined8 *)(param_1 + 4));
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *param_1 = 1;
  }
  return;
}


