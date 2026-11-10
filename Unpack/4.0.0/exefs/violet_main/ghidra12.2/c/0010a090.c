/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0010a090; name: FUN_0010a090
 */


void FUN_0010a090(long *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  char *__s;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  char cVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  ulong uVar17;
  
  if (*param_1 == param_1[1]) {
    uVar11 = param_2[4];
    uVar10 = (ulong)uVar11;
    uVar9 = *(uint *)(param_1 + 7);
    puVar14 = *(uint **)(param_2 + 2);
    uVar8 = (ulong)*param_2;
    puVar15 = puVar14;
    if (uVar11 < uVar9) {
      puVar15 = puVar14 + 1;
      Hint_Prefetch(puVar14 + 0x100,0,0,0);
      uVar11 = uVar11 + 0x20;
      uVar8 = (ulong)*puVar14 << (uVar10 & 0x3f) | uVar8;
    }
    uVar10 = uVar8 >> ((ulong)uVar9 & 0x3f);
    uVar11 = uVar11 - uVar9;
    uVar9 = 0xffffffffU >> (ulong)(-uVar9 & 0x1f) & (uint)uVar8;
    if ((uVar9 == 0) || (*(uint *)((long)param_1 + 0x3c) < uVar9)) {
LAB_0010a10c:
      *param_1 = param_1[8] + 4;
      param_1[1] = param_1[8];
    }
    else {
      __s = (char *)param_1[8];
      *param_1 = (long)__s;
      param_1[1] = (long)(__s + uVar9);
      uVar8 = uVar10;
      if (uVar11 == 0) {
        uVar8 = (ulong)*puVar15;
        uVar11 = 0x20;
        puVar15 = puVar15 + 1;
      }
      uVar10 = uVar8 >> 1 & 0x7fffffff;
      uVar16 = uVar11 - 1;
      uVar17 = (ulong)uVar16;
      if ((uVar8 & 1) == 0) {
        uVar7 = *(uint *)(param_1 + 5);
        lVar12 = param_1[6];
        uVar2 = 0xffffffff >> (ulong)(-uVar7 & 0x1f);
        uVar11 = uVar16;
        if (uVar16 < uVar7) goto LAB_0010a1a4;
        do {
          bVar1 = *(byte *)(lVar12 + (uVar10 & uVar2));
          uVar11 = (uint)(bVar1 >> 4);
          cVar13 = *(char *)((long)param_1 + ((ulong)bVar1 & 0xf) + 0x18);
          uVar16 = (uint)uVar10 >> (ulong)uVar11;
          uVar11 = (int)uVar17 - uVar11;
          pcVar5 = __s;
          while( true ) {
            uVar9 = uVar9 - 1;
            uVar10 = (ulong)uVar16;
            if (cVar13 != '\0') {
              if (uVar11 == 0) {
                uVar10 = (ulong)*puVar15;
                uVar11 = 0x20;
                puVar15 = puVar15 + 1;
              }
              uVar11 = uVar11 - 1;
              cVar6 = -cVar13;
              if ((uVar10 & 1) == 0) {
                cVar6 = cVar13;
              }
              cVar13 = cVar6;
              uVar10 = uVar10 >> 1;
            }
            uVar17 = (ulong)uVar11;
            __s = pcVar5 + 1;
            *pcVar5 = cVar13;
            if (uVar9 == 0) goto LAB_0010a11c;
            if (uVar7 <= uVar11) break;
LAB_0010a1a4:
            if (param_3 <= puVar15) goto LAB_0010a10c;
            bVar1 = *(byte *)(lVar12 + (ulong)((*puVar15 << (ulong)(uVar11 & 0x1f) | (uint)uVar10) &
                                              uVar2));
            uVar3 = (uint)(bVar1 >> 4);
            cVar13 = *(char *)((long)param_1 + ((ulong)bVar1 & 0xf) + 0x18);
            puVar14 = puVar15 + 1;
            uVar4 = uVar11 + 0x20;
            uVar16 = *puVar15 >> (ulong)(uVar3 - uVar11 & 0x1f);
            if (uVar3 <= uVar11) {
              puVar14 = puVar15;
              uVar4 = uVar11;
              uVar16 = (uint)uVar10 >> (ulong)uVar3;
            }
            uVar11 = uVar4 - uVar3;
            pcVar5 = __s;
            puVar15 = puVar14;
          }
        } while( true );
      }
      if (uVar16 < 4) {
        Hint_Prefetch(puVar15 + 0x100,0,0,0);
        uVar16 = uVar11 + 0x1f;
        uVar10 = (ulong)*puVar15 << (uVar17 & 0x3f) | uVar10;
        puVar15 = puVar15 + 1;
      }
      uVar8 = uVar10 >> 4;
      uVar11 = uVar16 - 4;
      uVar16 = (uint)uVar10 & 0xf;
      if ((uVar10 & 0xf) == 0) {
        uVar7 = 0;
      }
      else {
        puVar14 = puVar15;
        if (uVar11 == 0) {
          puVar14 = puVar15 + 1;
          uVar8 = (ulong)*puVar15;
          uVar11 = 0x20;
        }
        uVar11 = uVar11 - 1;
        uVar7 = -uVar16;
        if ((uVar8 & 1) == 0) {
          uVar7 = uVar16;
        }
        uVar8 = uVar8 >> 1 & 0x7fffffff;
        puVar15 = puVar14;
      }
      memset(__s,uVar7,(ulong)uVar9);
      uVar10 = uVar8 & 0xffffffff;
    }
LAB_0010a11c:
    *(uint **)(param_2 + 2) = puVar15;
    *param_2 = (uint)uVar10;
    param_2[4] = uVar11;
  }
  return;
}


