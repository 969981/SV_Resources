/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ba404; name: FUN_008ba404
 */


void FUN_008ba404(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_88;
  float local_80;
  long local_78;
  
  if (*(int *)(param_1 + 0xd4) == 1) {
    puVar8 = *(undefined8 **)(param_1 + 0x28);
    fVar13 = 0.0;
    if ((undefined8 *)(param_1 + 0x20) == puVar8) goto LAB_008ba5b4;
LAB_008ba474:
    fVar11 = 0.0;
    bVar9 = false;
    lVar6 = 0;
    lVar7 = 0;
    puVar1 = (undefined8 *)(param_1 + 0x20);
    puVar10 = puVar8;
    do {
      local_88 = 0;
      local_80 = 0.0;
      local_78 = 0;
      uVar4 = FUN_008ba6e0(puVar10 + -1,&local_88);
      if ((uVar4 & 1) != 0) {
        if ((*(char *)(param_1 + 0xdc) != '\0') &&
           (puVar5 = *(undefined8 **)(param_1 + 0x28), puVar5 != puVar1)) {
          iVar2 = *(int *)(param_1 + 0xd4);
          if (iVar2 == 2) {
LAB_008ba554:
            if (puVar5 != puVar10) goto LAB_008ba4a0;
          }
          else {
            if (iVar2 != 1) {
              if (iVar2 != 0) goto LAB_008ba4a0;
LAB_008ba550:
              puVar5 = (undefined8 *)*puVar1;
              goto LAB_008ba554;
            }
            if (puVar5 != puVar10) goto LAB_008ba550;
          }
          local_88 = local_88 & 0xffffffff00000000;
          local_80 = 0.0;
        }
LAB_008ba4a0:
        fVar12 = fVar13 + local_88._4_4_;
        if (!bVar9) {
          fVar12 = fVar13;
        }
        if (!bVar9) {
          fVar11 = fVar11 - local_88._4_4_;
        }
        fVar13 = fVar12 + (float)local_88;
        *(byte *)(puVar10 + 10) = *(byte *)(puVar10 + 10) | 0x10;
        fVar11 = fVar11 + local_88._4_4_ + (float)local_88;
        if (!bVar9) {
          lVar6 = local_78;
        }
        *(float *)(puVar10 + 5) = (fVar12 + (float)local_88 * 0.5) - local_80;
        lVar7 = local_78;
        bVar9 = true;
      }
      puVar10 = (undefined8 *)puVar10[1];
    } while (puVar1 != puVar10);
    if (*(int *)(param_1 + 0xd4) == 1) {
      do {
        if (((*(byte *)(puVar8 + 10) & 1) != 0) &&
           (uVar4 = FUN_008a8c78(puVar8 + -1), (uVar4 & 1) == 0)) {
          *(byte *)(puVar8 + 10) = *(byte *)(puVar8 + 10) | 0x10;
          *(float *)(puVar8 + 5) = *(float *)(puVar8 + 5) - fVar11 * 0.5;
        }
        puVar8 = (undefined8 *)puVar8[1];
      } while (puVar1 != puVar8);
    }
  }
  else {
    puVar8 = *(undefined8 **)(param_1 + 0x28);
    if ((undefined8 *)(param_1 + 0x20) != puVar8) {
      fVar13 = *(float *)(param_1 + 0x50) * -0.5;
      goto LAB_008ba474;
    }
LAB_008ba5b4:
    fVar11 = 0.0;
    lVar6 = 0;
    lVar7 = 0;
  }
  if (*(char *)(param_1 + 0xdc) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0xd4) != 1) {
    if (*(int *)(param_1 + 0xd4) != 0) {
      return;
    }
    fVar11 = *(float *)(param_1 + 0x50) - fVar11;
    bVar3 = *(byte *)(lVar7 + 0x58) | 0x10;
    *(byte *)(lVar7 + 0x58) = bVar3;
    *(float *)(lVar7 + 0x50) = fVar11;
    if ((*(byte *)(lVar7 + 0x5b) & 3) != 2) {
      if ((*(byte *)(lVar7 + 0x5b) & 3) != 0) {
        return;
      }
      fVar11 = fVar11 * 0.5;
    }
    *(float *)(lVar7 + 0x30) = fVar11 + *(float *)(lVar7 + 0x30);
    *(byte *)(lVar7 + 0x58) = bVar3;
    return;
  }
  fVar11 = (*(float *)(param_1 + 0x50) - fVar11) * 0.5;
  bVar3 = *(byte *)(lVar7 + 0x58) | 0x10;
  *(byte *)(lVar7 + 0x58) = bVar3;
  *(float *)(lVar7 + 0x50) = fVar11;
  fVar13 = fVar11;
  if ((*(byte *)(lVar7 + 0x5b) & 3) != 2) {
    if ((*(byte *)(lVar7 + 0x5b) & 3) != 0) goto LAB_008ba668;
    fVar13 = fVar11 * 0.5;
  }
  *(float *)(lVar7 + 0x30) = fVar13 + *(float *)(lVar7 + 0x30);
  *(byte *)(lVar7 + 0x58) = bVar3;
LAB_008ba668:
  bVar3 = *(byte *)(lVar6 + 0x58) | 0x10;
  *(float *)(lVar6 + 0x50) = fVar11;
  *(byte *)(lVar6 + 0x58) = bVar3;
  if ((*(byte *)(lVar6 + 0x5b) & 3) == 1) {
    fVar11 = *(float *)(lVar6 + 0x30) - fVar11;
  }
  else {
    if ((*(byte *)(lVar6 + 0x5b) & 3) != 0) {
      return;
    }
    fVar11 = *(float *)(lVar6 + 0x30) + fVar11 * -0.5;
  }
  *(float *)(lVar6 + 0x30) = fVar11;
  *(byte *)(lVar6 + 0x58) = bVar3;
  return;
}


