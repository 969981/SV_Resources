/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0087ab30; name: FUN_0087ab30
 */


void FUN_0087ab30(long param_1,uint *param_2,uint param_3,long param_4,long param_5,long param_6)

{
  char *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  uint *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  uint *puVar19;
  ulong uVar20;
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
  long local_e0 [14];
  uint *local_70;
  long local_68;
  
  local_68 = param_1;
  if (*param_2 == 0) {
    uVar10 = 0;
    uVar2 = *(uint *)(param_1 + 0xb4);
  }
  else {
    uVar18 = 0;
    uVar20 = 0;
    do {
      memset((void *)(param_5 + (uVar18 & 0xffffff00) * 4),0,(ulong)(param_3 << 2));
      uVar10 = (ulong)*param_2;
      uVar20 = uVar20 + 1;
      uVar18 = uVar18 + 0x100;
    } while (uVar20 < uVar10);
    uVar2 = *(uint *)(local_68 + 0xb4);
  }
  if (uVar2 != 0) {
    uVar18 = (ulong)uVar2;
    uVar20 = 0;
    uVar2 = param_3 & 0xfffffff0;
    local_70 = param_2 + 4;
    local_e0[0xd] = param_4;
    do {
      if ((uint)uVar18 < 2) {
        lVar4 = param_4;
LAB_0087ad54:
        uVar9 = (uint)uVar10;
      }
      else {
        puVar19 = (uint *)(local_68 + uVar20 * 0x68 + 0xbc);
        lVar4 = param_6;
        if (*puVar19 == 0) goto LAB_0087ad54;
        uVar10 = 0;
        do {
          uVar9 = *param_2;
          if (uVar9 != 0) {
            if (uVar9 == 1) {
              uVar5 = 0;
            }
            else {
              uVar5 = 0;
              uVar18 = 0x100;
              plVar7 = local_e0 + 5;
              plVar8 = local_e0 + 1;
              plVar11 = local_e0 + 9;
              puVar12 = local_70;
              do {
                lVar6 = ((ulong)((int)uVar18 - 0x100) & 0xfffffe00) * 4;
                plVar11[-1] = param_4 + lVar6;
                plVar7[-1] = param_6 + lVar6;
                lVar6 = *(long *)(puVar12 + -2);
                lVar13 = (uVar18 & 0xffffff00) * 4;
                *plVar11 = param_4 + lVar13;
                uVar18 = uVar18 + 0x200;
                *plVar7 = param_6 + lVar13;
                plVar8[-1] = lVar6 + uVar20 * 0x40 + uVar10 * 0x10 + 4;
                uVar5 = uVar5 + 2;
                *plVar8 = *(long *)puVar12 + uVar20 * 0x40 + uVar10 * 0x10 + 4;
                plVar7 = plVar7 + 2;
                plVar8 = plVar8 + 2;
                plVar11 = plVar11 + 2;
                puVar12 = puVar12 + 4;
              } while (((ulong)uVar9 & 0xfffffffe) != uVar5);
            }
            if ((uVar9 & 1) != 0) {
              lVar6 = (ulong)(uint)((int)uVar5 << 8) * 4;
              local_e0[uVar5 + 8] = param_4 + lVar6;
              local_e0[uVar5 + 4] = param_6 + lVar6;
              local_e0[uVar5] =
                   *(long *)(param_2 + uVar5 * 2 + 2) + uVar20 * 0x40 + uVar10 * 0x10 + 4;
            }
          }
          FUN_0087af68(local_68 + uVar20 * 0x40 + uVar10 * 0x10 + 0x390);
          uVar10 = uVar10 + 1;
          param_4 = param_6;
        } while (uVar10 < *puVar19);
        uVar9 = *param_2;
        uVar10 = (ulong)uVar9;
        param_4 = local_e0[0xd];
      }
      if (uVar9 != 0) {
        lVar6 = local_68 + uVar20 * 0x68;
        pcVar1 = (char *)(lVar6 + 0xb8);
        plVar7 = (long *)(lVar6 + 200);
        uVar18 = 0;
        if (uVar2 == 0) {
          do {
            lVar13 = (ulong)(uint)((int)uVar18 << 8) * 4;
            lVar6 = lVar4 + lVar13;
            lVar13 = param_5 + lVar13;
            if (*pcVar1 == '\0') {
              if (param_3 != 0) {
                lVar15 = *plVar7;
                uVar10 = 0;
                do {
                  uVar9 = (int)uVar10 + 4;
                  lVar17 = uVar10 * 4;
                  puVar14 = (undefined8 *)(lVar6 + lVar17);
                  uVar22 = puVar14[1];
                  uVar21 = *puVar14;
                  uVar24 = ((undefined8 *)(lVar13 + lVar17))[1];
                  uVar23 = *(undefined8 *)(lVar13 + lVar17);
                  puVar14 = (undefined8 *)(lVar15 + lVar17);
                  uVar26 = puVar14[1];
                  uVar25 = *puVar14;
                  ((undefined8 *)(lVar13 + lVar17))[1] =
                       CONCAT44((float)((ulong)uVar24 >> 0x20) +
                                (float)((ulong)uVar26 >> 0x20) * (float)((ulong)uVar22 >> 0x20),
                                (float)uVar24 + (float)uVar26 * (float)uVar22);
                  *(undefined8 *)(lVar13 + lVar17) =
                       CONCAT44((float)((ulong)uVar23 >> 0x20) +
                                (float)((ulong)uVar25 >> 0x20) * (float)((ulong)uVar21 >> 0x20),
                                (float)uVar23 + (float)uVar25 * (float)uVar21);
                  uVar10 = (ulong)uVar9;
                } while (uVar9 < param_3);
              }
            }
            else if (param_3 != 0) {
              uVar10 = 0;
              do {
                uVar9 = (int)uVar10 + 4;
                lVar15 = uVar10 * 4;
                puVar14 = (undefined8 *)(lVar6 + lVar15);
                uVar22 = puVar14[1];
                uVar21 = *puVar14;
                uVar24 = ((undefined8 *)(lVar13 + lVar15))[1];
                uVar23 = *(undefined8 *)(lVar13 + lVar15);
                ((undefined8 *)(lVar13 + lVar15))[1] =
                     CONCAT44((float)((ulong)uVar24 >> 0x20) + (float)((ulong)uVar22 >> 0x20),
                              (float)uVar24 + (float)uVar22);
                *(undefined8 *)(lVar13 + lVar15) =
                     CONCAT44((float)((ulong)uVar23 >> 0x20) + (float)((ulong)uVar21 >> 0x20),
                              (float)uVar23 + (float)uVar21);
                uVar10 = (ulong)uVar9;
              } while (uVar9 < param_3);
            }
            uVar10 = (ulong)*param_2;
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar10);
        }
        else {
          do {
            lVar6 = (uVar18 & 0xffffff) * 0x400;
            puVar14 = (undefined8 *)(lVar4 + 0x20 + lVar6);
            puVar16 = (undefined8 *)(param_5 + 0x20 + lVar6);
            lVar13 = (ulong)(uint)((int)uVar18 << 8) * 4;
            lVar6 = lVar4 + lVar13;
            lVar13 = param_5 + lVar13;
            if (*pcVar1 == '\0') {
              lVar15 = *plVar7;
              uVar10 = 0;
              puVar3 = (undefined8 *)(lVar15 + 0x20);
              do {
                uVar21 = puVar14[-4];
                uVar23 = puVar14[-1];
                uVar22 = puVar14[-2];
                uVar10 = uVar10 + 0x10;
                uVar28 = puVar3[-4];
                uVar30 = puVar3[-1];
                uVar29 = puVar3[-2];
                uVar25 = puVar14[1];
                uVar24 = *puVar14;
                uVar27 = puVar14[3];
                uVar26 = puVar14[2];
                uVar32 = puVar3[1];
                uVar31 = *puVar3;
                uVar34 = puVar3[3];
                uVar33 = puVar3[2];
                puVar16[-3] = CONCAT44((float)((ulong)puVar16[-3] >> 0x20) +
                                       (float)((ulong)puVar3[-3] >> 0x20) *
                                       (float)((ulong)puVar14[-3] >> 0x20),
                                       (float)puVar16[-3] + (float)puVar3[-3] * (float)puVar14[-3]);
                puVar16[-4] = CONCAT44((float)((ulong)puVar16[-4] >> 0x20) +
                                       (float)((ulong)uVar28 >> 0x20) *
                                       (float)((ulong)uVar21 >> 0x20),
                                       (float)puVar16[-4] + (float)uVar28 * (float)uVar21);
                puVar16[-1] = CONCAT44((float)((ulong)puVar16[-1] >> 0x20) +
                                       (float)((ulong)uVar30 >> 0x20) *
                                       (float)((ulong)uVar23 >> 0x20),
                                       (float)puVar16[-1] + (float)uVar30 * (float)uVar23);
                puVar16[-2] = CONCAT44((float)((ulong)puVar16[-2] >> 0x20) +
                                       (float)((ulong)uVar29 >> 0x20) *
                                       (float)((ulong)uVar22 >> 0x20),
                                       (float)puVar16[-2] + (float)uVar29 * (float)uVar22);
                puVar16[1] = CONCAT44((float)((ulong)puVar16[1] >> 0x20) +
                                      (float)((ulong)uVar32 >> 0x20) *
                                      (float)((ulong)uVar25 >> 0x20),
                                      (float)puVar16[1] + (float)uVar32 * (float)uVar25);
                *puVar16 = CONCAT44((float)((ulong)*puVar16 >> 0x20) +
                                    (float)((ulong)uVar31 >> 0x20) * (float)((ulong)uVar24 >> 0x20),
                                    (float)*puVar16 + (float)uVar31 * (float)uVar24);
                puVar16[3] = CONCAT44((float)((ulong)puVar16[3] >> 0x20) +
                                      (float)((ulong)uVar34 >> 0x20) *
                                      (float)((ulong)uVar27 >> 0x20),
                                      (float)puVar16[3] + (float)uVar34 * (float)uVar27);
                puVar16[2] = CONCAT44((float)((ulong)puVar16[2] >> 0x20) +
                                      (float)((ulong)uVar33 >> 0x20) *
                                      (float)((ulong)uVar26 >> 0x20),
                                      (float)puVar16[2] + (float)uVar33 * (float)uVar26);
                puVar3 = puVar3 + 8;
                puVar14 = puVar14 + 8;
                puVar16 = puVar16 + 8;
                uVar9 = uVar2;
              } while (uVar10 < uVar2);
              for (; uVar9 < param_3; uVar9 = uVar9 + 4) {
                lVar17 = (ulong)uVar9 * 4;
                puVar14 = (undefined8 *)(lVar6 + lVar17);
                uVar22 = puVar14[1];
                uVar21 = *puVar14;
                uVar24 = ((undefined8 *)(lVar13 + lVar17))[1];
                uVar23 = *(undefined8 *)(lVar13 + lVar17);
                puVar14 = (undefined8 *)(lVar15 + lVar17);
                uVar26 = puVar14[1];
                uVar25 = *puVar14;
                ((undefined8 *)(lVar13 + lVar17))[1] =
                     CONCAT44((float)((ulong)uVar24 >> 0x20) +
                              (float)((ulong)uVar26 >> 0x20) * (float)((ulong)uVar22 >> 0x20),
                              (float)uVar24 + (float)uVar26 * (float)uVar22);
                *(undefined8 *)(lVar13 + lVar17) =
                     CONCAT44((float)((ulong)uVar23 >> 0x20) +
                              (float)((ulong)uVar25 >> 0x20) * (float)((ulong)uVar21 >> 0x20),
                              (float)uVar23 + (float)uVar25 * (float)uVar21);
              }
            }
            else {
              uVar10 = 0;
              do {
                uVar21 = puVar14[-4];
                uVar23 = puVar14[-1];
                uVar22 = puVar14[-2];
                uVar10 = uVar10 + 0x10;
                uVar25 = puVar14[1];
                uVar24 = *puVar14;
                uVar27 = puVar14[3];
                uVar26 = puVar14[2];
                puVar16[-3] = CONCAT44((float)((ulong)puVar16[-3] >> 0x20) +
                                       (float)((ulong)puVar14[-3] >> 0x20),
                                       (float)puVar16[-3] + (float)puVar14[-3]);
                puVar16[-4] = CONCAT44((float)((ulong)puVar16[-4] >> 0x20) +
                                       (float)((ulong)uVar21 >> 0x20),
                                       (float)puVar16[-4] + (float)uVar21);
                puVar16[-1] = CONCAT44((float)((ulong)puVar16[-1] >> 0x20) +
                                       (float)((ulong)uVar23 >> 0x20),
                                       (float)puVar16[-1] + (float)uVar23);
                puVar16[-2] = CONCAT44((float)((ulong)puVar16[-2] >> 0x20) +
                                       (float)((ulong)uVar22 >> 0x20),
                                       (float)puVar16[-2] + (float)uVar22);
                puVar16[1] = CONCAT44((float)((ulong)puVar16[1] >> 0x20) +
                                      (float)((ulong)uVar25 >> 0x20),
                                      (float)puVar16[1] + (float)uVar25);
                *puVar16 = CONCAT44((float)((ulong)*puVar16 >> 0x20) +
                                    (float)((ulong)uVar24 >> 0x20),(float)*puVar16 + (float)uVar24);
                puVar16[3] = CONCAT44((float)((ulong)puVar16[3] >> 0x20) +
                                      (float)((ulong)uVar27 >> 0x20),
                                      (float)puVar16[3] + (float)uVar27);
                puVar16[2] = CONCAT44((float)((ulong)puVar16[2] >> 0x20) +
                                      (float)((ulong)uVar26 >> 0x20),
                                      (float)puVar16[2] + (float)uVar26);
                puVar14 = puVar14 + 8;
                puVar16 = puVar16 + 8;
                uVar9 = uVar2;
              } while (uVar10 < uVar2);
              for (; uVar9 < param_3; uVar9 = uVar9 + 4) {
                lVar15 = (ulong)uVar9 * 4;
                puVar14 = (undefined8 *)(lVar6 + lVar15);
                uVar22 = puVar14[1];
                uVar21 = *puVar14;
                uVar24 = ((undefined8 *)(lVar13 + lVar15))[1];
                uVar23 = *(undefined8 *)(lVar13 + lVar15);
                ((undefined8 *)(lVar13 + lVar15))[1] =
                     CONCAT44((float)((ulong)uVar24 >> 0x20) + (float)((ulong)uVar22 >> 0x20),
                              (float)uVar24 + (float)uVar22);
                *(undefined8 *)(lVar13 + lVar15) =
                     CONCAT44((float)((ulong)uVar23 >> 0x20) + (float)((ulong)uVar21 >> 0x20),
                              (float)uVar23 + (float)uVar21);
              }
            }
            uVar10 = (ulong)*param_2;
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar10);
        }
      }
      uVar20 = uVar20 + 1;
      uVar18 = (ulong)*(uint *)(local_68 + 0xb4);
    } while (uVar20 < uVar18);
  }
  return;
}


