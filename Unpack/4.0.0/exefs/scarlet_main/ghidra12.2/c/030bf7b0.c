/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030bf7b0; name: FUN_030bf7b0
 */


void FUN_030bf7b0(long *param_1,long *param_2,long param_3,uint param_4,ulong param_5)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  float *pfVar16;
  uint uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  if (*(int *)((long)param_1 + 0x2c) < (int)param_1[5]) {
    *param_1 = (long)param_2;
    iVar5 = (int)param_5;
    uVar10 = param_5 >> 0x16 & 0x3ff;
    iVar9 = (int)uVar10;
    if (*param_2 == 0) {
      param_2[2] = param_2[1];
    }
    else if (*(int *)((long)param_2 + 0x74) != iVar9) {
      param_2[2] = *(long *)(*(long *)(*param_2 + 0x38) + uVar10 * 0x100 + 0x10);
      *(int *)((long)param_2 + 0x74) = iVar9;
    }
    *(int *)((long)param_2 + 0x74) = iVar9;
    lVar13 = *param_1;
    param_1[0x10] = lVar13;
    *(int *)(param_1 + 0x11) = iVar5;
    lVar11 = *(long *)(lVar13 + 0x10);
    uVar23 = *(undefined8 *)(lVar11 + 0x40);
    uVar24 = *(undefined8 *)(lVar11 + 0x50);
    uVar26 = *(undefined8 *)(lVar11 + 0x60);
    uVar27 = *(undefined8 *)(lVar11 + 0x70);
    puVar12 = (undefined8 *)
              (*(long *)(*(long *)(lVar11 + 0x20) + 0x38) + (param_5 & 0x3fffff) * 0x10);
    uVar19 = *puVar12;
    fVar22 = (float)uVar19;
    fVar18 = (float)((ulong)uVar19 >> 0x20);
    fVar25 = (float)puVar12[1];
    param_1[0x13] =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 0x78) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(lVar11 + 0x68) >> 0x20) * fVar25 +
                  (float)((ulong)*(undefined8 *)(lVar11 + 0x48) >> 0x20) * fVar22 +
                  (float)((ulong)*(undefined8 *)(lVar11 + 0x58) >> 0x20) * fVar18,
                  (float)*(undefined8 *)(lVar11 + 0x78) +
                  (float)*(undefined8 *)(lVar11 + 0x68) * fVar25 +
                  (float)*(undefined8 *)(lVar11 + 0x48) * fVar22 +
                  (float)*(undefined8 *)(lVar11 + 0x58) * fVar18);
    param_1[0x12] =
         CONCAT44((float)((ulong)uVar27 >> 0x20) +
                  (float)((ulong)uVar26 >> 0x20) * fVar25 +
                  (float)((ulong)uVar23 >> 0x20) * fVar22 + (float)((ulong)uVar24 >> 0x20) * fVar18,
                  (float)uVar27 +
                  (float)uVar26 * fVar25 + (float)uVar23 * fVar22 + (float)uVar24 * fVar18);
    *(long **)(lVar13 + 0x60) = param_1 + 2;
    uVar10 = (ulong)((uint)(iVar5 * -0x61c8864f) >> 0x18);
    lVar11 = param_1[2];
    for (uVar7 = *(ushort *)(param_1[4] + uVar10 * 2); -1 < (short)uVar7;
        uVar7 = *(ushort *)(param_1[3] + (ulong)uVar7 * 2)) {
      if (*(int *)(lVar11 + (ulong)uVar7 * 0x10 + 8) == iVar5) {
        puVar12 = (undefined8 *)(lVar11 + (ulong)uVar7 * 0x10);
        goto LAB_030bf8d4;
      }
    }
    iVar9 = *(int *)((long)param_1 + 0x2c);
    *(int *)((long)param_1 + 0x2c) = iVar9 + 1;
    puVar12 = (undefined8 *)(lVar11 + (long)iVar9 * 0x10);
    *puVar12 = 0x7f7fffee7f7fffee;
    *(int *)(puVar12 + 1) = iVar5;
    *(undefined4 *)((long)puVar12 + 0xc) = 0xffff;
    *(undefined2 *)(param_1[3] + (long)(short)iVar9 * 2) = *(undefined2 *)(param_1[4] + uVar10 * 2);
    *(short *)(param_1[4] + uVar10 * 2) = (short)iVar9;
