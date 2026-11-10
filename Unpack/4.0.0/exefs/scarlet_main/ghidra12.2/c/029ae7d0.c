/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029ae7d0; name: FUN_029ae7d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029ae7d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  *(undefined8 *)(param_1 + 0x1b0) = 0x3686156036861560;
  *(undefined8 *)(param_1 + 0x1a0) = 0x3763762436c2b1b7;
  *(undefined8 *)(param_1 + 0x1a8) = 0x36861560380ad4da;
  *(undefined4 *)(param_1 + 0xe8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x104) = 0x4039999a3f4ccccd;
  uVar6 = _UNK_03cab408;
  uVar5 = _DAT_03cab400;
  uVar4 = _UNK_03caa758;
  uVar3 = _DAT_03caa750;
  uVar2 = _UNK_03caa698;
  uVar1 = _DAT_03caa690;
  *(undefined4 *)(param_1 + 0x10c) = 0x3fa66666;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined8 *)(param_1 + 200) = uVar2;
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  *(undefined8 *)(param_1 + 0xd8) = uVar6;
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  *(ulong *)(param_1 + 0x68) = (ulong)*(uint *)(param_1 + 0xf4);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0xec);
  uVar3 = _UNK_03cab548;
  uVar2 = _DAT_03cab540;
  uVar1 = _DAT_03cab210;
  *(undefined8 *)(param_1 + 0x48) = _UNK_03cab218;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  uVar2 = _UNK_03cab688;
  uVar1 = _DAT_03cab680;
  *(ulong *)(param_1 + 0x78) = CONCAT44(0x3f4ccccd,*(undefined4 *)(param_1 + 0x100));
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  pcVar7 = *(code **)(param_1 + 0x128);
  *(ulong *)(param_1 + 0x98) = (ulong)*(uint *)(param_1 + 0xe4) << 0x20;
  *(ulong *)(param_1 + 0x90) = (ulong)(uint)(*(float *)(param_1 + 0xe0) + -6.36e+06) << 0x20;
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    (*pcVar7)(param_1 + 0x140);
  }
  *(undefined1 **)(param_1 + 0x120) = &LAB_02e44454;
  *(undefined1 **)(param_1 + 0x128) = &LAB_02e444dc;
  *(undefined1 **)(param_1 + 0x130) = &LAB_02e444e0;
  *(undefined1 **)(param_1 + 0x138) = &LAB_02e444ec;
  *(long *)(param_1 + 0x140) = param_1;
  fVar8 = sinf(*(float *)(param_1 + 0x108));
  fVar9 = sinf(*(float *)(param_1 + 0x10c));
  fVar10 = cosf(*(float *)(param_1 + 0x10c));
  fVar11 = cosf(*(float *)(param_1 + 0x108));
  fVar12 = sinf(*(float *)(param_1 + 0x10c));
  *(ulong *)(param_1 + 0xa8) = CONCAT44(*(undefined4 *)(param_1 + 0x114),fVar11 * fVar12);
  *(ulong *)(param_1 + 0xa0) = CONCAT44(fVar10,fVar8 * fVar9);
  return;
}


