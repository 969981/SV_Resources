/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010b4ac8; name: FUN_010b4ac8
 */


void FUN_010b4ac8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  code *pcVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  
  uVar8 = *(ulong *)(param_1 + 0x130);
  if (uVar8 != 0) {
    fVar15 = *(float *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18 + 0x10);
    uVar6 = uVar8 - 1;
    if (uVar6 < 3) {
      uVar12 = 0;
      uVar10 = uVar6;
    }
    else {
      uVar11 = (ulong)((float)uVar6 * 0.5);
      lVar13 = *(long *)(param_1 + 0xf8);
      fVar16 = *(float *)(lVar13 + uVar11 * 0x10 + 8);
      uVar10 = uVar11;
      uVar3 = uVar11;
      if (fVar16 <= fVar15) {
        uVar10 = uVar6;
        uVar3 = uVar6 - uVar11;
      }
      uVar12 = 0;
      if (fVar16 <= fVar15) {
        uVar12 = uVar11;
      }
      if (2 < uVar3) {
        uVar11 = uVar12 + (long)((float)uVar3 * 0.5);
        uVar1 = uVar11;
        uVar3 = (long)((float)uVar3 * 0.5);
        if (*(float *)(lVar13 + uVar11 * 0x10 + 8) <= fVar15) {
          uVar12 = uVar11;
          uVar1 = uVar10;
          uVar3 = uVar10 - uVar11;
        }
        uVar10 = uVar1;
        if (2 < uVar3) {
          uVar11 = uVar12 + (long)((float)uVar3 * 0.5);
          uVar10 = uVar11;
          uVar3 = (long)((float)uVar3 * 0.5);
          if (*(float *)(lVar13 + uVar11 * 0x10 + 8) <= fVar15) {
            uVar12 = uVar11;
            uVar10 = uVar1;
            uVar3 = uVar1 - uVar11;
          }
          if (2 < uVar3) {
            uVar11 = uVar12 + (long)((float)uVar3 * 0.5);
            uVar1 = uVar11;
            uVar3 = (long)((float)uVar3 * 0.5);
            if (*(float *)(lVar13 + uVar11 * 0x10 + 8) <= fVar15) {
              uVar12 = uVar11;
              uVar1 = uVar10;
              uVar3 = uVar10 - uVar11;
            }
            uVar10 = uVar1;
            if (2 < uVar3) {
              uVar10 = uVar12 + (long)((float)uVar3 * 0.5);
              uVar11 = uVar10;
              uVar3 = (long)((float)uVar3 * 0.5);
              if (*(float *)(lVar13 + uVar10 * 0x10 + 8) <= fVar15) {
                uVar12 = uVar10;
                uVar11 = uVar1;
                uVar3 = uVar1 - uVar10;
              }
              while (uVar10 = uVar11, 2 < uVar3) {
                uVar1 = uVar12 + (long)((float)uVar3 * 0.5);
                uVar11 = uVar1;
                uVar3 = (long)((float)uVar3 * 0.5);
                if (*(float *)(lVar13 + uVar1 * 0x10 + 8) <= fVar15) {
                  uVar12 = uVar1;
                  uVar11 = uVar10;
                  uVar3 = uVar10 - uVar1;
                }
              }
            }
          }
        }
      }
    }
    lVar13 = *(long *)(param_1 + 0xf8);
    if (uVar10 <= uVar8 && uVar12 <= uVar10) {
      pfVar14 = (float *)(lVar13 + uVar10 * 0x10 + 8);
      while (fVar15 < *pfVar14) {
        uVar10 = uVar10 - 1;
        if ((uVar10 < uVar12) || (pfVar14 = pfVar14 + -4, uVar8 < uVar10)) goto LAB_010b4c74;
      }
      uVar10 = uVar10 + 1;
    }
LAB_010b4c74:
    if (uVar10 <= uVar8 && uVar12 <= uVar10) {
      uVar12 = uVar10;
    }
    uVar8 = uVar6;
    if (uVar12 <= uVar6) {
      uVar8 = uVar12;
    }
    if (uVar8 != 0) {
      puVar9 = (ulong *)(lVar13 + uVar8 * 0x10);
      do {
        if (*puVar9 == param_2) break;
        uVar8 = uVar8 - 1;
        puVar9 = puVar9 + -2;
      } while (uVar8 != 0);
    }
    puVar9 = (ulong *)(lVar13 + uVar8 * 0x10);
    if (*puVar9 == param_2) {
      *(ulong *)(param_1 + 0x130) = uVar6;
      if ((uVar8 <= uVar6 && uVar6 - uVar8 != 0) &&
         (uVar8 + 1 < (ulong)(*(long *)(param_1 + 0x100) - lVar13 >> 4))) {
        memmove(puVar9,(void *)(lVar13 + (uVar8 + 1) * 0x10),(uVar6 - uVar8) * 0x10);
      }
    }
    if (param_2 < *(ulong *)(param_1 + 0xb0)) {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + param_2 * 0x80);
      pcVar7 = (code *)puVar2[1];
      if (pcVar7 != (code *)0x0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        (*pcVar7)(puVar2 + 4);
      }
      puVar5 = PTR_LAB_047d97e8;
      puVar4 = PTR_LAB_047d97e0;
      *puVar2 = PTR_LAB_047d97d8;
      puVar2[1] = puVar4;
      puVar4 = PTR_LAB_047d97f0;
      puVar2[2] = puVar5;
      puVar2[3] = puVar4;
      FUN_010b4d84((long *)(param_1 + 8),param_2);
      return;
    }
  }
  return;
}


