/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033e07d4; name: FUN_033e07d4
 */


void FUN_033e07d4(long param_1,undefined8 param_2,long param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  float *pfVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  undefined8 uVar40;
  
  FUN_033e24f0(*(undefined4 *)(*(long *)(param_1 + 0x158) + 0x78),
               *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x7c),param_2,param_4,param_5,param_3);
  if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
     (bVar6 = *(byte *)(param_1 + 0x134), bVar6 != 0)) {
    if ((param_4 & 3) == 0) {
      uVar8 = 0;
      do {
        if (*(int *)(*(long *)(param_1 + 0x148) + uVar8 * 0xa0 + 0x90) == 3) {
          pfVar5 = (float *)(*(long *)(param_1 + 0x148) + uVar8 * 0xa0);
          fVar15 = *pfVar5;
          fVar19 = pfVar5[2];
          fVar20 = pfVar5[3];
          fVar17 = pfVar5[1];
          if (param_4 != 0) {
            uVar22 = *(undefined8 *)(pfVar5 + 6);
            uVar21 = *(undefined8 *)(pfVar5 + 4);
            uVar24 = *(undefined8 *)(pfVar5 + 10);
            uVar23 = *(undefined8 *)(pfVar5 + 8);
            uVar26 = *(undefined8 *)(pfVar5 + 0xe);
            uVar25 = *(undefined8 *)(pfVar5 + 0xc);
            uVar28 = *(undefined8 *)(pfVar5 + 0x12);
            uVar27 = *(undefined8 *)(pfVar5 + 0x10);
            uVar30 = *(undefined8 *)(pfVar5 + 0x16);
            uVar29 = *(undefined8 *)(pfVar5 + 0x14);
            uVar32 = *(undefined8 *)(pfVar5 + 0x1a);
            uVar31 = *(undefined8 *)(pfVar5 + 0x18);
            uVar34 = *(undefined8 *)(pfVar5 + 0x1e);
            uVar33 = *(undefined8 *)(pfVar5 + 0x1c);
            uVar36 = *(undefined8 *)(pfVar5 + 0x22);
            uVar35 = *(undefined8 *)(pfVar5 + 0x20);
            uVar7 = 0;
            fVar16 = fVar15;
            fVar18 = fVar17;
            do {
              uVar2 = (int)uVar7 + 4;
              puVar4 = (undefined8 *)(param_3 + uVar7 * 4);
              uVar40 = puVar4[1];
              uVar38 = *puVar4;
              fVar37 = (float)uVar38;
              fVar39 = (float)((ulong)uVar38 >> 0x20);
              fVar17 = (float)uVar40;
              fVar15 = (float)((ulong)uVar40 >> 0x20);
              fVar10 = (float)uVar33 * fVar19;
              fVar12 = (float)((ulong)uVar33 >> 0x20) * fVar19;
              fVar11 = (float)uVar35 * fVar20;
              fVar13 = (float)((ulong)uVar35 >> 0x20) * fVar20;
              fVar14 = (float)((ulong)uVar36 >> 0x20) * fVar20;
              fVar20 = fVar17 * (float)uVar22 + (float)uVar30 * fVar16 + (float)uVar32 * fVar18 +
                       (float)uVar24 * fVar17 + (float)uVar26 * fVar39 + (float)uVar28 * fVar37 +
                       (float)uVar34 * fVar19 + (float)uVar36 * fVar20;
              fVar19 = fVar15 * (float)((ulong)uVar22 >> 0x20) +
                       (float)((ulong)uVar30 >> 0x20) * fVar16 +
                       (float)((ulong)uVar32 >> 0x20) * fVar18 +
                       (float)((ulong)uVar24 >> 0x20) * fVar17 +
                       (float)((ulong)uVar26 >> 0x20) * fVar39 +
                       (float)((ulong)uVar28 >> 0x20) * fVar37 +
                       (float)((ulong)uVar34 >> 0x20) * fVar19 + fVar14;
              puVar4 = (undefined8 *)(param_3 + uVar7 * 4);
              puVar4[1] = CONCAT44(fVar19,fVar20);
              *puVar4 = CONCAT44(fVar39 * (float)((ulong)uVar21 >> 0x20) +
                                 (float)((ulong)uVar29 >> 0x20) * fVar16 +
                                 (float)((ulong)uVar31 >> 0x20) * fVar18 +
                                 (float)((ulong)uVar23 >> 0x20) * fVar17 +
                                 (float)((ulong)uVar25 >> 0x20) * fVar39 +
                                 (float)((ulong)uVar27 >> 0x20) * fVar37 + fVar12 + fVar13,
                                 fVar37 * (float)uVar21 + (float)uVar29 * fVar16 +
                                 (float)uVar31 * fVar18 + (float)uVar23 * fVar17 +
                                 (float)uVar25 * fVar39 + (float)uVar27 * fVar37 + fVar10 + fVar11);
              uVar7 = (ulong)uVar2;
              fVar16 = fVar15;
              fVar18 = fVar17;
            } while (uVar2 < param_4);
          }
          *pfVar5 = fVar15;
          pfVar5[1] = fVar17;
          pfVar5[2] = fVar19;
          pfVar5[3] = fVar20;
          bVar6 = *(byte *)(param_1 + 0x134);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < bVar6);
    }
    else {
      iVar3 = 4 - (param_4 & 3);
      uVar8 = 0;
      uVar2 = iVar3 + param_4;
      do {
        lVar9 = *(long *)(param_1 + 0x148);
        if (*(int *)(lVar9 + uVar8 * 0xa0 + 0x90) == 3) {
          memset((void *)(param_3 + (ulong)param_4 * 4),0,(ulong)(uint)(iVar3 * 4));
          pfVar5 = (float *)(lVar9 + uVar8 * 0xa0);
          fVar15 = *pfVar5;
          fVar19 = pfVar5[2];
          fVar20 = pfVar5[3];
          fVar17 = pfVar5[1];
          if (uVar2 != 0) {
            uVar22 = *(undefined8 *)(pfVar5 + 6);
            uVar21 = *(undefined8 *)(pfVar5 + 4);
            uVar24 = *(undefined8 *)(pfVar5 + 10);
            uVar23 = *(undefined8 *)(pfVar5 + 8);
            uVar26 = *(undefined8 *)(pfVar5 + 0xe);
            uVar25 = *(undefined8 *)(pfVar5 + 0xc);
            uVar28 = *(undefined8 *)(pfVar5 + 0x12);
            uVar27 = *(undefined8 *)(pfVar5 + 0x10);
            uVar30 = *(undefined8 *)(pfVar5 + 0x16);
            uVar29 = *(undefined8 *)(pfVar5 + 0x14);
            uVar32 = *(undefined8 *)(pfVar5 + 0x1a);
            uVar31 = *(undefined8 *)(pfVar5 + 0x18);
            uVar34 = *(undefined8 *)(pfVar5 + 0x1e);
            uVar33 = *(undefined8 *)(pfVar5 + 0x1c);
            uVar36 = *(undefined8 *)(pfVar5 + 0x22);
            uVar35 = *(undefined8 *)(pfVar5 + 0x20);
            uVar7 = 0;
            fVar16 = fVar15;
            fVar18 = fVar17;
            do {
              uVar1 = (int)uVar7 + 4;
              puVar4 = (undefined8 *)(param_3 + uVar7 * 4);
              uVar40 = puVar4[1];
              uVar38 = *puVar4;
              fVar37 = (float)uVar38;
              fVar39 = (float)((ulong)uVar38 >> 0x20);
              fVar17 = (float)uVar40;
              fVar15 = (float)((ulong)uVar40 >> 0x20);
              fVar10 = (float)uVar33 * fVar19;
              fVar12 = (float)((ulong)uVar33 >> 0x20) * fVar19;
              fVar11 = (float)uVar35 * fVar20;
              fVar13 = (float)((ulong)uVar35 >> 0x20) * fVar20;
              fVar14 = (float)((ulong)uVar36 >> 0x20) * fVar20;
              fVar20 = fVar17 * (float)uVar22 + (float)uVar30 * fVar16 + (float)uVar32 * fVar18 +
                       (float)uVar24 * fVar17 + (float)uVar26 * fVar39 + (float)uVar28 * fVar37 +
                       (float)uVar34 * fVar19 + (float)uVar36 * fVar20;
              fVar19 = fVar15 * (float)((ulong)uVar22 >> 0x20) +
                       (float)((ulong)uVar30 >> 0x20) * fVar16 +
                       (float)((ulong)uVar32 >> 0x20) * fVar18 +
                       (float)((ulong)uVar24 >> 0x20) * fVar17 +
                       (float)((ulong)uVar26 >> 0x20) * fVar39 +
                       (float)((ulong)uVar28 >> 0x20) * fVar37 +
                       (float)((ulong)uVar34 >> 0x20) * fVar19 + fVar14;
              puVar4 = (undefined8 *)(param_3 + uVar7 * 4);
              puVar4[1] = CONCAT44(fVar19,fVar20);
              *puVar4 = CONCAT44(fVar39 * (float)((ulong)uVar21 >> 0x20) +
                                 (float)((ulong)uVar29 >> 0x20) * fVar16 +
                                 (float)((ulong)uVar31 >> 0x20) * fVar18 +
                                 (float)((ulong)uVar23 >> 0x20) * fVar17 +
                                 (float)((ulong)uVar25 >> 0x20) * fVar39 +
                                 (float)((ulong)uVar27 >> 0x20) * fVar37 + fVar12 + fVar13,
                                 fVar37 * (float)uVar21 + (float)uVar29 * fVar16 +
                                 (float)uVar31 * fVar18 + (float)uVar23 * fVar17 +
                                 (float)uVar25 * fVar39 + (float)uVar27 * fVar37 + fVar10 + fVar11);
              uVar7 = (ulong)uVar1;
              fVar16 = fVar15;
              fVar18 = fVar17;
            } while (uVar1 < uVar2);
          }
          *pfVar5 = fVar15;
          pfVar5[1] = fVar17;
          pfVar5[2] = fVar19;
          pfVar5[3] = fVar20;
          bVar6 = *(byte *)(param_1 + 0x134);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < bVar6);
    }
  }
  return;
}


