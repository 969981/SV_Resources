/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030a4544; name: FUN_030a4544
 */


void FUN_030a4544(float *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
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
  float fVar16;
  
  plVar1 = (long *)(*(long *)(param_1 + 0x1a) + (long)param_2 * 8);
  fVar6 = param_1[0x18];
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  fVar5 = *param_1;
  fVar7 = *(float *)(lVar2 + 0x20);
  uVar4 = (uint)(fVar6 <= fVar5);
  if (fVar5 < fVar7) {
    uVar4 = 0xffffffff;
  }
  if (uVar4 == 1) {
    fVar11 = *(float *)(lVar2 + 8);
    fVar9 = *(float *)(lVar2 + 0xc);
    fVar16 = fVar6 - fVar11;
    fVar15 = *(float *)(lVar3 + 8);
    fVar13 = *(float *)(lVar3 + 0xc);
    fVar10 = *(float *)(lVar2 + 0x18);
    fVar14 = *(float *)(lVar3 + 0x18);
    fVar12 = fVar6 - fVar15;
    fVar8 = param_1[1];
    uVar4 = (uint)(fVar13 + fVar14 * fVar12 <= fVar8);
    if (fVar8 < fVar9 + fVar10 * fVar16) {
      uVar4 = 0xffffffff;
    }
    if (uVar4 == 1) {
      fVar6 = -((fVar15 - fVar5) + fVar14 * (fVar13 - fVar8)) / (fVar14 * fVar14 + 1.0);
      if (fVar6 <= fVar12) {
        fVar12 = fVar6;
      }
      fVar16 = fVar7 - fVar15;
      if (fVar7 - fVar15 <= fVar6) {
        fVar16 = fVar12;
      }
LAB_030a47c0:
      fVar11 = fVar15 + fVar16;
      fVar9 = fVar13 + fVar14 * fVar16;
      goto LAB_030a4818;
    }
    if (uVar4 == 0xffffffff) {
      fVar6 = -((fVar11 - fVar5) + fVar10 * (fVar9 - fVar8)) / (fVar10 * fVar10 + 1.0);
      if (fVar6 <= fVar16) {
        fVar16 = fVar6;
      }
      fVar12 = fVar7 - fVar11;
      if (fVar7 - fVar11 <= fVar6) {
        fVar12 = fVar16;
      }
      goto LAB_030a4714;
    }
    fVar5 = (fVar6 - fVar5) * (fVar6 - fVar5) + (fVar8 - fVar8) * (fVar8 - fVar8);
    if (param_1[4] <= fVar5) {
      return;
    }
    param_1[2] = fVar6;
LAB_030a4864:
    param_1[3] = fVar8;
  }
  else {
    if (uVar4 == 0xffffffff) {
      fVar11 = *(float *)(lVar2 + 8);
      fVar9 = *(float *)(lVar2 + 0xc);
      fVar12 = fVar7 - fVar11;
      fVar15 = *(float *)(lVar3 + 8);
      fVar13 = *(float *)(lVar3 + 0xc);
      fVar10 = *(float *)(lVar2 + 0x18);
      fVar14 = *(float *)(lVar3 + 0x18);
      fVar16 = fVar7 - fVar15;
      fVar8 = param_1[1];
      uVar4 = (uint)(fVar13 + fVar14 * fVar16 <= fVar8);
      if (fVar8 < fVar9 + fVar10 * fVar12) {
        uVar4 = 0xffffffff;
      }
      if (uVar4 == 1) {
        fVar12 = -((fVar15 - fVar5) + fVar14 * (fVar13 - fVar8)) / (fVar14 * fVar14 + 1.0);
        fVar7 = fVar6 - fVar15;
        if (fVar12 <= fVar6 - fVar15) {
          fVar7 = fVar12;
        }
        if (fVar16 <= fVar12) {
          fVar16 = fVar7;
        }
        goto LAB_030a47c0;
      }
      if (uVar4 != 0xffffffff) {
        fVar5 = (fVar7 - fVar5) * (fVar7 - fVar5) + (fVar8 - fVar8) * (fVar8 - fVar8);
        if (param_1[4] <= fVar5) {
          return;
        }
        param_1[2] = fVar7;
        goto LAB_030a4864;
      }
      fVar16 = -((fVar11 - fVar5) + fVar10 * (fVar9 - fVar8)) / (fVar10 * fVar10 + 1.0);
      fVar7 = fVar6 - fVar11;
      if (fVar16 <= fVar6 - fVar11) {
        fVar7 = fVar16;
      }
      if (fVar12 <= fVar16) {
        fVar12 = fVar7;
      }
    }
    else {
      fVar11 = *(float *)(lVar2 + 8);
      fVar9 = *(float *)(lVar2 + 0xc);
      fVar10 = *(float *)(lVar2 + 0x18);
      fVar16 = *(float *)(lVar3 + 0x18);
      fVar13 = *(float *)(lVar3 + 8);
      fVar12 = *(float *)(lVar3 + 0xc);
      fVar8 = param_1[1];
      uVar4 = (uint)(fVar12 + fVar16 * (fVar5 - fVar13) <= fVar8);
      if (fVar8 < fVar9 + fVar10 * (fVar5 - fVar11)) {
        uVar4 = 0xffffffff;
      }
      if (uVar4 == 1) {
        fVar9 = -((fVar13 - fVar5) + fVar16 * (fVar12 - fVar8)) / (fVar16 * fVar16 + 1.0);
        fVar11 = fVar6 - fVar13;
        if (fVar9 <= fVar6 - fVar13) {
          fVar11 = fVar9;
        }
        fVar6 = fVar7 - fVar13;
        if (fVar7 - fVar13 <= fVar9) {
          fVar6 = fVar11;
        }
        fVar11 = fVar13 + fVar6;
        fVar9 = fVar12 + fVar16 * fVar6;
        goto LAB_030a4818;
      }
      if (uVar4 != 0xffffffff) {
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_1;
        param_1[4] = 0.0;
        goto LAB_030a486c;
      }
      fVar13 = -((fVar11 - fVar5) + fVar10 * (fVar9 - fVar8)) / (fVar10 * fVar10 + 1.0);
      fVar16 = fVar6 - fVar11;
      if (fVar13 <= fVar6 - fVar11) {
        fVar16 = fVar13;
      }
      fVar12 = fVar7 - fVar11;
      if (fVar7 - fVar11 <= fVar13) {
        fVar12 = fVar16;
      }
    }
LAB_030a4714:
    fVar11 = fVar11 + fVar12;
    fVar9 = fVar9 + fVar10 * fVar12;
LAB_030a4818:
    fVar5 = (fVar11 - fVar5) * (fVar11 - fVar5) + (fVar9 - fVar8) * (fVar9 - fVar8);
    if (param_1[4] <= fVar5) {
      return;
    }
    param_1[2] = fVar11;
    param_1[3] = fVar9;
  }
  param_1[4] = fVar5;
LAB_030a486c:
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}


