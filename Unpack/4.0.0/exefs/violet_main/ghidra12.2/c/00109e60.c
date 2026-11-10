/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00109e60; name: FUN_00109e60
 */


void FUN_00109e60(long *param_1,uint *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  uint *__s;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  byte bVar11;
  ulong uVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  
  if (*param_1 == param_1[1]) {
    uVar9 = param_2[4];
    uVar8 = (ulong)uVar9;
    uVar7 = *(uint *)(param_1 + 7);
    puVar13 = *(uint **)(param_2 + 2);
    uVar5 = (ulong)*param_2;
    puVar6 = puVar13;
    if (uVar9 < uVar7) {
      puVar6 = puVar13 + 1;
      Hint_Prefetch(puVar13 + 0x100,0,0,0);
      uVar9 = uVar9 + 0x20;
      uVar5 = (ulong)*puVar13 << (uVar8 & 0x3f) | uVar5;
    }
    uVar8 = uVar5 >> ((ulong)uVar7 & 0x3f);
    uVar9 = uVar9 - uVar7;
    uVar7 = 0xffffffffU >> (ulong)(-uVar7 & 0x1f) & (uint)uVar5;
    if (param_4 != 0) {
      uVar7 = uVar7 ^ 0xbb;
    }
    puVar13 = puVar6;
    if ((uVar7 == 0) || (*(uint *)((long)param_1 + 0x3c) < uVar7)) {
LAB_00109eec:
      *param_1 = param_1[8] + 4;
      param_1[1] = param_1[8];
    }
    else {
      __s = (uint *)param_1[8];
      *param_1 = (long)__s;
      param_1[1] = (long)__s + (ulong)uVar7;
      uVar5 = uVar8;
      if (uVar9 == 0) {
        puVar13 = puVar6 + 1;
        uVar5 = (ulong)*puVar6;
        uVar9 = 0x20;
      }
      uVar8 = uVar5 >> 1 & 0x7fffffff;
      uVar14 = uVar9 - 1;
      uVar15 = (ulong)uVar14;
      if ((uVar5 & 1) == 0) {
        uVar1 = *(uint *)(param_1 + 5);
        lVar10 = param_1[6];
        uVar2 = 0xffffffff >> (ulong)(-uVar1 & 0x1f);
        uVar5 = 0;
        puVar6 = puVar13;
        uVar9 = uVar14;
        if (uVar14 < uVar1) goto LAB_00109f88;
LAB_00109fe8:
        bVar11 = *(byte *)(lVar10 + (uVar8 & uVar2));
        uVar9 = (uint)(bVar11 >> 4);
        bVar11 = *(byte *)((long)param_1 + ((ulong)bVar11 & 0xf) + 0x18);
        uVar12 = (ulong)bVar11;
        uVar8 = (ulong)((uint)uVar8 >> (ulong)uVar9);
        uVar15 = (ulong)((int)uVar15 - uVar9);
        puVar6 = __s;
        if (bVar11 < 0xc) goto LAB_00109f70;
        while( true ) {
          uVar9 = (uint)uVar15;
          bVar11 = (&DAT_03cb2718)[uVar12];
          bVar4 = uVar7 < bVar11;
          uVar7 = uVar7 - bVar11;
          if (bVar4) break;
          uVar9 = (uint)uVar5 | (uint)uVar5 << 8;
          puVar6 = __s;
          do {
            bVar11 = bVar11 - 4;
            __s = puVar6 + 1;
            *puVar6 = uVar9 | uVar9 << 0x10;
            puVar6 = __s;
          } while (bVar11 != 0);
          while( true ) {
            uVar9 = (uint)uVar15;
            if (uVar7 == 0) goto LAB_00109efc;
            puVar6 = puVar13;
            if (uVar1 <= uVar9) goto LAB_00109fe8;
LAB_00109f88:
            if (param_3 <= puVar6) {
              puVar13 = puVar6;
              goto LAB_00109eec;
            }
            bVar11 = *(byte *)(lVar10 + (ulong)((*puVar6 << (ulong)(uVar9 & 0x1f) | (uint)uVar8) &
                                               uVar2));
            uVar3 = (uint)(bVar11 >> 4);
            bVar11 = *(byte *)((long)param_1 + ((ulong)bVar11 & 0xf) + 0x18);
            uVar12 = (ulong)bVar11;
            uVar14 = *puVar6 >> (ulong)(uVar3 - uVar9 & 0x1f);
            if (uVar3 <= uVar9) {
              uVar14 = (uint)uVar8 >> (ulong)uVar3;
            }
            uVar8 = (ulong)uVar14;
            puVar13 = puVar6 + 1;
            uVar14 = uVar9 + 0x20;
            if (uVar3 <= uVar9) {
              puVar13 = puVar6;
              uVar14 = uVar9;
            }
            uVar15 = (ulong)(uVar14 - uVar3);
            puVar6 = __s;
            if (0xb < bVar11) break;
LAB_00109f70:
            uVar5 = uVar12;
            uVar7 = uVar7 - 1;
            __s = (uint *)((long)puVar6 + 1);
            *(char *)puVar6 = (char)uVar5;
          }
        }
      }
      else {
        if (uVar14 < 4) {
          Hint_Prefetch(puVar13 + 0x100,0,0,0);
          uVar14 = uVar9 + 0x1f;
          uVar8 = (ulong)*puVar13 << (uVar15 & 0x3f) | uVar8;
          puVar13 = puVar13 + 1;
        }
        uVar9 = uVar14 - 4;
        memset(__s,(uint)uVar8 & 0xf,(ulong)uVar7);
        uVar8 = uVar8 >> 4 & 0xffffffff;
      }
    }
LAB_00109efc:
    *(uint **)(param_2 + 2) = puVar13;
    *param_2 = (uint)uVar8;
    param_2[4] = uVar9;
  }
  return;
}


