/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0352dd64; name: FUN_0352dd64
 */


undefined8 *
FUN_0352dd64(long param_1,long param_2,uint param_3,long param_4,uint param_5,long param_6)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  
  puVar7 = *(undefined8 **)(param_1 + 0x130);
  if (0 < (int)*(uint *)(param_1 + 0x138)) {
    uVar8 = (ulong)*(uint *)(param_1 + 0x138);
    do {
      uVar10 = uVar8 - 1 & 0xffffffff;
      puVar4 = puVar7 + uVar10 * 0xc;
      uVar6 = *(uint *)(puVar4 + 1);
      uVar11 = (ulong)uVar6;
      if (uVar6 != 0) {
        uVar15 = *(uint *)(puVar7 + uVar10 * 0xc + 3);
        uVar9 = (ulong)uVar15;
        if (uVar15 != 0) {
          puVar13 = (uint *)*puVar4;
          if (*puVar13 != 0xffffffff) {
            puVar5 = puVar13;
            do {
              puVar12 = puVar5 + (uVar6 >> 1);
              uVar3 = *puVar12;
              if (uVar3 == param_3) goto LAB_0352de10;
              puVar12 = puVar12 + 1;
              if (uVar3 >= param_3) {
                puVar12 = puVar5;
              }
              uVar6 = uVar6 - (uVar3 < param_3) >> 1;
              puVar5 = puVar12;
            } while (uVar6 != 0);
            puVar12 = puVar13 + uVar11;
LAB_0352de10:
            if (puVar12 == puVar13 + uVar11) {
              if (param_4 != 0 && param_4 != param_2) {
                lVar14 = param_4;
                do {
                  uVar6 = *(uint *)(lVar14 + 0x18);
                  puVar5 = puVar13;
                  uVar16 = uVar11;
                  do {
                    puVar2 = puVar5 + (uVar16 >> 1);
                    uVar3 = *puVar2;
                    if (uVar3 == uVar6) {
                      if (puVar2 != puVar12) {
                        if (lVar14 != 0) goto LAB_0352de1c;
                        goto LAB_0352df38;
                      }
                      break;
                    }
                    puVar2 = puVar2 + 1;
                    if (uVar3 >= uVar6) {
                      puVar2 = puVar5;
                    }
                    uVar3 = (int)uVar16 - (uint)(uVar3 < uVar6) >> 1;
                    uVar16 = (ulong)uVar3;
                    puVar5 = puVar2;
                  } while (uVar3 != 0);
                  lVar14 = *(long *)(lVar14 + 0x98);
                } while ((lVar14 != 0) && (lVar14 != param_2));
              }
              goto LAB_0352df38;
            }
          }
LAB_0352de1c:
          puVar13 = (uint *)puVar7[uVar10 * 0xc + 2];
          if (*puVar13 == 0xffffffff) {
            return puVar4;
          }
          puVar5 = puVar13;
          do {
            puVar12 = puVar5 + (uVar15 >> 1);
            uVar6 = *puVar12;
            if (uVar6 == param_5) goto LAB_0352de68;
            puVar12 = puVar12 + 1;
            if (uVar6 >= param_5) {
              puVar12 = puVar5;
            }
            uVar15 = uVar15 - (uVar6 < param_5) >> 1;
            puVar5 = puVar12;
          } while (uVar15 != 0);
          puVar12 = puVar13 + uVar9;
LAB_0352de68:
          if (puVar12 != puVar13 + uVar9) {
            return puVar4;
          }
          if (param_6 != 0 && param_6 != param_2) {
            lVar14 = param_6;
            do {
              uVar6 = *(uint *)(lVar14 + 0x18);
              puVar5 = puVar13;
              uVar10 = uVar9;
              do {
                puVar2 = puVar5 + (uVar10 >> 1);
                uVar15 = *puVar2;
                if (uVar15 == uVar6) {
                  if (puVar2 != puVar12) {
                    if (lVar14 != 0) {
                      return puVar4;
                    }
                    goto LAB_0352df38;
                  }
                  break;
                }
                puVar2 = puVar2 + 1;
                if (uVar15 >= uVar6) {
                  puVar2 = puVar5;
                }
                uVar15 = (int)uVar10 - (uint)(uVar15 < uVar6) >> 1;
                uVar10 = (ulong)uVar15;
                puVar5 = puVar2;
              } while (uVar15 != 0);
              lVar14 = *(long *)(lVar14 + 0x98);
            } while ((lVar14 != 0) && (lVar14 != param_2));
          }
        }
      }
LAB_0352df38:
      bVar1 = 1 < (long)uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar1);
  }
  return puVar7;
}


