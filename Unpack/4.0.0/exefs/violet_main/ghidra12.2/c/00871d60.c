/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00871d60; name: FUN_00871d60
 */


void FUN_00871d60(long param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  float *pfVar5;
  byte *pbVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  byte bVar11;
  uint uVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  int iVar19;
  long *plVar20;
  undefined4 *puVar21;
  long lVar22;
  byte *pbVar23;
  byte *pbVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  uint uVar31;
  byte bVar32;
  undefined8 *puVar33;
  byte bVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  puVar16 = PTR_DAT_047d19b0;
  *(undefined4 *)(param_2 + 1) = 0;
  lVar22 = *(long *)(puVar16 + 0x248);
  lVar28 = *(long *)(puVar16 + 0x240);
  param_2[3] = lVar22;
  param_2[2] = lVar28;
  param_2[5] = CONCAT44(-(float)((ulong)lVar22 >> 0x20),-(float)lVar22);
  param_2[4] = CONCAT44(-(float)((ulong)lVar28 >> 0x20),-(float)lVar28);
  if (*(int *)(param_1 + 0x14) != 0) {
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    lStack_90 = 0;
    FUN_02ed6b4c(param_1,&local_98);
    puVar18 = PTR_PTR_047d1a50;
    uVar31 = local_88._4_4_ * 2;
    uVar12 = uVar31 - 1;
    if ((int)uVar31 < 1) {
      plVar20 = (long *)0x0;
      uVar35 = 0x80000000;
    }
    else {
      plVar20 = (long *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                  (PTR_PTR_047d1a50,(ulong)uVar31 << 5);
      uVar35 = uVar31;
    }
    lVar28 = 0;
    if (local_98 != 0) {
      lVar28 = (long)&local_98 + local_98;
    }
    lVar22 = *(long *)(lVar28 + 0x30);
    plVar20[1] = *(long *)(lVar28 + 0x38);
    *plVar20 = lVar22;
    lVar22 = *(long *)(lVar28 + 0x40);
    plVar20[3] = *(long *)(lVar28 + 0x48);
    plVar20[2] = lVar22;
    uVar9 = *(uint *)(param_2 + 1);
    if (uVar9 != uVar12) {
      uVar25 = *(uint *)((long)param_2 + 0xc);
      if (*(uint *)((long)param_2 + 0xc) == 0) {
        *(uint *)((long)param_2 + 0xc) = uVar9;
        uVar25 = uVar9;
      }
      if ((int)uVar9 < (int)uVar12) {
        uVar8 = uVar25 & 0x7fffffff;
        if ((int)(uVar25 & 0x7fffffff) <= (int)uVar9) {
          uVar8 = uVar9;
        }
        if ((int)uVar8 < (int)uVar12) {
          uVar31 = uVar31 - 2 | (int)(uVar31 - 2) >> 0x10;
          uVar31 = uVar31 | (int)uVar31 >> 8;
          uVar31 = uVar31 | (int)uVar31 >> 4;
          uVar31 = uVar31 | (int)uVar31 >> 2;
          uVar31 = (uVar31 | (int)uVar31 >> 1) + 1;
          if ((int)uVar31 < (int)uVar12) {
            local_68 = 0;
            local_78 = 0;
            puStack_70 = PTR_DAT_047d1b38;
            FUN_01f9d9b0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                         "Capacity reservation overflow",&local_78);
          }
          puVar17 = PTR_DAT_047d1a08;
          local_78 = (long)(int)uVar31 * 6;
          puVar21 = (undefined4 *)(**(code **)PTR_DAT_047d1a08)(0,&local_78,0);
          uVar9 = *(uint *)(param_2 + 1);
          puVar4 = (undefined4 *)0x0;
          if (*param_2 != 0) {
            puVar4 = (undefined4 *)(*param_2 + (long)param_2);
          }
          if (0 < (int)uVar9) {
            if (uVar9 == 1) {
              lVar28 = 0;
            }
            else {
              lVar28 = 0;
              puVar29 = puVar4;
              puVar30 = puVar21;
              do {
                uVar10 = *puVar29;
                lVar28 = lVar28 + 2;
                *(undefined2 *)(puVar30 + 1) = *(undefined2 *)(puVar29 + 1);
                *puVar30 = uVar10;
                uVar10 = *(undefined4 *)((long)puVar29 + 6);
                *(undefined2 *)((long)puVar30 + 10) = *(undefined2 *)((long)puVar29 + 10);
                *(undefined4 *)((long)puVar30 + 6) = uVar10;
                puVar30 = puVar30 + 3;
                puVar29 = puVar29 + 3;
              } while ((ulong)uVar9 - ((ulong)uVar9 & 1) != lVar28);
            }
            if ((uVar9 & 1) != 0) {
              puVar4 = (undefined4 *)((long)puVar4 + lVar28 * 6);
              puVar30 = (undefined4 *)((long)puVar21 + lVar28 * 6);
              uVar10 = *puVar4;
              *(undefined2 *)(puVar30 + 1) = *(undefined2 *)(puVar4 + 1);
              *puVar30 = uVar10;
            }
          }
          if (*(int *)((long)param_2 + 0xc) < 0) {
            lVar28 = 0;
            if (*param_2 != 0) {
              lVar28 = *param_2 + (long)param_2;
            }
            (**(code **)(puVar17 + 8))(0,lVar28,0);
          }
          lVar28 = 0;
          if (puVar21 != (undefined4 *)0x0) {
            lVar28 = (long)puVar21 - (long)param_2;
          }
          *param_2 = lVar28;
          *(uint *)((long)param_2 + 0xc) = uVar31 | 0x80000000;
        }
      }
      *(uint *)(param_2 + 1) = uVar12;
    }
    lVar28 = *plVar20;
    param_2[3] = plVar20[1];
    param_2[2] = lVar28;
    lVar28 = plVar20[2];
    param_2[5] = plVar20[3];
    param_2[4] = lVar28;
    lVar28 = 0;
    if (local_98 != 0) {
      lVar28 = (long)&local_98 + local_98;
    }
    if (0 < (int)uVar12) {
      fVar37 = (float)((ulong)*(undefined8 *)(puVar16 + 0x1e0) >> 0x20);
      fVar36 = (float)*(undefined8 *)(puVar16 + 0x1e0);
      uVar26 = 0;
      do {
        lVar27 = *param_2;
        uVar2 = uVar26 + 1;
        puVar33 = (undefined8 *)(lVar28 + uVar2 * 0x30);
        uVar42 = puVar33[1];
        uVar39 = *puVar33;
        uVar44 = puVar33[3];
        uVar43 = puVar33[2];
        pbVar24 = (byte *)((long)param_2 + uVar26 * 6 + lVar27);
        uVar31 = *(uint *)(puVar33 + 5);
        pfVar5 = (float *)(plVar20 + (long)*(int *)(puVar33 + 4) * 4);
        lVar22 = 0;
        pbVar3 = pbVar24 + 1;
        pbVar23 = pbVar24 + 2;
        pbVar24[0] = 0;
        pbVar24[1] = 0;
        *pbVar23 = 0;
        do {
          pbVar6 = (byte *)((long)param_2 + lVar22 + uVar26 * 6 + lVar27);
          iVar19 = (int)lVar22;
          if (iVar19 == 0) {
            bVar32 = *pbVar6;
            do {
              bVar34 = bVar32;
              if (0xef < bVar34) goto LAB_008721b4;
              *pbVar6 = bVar34 + 0x10;
              bVar32 = bVar34 + 0x10;
            } while (*pfVar5 + fVar36 * (pfVar5[4] - *pfVar5) *
                               (float)(byte)((*pbVar24 >> 4) * (*pbVar24 >> 4)) <= (float)uVar39);
LAB_008721b0:
            *pbVar6 = bVar34;
          }
          else {
            if (iVar19 == 1) {
              bVar32 = *pbVar6;
              do {
                bVar34 = bVar32;
                if (0xef < bVar34) goto LAB_008721b4;
                *pbVar6 = bVar34 + 0x10;
                bVar32 = bVar34 + 0x10;
              } while (pfVar5[1] +
                       fVar37 * (pfVar5[5] - pfVar5[1]) *
                       (float)(byte)((*pbVar3 >> 4) * (*pbVar3 >> 4)) <=
                       (float)((ulong)uVar39 >> 0x20));
              goto LAB_008721b0;
            }
            bVar34 = *pbVar6;
            bVar32 = bVar34;
            if (lVar22 == 2) {
              do {
                bVar34 = bVar32;
                if (0xef < bVar34) goto LAB_008721b4;
                *pbVar6 = bVar34 + 0x10;
                bVar32 = bVar34 + 0x10;
              } while (pfVar5[2] +
                       fVar36 * (pfVar5[6] - pfVar5[2]) *
                       (float)(byte)((*pbVar23 >> 4) * (*pbVar23 >> 4)) <= (float)uVar42);
              goto LAB_008721b0;
            }
            if (0.0 <= (float)((ulong)uVar42 >> 0x20)) {
              if (bVar34 < 0xf0) {
                do {
                  bVar34 = bVar32 + 0x10;
                  bVar1 = bVar32 < 0xe0;
                  bVar32 = bVar34;
                } while (bVar1);
                goto LAB_008721b0;
              }
            }
            else if (bVar34 < 0xf0) {
              *pbVar6 = bVar34 + 0x10;
              goto LAB_008721b0;
            }
          }
LAB_008721b4:
          bVar32 = bVar34;
          if (iVar19 == 0) {
            do {
              bVar34 = bVar32;
              if ((~bVar34 & 0xf) == 0) goto LAB_00872058;
              *pbVar6 = bVar34 + 1;
              fVar38 = pfVar5[4];
              bVar32 = bVar34 + 1;
            } while ((float)uVar43 <=
                     fVar38 - fVar36 * (fVar38 - *pfVar5) *
                              (float)(byte)((*pbVar24 & 0xf) * (*pbVar24 & 0xf)));
LAB_00872054:
            *pbVar6 = bVar34;
          }
          else {
            if (iVar19 == 1) {
              do {
                bVar34 = bVar32;
                if ((~bVar34 & 0xf) == 0) goto LAB_00872058;
                *pbVar6 = bVar34 + 1;
                bVar32 = bVar34 + 1;
              } while ((float)((ulong)uVar43 >> 0x20) <=
                       pfVar5[5] -
                       fVar37 * (pfVar5[5] - pfVar5[1]) *
                       (float)(byte)((*pbVar3 & 0xf) * (*pbVar3 & 0xf)));
              goto LAB_00872054;
            }
            if (lVar22 == 2) {
              do {
                bVar34 = bVar32;
                if ((~bVar34 & 0xf) == 0) goto LAB_00872058;
                *pbVar6 = bVar34 + 1;
                bVar32 = bVar34 + 1;
              } while ((float)uVar44 <=
                       pfVar5[6] -
                       fVar36 * (pfVar5[6] - pfVar5[2]) *
                       (float)(byte)((*pbVar23 & 0xf) * (*pbVar23 & 0xf)));
              goto LAB_00872054;
            }
            if ((float)((ulong)uVar44 >> 0x20) <= 0.0) {
              if ((bVar34 & 0xf) != 0xf) {
                do {
                  bVar34 = bVar34 + 1;
                } while ((~bVar34 & 0xf) != 0);
                goto LAB_00872054;
              }
            }
            else if ((bVar34 & 0xf) != 0xf) {
              *pbVar6 = bVar34 + 1;
              goto LAB_00872054;
            }
          }
LAB_00872058:
          lVar22 = lVar22 + 1;
        } while (lVar22 != 3);
        bVar13 = *pbVar24 >> 4;
        bVar32 = *pbVar24 & 0xf;
        pfVar7 = (float *)(plVar20 + uVar2 * 4);
        fVar38 = fVar36 * ((float)*(long *)(pfVar5 + 4) - (float)*(long *)pfVar5);
        fVar40 = fVar37 * ((float)((ulong)*(long *)(pfVar5 + 4) >> 0x20) -
                          (float)((ulong)*(long *)pfVar5 >> 0x20));
        fVar41 = fVar36 * ((float)*(long *)(pfVar5 + 6) - (float)*(long *)(pfVar5 + 2));
        bVar34 = *pbVar3;
        bVar11 = *pbVar23;
        pfVar7[4] = 0.0;
        pfVar7[5] = 0.0;
        pfVar7[6] = 0.0;
        pfVar7[7] = 0.0;
        pfVar7[0] = 0.0;
        pfVar7[1] = 0.0;
        pfVar7[2] = 0.0;
        pfVar7[3] = 0.0;
        bVar14 = bVar34 >> 4;
        bVar15 = bVar11 >> 4;
        bVar34 = bVar34 & 0xf;
        bVar11 = bVar11 & 0xf;
        *pfVar7 = *pfVar5 + (float)(byte)(bVar13 * bVar13) * fVar38;
        pfVar7[1] = (float)(byte)(bVar14 * bVar14) * fVar40 + pfVar5[1];
        pfVar7[2] = (float)(byte)(bVar15 * bVar15) * fVar41 + pfVar5[2];
        pfVar7[4] = pfVar5[4] - (float)(byte)(bVar32 * bVar32) * fVar38;
        pfVar7[5] = pfVar5[5] - (float)(byte)(bVar34 * bVar34) * fVar40;
        pfVar7[6] = pfVar5[6] - (float)(byte)(bVar11 * bVar11) * fVar41;
        if (*(int *)(lVar28 + uVar2 * 0x30 + 0x24) == 0) {
          bVar32 = (byte)(uVar31 >> 0x10) & 0x7f;
        }
        else {
          uVar9 = uVar31 + ~(uint)uVar26;
          uVar31 = uVar9 >> 1;
          bVar32 = (byte)(uVar9 >> 0x11) | 0x80;
        }
        lVar27 = uVar26 * 6 + lVar27;
        *(byte *)((long)param_2 + lVar27 + 3) = bVar32;
        *(short *)((long)param_2 + lVar27 + 4) = (short)uVar31;
        uVar26 = uVar2;
      } while (uVar2 != uVar12);
    }
    if (-1 < (int)uVar35) {
      (**(code **)(*(long *)puVar18 + 0x20))(puVar18,plVar20,(ulong)uVar35 << 5);
    }
    if (lStack_90 < 0) {
      lVar28 = 0;
      if (local_98 != 0) {
        lVar28 = (long)&local_98 + local_98;
      }
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar28,0);
    }
  }
  return;
}


