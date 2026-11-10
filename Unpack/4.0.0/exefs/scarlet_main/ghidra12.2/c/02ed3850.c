/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ed3850; name: FUN_02ed3850
 */


void FUN_02ed3850(long param_1,long *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  float *pfVar4;
  byte *pbVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  byte bVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined *puVar15;
  undefined *puVar16;
  byte bVar17;
  long *plVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  int iVar21;
  long lVar22;
  byte *pbVar23;
  byte *pbVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  uint uVar30;
  uint uVar31;
  byte bVar32;
  long lVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  long local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[3] = 0x7f7fffee7f7fffee;
  param_2[2] = 0x7f7fffee7f7fffee;
  param_2[5] = -0x80001100800012;
  param_2[4] = -0x80001100800012;
  if (*(int *)(param_1 + 0x14) != 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    lStack_80 = 0;
    FUN_02ed6b4c(param_1,&local_88);
    puVar16 = PTR_PTR_047d1a50;
    uVar30 = local_78._4_4_ * 2;
    uVar11 = uVar30 - 1;
    if ((int)uVar30 < 1) {
      plVar18 = (long *)0x0;
      uVar31 = 0x80000000;
    }
    else {
      plVar18 = (long *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                  (PTR_PTR_047d1a50,(ulong)uVar30 << 5);
      uVar31 = uVar30;
    }
    lVar33 = 0;
    if (local_88 != 0) {
      lVar33 = (long)&local_88 + local_88;
    }
    lVar22 = *(long *)(lVar33 + 0x30);
    plVar18[1] = *(long *)(lVar33 + 0x38);
    *plVar18 = lVar22;
    lVar22 = *(long *)(lVar33 + 0x40);
    plVar18[3] = *(long *)(lVar33 + 0x48);
    plVar18[2] = lVar22;
    uVar8 = *(uint *)(param_2 + 1);
    if (uVar8 != uVar11) {
      uVar25 = *(uint *)((long)param_2 + 0xc);
      if (*(uint *)((long)param_2 + 0xc) == 0) {
        *(uint *)((long)param_2 + 0xc) = uVar8;
        uVar25 = uVar8;
      }
      puVar15 = PTR_DAT_047d1a08;
      if ((int)uVar8 < (int)uVar11) {
        uVar7 = uVar25 & 0x7fffffff;
        if ((int)(uVar25 & 0x7fffffff) <= (int)uVar8) {
          uVar7 = uVar8;
        }
        if ((int)uVar7 < (int)uVar11) {
          uVar30 = uVar30 - 2 | (int)(uVar30 - 2) >> 0x10;
          uVar30 = uVar30 | (int)uVar30 >> 8;
          uVar30 = uVar30 | (int)uVar30 >> 4;
          uVar30 = uVar30 | (int)uVar30 >> 2;
          uVar30 = (uVar30 | (int)uVar30 >> 1) + 1;
          if ((int)uVar30 < (int)uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                         "Capacity reservation overflow");
          }
          local_68 = (long)(int)uVar30 * 6;
          puVar19 = (undefined4 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
          puVar3 = (undefined4 *)0x0;
          if (*param_2 != 0) {
            puVar3 = (undefined4 *)(*param_2 + (long)param_2);
          }
          uVar8 = *(uint *)(param_2 + 1);
          if (0 < (int)uVar8) {
            if (uVar8 == 1) {
              uVar26 = 0;
            }
            else {
              uVar26 = 0;
              puVar28 = puVar3;
              puVar29 = puVar19;
              do {
                uVar9 = *puVar28;
                uVar26 = uVar26 + 2;
                *(undefined2 *)(puVar29 + 1) = *(undefined2 *)(puVar28 + 1);
                *puVar29 = uVar9;
                uVar9 = *(undefined4 *)((long)puVar28 + 6);
                *(undefined2 *)((long)puVar29 + 10) = *(undefined2 *)((long)puVar28 + 10);
                *(undefined4 *)((long)puVar29 + 6) = uVar9;
                puVar29 = puVar29 + 3;
                puVar28 = puVar28 + 3;
              } while (((ulong)uVar8 & 0xfffffffe) != uVar26);
            }
            if ((uVar8 & 1) != 0) {
              puVar3 = (undefined4 *)((long)puVar3 + uVar26 * 6);
              puVar29 = (undefined4 *)((long)puVar19 + uVar26 * 6);
              uVar9 = *puVar3;
              *(undefined2 *)(puVar29 + 1) = *(undefined2 *)(puVar3 + 1);
              *puVar29 = uVar9;
            }
          }
          if (*(int *)((long)param_2 + 0xc) < 0) {
            lVar33 = 0;
            if (*param_2 != 0) {
              lVar33 = *param_2 + (long)param_2;
            }
            (**(code **)(puVar15 + 8))(0,lVar33,0);
          }
          lVar33 = 0;
          if (puVar19 != (undefined4 *)0x0) {
            lVar33 = (long)puVar19 - (long)param_2;
          }
          *param_2 = lVar33;
          *(uint *)((long)param_2 + 0xc) = uVar30 | 0x80000000;
        }
      }
      *(uint *)(param_2 + 1) = uVar11;
    }
    lVar33 = *plVar18;
    param_2[3] = plVar18[1];
    param_2[2] = lVar33;
    lVar33 = plVar18[2];
    param_2[5] = plVar18[3];
    param_2[4] = lVar33;
    lVar33 = 0;
    if (local_88 != 0) {
      lVar33 = (long)&local_88 + local_88;
    }
    if (0 < (int)uVar11) {
      uVar26 = 0;
      do {
        lVar27 = *param_2;
        uVar1 = uVar26 + 1;
        puVar20 = (undefined8 *)(lVar33 + uVar1 * 0x30);
        uVar38 = puVar20[1];
        uVar35 = *puVar20;
        uVar41 = puVar20[3];
        uVar40 = puVar20[2];
        pbVar23 = (byte *)((long)param_2 + uVar26 * 6 + lVar27);
        uVar30 = *(uint *)(puVar20 + 5);
        pfVar4 = (float *)(plVar18 + (long)*(int *)(puVar20 + 4) * 4);
        lVar22 = 0;
        pbVar23[0] = 0;
        pbVar23[1] = 0;
        pbVar24 = pbVar23 + 2;
        *pbVar24 = 0;
        pbVar2 = pbVar23 + 1;
        do {
          pbVar5 = (byte *)((long)param_2 + lVar22 + uVar26 * 6 + lVar27);
          iVar21 = (int)lVar22;
          if (iVar21 == 0) {
            bVar17 = *pbVar5;
            do {
              bVar32 = bVar17;
              if (0xef < bVar32) goto LAB_02ed3c94;
              *pbVar5 = bVar32 + 0x10;
              bVar17 = bVar32 + 0x10;
            } while (*pfVar4 + (pfVar4[4] - *pfVar4) * 0.0044247787 *
                               (float)(byte)((*pbVar23 >> 4) * (*pbVar23 >> 4)) <= (float)uVar35);
LAB_02ed3c90:
            *pbVar5 = bVar32;
          }
          else {
            if (iVar21 == 1) {
              bVar17 = *pbVar5;
              do {
                bVar32 = bVar17;
                if (0xef < bVar32) goto LAB_02ed3c94;
                *pbVar5 = bVar32 + 0x10;
                bVar17 = bVar32 + 0x10;
              } while (pfVar4[1] +
                       (pfVar4[5] - pfVar4[1]) * 0.0044247787 *
                       (float)(byte)((*pbVar2 >> 4) * (*pbVar2 >> 4)) <=
                       (float)((ulong)uVar35 >> 0x20));
              goto LAB_02ed3c90;
            }
            bVar32 = *pbVar5;
            bVar17 = bVar32;
            if (lVar22 == 2) {
              do {
                bVar32 = bVar17;
                if (0xef < bVar32) goto LAB_02ed3c94;
                *pbVar5 = bVar32 + 0x10;
                bVar17 = bVar32 + 0x10;
              } while (pfVar4[2] +
                       (pfVar4[6] - pfVar4[2]) * 0.0044247787 *
                       (float)(byte)((*pbVar24 >> 4) * (*pbVar24 >> 4)) <= (float)uVar38);
              goto LAB_02ed3c90;
            }
            if (0.0 <= (float)((ulong)uVar38 >> 0x20)) {
              if (bVar32 < 0xf0) {
                if (bVar32 < 0xe1) {
                  bVar17 = 0xe0;
                }
                bVar32 = bVar32 + ((bVar17 - bVar32) + 0xf & 0xf0) + 0x10;
                goto LAB_02ed3c90;
              }
            }
            else if (bVar32 < 0xf0) {
              *pbVar5 = bVar32 + 0x10;
              goto LAB_02ed3c90;
            }
          }
LAB_02ed3c94:
          bVar17 = bVar32;
          if (iVar21 == 0) {
            do {
              bVar32 = bVar17;
              if ((~bVar32 & 0xf) == 0) goto LAB_02ed3de8;
              *pbVar5 = bVar32 + 1;
              fVar34 = pfVar4[4];
              bVar17 = bVar32 + 1;
            } while ((float)uVar40 <=
                     fVar34 + (fVar34 - *pfVar4) * -0.0044247787 *
                              (float)(byte)((*pbVar23 & 0xf) * (*pbVar23 & 0xf)));
LAB_02ed3de4:
            *pbVar5 = bVar32;
          }
          else {
            if (iVar21 == 1) {
              do {
                bVar32 = bVar17;
                if ((~bVar32 & 0xf) == 0) goto LAB_02ed3de8;
                *pbVar5 = bVar32 + 1;
                bVar17 = bVar32 + 1;
              } while ((float)((ulong)uVar40 >> 0x20) <=
                       pfVar4[5] +
                       (pfVar4[5] - pfVar4[1]) * -0.0044247787 *
                       (float)(byte)((*pbVar2 & 0xf) * (*pbVar2 & 0xf)));
              goto LAB_02ed3de4;
            }
            if (lVar22 == 2) {
              do {
                bVar32 = bVar17;
                if ((~bVar32 & 0xf) == 0) goto LAB_02ed3de8;
                *pbVar5 = bVar32 + 1;
                bVar17 = bVar32 + 1;
              } while ((float)uVar41 <=
                       pfVar4[6] +
                       (pfVar4[6] - pfVar4[2]) * -0.0044247787 *
                       (float)(byte)((*pbVar24 & 0xf) * (*pbVar24 & 0xf)));
              goto LAB_02ed3de4;
            }
            if ((float)((ulong)uVar41 >> 0x20) <= 0.0) {
              if ((bVar32 & 0xf) != 0xf) {
                do {
                  bVar32 = bVar32 + 1;
                } while ((~bVar32 & 0xf) != 0);
                goto LAB_02ed3de4;
              }
            }
            else if ((bVar32 & 0xf) != 0xf) {
              *pbVar5 = bVar32 + 1;
              goto LAB_02ed3de4;
            }
          }
LAB_02ed3de8:
          lVar22 = lVar22 + 1;
        } while (lVar22 != 3);
        bVar12 = *pbVar23 >> 4;
        bVar17 = *pbVar23 & 0xf;
        pfVar6 = (float *)(plVar18 + uVar1 * 4);
        fVar34 = ((float)*(long *)(pfVar4 + 4) - (float)*(long *)pfVar4) * 0.0044247787;
        fVar36 = ((float)((ulong)*(long *)(pfVar4 + 4) >> 0x20) -
                 (float)((ulong)*(long *)pfVar4 >> 0x20)) * 0.0044247787;
        fVar37 = ((float)*(long *)(pfVar4 + 6) - (float)*(long *)(pfVar4 + 2)) * 0.0044247787;
        bVar32 = *pbVar2;
        bVar10 = *pbVar24;
        pfVar6[4] = 0.0;
        pfVar6[5] = 0.0;
        pfVar6[6] = 0.0;
        pfVar6[7] = 0.0;
        pfVar6[0] = 0.0;
        pfVar6[1] = 0.0;
        pfVar6[2] = 0.0;
        pfVar6[3] = 0.0;
        bVar13 = bVar32 >> 4;
        bVar14 = bVar10 >> 4;
        bVar32 = bVar32 & 0xf;
        bVar10 = bVar10 & 0xf;
        fVar39 = pfVar4[1];
        *pfVar6 = *pfVar4 + (float)(byte)(bVar12 * bVar12) * fVar34;
        pfVar6[1] = (float)(byte)(bVar13 * bVar13) * fVar36 + fVar39;
        pfVar6[2] = (float)(byte)(bVar14 * bVar14) * fVar37 + pfVar4[2];
        fVar39 = pfVar4[5];
        pfVar6[4] = pfVar4[4] - (float)(byte)(bVar17 * bVar17) * fVar34;
        pfVar6[5] = fVar39 - (float)(byte)(bVar32 * bVar32) * fVar36;
        pfVar6[6] = pfVar4[6] - (float)(byte)(bVar10 * bVar10) * fVar37;
        if (*(int *)(lVar33 + uVar1 * 0x30 + 0x24) == 0) {
          bVar17 = (byte)(uVar30 >> 0x10) & 0x7f;
        }
        else {
          uVar8 = uVar30 + ~(uint)uVar26;
          uVar30 = uVar8 >> 1;
          bVar17 = (byte)(uVar8 >> 0x11) | 0x80;
        }
        lVar27 = uVar26 * 6 + lVar27;
        *(byte *)((long)param_2 + lVar27 + 3) = bVar17;
        *(short *)((long)param_2 + lVar27 + 4) = (short)uVar30;
        uVar26 = uVar1;
      } while (uVar1 != uVar11);
    }
    if (-1 < (int)uVar31) {
      (**(code **)(*(long *)puVar16 + 0x20))(puVar16,plVar18,(ulong)uVar31 << 5);
    }
    if (lStack_80 < 0) {
      lVar33 = 0;
      if (local_88 != 0) {
        lVar33 = (long)&local_88 + local_88;
      }
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar33,0);
    }
  }
  return;
}


