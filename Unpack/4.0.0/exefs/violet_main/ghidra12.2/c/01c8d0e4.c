/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c8d0e4; name: FUN_01c8d0e4
 */


void FUN_01c8d0e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0126a9c0();
  *param_1 = uVar1;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  memset(param_1 + 1,0,0x44);
  FUN_01ecd638(param_1 + 0xc);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


