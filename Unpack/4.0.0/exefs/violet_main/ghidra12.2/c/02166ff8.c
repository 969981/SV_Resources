/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02166ff8; name: FUN_02166ff8
 */


undefined8 FUN_02166ff8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  float *pfVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  
  lVar6 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170));
  if (lVar6 == 0) {
    uVar13 = 0;
    param_3[1] = 0;
    *param_3 = 0;
    uVar7 = 0;
  }
  else {
    fVar10 = 0.0;
    fVar9 = 0.0;
    lVar8 = lVar6;
    do {
      pfVar1 = (float *)(lVar8 + 0x30);
      fVar9 = fVar9 + *(float *)(lVar8 + 0x34);
      lVar8 = *(long *)(lVar8 + 0x18);
      fVar10 = fVar10 + *pfVar1;
    } while (lVar8 != 0);
    fVar12 = *(float *)(lVar6 + 0x50);
    fVar11 = *(float *)(lVar6 + 0x54);
    lVar8 = lVar6;
    do {
      pfVar1 = (float *)(lVar8 + 0x48);
      fVar11 = fVar11 * *(float *)(lVar8 + 0x4c);
      lVar8 = *(long *)(lVar8 + 0x18);
      fVar12 = fVar12 * *pfVar1;
    } while (lVar8 != 0);
    bVar2 = *(byte *)(lVar6 + 0x5b) & 3;
    bVar3 = *(byte *)(lVar6 + 0x5b) >> 2 & 3;
    fVar5 = fVar12 * 0.5;
    if (bVar2 == 1) {
      fVar5 = fVar12;
    }
    fVar4 = fVar10 - fVar12 * 0.5;
    if (bVar2 == 1) {
      fVar4 = fVar10;
    }
    fVar12 = fVar10 - fVar12;
    if (bVar2 != 2) {
      fVar10 = fVar10 + fVar5;
      fVar12 = fVar4;
    }
    fVar5 = fVar11 * 0.5;
    fVar4 = fVar9 + fVar11 * 0.5;
    if (bVar3 == 1) {
      fVar5 = fVar11;
      fVar4 = fVar9;
    }
    fVar11 = fVar9 + fVar11;
    if (bVar3 != 2) {
      fVar9 = fVar9 - fVar5;
      fVar11 = fVar4;
    }
    uVar7 = 1;
    uVar13 = CONCAT44(fVar9,fVar10);
    param_3[1] = 0;
    *param_3 = CONCAT44(fVar11,fVar12);
  }
  param_4[1] = 0;
  *param_4 = uVar13;
  return uVar7;
}


