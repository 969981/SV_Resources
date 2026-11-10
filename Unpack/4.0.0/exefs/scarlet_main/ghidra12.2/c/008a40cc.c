/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a40cc; name: FUN_008a40cc
 */


void FUN_008a40cc(long param_1,long param_2,undefined4 *param_3,uint param_4)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  
  lVar6 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  if (lVar6 != 0) {
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar9 = -(ulong)(param_4 >> 0x1f) & 0xfffffff000000000 | (ulong)param_4 << 4;
    lVar8 = *(long *)(*(long *)(param_1 + 0x18) +
                     (long)(int)((uVar3 >> 4 & 0x1c) + (uVar3 >> 8 & 0xc) + (uVar3 >> 0xc & 8) +
                                 (uVar3 >> 0xd & 0x60) + (uVar3 >> 0xc & 1) * 0xc +
                                 (uVar3 >> 0x10 & 1) * 0x1c +
                                 (uVar3 >> 0xc & 0x10) * (uVar3 >> 6 & 7) +
                                 (uVar3 >> 0x11 & 1) * 0x74 +
                                 ((uVar3 & 3) * 0x10 + (uVar3 & 0x30) | uVar3 >> 6 & 8) +
                                ((uVar3 >> 0xd & 3) + (uVar3 >> 2 & 3)) * 0x14));
    lVar1 = lVar6 + lVar8;
    puVar2 = (undefined4 *)(lVar1 + uVar9);
    lVar1 = lVar1 + 0x60;
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
    puVar2[3] = param_3[3];
    puVar2[0xc] = param_3[4];
    puVar2[0xd] = param_3[5];
    puVar5 = PTR_FloatDegree180_047d2390;
    fVar11 = (float)param_3[6];
    fVar10 = *(float *)PTR_FloatPi_047d23a0;
    puVar2[0xf] = 0;
    fVar13 = *(float *)puVar5;
    puVar2[0x24] = 0x3f800000;
    fVar10 = fVar10 / fVar13;
    puVar2[0xe] = fVar11 * fVar10;
    uVar12 = 0;
    if ((*(byte *)(param_3 + 0x10) & 4) != 0) {
      uVar12 = 0x3f800000;
    }
    lVar6 = lVar8 + uVar9 + lVar6;
    puVar2[0x25] = uVar12;
    *(undefined8 *)(lVar6 + 0x60) = 0;
    *(undefined8 *)(lVar6 + 0x68) = 0;
    bVar4 = *(byte *)(param_3 + 0x10);
    if ((bVar4 & 1) != 0) {
      puVar2 = (undefined4 *)(lVar1 + (long)(int)param_4 * 0x10);
      *puVar2 = param_3[0xc];
      puVar2[1] = (float)param_3[0xd] - (float)param_3[0xc];
      bVar4 = *(byte *)(param_3 + 0x10);
    }
    if ((bVar4 >> 1 & 1) != 0) {
      lVar1 = lVar1 + (long)(int)param_4 * 0x10;
      *(float *)(lVar1 + 8) = fVar10 * (float)param_3[0xe];
      *(float *)(lVar1 + 0xc) = fVar10 * ((float)param_3[0xf] - (float)param_3[0xe]);
    }
  }
  if (param_4 == 2) {
    lVar6 = *(long *)(*(long *)(param_2 + 200) + 0x38);
    if (lVar6 != 0) {
      lVar6 = lVar6 + (ulong)*(uint *)(param_1 + 0x30);
    }
    puVar7 = (undefined8 *)(lVar6 + 0x160);
  }
  else if (param_4 == 1) {
    lVar6 = *(long *)(*(long *)(param_2 + 200) + 0x38);
    if (lVar6 != 0) {
      lVar6 = lVar6 + (ulong)*(uint *)(param_1 + 0x30);
    }
    puVar7 = (undefined8 *)(lVar6 + 0x120);
  }
  else {
    if (param_4 != 0) {
      return;
    }
    lVar6 = *(long *)(*(long *)(param_2 + 200) + 0x38);
    if (lVar6 != 0) {
      lVar6 = lVar6 + (ulong)*(uint *)(param_1 + 0x30);
    }
    puVar7 = (undefined8 *)(lVar6 + 0xe0);
  }
  puVar7[2] = 0x3f800000;
  puVar7[3] = 0x3f80000000000000;
  *puVar7 = 0;
  puVar7[1] = 0x3f80000000000000;
  puVar7[4] = 0x3f80000000000000;
  puVar7[5] = 0x3f80000000000000;
  puVar7[6] = 0x3f8000003f800000;
  puVar7[7] = 0x3f80000000000000;
  return;
}


