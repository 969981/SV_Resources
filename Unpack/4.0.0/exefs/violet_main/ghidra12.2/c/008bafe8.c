/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008bafe8; name: FUN_008bafe8
 */


void FUN_008bafe8(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_88;
  float local_80;
  long local_78;
  
  if (*(int *)(param_1 + 0xd4) == 1) {
    puVar9 = *(undefined8 **)(param_1 + 0x28);
    fVar13 = 0.0;
    if ((undefined8 *)(param_1 + 0x20) == puVar9) goto LAB_008bb19c;
LAB_008bb058:
    fVar12 = 0.0;
    bVar10 = false;
    lVar7 = 0;
    lVar8 = 0;
    puVar1 = (undefined8 *)(param_1 + 0x20);
    puVar11 = puVar9;
    do {
      local_88 = 0;
      local_80 = 0.0;
      local_78 = 0;
      uVar5 = FUN_008bb2c0(puVar11 + -1,&local_88);
      if ((uVar5 & 1) != 0) {
        if ((*(char *)(param_1 + 0xdc) != '\0') &&
           (puVar6 = *(undefined8 **)(param_1 + 0x28), puVar6 != puVar1)) {
          iVar2 = *(int *)(param_1 + 0xd4);
          if (iVar2 == 2) {
LAB_008bb138:
            if (puVar6 != puVar11) goto LAB_008bb084;
          }
          else {
            if (iVar2 != 1) {
              if (iVar2 != 0) goto LAB_008bb084;
LAB_008bb134:
              puVar6 = (undefined8 *)*puVar1;
              goto LAB_008bb138;
            }
            if (puVar6 != puVar11) goto LAB_008bb134;
          }
          local_88 = local_88 & 0xffffffff00000000;
          local_80 = 0.0;
        }
LAB_008bb084:
        fVar14 = fVar13 - local_88._4_4_;
        if (!bVar10) {
          fVar14 = fVar13;
        }
        if (!bVar10) {
          fVar12 = fVar12 - local_88._4_4_;
        }
        fVar13 = fVar14 - (float)local_88;
        *(byte *)(puVar11 + 10) = *(byte *)(puVar11 + 10) | 0x10;
        fVar12 = fVar12 + local_88._4_4_ + (float)local_88;
        if (!bVar10) {
          lVar7 = local_78;
        }
        *(float *)((long)puVar11 + 0x2c) = (fVar14 + (float)local_88 * -0.5) - local_80;
        lVar8 = local_78;
        bVar10 = true;
      }
      puVar11 = (undefined8 *)puVar11[1];
    } while (puVar1 != puVar11);
    if (*(int *)(param_1 + 0xd4) == 1) {
      do {
        if (((*(byte *)(puVar9 + 10) & 1) != 0) &&
           (uVar5 = FUN_008a8c78(puVar9 + -1), (uVar5 & 1) == 0)) {
          *(byte *)(puVar9 + 10) = *(byte *)(puVar9 + 10) | 0x10;
          *(float *)((long)puVar9 + 0x2c) = fVar12 * 0.5 + *(float *)((long)puVar9 + 0x2c);
        }
        puVar9 = (undefined8 *)puVar9[1];
      } while (puVar1 != puVar9);
    }
  }
  else {
    puVar9 = *(undefined8 **)(param_1 + 0x28);
    if ((undefined8 *)(param_1 + 0x20) != puVar9) {
      fVar13 = *(float *)(param_1 + 0x54) * 0.5;
      goto LAB_008bb058;
    }
LAB_008bb19c:
    fVar12 = 0.0;
    lVar7 = 0;
    lVar8 = 0;
  }
  if (*(char *)(param_1 + 0xdc) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0xd4) != 1) {
    if (*(int *)(param_1 + 0xd4) != 0) {
      return;
    }
    fVar12 = *(float *)(param_1 + 0x54) - fVar12;
    bVar4 = *(byte *)(lVar8 + 0x5b) >> 2 & 3;
    bVar3 = *(byte *)(lVar8 + 0x58) | 0x10;
    *(byte *)(lVar8 + 0x58) = bVar3;
    *(float *)(lVar8 + 0x54) = fVar12;
    if (bVar4 == 2) {
      fVar12 = *(float *)(lVar8 + 0x34) - fVar12;
    }
    else {
      if (bVar4 != 0) {
        return;
      }
      fVar12 = *(float *)(lVar8 + 0x34) + fVar12 * -0.5;
    }
    *(float *)(lVar8 + 0x34) = fVar12;
    *(byte *)(lVar8 + 0x58) = bVar3;
    return;
  }
  fVar13 = (*(float *)(param_1 + 0x54) - fVar12) * 0.5;
  bVar3 = *(byte *)(lVar8 + 0x58) | 0x10;
  *(byte *)(lVar8 + 0x58) = bVar3;
  bVar4 = *(byte *)(lVar8 + 0x5b) >> 2 & 3;
  *(float *)(lVar8 + 0x54) = fVar13;
  fVar12 = fVar13;
  if (bVar4 != 2) {
    if (bVar4 != 0) goto LAB_008bb248;
    fVar12 = fVar13 * 0.5;
  }
  *(float *)(lVar8 + 0x34) = *(float *)(lVar8 + 0x34) - fVar12;
  *(byte *)(lVar8 + 0x58) = bVar3;
LAB_008bb248:
  bVar4 = *(byte *)(lVar7 + 0x5b) >> 2 & 3;
  bVar3 = *(byte *)(lVar7 + 0x58) | 0x10;
  *(float *)(lVar7 + 0x54) = fVar13;
  *(byte *)(lVar7 + 0x58) = bVar3;
  if (bVar4 != 1) {
    if (bVar4 != 0) {
      return;
    }
    fVar13 = fVar13 * 0.5;
  }
  *(float *)(lVar7 + 0x34) = fVar13 + *(float *)(lVar7 + 0x34);
  *(byte *)(lVar7 + 0x58) = bVar3;
  return;
}


