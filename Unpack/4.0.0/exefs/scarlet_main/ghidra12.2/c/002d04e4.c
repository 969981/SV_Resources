/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d04e4; name: FUN_002d04e4
 */


void FUN_002d04e4(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar13;
  long lVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  ulong uVar18;
  
  puVar4 = PTR_FUN_047cba38;
  uVar2 = *(uint *)(param_1 + 0x10);
  lVar5 = FUN_0049e770(PTR_FUN_047cba38,(long)(int)uVar2 << 2);
  puVar6 = (uint *)FUN_0049e770(puVar4,(long)(int)uVar2 << 2);
  uVar17 = *(uint *)(param_1 + 8);
  if (uVar17 != 0) {
    uVar11 = 0;
    if ((puVar6 != (uint *)0x0) && (uVar17 < uVar2)) {
      *(undefined4 *)(lVar5 + (long)(int)uVar17 * 4) = 0;
      uVar11 = 1;
      *puVar6 = uVar17;
    }
    if (uVar11 != 0) {
      if (puVar6 == (uint *)0x0) {
        piVar13 = (int *)0x0;
        do {
          lVar14 = *(long *)(param_1 + 0x60);
          puVar16 = (uint *)(lVar14 + (long)*piVar13 * 8);
          uVar17 = *puVar16;
          uVar3 = uVar17;
          do {
            uVar9 = uVar3;
            uVar3 = uVar9 >> 4;
            if (uVar3 == 0) break;
            uVar3 = *(uint *)(lVar14 + (ulong)uVar3 * 8);
          } while ((uVar3 & 7) == 6);
          *puVar16 = uVar9 & 0xfffffff0 | uVar17 & 0xf;
          if ((uVar17 & 7) == 0) {
            uVar17 = puVar16[1];
            while ((uVar17 != 0 &&
                   (uVar3 = *(uint *)(lVar14 + (-(ulong)(uVar17 >> 0x1f) & 0xfffffff800000000 |
                                               (ulong)uVar17 << 3)), (uVar3 & 7) == 6))) {
              uVar17 = uVar3 >> 4;
            }
            puVar16[1] = uVar17;
          }
          piVar13 = piVar13 + 1;
        } while (piVar13 != (int *)(uVar11 * 4));
      }
      else {
        puVar16 = puVar6 + uVar11;
        puVar12 = puVar6;
        do {
          lVar14 = *(long *)(param_1 + 0x60);
          puVar15 = (uint *)(lVar14 + (long)(int)*puVar12 * 8);
          uVar17 = *puVar15;
          do {
            uVar9 = uVar17;
            uVar3 = uVar9 >> 4;
            if (uVar3 == 0) break;
            uVar17 = *(uint *)(lVar14 + (ulong)uVar3 * 8);
          } while ((uVar17 & 7) == 6);
          uVar17 = uVar9 & 0xfffffff0 | *puVar15 & 0xf;
          *puVar15 = uVar17;
          if ((uVar3 < uVar2) && (uVar3 != 0)) {
            uVar9 = *(uint *)(lVar5 + (ulong)uVar3 * 4);
            uVar8 = (uint)uVar11;
            if ((uVar8 <= uVar9) || (puVar6[(int)uVar9] != uVar3)) {
              *(uint *)(lVar5 + (ulong)uVar3 * 4) = uVar8;
              uVar11 = (ulong)(uVar8 + 1);
              *puVar16 = uVar3;
              uVar17 = *puVar15;
            }
          }
          if ((uVar17 & 7) == 0) {
            puVar15 = puVar15 + 1;
            uVar17 = *puVar15;
            while (uVar17 != 0) {
              uVar3 = *(uint *)(lVar14 + (-(ulong)(uVar17 >> 0x1f) & 0xfffffff800000000 |
                                         (ulong)uVar17 << 3));
              if ((uVar3 & 7) != 6) {
                *puVar15 = uVar17;
                if (uVar17 < uVar2) {
                  uVar3 = *(uint *)(lVar5 + (long)(int)uVar17 * 4);
                  uVar9 = (uint)uVar11;
                  if ((uVar9 <= uVar3) || (puVar6[(int)uVar3] != uVar17)) {
                    *(uint *)(lVar5 + (long)(int)uVar17 * 4) = uVar9;
                    puVar6[(int)uVar9] = uVar17;
                    uVar11 = (ulong)(uVar9 + 1);
                  }
                }
                goto LAB_002d0578;
              }
              uVar17 = uVar3 >> 4;
            }
            *puVar15 = 0;
          }
LAB_002d0578:
          puVar16 = puVar6 + (int)uVar11;
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar16);
      }
    }
  }
  uVar17 = *(uint *)(param_1 + 8);
  uVar11 = 0;
  if (((uVar17 < uVar2) && (puVar6 != (uint *)0x0)) && (uVar17 != 0)) {
    *(undefined4 *)(lVar5 + (long)(int)uVar17 * 4) = 0;
    uVar11 = 1;
    *puVar6 = uVar17;
  }
  if (uVar11 != 0) {
    puVar16 = puVar6 + uVar11;
    lVar14 = *(long *)(param_1 + 0x60);
    puVar12 = puVar6;
    do {
      uVar3 = *puVar12;
      puVar15 = (uint *)(lVar14 + (long)(int)uVar3 * 8);
      uVar17 = *puVar15;
      uVar9 = uVar17 >> 4;
      if ((uVar9 < uVar2 && puVar6 != (uint *)0x0) && uVar9 != 0) {
        uVar8 = *(uint *)(lVar5 + (ulong)uVar9 * 4);
        uVar10 = (uint)uVar11;
        if ((uVar10 <= uVar8) || (puVar6[(int)uVar8] != uVar9)) {
          *(uint *)(lVar5 + (ulong)uVar9 * 4) = uVar10;
          uVar11 = (ulong)(uVar10 + 1);
          *puVar16 = uVar9;
          uVar17 = *puVar15;
        }
      }
      if (((uVar17 & 7) == 0) &&
         (uVar9 = puVar15[1], (uVar9 < uVar2 && puVar6 != (uint *)0x0) && uVar9 != 0)) {
        uVar8 = *(uint *)(lVar5 + (long)(int)uVar9 * 4);
        uVar10 = (uint)uVar11;
        if ((uVar10 <= uVar8) || (puVar6[(int)uVar8] != uVar9)) {
          *(uint *)(lVar5 + (long)(int)uVar9 * 4) = uVar10;
          puVar6[(int)uVar10] = uVar9;
          uVar17 = *puVar15;
          uVar11 = (ulong)(uVar10 + 1);
        }
      }
      if ((uVar17 & 7) == 0) {
        uVar18 = (ulong)(int)puVar15[1];
        uVar9 = *(uint *)(lVar14 + (ulong)(uVar17 >> 4) * 8);
        if ((((uVar9 & 7) == 2 && uVar9 >> 4 == uVar3) &&
            (lVar1 = lVar14 + (ulong)(uVar17 >> 4) * 8, *(char *)(lVar1 + 4) == '\0')) &&
           (*(char *)(lVar1 + 5) == -1)) {
          uVar7 = uVar18;
          while( true ) {
            uVar8 = *(uint *)(lVar14 + uVar7 * 8);
            uVar10 = 1 << (ulong)(uVar8 & 7);
            if ((uVar10 & 0x97) != 0) break;
            if ((uVar10 & 0x48) == 0) goto LAB_002d0794;
            uVar7 = (ulong)(uVar8 >> 4);
          }
        }
        while (uVar8 = 1 << (ulong)(uVar9 & 7), (uVar8 & 0x97) == 0) {
          if ((uVar8 & 0x48) == 0) {
            uVar9 = *(uint *)(lVar14 + uVar18 * 8);
            if ((((uVar9 & 7) == 2) && (uVar9 >> 4 == uVar3)) &&
               ((lVar1 = lVar14 + uVar18 * 8, *(char *)(lVar1 + 4) == '\0' &&
                (*(char *)(lVar1 + 5) == -1)))) {
LAB_002d0794:
              *puVar15 = uVar17 & 0xfffffff8 | 1;
            }
            break;
          }
          uVar9 = *(uint *)(lVar14 + (ulong)(uVar9 >> 4) * 8);
        }
      }
      puVar16 = puVar6 + (int)uVar11;
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar16);
  }
  if (puVar6 != (uint *)0x0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  if (lVar5 == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,lVar5);
  return;
}


