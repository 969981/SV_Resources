/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f07a70; name: FUN_02f07a70
 */


undefined8 FUN_02f07a70(long param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  ushort *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  long lVar8;
  ushort uVar9;
  long lVar10;
  undefined *puVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 local_480 [128];
  undefined1 auStack_80 [32];
  
  puVar11 = PTR_DAT_047d19f0;
  uVar13 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0x78)
           )();
  if (uVar13 == 0) {
    uVar16 = 0x80040200;
  }
  else {
    lVar1 = 0;
    if ((*(ushort *)(param_1 + 0x1a) & 2) != 0) {
      lVar1 = param_1;
    }
    if ((*(ushort *)(param_1 + 0x1a) >> 1 & 1) == 0) {
      if (0 < (int)uVar13) {
        uVar24 = 0;
        do {
          uVar15 = (**(code **)(*(long *)puVar11 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0x88))
                             (param_1,uVar24,auStack_80,local_480);
          uVar22 = uVar15 & 0xffffffff;
          lVar8 = param_4[1];
          iVar14 = (int)uVar15;
          lVar1 = (long)(int)lVar8 + (long)iVar14 * 2;
          iVar23 = (int)lVar1;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < iVar23) {
            FUN_02e8df28(param_4,PTR_PTR_047d1a50,lVar1);
          }
          *(int *)(param_4 + 1) = iVar23;
          if (0 < iVar14) {
            puVar17 = (undefined8 *)(*param_4 + (long)(int)lVar8 * 0x10);
            if (iVar14 == 1) {
              uVar19 = 0;
            }
            else {
              uVar19 = 0;
              puVar20 = puVar17;
              puVar21 = local_480 + 2;
              do {
                uVar16 = puVar21[-2];
                lVar1 = 0;
                if (uVar22 - 1 != uVar19) {
                  lVar1 = uVar19 + 1;
                }
                uVar25 = *param_2;
                uVar26 = *param_3;
                puVar20[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                                      (float)((ulong)puVar21[-1] >> 0x20) *
                                      (float)((ulong)param_2[1] >> 0x20),
                                      (float)param_3[1] + (float)puVar21[-1] * (float)param_2[1]);
                *puVar20 = CONCAT44((float)((ulong)uVar26 >> 0x20) +
                                    (float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar25 >> 0x20),
                                    (float)uVar26 + (float)uVar16 * (float)uVar25);
                uVar16 = local_480[lVar1 * 2];
                uVar25 = *param_2;
                uVar26 = *param_3;
                bVar12 = uVar22 - 2 != uVar19;
                puVar20[3] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                                      (float)((ulong)local_480[lVar1 * 2 + 1] >> 0x20) *
                                      (float)((ulong)param_2[1] >> 0x20),
                                      (float)param_3[1] +
                                      (float)local_480[lVar1 * 2 + 1] * (float)param_2[1]);
                puVar20[2] = CONCAT44((float)((ulong)uVar26 >> 0x20) +
                                      (float)((ulong)uVar16 >> 0x20) *
                                      (float)((ulong)uVar25 >> 0x20),
                                      (float)uVar26 + (float)uVar16 * (float)uVar25);
                uVar26 = *param_2;
                uVar25 = *puVar21;
                uVar16 = *param_3;
                uVar19 = uVar19 + 2;
                puVar20[5] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                                      (float)((ulong)puVar21[1] >> 0x20) *
                                      (float)((ulong)param_2[1] >> 0x20),
                                      (float)param_3[1] + (float)puVar21[1] * (float)param_2[1]);
                puVar20[4] = CONCAT44((float)((ulong)uVar16 >> 0x20) +
                                      (float)((ulong)uVar25 >> 0x20) *
                                      (float)((ulong)uVar26 >> 0x20),
                                      (float)uVar16 + (float)uVar25 * (float)uVar26);
                uVar4 = 0;
                if (bVar12) {
                  uVar4 = uVar19;
                }
                uVar25 = *param_2;
                uVar16 = local_480[uVar4 * 2];
                puVar17 = puVar20 + 8;
                uVar26 = *param_3;
                puVar20[7] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                                      (float)((ulong)local_480[uVar4 * 2 + 1] >> 0x20) *
                                      (float)((ulong)param_2[1] >> 0x20),
                                      (float)param_3[1] +
                                      (float)local_480[uVar4 * 2 + 1] * (float)param_2[1]);
                puVar20[6] = CONCAT44((float)((ulong)uVar26 >> 0x20) +
                                      (float)((ulong)uVar16 >> 0x20) *
                                      (float)((ulong)uVar25 >> 0x20),
                                      (float)uVar26 + (float)uVar16 * (float)uVar25);
                puVar20 = puVar17;
                puVar21 = puVar21 + 4;
              } while ((uVar15 & 0xfffffffe) != uVar19);
            }
            if ((uVar15 & 1) != 0) {
              uVar16 = local_480[uVar19 * 2];
              uVar25 = *param_2;
              uVar26 = *param_3;
              lVar1 = 0;
              if (uVar19 + 1 != uVar22) {
                lVar1 = uVar19 + 1;
              }
              puVar17[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                                    (float)((ulong)local_480[uVar19 * 2 + 1] >> 0x20) *
                                    (float)((ulong)param_2[1] >> 0x20),
                                    (float)param_3[1] +
                                    (float)local_480[uVar19 * 2 + 1] * (float)param_2[1]);
              *puVar17 = CONCAT44((float)((ulong)uVar26 >> 0x20) +
                                  (float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar25 >> 0x20),
                                  (float)uVar26 + (float)uVar16 * (float)uVar25);
              uVar16 = local_480[lVar1 * 2];
              uVar25 = *param_2;
              uVar26 = *param_3;
              puVar17[3] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                                    (float)((ulong)local_480[lVar1 * 2 + 1] >> 0x20) *
                                    (float)((ulong)param_2[1] >> 0x20),
                                    (float)param_3[1] +
                                    (float)local_480[lVar1 * 2 + 1] * (float)param_2[1]);
              puVar17[2] = CONCAT44((float)((ulong)uVar26 >> 0x20) +
                                    (float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar25 >> 0x20),
                                    (float)uVar26 + (float)uVar16 * (float)uVar25);
            }
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar13);
      }
    }
    else {
      iVar14 = *(int *)(lVar1 + 0x40);
      iVar23 = *(int *)(lVar1 + 0x50);
      lVar8 = 0;
      if (iVar23 != 0) {
        lVar8 = (long)iVar23 + lVar1 + 0x50;
      }
      iVar23 = *(int *)(lVar1 + 0x58);
      lVar5 = 0;
      if (iVar23 != 0) {
        lVar5 = (long)iVar23 + lVar1 + 0x58;
      }
      lVar6 = 0;
      if (iVar14 != 0) {
        lVar6 = (long)iVar14 + lVar1 + 0x40;
      }
      if (0 < (int)uVar13) {
        uVar15 = 0;
        do {
          puVar2 = (ushort *)(lVar8 + uVar15 * 4);
          uVar9 = puVar2[1];
          lVar10 = param_4[1];
          lVar1 = (long)(int)lVar10 + (ulong)(byte)uVar9 * 2;
          iVar14 = (int)lVar1;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < iVar14) {
            FUN_02e8df28(param_4,PTR_PTR_047d1a50,lVar1);
          }
          *(int *)(param_4 + 1) = iVar14;
          uVar24 = (uint)(byte)uVar9;
          if (uVar24 != 0) {
            puVar17 = (undefined8 *)(*param_4 + (long)(int)lVar10 * 0x10);
            uVar18 = 1;
            do {
              puVar20 = (undefined8 *)
                        (lVar6 + (ulong)*(byte *)(lVar5 + (ulong)((uVar18 + *puVar2) - 1)) * 0xc);
              fVar7 = *(float *)(puVar20 + 1);
              uVar25 = *puVar20;
              uVar16 = *param_2;
              uVar26 = *param_3;
              puVar17[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                                    (float)((ulong)param_2[1] >> 0x20) * fVar7,
                                    (float)param_3[1] + (float)param_2[1] * fVar7);
              *puVar17 = CONCAT44((float)((ulong)uVar26 >> 0x20) +
                                  (float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar25 >> 0x20),
                                  (float)uVar26 + (float)uVar16 * (float)uVar25);
              uVar3 = 0;
              if (uVar18 != uVar24) {
                uVar3 = uVar18;
              }
              uVar18 = uVar18 + 1;
              uVar16 = *param_3;
              puVar20 = (undefined8 *)
                        (lVar6 + (ulong)*(byte *)(lVar5 + (ulong)uVar3 + (ulong)*puVar2) * 0xc);
              fVar7 = *(float *)(puVar20 + 1);
              uVar26 = *puVar20;
              uVar25 = *param_2;
              puVar17[3] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                                    (float)((ulong)param_2[1] >> 0x20) * fVar7,
                                    (float)param_3[1] + (float)param_2[1] * fVar7);
              puVar17[2] = CONCAT44((float)((ulong)uVar16 >> 0x20) +
                                    (float)((ulong)uVar25 >> 0x20) * (float)((ulong)uVar26 >> 0x20),
                                    (float)uVar16 + (float)uVar25 * (float)uVar26);
              puVar17 = puVar17 + 4;
            } while (uVar18 - uVar24 != 1);
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar13);
      }
    }
    uVar16 = 0;
  }
  return uVar16;
}