LAB_030bf8d4:
    *(undefined4 *)((long)puVar12 + 4) = 0;
    *(ushort *)((long)puVar12 + 0xe) = *(ushort *)((long)puVar12 + 0xe) | 8;
    *(int *)(param_1 + 0x11) = iVar5;
    lVar11 = *(long *)(param_1[0x10] + 0x10);
    uVar23 = *(undefined8 *)(lVar11 + 0x40);
    uVar24 = *(undefined8 *)(lVar11 + 0x50);
    uVar26 = *(undefined8 *)(lVar11 + 0x60);
    uVar27 = *(undefined8 *)(lVar11 + 0x70);
    puVar12 = (undefined8 *)
              (*(long *)(*(long *)(lVar11 + 0x20) + 0x38) + (param_5 & 0x3fffff) * 0x10);
    uVar19 = *puVar12;
    fVar22 = (float)uVar19;
    fVar18 = (float)((ulong)uVar19 >> 0x20);
    fVar25 = (float)puVar12[1];
    param_1[0x13] =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 0x78) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(lVar11 + 0x68) >> 0x20) * fVar25 +
                  (float)((ulong)*(undefined8 *)(lVar11 + 0x48) >> 0x20) * fVar22 +
                  (float)((ulong)*(undefined8 *)(lVar11 + 0x58) >> 0x20) * fVar18,
                  (float)*(undefined8 *)(lVar11 + 0x78) +
                  (float)*(undefined8 *)(lVar11 + 0x68) * fVar25 +
                  (float)*(undefined8 *)(lVar11 + 0x48) * fVar22 +
                  (float)*(undefined8 *)(lVar11 + 0x58) * fVar18);
    param_1[0x12] =
         CONCAT44((float)((ulong)uVar27 >> 0x20) +
                  (float)((ulong)uVar26 >> 0x20) * fVar25 +
                  (float)((ulong)uVar23 >> 0x20) * fVar22 + (float)((ulong)uVar24 >> 0x20) * fVar18,
                  (float)uVar27 +
                  (float)uVar26 * fVar25 + (float)uVar23 * fVar22 + (float)uVar24 * fVar18);
    if (0 < (int)param_4) {
      uVar10 = 0;
      do {
        uVar6 = *(uint *)(param_3 + uVar10 * 4);
        if (uVar6 != 0xffffffff) {
          plVar14 = (long *)*param_1;
          uVar6 = uVar6 >> 0x16;
          if (*plVar14 == 0) {
            plVar14[2] = plVar14[1];
          }
          else if (*(uint *)((long)plVar14 + 0x74) != uVar6) {
            plVar14[2] = *(long *)(*(long *)(*plVar14 + 0x38) + (ulong)uVar6 * 0x100 + 0x10);
            *(uint *)((long)plVar14 + 0x74) = uVar6;
          }
          *(uint *)((long)plVar14 + 0x74) = uVar6;
          iVar5 = *(int *)((long)param_1 + 0x2c);
          if ((iVar5 < (int)param_1[5]) && ((int)param_1[0xf] < *(int *)((long)param_1 + 0x7c))) {
            uVar6 = *(uint *)(param_3 + uVar10 * 4);
            uVar15 = (ulong)(uVar6 * -0x61c8864f >> 0x18);
            lVar11 = param_1[2];
            for (uVar7 = *(ushort *)(param_1[4] + uVar15 * 2); -1 < (short)uVar7;
                uVar7 = *(ushort *)(param_1[3] + (ulong)uVar7 * 2)) {
              if (*(uint *)(lVar11 + (ulong)uVar7 * 0x10 + 8) == uVar6) {
                puVar12 = (undefined8 *)(lVar11 + (ulong)uVar7 * 0x10);
                goto LAB_030bfa20;
              }
            }
            puVar12 = (undefined8 *)(lVar11 + (long)iVar5 * 0x10);
            *(int *)((long)param_1 + 0x2c) = iVar5 + 1;
            *puVar12 = 0x7f7fffee7f7fffee;
            *(uint *)(puVar12 + 1) = uVar6;
            *(undefined4 *)((long)puVar12 + 0xc) = 0xffff;
            *(undefined2 *)(param_1[3] + (long)(short)iVar5 * 2) =
                 *(undefined2 *)(param_1[4] + uVar15 * 2);
            *(short *)(param_1[4] + uVar15 * 2) = (short)iVar5;
LAB_030bfa20:
            *(undefined4 *)puVar12 = 0;
            lVar11 = *(long *)(param_1[0x10] + 0x10);
            uVar24 = *(undefined8 *)(lVar11 + 0x48);
            uVar23 = *(undefined8 *)(lVar11 + 0x40);
            uVar27 = *(undefined8 *)(lVar11 + 0x58);
            uVar26 = *(undefined8 *)(lVar11 + 0x50);
            uVar29 = *(undefined8 *)(lVar11 + 0x68);
            uVar28 = *(undefined8 *)(lVar11 + 0x60);
            uVar31 = *(undefined8 *)(lVar11 + 0x78);
            uVar30 = *(undefined8 *)(lVar11 + 0x70);
            puVar8 = (undefined8 *)
                     (*(long *)(*(long *)(lVar11 + 0x20) + 0x38) + ((ulong)uVar6 & 0x3fffff) * 0x10)
            ;
            uVar19 = *puVar8;
            fVar22 = (float)uVar19;
            fVar25 = (float)((ulong)uVar19 >> 0x20);
            fVar21 = (float)puVar8[1];
            lVar13 = param_1[0x13];
            lVar11 = param_1[0x12];
            *(ushort *)((long)puVar12 + 0xe) = *(ushort *)((long)puVar12 + 0xe) | 5;
            fVar18 = ((float)uVar30 +
                     (float)uVar28 * fVar21 + (float)uVar23 * fVar22 + (float)uVar26 * fVar25) -
                     (float)lVar11;
            fVar20 = ((float)((ulong)uVar30 >> 0x20) +
                     (float)((ulong)uVar28 >> 0x20) * fVar21 +
                     (float)((ulong)uVar23 >> 0x20) * fVar22 +
                     (float)((ulong)uVar26 >> 0x20) * fVar25) - (float)((ulong)lVar11 >> 0x20);
            fVar22 = ((float)uVar31 +
                     (float)uVar29 * fVar21 + (float)uVar24 * fVar22 + (float)uVar27 * fVar25) -
                     (float)lVar13;
            fVar22 = SQRT(fVar18 * fVar18 + fVar20 * fVar20 + fVar22 * fVar22);
            *(float *)((long)puVar12 + 4) = fVar22;
            if (fVar22 < *(float *)((long)param_1 + 0x44)) {
              *(float *)((long)param_1 + 0x44) = fVar22;
              *(uint *)(param_1 + 8) = uVar6;
            }
            uVar7 = *(ushort *)(param_1[4] + uVar15 * 2);
            pfVar16 = (float *)(param_1 + 6);
            if (-1 < (short)uVar7) {
              do {
                if (*(uint *)(param_1[2] + (ulong)uVar7 * 0x10 + 8) == uVar6) {
                  pfVar16 = (float *)(param_1[2] + (ulong)uVar7 * 0x10);
                  break;
                }
                uVar7 = *(ushort *)(param_1[3] + (ulong)uVar7 * 2);
              } while (-1 < (short)uVar7);
            }
            fVar22 = *(float *)((long)param_1 + 0x4c);
            fVar18 = *pfVar16;
            fVar25 = pfVar16[1];
            uVar17 = *(uint *)(param_1 + 0xf);
            puVar2 = (uint *)(param_1[0xe] + (long)(int)uVar17 * 8);
            *(uint *)(param_1 + 0xf) = uVar17 + 1;
            *puVar2 = uVar6;
            puVar2[1] = (uint)(fVar18 + fVar22 * fVar25);
            lVar11 = param_1[0xe];
            puVar3 = (undefined4 *)(lVar11 + (long)(int)uVar17 * 8);
            uVar4 = *puVar3;
            iVar5 = puVar3[1];
            if ((int)uVar17 < 1) {
LAB_030bfb54:
              uVar15 = (ulong)(int)uVar17;
            }
            else {
              do {
                uVar6 = uVar17;
                if (-1 < (int)(uVar17 - 1)) {
                  uVar6 = uVar17 - 1;
                }
                uVar15 = (ulong)(uint)((int)uVar6 >> 1);
                if (*(int *)(lVar11 + uVar15 * 8 + 4) <= iVar5) goto LAB_030bfb54;
                *(undefined8 *)(lVar11 + (ulong)uVar17 * 8) = *(undefined8 *)(lVar11 + uVar15 * 8);
                lVar11 = param_1[0xe];
                bVar1 = 2 < (int)uVar17;
                uVar17 = (int)uVar6 >> 1;
              } while (bVar1);
            }
            *(undefined4 *)(lVar11 + uVar15 * 8) = uVar4;
            *(int *)(param_1[0xe] + uVar15 * 8 + 4) = iVar5;
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != param_4);
    }
  }
  return;
}


