/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012cfe20; name: FUN_012cfe20
 */


void FUN_012cfe20(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 1;
  nn::os::InitializeLightEvent(param_1 + 1,0,1);
  memset(param_1 + 3,0,0x68);
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_012cff64(param_1 + 5);
  param_1[9] = 0;
  FUN_012d001c(param_1 + 10);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  return;
}


