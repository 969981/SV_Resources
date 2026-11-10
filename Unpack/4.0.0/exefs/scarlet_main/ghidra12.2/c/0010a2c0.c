/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0010a2c0; name: FUN_0010a2c0
 */


void FUN_0010a2c0(long *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined2 *puVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  
  if (*param_1 == param_1[1]) {
    uVar4 = param_2[4];
    uVar5 = (ulong)uVar4;
    uVar7 = *(uint *)(param_1 + 7);
    puVar10 = *(uint **)(param_2 + 2);
    uVar2 = (ulong)*param_2;
    puVar11 = puVar10;
    if (uVar4 < uVar7) {
      puVar11 = puVar10 + 1;
      Hint_Prefetch(puVar10 + 0x100,0,0,0);
      uVar4 = uVar4 + 0x20;
      uVar2 = (ulong)*puVar10 << (uVar5 & 0x3f) | uVar2;
    }
    uVar5 = uVar2 >> ((ulong)uVar7 & 0x3f);
    uVar15 = (uint)uVar5;
    uVar4 = uVar4 - uVar7;
    uVar13 = (ulong)uVar4;
    uVar7 = 0xffffffffU >> (ulong)(-uVar7 & 0x1f) & (uint)uVar2;
    if ((uVar7 == 0) || (*(uint *)((long)param_1 + 0x3c) >> 1 < uVar7)) {
LAB_0010a354:
      *param_1 = param_1[8] + 4;
      param_1[1] = param_1[8];
    }
    else {
      puVar3 = (undefined2 *)param_1[8];
      uVar5 = uVar5 & 0xffffffff;
      uVar15 = *(uint *)(param_1 + 2);
      if (*(int *)((long)param_1 + 0x14) == 0) {
        if (uVar4 < uVar15) {
          Hint_Prefetch(puVar11 + 0x100,0,0,0);
          uVar4 = uVar4 + 0x20;
          uVar5 = (ulong)*puVar11 << (uVar13 & 0x3f) | uVar5;
          puVar11 = puVar11 + 1;
        }
        uVar13 = uVar5 >> ((ulong)uVar15 & 0x3f);
        uVar2 = (ulong)(uVar4 - uVar15);
        uVar8 = 0xffffffffU >> (ulong)(-uVar15 & 0x1f) & (uint)uVar5;
      }
      else {
        uVar8 = uVar15 - 1;
        if (uVar4 < uVar8) {
          Hint_Prefetch(puVar11 + 0x100,0,0,0);
          uVar4 = uVar4 + 0x20;
          uVar5 = (ulong)*puVar11 << (uVar13 & 0x3f) | uVar5;
          puVar11 = puVar11 + 1;
        }
        uVar13 = uVar5 >> ((ulong)uVar8 & 0x3f);
        uVar4 = uVar4 - uVar8;
        uVar2 = (ulong)uVar4;
        uVar15 = 0xffffffffU >> (ulong)(0x21 - uVar15 & 0x1f) & (uint)uVar5;
        if (uVar15 == 0) {
          uVar8 = 0;
        }
        else {
          puVar10 = puVar11;
          if (uVar4 == 0) {
            puVar10 = puVar11 + 1;
            uVar13 = (ulong)*puVar11;
            uVar4 = 0x20;
          }
          uVar2 = (ulong)(uVar4 - 1);
          uVar8 = -uVar15;
          if ((uVar13 & 1) == 0) {
            uVar8 = uVar15;
          }
          uVar13 = uVar13 >> 1 & 0x7fffffff;
          puVar11 = puVar10;
        }
      }
      uVar4 = (uint)uVar2;
      uVar15 = (uint)uVar13;
      *puVar3 = (short)uVar8;
      uVar14 = uVar7 - 1;
      *param_1 = param_1[8];
      param_1[1] = param_1[8] + (ulong)(uVar7 << 1);
      if (uVar14 != 0) {
        puVar3 = puVar3 + 1;
        do {
          uVar15 = (uint)uVar13;
          uVar4 = (uint)uVar2;
          uVar7 = uVar14;
          if (7 < uVar14) {
            uVar7 = 8;
          }
          uVar5 = uVar13 & 0xffffffff;
          if (uVar4 < 4) {
            if (param_3 <= puVar11) goto LAB_0010a354;
            uVar4 = uVar4 + 0x20;
            uVar5 = (ulong)*puVar11 << (uVar2 & 0x3f) | uVar5;
            puVar11 = puVar11 + 1;
          }
          uVar15 = (uint)uVar5 & 0xf;
          uVar13 = uVar5 >> 4;
          uVar2 = (ulong)(uVar4 - 4);
          if ((uVar5 & 0xf) == 0) {
            FUN_0010c920(puVar3,uVar8,(ulong)uVar7);
            puVar3 = puVar3 + uVar7;
          }
          else {
            puVar9 = puVar3;
            uVar4 = uVar7;
            do {
              uVar5 = uVar13 & 0xffffffff;
              uVar12 = (uint)uVar2;
              puVar10 = puVar11;
              if (uVar12 < uVar15) {
                puVar10 = puVar11 + 1;
                Hint_Prefetch(puVar11 + 0x100,0,0,0);
                uVar12 = uVar12 + 0x20;
                uVar5 = (ulong)*puVar11 << (uVar2 & 0x3f) | uVar5;
              }
              uVar4 = uVar4 - 1;
              uVar13 = uVar5 >> (ulong)uVar15;
              uVar12 = uVar12 - uVar15;
              uVar1 = 0xffffffffU >> (ulong)(-uVar15 & 0x1f) & (uint)uVar5;
              puVar11 = puVar10;
              uVar6 = uVar1;
              if (uVar1 != 0) {
                if (uVar12 == 0) {
                  puVar11 = puVar10 + 1;
                  uVar13 = (ulong)*puVar10;
                  uVar12 = 0x20;
                }
                uVar12 = uVar12 - 1;
                uVar6 = -uVar1;
                if ((uVar13 & 1) == 0) {
                  uVar6 = uVar1;
                }
                uVar13 = uVar13 >> 1 & 0x7fffffff;
              }
              uVar2 = (ulong)uVar12;
              uVar8 = uVar6 + uVar8;
              puVar3 = puVar9 + 1;
              *puVar9 = (short)uVar8;
              puVar9 = puVar3;
            } while (uVar4 != 0);
          }
          uVar4 = (uint)uVar2;
          uVar15 = (uint)uVar13;
          uVar14 = uVar14 - uVar7;
        } while (uVar14 != 0);
      }
    }
    *(uint **)(param_2 + 2) = puVar11;
    *param_2 = uVar15;
    param_2[4] = uVar4;
  }
  return;
}


