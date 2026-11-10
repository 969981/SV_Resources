/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0154bde0; name: FUN_0154bde0
 */


void FUN_0154bde0(undefined8 *param_1)

{
  FUN_00d1a22c(param_1,6);
  *param_1 = &DAT_045dd0d8;
  param_1[4] = &PTR_LAB_045dd240;
  param_1[5] = &DAT_045dd368;
  param_1[0x24] = &PTR_LAB_045dd420;
  param_1[6] = &PTR_LAB_045dd3c0;
  param_1[7] = &PTR_LAB_045dd3e8;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)((long)param_1 + 0x14c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x28,0,1);
  *(undefined4 *)(param_1 + 0x2a) = 0;
  memset(param_1 + 0x2b,0,0x70);
  FUN_0154bec0(param_1 + 0x2b);
  memset(param_1 + 0x3a,0,0x70);
  FUN_0154bef4(param_1 + 0x3a);
  memset(param_1 + 0x49,0,0x70);
  FUN_0154bf28(param_1 + 0x49);
  FUN_011eb858(DAT_0485a0e8,param_1 + 0x24);
  return;
}


