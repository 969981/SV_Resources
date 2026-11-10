/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f7f9b8; name: FUN_02f7f9b8
 */


void FUN_02f7f9b8(undefined4 param_1,undefined4 param_2,float param_3,long param_4,long param_5,
                 long param_6,ulong param_7,ushort param_8,long param_9,undefined8 *param_10,
                 undefined8 param_11,long param_12,undefined8 *param_13,undefined8 param_14,
                 undefined8 param_15)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  ulong local_230 [9];
  undefined8 *local_1e8;
  undefined8 uStack_1e0;
  uint local_1d8;
  long local_1d0;
  long local_1c8;
  undefined8 *local_1c0;
  undefined8 uStack_1b8;
  uint local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  float fStack_198;
  float fStack_194;
  undefined8 local_190;
  float fStack_188;
  float fStack_184;
  undefined1 *local_180;
  undefined8 *puStack_178;
  undefined8 *local_170;
  ulong *puStack_168;
  undefined1 auStack_160 [16];
  undefined8 local_150;
  ulong uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined2 local_8a;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  ushort uStack_80;
  undefined8 local_78;
  long local_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  
  local_180 = (undefined1 *)&local_280;
  local_230[6] = 0;
  local_230[7] = 0;
  local_230[4] = 0;
  local_230[5] = 0;
  local_230[2] = 0;
  local_230[3] = 0;
  local_230[1] = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_280 = 0;
  uStack_278 = 0;
  uStack_148 = (ulong)(uint)(float)(double)param_10[4];
  local_150 = CONCAT44((float)(double)param_10[3],(float)(double)param_10[2]);
  local_78 = *(undefined8 *)(param_6 + 0x40);
  uStack_138 = (ulong)(uint)(float)(double)param_13[4];
  plVar2 = *(long **)(*(long *)(param_6 + 8) + 0x4b8);
  uStack_140 = CONCAT44((float)(double)param_13[3],(float)(double)param_13[2]);
  uStack_108 = param_10[1];
  local_110 = *param_10;
  fVar6 = (float)local_110;
  fVar10 = (float)((ulong)local_110 >> 0x20);
  fVar7 = fVar10 + fVar10;
  fVar12 = (float)uStack_108;
  fVar8 = fVar12 + fVar12;
  fVar9 = (fVar6 + fVar6) * fVar6;
  fVar11 = (float)((ulong)uStack_108 >> 0x20);
  fVar14 = (fVar6 + fVar6) * fVar11;
  fVar12 = 1.0 - fVar12 * fVar8;
  fVar15 = fVar8 * fVar10 - fVar14;
  fVar13 = fVar8 * fVar6 + fVar7 * fVar11;
  uStack_d8 = (ulong)(uint)((1.0 - fVar9) - fVar7 * fVar10);
  uStack_e8 = CONCAT44(fVar13,fVar8 * fVar10 + fVar14);
  uStack_f8 = CONCAT44(fVar15,fVar8 * fVar6 - fVar7 * fVar11);
  uStack_100 = CONCAT44(fVar7 * fVar6 + fVar8 * fVar11,fVar12 - fVar7 * fVar10);
  local_f0 = CONCAT44(fVar12 - fVar9,fVar7 * fVar6 - fVar8 * fVar11);
  uStack_e0 = CONCAT44(fVar15,fVar13);
  local_67 = 0;
  fVar7 = (float)*param_13;
  fVar6 = (float)((ulong)*param_13 >> 0x20);
  fVar12 = fVar6 + fVar6;
  fVar9 = (float)param_13[1];
  fVar11 = fVar9 + fVar9;
  fVar13 = (fVar7 + fVar7) * fVar7;
  fVar10 = (float)((ulong)param_13[1] >> 0x20);
  fVar8 = (fVar7 + fVar7) * fVar10;
  fVar14 = 1.0 - fVar9 * fVar11;
  fVar15 = fVar11 * fVar6 - fVar8;
  fVar9 = fVar11 * fVar7 + fVar12 * fVar10;
  uStack_b8 = CONCAT44(fVar9,fVar11 * fVar6 + fVar8);
  local_b0 = CONCAT44(fVar15,fVar9);
  uStack_a8 = (ulong)(uint)((1.0 - fVar13) - fVar12 * fVar6);
  uStack_c8 = CONCAT44(fVar15,fVar11 * fVar7 - fVar12 * fVar10);
  local_d0 = CONCAT44(fVar12 * fVar7 + fVar11 * fVar10,fVar14 - fVar12 * fVar6);
  uStack_c0 = CONCAT44(fVar14 - fVar13,fVar12 * fVar7 - fVar11 * fVar10);
  if (*(byte *)(param_4 + 0x90) < 4) {
    uStack_80 = param_8 & 0xbfcf;
    switch(*(byte *)(param_4 + 0x90)) {
    case 0:
      local_8a = (undefined2)((uint)param_1 >> 0x10);
      local_8c = (undefined1)(int)(param_3 / 255.0);
      local_90 = param_2;
      break;
    default:
      local_90 = 0;
      local_8c = 0xff;
      local_8a = 0;
      break;
    case 3:
      local_90 = 0;
      local_8c = 0xff;
      local_8a = 0;
      uStack_88 = 0;
      uStack_86 = 0;
      uStack_84 = 0;
      uStack_82 = 0;
      uStack_80 = 0;
      goto LAB_02f7fc30;
    }
    uStack_86 = 0;
    uStack_88 = 0;
    uStack_84 = (undefined2)param_7;
    uStack_82 = (undefined2)(param_7 >> 0x10);
  }
