/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cdd118; name: FUN_00cdd118
 */


void FUN_00cdd118(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_045d7f70;
  param_1[1] = 0;
  param_1[0x10] = param_2;
  param_1[0x11] = 0x555555555555555;
  param_1[0x16] = 0x555555555555555;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x1d] = param_2;
  param_1[0x1e] = 0x555555555555555;
  param_1[0x23] = 0x555555555555555;
  param_1[0x24] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0x666666666666666;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[9] = 0x666666666666666;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = param_2;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = param_2;
  param_1[0x2b] = 0x2aaaaaaaaaaaaaa;
  param_1[0x2e] = 0;
  param_1[0x2f] = param_2;
  param_1[0x30] = 0x2aaaaaaaaaaaaaa;
  param_1[0x31] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = param_2;
  param_1[0x38] = 0x666666666666666;
  param_1[0x3b] = 0;
  param_1[0x3c] = param_2;
  param_1[0x3d] = 0x666666666666666;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x3f800000;
  FUN_00cdd218(param_1 + 0x42);
  nn::os::InitializeReaderWriterLock((ReaderWriterLockType *)(param_1 + 0x4f));
  return;
}


