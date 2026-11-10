/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00884254; name: FUN_00884254
 */


void FUN_00884254(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 7) = 0xff00;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  return;
}