LAB_02f7fc30:
  if ((*(byte *)(param_4 + 0x95) & 1) != 0) {
    local_150 = CONCAT44((float)(double)param_10[3] +
                         (float)((ulong)*(undefined8 *)(param_4 + 0xe0) >> 0x20),
                         (float)(double)param_10[2] + (float)*(undefined8 *)(param_4 + 0xe0));
    uStack_148 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0xe8) >> 0x20) + 0.0,
                          (float)(double)param_10[4] + (float)*(undefined8 *)(param_4 + 0xe8));
    uStack_140 = CONCAT44((float)(double)param_13[3] +
                          (float)((ulong)*(undefined8 *)(param_4 + 0xf0) >> 0x20),
                          (float)(double)param_13[2] + (float)*(undefined8 *)(param_4 + 0xf0));
    uStack_138 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0xf8) >> 0x20) + 0.0,
                          (float)(double)param_13[4] + (float)*(undefined8 *)(param_4 + 0xf8));
  }
  local_68 = 0;
  local_70 = 0;
  local_66 = 0;
  iVar4 = -(uint)((param_7 & 0x80) == 0);
  local_a0 = CONCAT44(iVar4,iVar4);
  uStack_98 = local_a0 & 0xbd4ccccdbd4ccccd;
  local_a0 = local_a0 & 0x42c8000042c80000;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  uVar5 = param_10[8];
  fVar7 = (float)((int)(short)uVar5 << 0x10);
  fVar8 = (float)((int)(short)((ulong)uVar5 >> 0x10) << 0x10);
  local_1a0 = CONCAT44(fVar8,fVar7);
  fStack_198 = (float)((int)(short)((ulong)uVar5 >> 0x20) << 0x10);
  fStack_194 = (float)((int)(short)((ulong)uVar5 >> 0x30) << 0x10);
  uVar5 = param_13[8];
  fVar9 = (float)((int)(short)uVar5 << 0x10);
  fVar6 = (float)((int)(short)((ulong)uVar5 >> 0x10) << 0x10);
  local_190 = CONCAT44(fVar6,fVar9);
  fStack_188 = (float)((int)(short)((ulong)uVar5 >> 0x20) << 0x10);
  fStack_184 = (float)((int)(short)((ulong)uVar5 >> 0x30) << 0x10);
  if ((*(byte *)(param_4 + 0x95) >> 1 & 1) != 0) {
    local_1a0 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0xc0) >> 0x20) * fVar8,
                         (float)*(undefined8 *)(param_4 + 0xc0) * fVar7);
    fStack_198 = (float)*(undefined8 *)(param_4 + 200) * fStack_198;
    fStack_194 = (float)((ulong)*(undefined8 *)(param_4 + 200) >> 0x20) * fStack_194;
    local_190 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0xd0) >> 0x20) * fVar6,
                         (float)*(undefined8 *)(param_4 + 0xd0) * fVar9);
    fStack_188 = (float)*(undefined8 *)(param_4 + 0xd8) * fStack_188;
    fStack_184 = (float)((ulong)*(undefined8 *)(param_4 + 0xd8) >> 0x20) * fStack_184;
  }
  iVar4 = -(uint)(fStack_184 + fStack_194 == 0.0);
  puStack_178 = &local_270;
  local_230[0] = (ulong)((uint)((*(float *)(param_5 + 0x80) * (float)*(undefined8 *)(param_5 + 0x38)
                                ) / (fStack_184 + fStack_194)) &
                        CONCAT13(~(byte)((uint)iVar4 >> 0x18),
                                 CONCAT12(~(byte)((uint)iVar4 >> 0x10),
                                          CONCAT11(~(byte)((uint)iVar4 >> 8),~(byte)iVar4))));
  puStack_168 = local_230;
  local_170 = puStack_178;
  if (plVar2 == (long *)0x0) {
    uVar1 = 0x24;
    local_180 = (undefined1 *)&local_280;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,param_9,param_12);
  }
  local_1a8 = *(long *)(param_9 + 0x78);
  if ((local_1a8 == 0) || (*(char *)(local_1a8 + 0x18) != '\x15')) {
    local_1b0 = 0xffffffff;
  }
  else {
    plVar2 = (long *)(local_1a8 + (ulong)(uVar1 >> 5 & 7) * 8 + 0x48);
    lVar3 = *plVar2;
    local_1a8 = 0;
    if (lVar3 != 0) {
      local_1a8 = lVar3 + (long)plVar2;
    }
    local_1b0 = (uVar1 >> 5) << 0x1d | 0x1fffffff;
  }
  local_1d0 = *(long *)(param_12 + 0x78);
  local_230[8] = param_12;
  if ((local_1d0 == 0) || (*(char *)(local_1d0 + 0x18) != '\x15')) {
    local_1d8 = 0xffffffff;
  }
  else {
    plVar2 = (long *)(local_1d0 + (ulong)(uVar1 >> 2 & 7) * 8 + 0x48);
    lVar3 = *plVar2;
    local_1d0 = 0;
    if (lVar3 != 0) {
      local_1d0 = lVar3 + (long)plVar2;
    }
    local_1d8 = (uVar1 >> 2) << 0x1d | 0x1fffffff;
  }
  local_1e8 = param_13;
  uStack_1e0 = param_14;
  local_1c8 = param_9;
  local_1c0 = param_10;
  uStack_1b8 = param_11;
  local_70 = param_6;
  FUN_02f78d00(param_5,param_4,auStack_160,&local_1a0,0xff,&local_1c8,local_230 + 8,param_15);
  return;
}


