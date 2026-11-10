/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c6adc; name: FUN_031c6adc
 */


void FUN_031c6adc(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = param_1 + 2;
  param_1[1] = 0x8000008000000001;
  *(undefined4 *)(param_1 + 0x12) = 1;
  return;
}


