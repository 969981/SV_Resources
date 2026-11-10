/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0128504c; name: FUN_0128504c
 */


void FUN_0128504c(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  
  uVar8 = *(ulong *)(param_1 + 0x130);
  if (uVar8 != 0) {
    fVar15 = *(float *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18 + 0x10);
    uVar6 = uVar8 - 1;
    if (uVar6 < 3) {
      uVar12 = 0;
      uVar11 = uVar6;
    }
    else {
      uVar11 = (ulong)((float)uVar6 * 0.5);
      fVar16 = *(float *)(*(long *)(param_1 + 0xf8) + uVar11 * 0x10 + 8);
      uVar9 = uVar11;
      uVar3 = uVar11;
      if (fVar16 <= fVar15) {
        uVar9 = uVar6;
        uVar3 = uVar6 - uVar11;
      }
      uVar12 = 0;
      if (fVar16 <= fVar15) {
        uVar12 = uVar11;
      }
      while (uVar11 = uVar9, 2 < uVar3) {
        uVar2 = uVar12 + (long)((float)uVar3 * 0.5);
        uVar9 = uVar2;
        uVar3 = (long)((float)uVar3 * 0.5);
        if (*(float *)(*(long *)(param_1 + 0xf8) + uVar2 * 0x10 + 8) <= fVar15) {
          uVar12 = uVar2;
          uVar9 = uVar11;
          uVar3 = uVar11 - uVar2;
        }
      }
    }
    lVar10 = *(long *)(param_1 + 0xf8);
    if (uVar11 <= uVar8 && uVar12 <= uVar11) {
      pfVar14 = (float *)(lVar10 + uVar11 * 0x10 + 8);
      while (fVar15 < *pfVar14) {
        uVar11 = uVar11 - 1;
        if ((uVar11 < uVar12) || (pfVar14 = pfVar14 + -4, uVar8 < uVar11)) goto LAB_012850b8;
      }
      uVar11 = uVar11 + 1;
    }
LAB_012850b8:
    if (uVar11 <= uVar8 && uVar12 <= uVar11) {
      uVar12 = uVar11;
    }
    uVar8 = uVar6;
    if (uVar12 <= uVar6) {
      uVar8 = uVar12;
    }
    if (uVar8 == 0) {
      uVar9 = 0;
    }
    else {
      puVar13 = (ulong *)(lVar10 + uVar8 * 0x10);
      do {
        if (*puVar13 == param_2) {
          uVar9 = uVar8;
          break;
        }
        uVar9 = 0;
        uVar8 = uVar8 - 1;
        puVar13 = puVar13 + -2;
      } while (uVar8 != 0);
    }
    puVar13 = (ulong *)(lVar10 + uVar9 * 0x10);
    if (*puVar13 == param_2) {
      *(ulong *)(param_1 + 0x130) = uVar6;
      if ((uVar9 <= uVar6 && uVar6 - uVar9 != 0) &&
         (uVar9 + 1 < (ulong)(*(long *)(param_1 + 0x100) - lVar10 >> 4))) {
        memmove(puVar13,(void *)(lVar10 + (uVar9 + 1) * 0x10),(uVar6 - uVar9) * 0x10);
      }
    }
    if (param_2 < *(ulong *)(param_1 + 0xb0)) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2 * 0x80);
      pcVar7 = (code *)puVar1[1];
      if (pcVar7 != (code *)0x0) {
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        (*pcVar7)(puVar1 + 4);
      }
      puVar5 = PTR_LAB_047ddb20;
      puVar4 = PTR_LAB_047ddb18;
      *puVar1 = PTR_LAB_047ddb10;
      puVar1[1] = puVar4;
      puVar4 = PTR_LAB_047ddb28;
      puVar1[2] = puVar5;
      puVar1[3] = puVar4;
      FUN_01285494((long *)(param_1 + 8),param_2);
      return;
    }
  }
  return;
}


