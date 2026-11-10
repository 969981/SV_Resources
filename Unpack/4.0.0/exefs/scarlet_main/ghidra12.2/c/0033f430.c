/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033f430; name: FUN_0033f430
 */


void FUN_0033f430(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  *param_1 = (long)(PTR_DAT_047ccd20 + 0x10);
  param_1[1] = 0;
  param_1[1] = *param_2;
  *param_2 = 0;
                    /* try { // try from 0033f458 to 0033f483 has its CatchHandler @ 0033f54c */
  auVar2 = FUN_00357fe0(param_3);
  *(undefined1 (*) [16])(param_1 + 2) = auVar2;
  FUN_00339f04(*(undefined8 *)(param_1[1] + 0x18),0);
  lVar1 = FUN_0038e714();
  param_1[4] = lVar1;
  FUN_003503e8(param_1 + 5);
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = (long)(param_1 + 0x11);
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2d] = 0;
  param_1[0x44] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0xd0] = 0;
  *(undefined1 *)(param_1 + 0xfa) = 0;
  param_1[0x119] = 0;
  param_1[0x118] = 0;
  param_1[0x11b] = 0;
  param_1[0x11a] = 0;
  param_1[0x11d] = 0;
  param_1[0x11c] = 0;
  *(undefined1 *)(param_1 + 0x122) = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((long)param_1 + 0x1b1) = 0;
  *(undefined8 *)((long)param_1 + 0x1a9) = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((long)param_1 + 0x1f1) = 0;
  *(undefined8 *)((long)param_1 + 0x1e9) = 0;
  return;
}


