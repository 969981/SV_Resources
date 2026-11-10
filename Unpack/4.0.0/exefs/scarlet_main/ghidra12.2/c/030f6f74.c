/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f6f74; name: FUN_030f6f74
 */


void FUN_030f6f74(long *param_1,void *param_2)

{
  undefined *puVar1;
  
  param_1[4] = 0;
  param_1[5] = -0x8000000000000000;
  puVar1 = PTR_DAT_047e51d8 + 0x50;
  *param_1 = (long)(PTR_DAT_047e51d8 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = (long)puVar1;
  param_1[6] = 0;
  param_1[7] = -0x8000000000000000;
  FUN_0086f2c4(param_1 + 8);
  FUN_0086f2c4(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = -0x8000000000000000;
  *(undefined1 *)((long)param_1 + 0xc4) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = -0x8000000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = -0x8000000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = -0x8000000000000000;
  memcpy(param_1 + 0x2a,param_2,0x30);
  param_1[0x30] = 0x3a83126f00000000;
  *(undefined4 *)(param_1 + 0x31) = 0xffffffff;
  param_1[0x32] = 0;
  param_1[0x19] = -0x407fffff40800000;
  param_1[0x1a] = -0x407fffff40800000;
  param_1[0x1b] = -0x407fffff40800000;
  param_1[0x1c] = -0x407fffff40800000;
  param_1[0x1d] = -0x407fffff40800000;
  param_1[0x1e] = -0x407fffff40800000;
  param_1[0x1f] = -0x407fffff40800000;
  param_1[0x20] = -0x407fffff40800000;
  param_1[0x21] = -0x407fffff40800000;
  param_1[0x22] = -0x407fffff40800000;
  param_1[0x23] = -0x407fffff40800000;
  param_1[0x24] = -0x407fffff40800000;
  param_1[0x25] = -0x407fffff40800000;
  param_1[0x26] = -0x407fffff40800000;
  param_1[0x27] = -0x407fffff40800000;
  param_1[0x28] = -0x407fffff40800000;
  return;
}


