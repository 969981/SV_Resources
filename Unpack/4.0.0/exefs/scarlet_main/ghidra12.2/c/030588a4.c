/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030588a4; name: FUN_030588a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030588a4(float param_1,float param_2,float param_3,long param_4,long param_5,long param_6,
                 undefined8 *param_7,long param_8,undefined8 param_9)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  short sVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  short sVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  byte local_74 [4];
  uint local_70 [2];
  uint local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  *(float *)(param_4 + 0x44) = param_1;
  if (param_3 <= param_1) {
    param_3 = param_1;
  }
  *(float *)(param_4 + 0x3c) = param_2;
  *(float *)(param_4 + 0x40) = param_3;
  local_68[0] = *(uint *)(param_5 + 0x40);
  local_70[0] = local_68[0] >> 0x16;
  lVar17 = *(long *)(*(long *)(param_8 + 0x38) + (ulong)local_70[0] * 0x100);
  iVar15 = *(int *)(*(long *)(lVar17 + 0x20) + 0x60);
  *(int *)(param_4 + 0x38) = iVar15;
  bVar2 = *(byte *)(*(long *)(*(long *)(lVar17 + 0x20) + 0x68) + 0x80);
  local_74[0] = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    uStack_58 = param_7[1];
    local_60 = *param_7;
  }
  else {
    FUN_030963b0(*(long *)(lVar17 + 0x20),local_68[0] & 0x3fffff,&local_60);
    fVar22 = *(float *)(lVar17 + 0x78) * local_60._4_4_;
    fVar24 = *(float *)(lVar17 + 0x7c) * local_60._4_4_;
    fVar19 = (float)*(undefined8 *)(lVar17 + 0x68) * (float)local_60;
    fVar21 = (float)((ulong)*(undefined8 *)(lVar17 + 0x68) >> 0x20) * (float)local_60;
    auVar5 = *(undefined1 (*) [16])(lVar17 + 0x80);
    iVar15 = *(int *)(param_4 + 0x38);
    local_60 = CONCAT44(auVar5._4_4_ * (float)uStack_58 +
                        (float)((ulong)*(undefined8 *)(lVar17 + 0x60) >> 0x20) * (float)local_60 +
                        *(float *)(lVar17 + 0x74) * local_60._4_4_,
                        auVar5._0_4_ * (float)uStack_58 +
                        (float)*(undefined8 *)(lVar17 + 0x60) * (float)local_60 +
                        *(float *)(lVar17 + 0x70) * local_60._4_4_);
    uStack_58 = CONCAT44(auVar5._12_4_ * (float)uStack_58 + fVar21 + fVar24,
                         auVar5._8_4_ * (float)uStack_58 + fVar19 + fVar22);
  }
  iVar3 = *(int *)(param_6 + 0x20);
  lVar17 = (long)*(int *)(param_4 + 0x30) + (long)iVar3 * (long)iVar15;
  iVar15 = (int)lVar17;
  if ((int)(*(uint *)(param_4 + 0x34) & 0x7fffffff) < iVar15) {
    FUN_02e9b320(param_4 + 0x28,PTR_PTR_047d1a50,lVar17);
  }
  lVar17 = (long)*(int *)(param_4 + 0x20) + (long)iVar3;
  *(int *)(param_4 + 0x30) = iVar15;
  iVar15 = (int)lVar17;
  if ((int)(*(uint *)(param_4 + 0x24) & 0x7fffffff) < iVar15) {
    FUN_0305c2f8(param_4 + 0x18,lVar17);
  }
  *(int *)(param_4 + 0x20) = iVar15;
  uVar1 = *(uint *)(param_6 + 0x20);
  if (0 < (int)uVar1) {
    uVar18 = 0;
    do {
      FUN_03058bd4(param_4,param_8,param_9,*(undefined4 *)(*(long *)(param_6 + 0x18) + uVar18 * 4),
                   &local_60,local_68,local_70,local_74,(int)uVar18);
      uVar18 = uVar18 + 1;
    } while (uVar1 != uVar18);
  }
  if (*(char *)(param_6 + 0x4c) == '\x01') {
    uVar1 = *(uint *)(*(long *)(param_5 + 0x48) + (long)*(int *)(param_6 + 0x44) * 4);
    puVar14 = (undefined8 *)(*(long *)(param_5 + 0x30) + (long)*(int *)(param_6 + 0x44) * 0x10);
    uVar20 = *puVar14;
    lVar16 = (ulong)(uVar1 >> 0x16) * 0x100;
    lVar17 = *(long *)(*(long *)(param_8 + 0x38) + lVar16);
    auVar5 = *(undefined1 (*) [16])(lVar17 + 0x80);
    fVar19 = (float)uVar20 - *(float *)(lVar17 + 0x90);
    fVar21 = (float)((ulong)uVar20 >> 0x20) - *(float *)(lVar17 + 0x94);
    fVar22 = (float)puVar14[1] - *(float *)(lVar17 + 0x98);
    auVar6 = *(undefined1 (*) [16])(lVar17 + 0x60);
    auVar7 = *(undefined1 (*) [16])(lVar17 + 0x70);
    lVar17 = (long)*(int *)(param_4 + 0x30) + (long)*(int *)(param_4 + 0x38);
    iVar15 = (int)lVar17;
    auVar23 = NEON_ext(auVar6,auVar6,8,1);
    auVar26 = NEON_ext(auVar7,auVar7,8,1);
    auVar25 = NEON_ext(auVar5,auVar5,8,1);
    uVar20 = CONCAT44(auVar26._0_4_ * fVar22 + auVar7._0_4_ * fVar19 + auVar7._4_4_ * fVar21,
                      auVar23._0_4_ * fVar22 + auVar6._0_4_ * fVar19 + auVar6._4_4_ * fVar21);
    if ((int)(*(uint *)(param_4 + 0x34) & 0x7fffffff) < iVar15) {
      FUN_02e9b320(param_4 + 0x28,PTR_PTR_047d1a50,lVar17);
    }
    uVar18 = (ulong)(uint)(auVar25._0_4_ * fVar22 + auVar5._0_4_ * fVar19 + auVar5._4_4_ * fVar21);
    *(int *)(param_4 + 0x30) = iVar15;
    lVar17 = (long)*(int *)(param_4 + 0x20);
    if ((int)(*(uint *)(param_4 + 0x24) & 0x7fffffff) <= *(int *)(param_4 + 0x20)) {
      FUN_0305c2f8(param_4 + 0x18,lVar17 + 1);
    }
    lVar12 = *(long *)(param_4 + 0x18);
    puVar14 = (undefined8 *)(lVar12 + lVar17 * 0x90);
    *(int *)(param_4 + 0x20) = (int)(lVar17 + 1);
    puVar14[1] = uVar18;
    *puVar14 = uVar20;
    puVar14[3] = uVar18;
    puVar14[2] = uVar20;
    puVar14[5] = uStack_58;
    puVar14[4] = local_60;
    *(undefined2 *)(puVar14 + 0xf) = 0xffff;
    lVar16 = *(long *)(*(long *)(*(long *)(param_8 + 0x38) + lVar16) + 0x20);
    iVar15 = *(int *)(lVar16 + 0x20);
    if ((int)((ulong)uVar1 & 0x3fffff) < iVar15) {
      *(uint *)(puVar14 + 0xe) = uVar1;
      sVar13 = -1;
    }
    else {
      lVar16 = *(long *)(lVar16 + 0x168);
      uVar4 = *(uint *)(lVar16 + ((ulong)uVar1 & 0x3fffff) * 4);
      iVar3 = *(int *)(lVar16 + (long)(int)uVar4 * 4);
      sVar8 = (short)iVar15;
      sVar13 = sVar8 - (short)iVar3;
      if (iVar3 == -2) {
        sVar13 = 1;
      }
      sVar13 = ((short)uVar1 - sVar8) + sVar13;
      *(uint *)(puVar14 + 0xe) = uVar4 | uVar1 & 0xffc00000;
    }
    uVar11 = _UNK_03cabe68;
    uVar10 = _DAT_03cabe60;
    uVar9 = DAT_03cab628;
    uVar20 = DAT_03cab620;
    lVar12 = lVar12 + lVar17 * 0x90;
    *(short *)(lVar12 + 0x74) = sVar13;
    *(undefined8 *)(lVar12 + 0x38) = uVar9;
    *(undefined8 *)(lVar12 + 0x30) = uVar20;
    *(undefined8 *)(lVar12 + 0x48) = uVar11;
    *(undefined8 *)(lVar12 + 0x40) = uVar10;
    uVar11 = _UNK_03cabe58;
    uVar10 = _DAT_03cabe50;
    uVar9 = _UNK_03caa5b8;
    uVar20 = _DAT_03caa5b0;
    *(undefined1 *)(lVar12 + 0x80) = 0;
    *(undefined8 *)(lVar12 + 0x58) = uVar9;
    *(undefined8 *)(lVar12 + 0x50) = uVar20;
    *(undefined8 *)(lVar12 + 0x68) = uVar11;
    *(undefined8 *)(lVar12 + 0x60) = uVar10;
  }
  return;
}


