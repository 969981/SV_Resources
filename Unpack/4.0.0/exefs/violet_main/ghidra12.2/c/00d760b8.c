/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d760b8; name: FUN_00d760b8
 */


void FUN_00d760b8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  float *pfVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  
  if ((param_2 < *(ulong *)(param_1 + 400)) &&
     ((*(ulong *)(param_1 + 0x128) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x120) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    lVar4 = *(long *)(param_1 + 0xe8);
    lVar6 = *(long *)(lVar4 + param_2 * 0x10);
    if (lVar6 == 3) {
      lVar6 = *(long *)(param_1 + 0x1f8);
      if (lVar6 == 0) {
        return;
      }
      uVar8 = *(ulong *)(lVar6 + 0x130);
      if (uVar8 != 0) {
        uVar14 = *(ulong *)(lVar4 + param_2 * 0x10 + 8);
        fVar15 = *(float *)(*(long *)(lVar6 + 0xc0) + uVar14 * 0x18 + 0x10);
        lVar4 = *(long *)(lVar6 + 0xf8);
        uVar7 = uVar8 - 1;
        if (uVar7 < 3) {
          uVar11 = 0;
          uVar9 = uVar7;
        }
        else {
          uVar10 = (ulong)((float)uVar7 * 0.5);
          fVar16 = *(float *)(lVar4 + uVar10 * 0x10 + 8);
          uVar9 = uVar10;
          uVar3 = uVar10;
          if (fVar16 <= fVar15) {
            uVar9 = uVar7;
            uVar3 = uVar7 - uVar10;
          }
          uVar11 = 0;
          if (fVar16 <= fVar15) {
            uVar11 = uVar10;
          }
          if (2 < uVar3) {
            uVar10 = uVar11 + (long)((float)uVar3 * 0.5);
            uVar1 = uVar10;
            uVar3 = (long)((float)uVar3 * 0.5);
            if (*(float *)(lVar4 + uVar10 * 0x10 + 8) <= fVar15) {
              uVar11 = uVar10;
              uVar1 = uVar9;
              uVar3 = uVar9 - uVar10;
            }
            uVar9 = uVar1;
            if (2 < uVar3) {
              uVar9 = uVar11 + (long)((float)uVar3 * 0.5);
              uVar10 = uVar9;
              uVar3 = (long)((float)uVar3 * 0.5);
              if (*(float *)(lVar4 + uVar9 * 0x10 + 8) <= fVar15) {
                uVar11 = uVar9;
                uVar10 = uVar1;
                uVar3 = uVar1 - uVar9;
              }
              while( true ) {
                uVar9 = uVar10;
                if (uVar3 < 3) break;
                uVar1 = uVar11 + (long)((float)uVar3 * 0.5);
                uVar10 = uVar1;
                uVar3 = (long)((float)uVar3 * 0.5);
                if (*(float *)(lVar4 + uVar1 * 0x10 + 8) <= fVar15) {
                  uVar11 = uVar1;
                  uVar10 = uVar9;
                  uVar3 = uVar9 - uVar1;
                }
              }
            }
          }
        }
        if (uVar9 <= uVar8 && uVar11 <= uVar9) {
          pfVar13 = (float *)(lVar4 + uVar9 * 0x10 + 8);
          while (fVar15 < *pfVar13) {
            uVar9 = uVar9 - 1;
            if ((uVar9 < uVar11) || (pfVar13 = pfVar13 + -4, uVar8 < uVar9)) goto LAB_00d76274;
          }
          uVar9 = uVar9 + 1;
        }
LAB_00d76274:
        if (uVar9 <= uVar8 && uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
        uVar8 = uVar7;
        if (uVar11 <= uVar7) {
          uVar8 = uVar11;
        }
        if (uVar8 == 0) {
          uVar9 = 0;
        }
        else {
          puVar12 = (ulong *)(lVar4 + uVar8 * 0x10);
          do {
            uVar9 = uVar8;
            if (*puVar12 == uVar14) break;
            uVar8 = uVar9 - 1;
            puVar12 = puVar12 + -2;
            uVar9 = 0;
          } while (uVar8 != 0);
        }
        puVar12 = (ulong *)(lVar4 + uVar9 * 0x10);
        if (*puVar12 == uVar14) {
          *(ulong *)(lVar6 + 0x130) = uVar7;
          if ((uVar9 <= uVar7 && uVar7 - uVar9 != 0) &&
             (uVar9 + 1 < (ulong)(*(long *)(lVar6 + 0x100) - lVar4 >> 4))) {
            memmove(puVar12,(void *)(lVar4 + (uVar9 + 1) * 0x10),(uVar7 - uVar9) * 0x10);
          }
        }
        if (uVar14 < *(ulong *)(lVar6 + 0xb0)) {
          puVar2 = (undefined8 *)(*(long *)(lVar6 + 8) + uVar14 * 0x80);
          pcVar5 = (code *)puVar2[1];
          if (pcVar5 != (code *)0x0) {
            puVar2[2] = 0;
            puVar2[3] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            (*pcVar5)(puVar2 + 4);
          }
          *puVar2 = &LAB_02de7580;
          puVar2[1] = &LAB_02de7584;
          puVar2[2] = &LAB_02de7588;
          puVar2[3] = &LAB_02de758c;
          FUN_00d7662c((long *)(lVar6 + 8),uVar14);
        }
      }
    }
    else if (lVar6 == 2) {
      if (*(long *)(param_1 + 0x1d8) == 0) {
        return;
      }
      FUN_00d77928(*(long *)(param_1 + 0x1d8),*(undefined8 *)(lVar4 + param_2 * 0x10 + 8));
    }
    else if (lVar6 == 1) {
      if (*(long *)(param_1 + 0x1b8) == 0) {
        return;
      }
      FUN_00d777c8(*(long *)(param_1 + 0x1b8) + 8,*(undefined8 *)(lVar4 + param_2 * 0x10 + 8));
    }
    else {
      if (lVar6 != 0) {
        return;
      }
      if (*(long *)(param_1 + 0x198) == 0) {
        return;
      }
      FUN_00d7772c(*(long *)(param_1 + 0x198) + 8,*(undefined8 *)(lVar4 + param_2 * 0x10 + 8));
    }
    if (param_2 < (ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4)) {
      FUN_00d7640c((long *)(param_1 + 0xe8),param_2);
      return;
    }
  }
  return;
}


