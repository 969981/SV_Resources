/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01729190; name: FUN_01729190
 */


void FUN_01729190(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_01729334();
  *param_1 = &PTR_LAB_04568138;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[4] = &PTR_LAB_04568168;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar1 = PTR_DAT_047d8e88 + 0x10;
  param_1[0x46] = puVar1;
  param_1[0x4e] = puVar1;
  *(undefined4 *)((long)param_1 + 0x17c) = 0x3f800000;
  param_1[0x59] = param_1 + 0x5a;
  param_1[0x60] = param_1 + 0x61;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = 0x666666666666666;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0x666666666666666;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[6] = puVar1;
  param_1[7] = 0;
  param_1[0xe] = puVar1;
  param_1[0xf] = 0;
  param_1[0x19] = puVar1;
  param_1[0x1a] = 0;
  param_1[0x21] = puVar1;
  param_1[0x22] = 0;
  param_1[0x33] = puVar1;
  param_1[0x34] = 0;
  param_1[0x3b] = puVar1;
  param_1[0x3c] = 0;
  param_1[0x5b] = param_1[1];
  param_1[0x62] = param_1[1];
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)((long)param_1 + 0x34c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x68,0,1);
  FUN_0172945c();
  FUN_0172a0c8(param_1);
  FUN_01729ca4(param_1);
  return;
}


