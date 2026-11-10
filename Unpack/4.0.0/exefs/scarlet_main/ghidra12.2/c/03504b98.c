/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03504b98; name: FUN_03504b98
 */


void FUN_03504b98(undefined8 *param_1)

{
  param_1[0xf] = 0;
  param_1[0x10] = 0x3f8000003f800000;
  param_1[2] = 0xc580000000000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0x80;
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)((long)param_1 + 0x89) = *(byte *)((long)param_1 + 0x89) & 0xe0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf8 | 5;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_047c61e0;
  param_1[1] = 0;
  param_1[0x12] = &PTR_LAB_047c6320;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((long)param_1 + 0xc2) = 0;
  param_1[0x1d] = 0x1000000ffffffff;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((long)param_1 + 0xf2) = 0;
  param_1[0x23] = 0x1000000ffffffff;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x1000000ffffffff;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)((long)param_1 + 0x122) = 0;
  param_1[0x29] = 0x1000000ffffffff;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)((long)param_1 + 0x152) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0x20100ff;
  *(undefined1 *)((long)param_1 + 0x174) = 3;
  *(byte *)((long)param_1 + 0x194) = *(byte *)((long)param_1 + 0x194) & 0xfc;
  *param_1 = &PTR_FUN_047c63f8;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2f] = 0;
  param_1[0x12] = &PTR_LAB_047c6538;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  return;
}


