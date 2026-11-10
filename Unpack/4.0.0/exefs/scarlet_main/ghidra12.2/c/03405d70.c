/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03405d70; name: FUN_03405d70
 */


void FUN_03405d70(undefined1 *param_1,long param_2,ushort param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *__src;
  undefined1 *puVar16;
  uint uVar17;
  undefined1 auStack_d0 [128];
  
  uVar2 = (uint)param_3;
  puVar16 = auStack_d0 + (0x80 - ((ulong)(uVar2 + 0xf) & 0x1fff0));
  if (uVar2 < 2) {
    __src = param_1;
  }
  else {
    uVar17 = 1;
    puVar8 = puVar16;
    __src = param_1;
    do {
      puVar16 = __src;
      __src = puVar8;
      if (uVar17 < uVar2) {
        uVar11 = 0;
        uVar6 = 0;
        uVar9 = uVar17;
        do {
          uVar1 = uVar11 + uVar17 * 2;
          if (uVar2 <= uVar1) {
            uVar1 = uVar2;
          }
          uVar7 = uVar9;
          if ((uVar11 < uVar9) && (uVar9 < uVar1)) {
            do {
              uVar15 = (ulong)uVar11;
              bVar3 = puVar16[(int)uVar7];
              uVar14 = (ulong)uVar6;
              uVar6 = uVar6 + 1;
              if (*(ushort *)(param_2 + (ulong)(byte)puVar16[uVar15] * 2) <
                  *(ushort *)(param_2 + (ulong)bVar3 * 2)) {
                uVar11 = uVar11 + 1;
                bVar3 = puVar16[uVar15];
              }
              else {
                uVar7 = uVar7 + 1;
              }
              __src[uVar14] = bVar3;
            } while ((int)uVar11 < (int)uVar9 && (int)uVar7 < (int)uVar1);
          }
          if ((int)uVar11 < (int)uVar9) {
            uVar15 = (ulong)(int)uVar11;
            uVar12 = ~uVar15;
            uVar14 = (ulong)(uVar9 - uVar11) & 3;
            uVar13 = uVar15;
            uVar5 = uVar6;
            if ((uVar9 - uVar11 & 3) != 0) {
              do {
                uVar15 = uVar13 + 1;
                uVar6 = uVar5 + 1;
                uVar14 = uVar14 - 1;
                __src[uVar5] = puVar16[uVar13];
                uVar13 = uVar15;
                uVar5 = uVar6;
              } while (uVar14 != 0);
            }
            if (2 < uVar12 + (long)(int)uVar9) {
              lVar10 = (long)(int)uVar9 - uVar15;
              puVar8 = puVar16 + uVar15 + 3;
              do {
                __src[uVar6] = puVar8[-3];
                __src[(ushort)(uVar6 + 1)] = puVar8[-2];
                __src[(ushort)(uVar6 + 2)] = puVar8[-1];
                uVar5 = uVar6 + 3;
                uVar6 = uVar6 + 4;
                lVar10 = lVar10 + -4;
                __src[uVar5] = *puVar8;
                puVar8 = puVar8 + 4;
              } while (lVar10 != 0);
            }
          }
          if ((int)uVar7 < (int)uVar1) {
            uVar15 = (ulong)(int)uVar7;
            uVar14 = ~uVar15;
            if ((uVar1 - uVar7 & 3) != 0) {
              lVar10 = -((ulong)(uVar1 - uVar7) & 3);
              uVar13 = uVar15;
              uVar5 = uVar6;
              do {
                uVar15 = uVar13 + 1;
                uVar6 = uVar5 + 1;
                bVar4 = lVar10 != -1;
                lVar10 = lVar10 + 1;
                __src[uVar5] = puVar16[uVar13];
                uVar13 = uVar15;
                uVar5 = uVar6;
              } while (bVar4);
            }
            if (2 < uVar14 + uVar1) {
              lVar10 = uVar1 - uVar15;
              puVar8 = puVar16 + uVar15 + 3;
              do {
                __src[uVar6] = puVar8[-3];
                __src[(ushort)(uVar6 + 1)] = puVar8[-2];
                __src[(ushort)(uVar6 + 2)] = puVar8[-1];
                uVar5 = uVar6 + 3;
                uVar6 = uVar6 + 4;
                lVar10 = lVar10 + -4;
                __src[uVar5] = *puVar8;
                puVar8 = puVar8 + 4;
              } while (lVar10 != 0);
            }
          }
          uVar9 = uVar17 + uVar6;
          uVar11 = (uint)uVar6;
        } while (uVar9 < uVar2);
      }
      else {
        uVar6 = 0;
      }
      if (uVar6 < param_3) {
        memcpy(__src + uVar6,puVar16 + uVar6,(ulong)(ushort)(~uVar6 + param_3) + 1);
      }
      uVar17 = (uVar17 & 0x7fff) << 1;
      puVar8 = puVar16;
    } while (uVar17 < uVar2);
  }
  if ((param_3 != 0) && (puVar16 == param_1)) {
    memcpy(param_1,__src,(ulong)param_3);
  }
  return;
}


