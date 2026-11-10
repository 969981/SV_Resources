/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01305250; name: FUN_01305250
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01305250(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  *(undefined1 *)(param_1 + 0x3c) = 0;
  uVar4 = _UNK_03cabe58;
  uVar3 = _DAT_03cabe50;
  uVar2 = _UNK_03caa5b8;
  uVar1 = _DAT_03caa5b0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[0x1f] = 0x3f3333333f333333;
  param_1[0x1e] = 0x3f3333333f333333;
  *(undefined4 *)(param_1 + 0x21) = 0x3fe38e39;
  *(undefined4 *)((long)param_1 + 0x10c) = 0x3fe38e39;
  param_1[0x20] = 0x3fe38e393fe38e39;
  param_1[0x23] = 0x3f428f5c3f428f5c;
  param_1[0x22] = 0x3f428f5c3f428f5c;
  *(undefined4 *)(param_1 + 0x25) = 0x3f13dd98;
  *(undefined4 *)((long)param_1 + 300) = 0x3f13dd98;
  param_1[0x24] = 0x3f13dd983f13dd98;
  auVar5 = NEON_fmov(0x3fc80000,4);
  param_1[0x27] = 0x3f23d70a3f23d70a;
  param_1[0x26] = 0x3f23d70a3f23d70a;
  param_1[0x29] = auVar5._8_8_;
  param_1[0x28] = auVar5._0_8_;
  param_1[0x2b] = 0x3f23d70a3f23d70a;
  param_1[0x2a] = 0x3f23d70a3f23d70a;
  *(undefined4 *)(param_1 + 0x2d) = 0x3dcccccd;
  *(undefined4 *)((long)param_1 + 0x16c) = 0x3dcccccd;
  param_1[0x2c] = 0x3dcccccd3dcccccd;
  auVar5._8_4_ = 0x45bb8000;
  auVar5._0_8_ = 0x45bb800045bb8000;
  auVar5._12_4_ = 0x45bb8000;
  param_1[0x2f] = auVar5._8_8_;
  param_1[0x2e] = 0x45bb800045bb8000;
  param_1[0x31] = 0x4c0954404c095440;
  param_1[0x30] = 0x4c0954404c095440;
  FUN_00f7b0e4();
  return;
}


