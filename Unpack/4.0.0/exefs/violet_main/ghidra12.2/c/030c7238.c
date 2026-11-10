/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030c7238; name: FUN_030c7238
 */


void FUN_030c7238(long *param_1,long param_2,long param_3,long *param_4)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  float *pfVar10;
  long *plVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  undefined4 *puVar23;
  long lVar24;
  float fVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 0x76) = 0xffffffff;
  plVar11 = (long *)0x0;
  if (param_3 != 0) {
    plVar11 = param_1 + 0x78;
    param_1[0x78] = param_3;
  }
  uVar3 = *(uint *)(param_4 + 5);
  lVar2 = param_4[3];
  lVar24 = param_4[4];
  *(long *)(param_2 + 0x80) = lVar2;
  *(long *)(param_2 + 0x88) = lVar24;
  *(uint *)(param_2 + 0x90) = uVar3;
  plVar8 = (long *)*param_1;
  uVar4 = *(uint *)*param_4 >> 0x16;
  if (*plVar8 == 0) {
    plVar8[2] = plVar8[1];
  }
  else if (*(uint *)((long)plVar8 + 0x74) != uVar4) {
    plVar8[2] = *(long *)(*(long *)(*plVar8 + 0x38) + (ulong)uVar4 * 0x100 + 0x10);
    *(uint *)((long)plVar8 + 0x74) = uVar4;
  }
  *(uint *)((long)plVar8 + 0x74) = uVar4;
  plVar8 = param_1 + 0x10;
  FUN_030c86e4(plVar8,*param_1,plVar11,*(undefined4 *)*param_4,param_4[3],uVar3);
  if (0 < (int)param_4[2]) {
    lVar24 = 0;
    do {
      plVar11 = (long *)*param_1;
      uVar4 = *(uint *)(*param_4 + lVar24 * 4);
      uVar22 = (ulong)uVar4;
      uVar19 = uVar4 >> 0x16;
      if (*plVar11 == 0) {
        plVar11[2] = plVar11[1];
      }
      else if (*(uint *)((long)plVar11 + 0x74) != uVar19) {
        plVar11[2] = *(long *)(*(long *)(*plVar11 + 0x38) + (ulong)uVar19 * 0x100 + 0x10);
        *(uint *)((long)plVar11 + 0x74) = uVar19;
      }
      *(uint *)((long)plVar11 + 0x74) = uVar19;
      plVar11 = (long *)*param_1;
      *(uint *)((long)plVar11 + 0x7c) = uVar4;
      if ((*plVar11 != 0) && (*(uint *)(plVar11 + 0xe) != uVar19)) {
        plVar11[1] = *(long *)(*(long *)(*plVar11 + 0x38) + (ulong)uVar19 * 0x100 + 0x10);
        *(uint *)(plVar11 + 0xe) = uVar19;
      }
      *(uint *)(plVar11 + 0xe) = uVar19;
      lVar9 = plVar11[1];
      uVar14 = uVar22 & 0x3fffff;
      lVar12 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0x18) + uVar14 * 8);
      plVar11[6] = lVar12;
      lVar20 = *(long *)(lVar9 + 0x20);
      if ((*(int *)(lVar20 + 0x78) == 0) ||
         (iVar18 = *(int *)(*(long *)(lVar20 + 0x70) + uVar14 * 4), iVar18 == -1)) {
        iVar18 = 0;
        plVar11[7] = 0xffffffff;
      }
      else {
        lVar20 = *(long *)(*(long *)(lVar20 + 0x80) + (long)iVar18 * 8);
        plVar11[7] = lVar20;
        iVar18 = (int)((ulong)lVar20 >> 0x20);
      }
      iVar18 = iVar18 + (int)((ulong)lVar12 >> 0x20);
      uVar29 = *(undefined8 *)(lVar9 + 0x40);
      uVar31 = *(undefined8 *)(lVar9 + 0x50);
      puVar17 = (undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0x38) + uVar14 * 0x10);
      uVar27 = *puVar17;
      uVar32 = *(undefined8 *)(lVar9 + 0x60);
      uVar33 = *(undefined8 *)(lVar9 + 0x70);
      fVar25 = (float)uVar27;
      fVar28 = (float)((ulong)uVar27 >> 0x20);
      fVar30 = (float)puVar17[1];
      plVar11[9] = CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x78) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar9 + 0x68) >> 0x20) * fVar30 +
                            (float)((ulong)*(undefined8 *)(lVar9 + 0x48) >> 0x20) * fVar25 +
                            (float)((ulong)*(undefined8 *)(lVar9 + 0x58) >> 0x20) * fVar28,
                            (float)*(undefined8 *)(lVar9 + 0x78) +
                            (float)*(undefined8 *)(lVar9 + 0x68) * fVar30 +
                            (float)*(undefined8 *)(lVar9 + 0x48) * fVar25 +
                            (float)*(undefined8 *)(lVar9 + 0x58) * fVar28);
      plVar11[8] = CONCAT44((float)((ulong)uVar33 >> 0x20) +
                            (float)((ulong)uVar32 >> 0x20) * fVar30 +
                            (float)((ulong)uVar29 >> 0x20) * fVar25 +
                            (float)((ulong)uVar31 >> 0x20) * fVar28,
                            (float)uVar33 +
                            (float)uVar32 * fVar30 + (float)uVar29 * fVar25 + (float)uVar31 * fVar28
                           );
      if ((int)(*(uint *)((long)plVar11 + 0xa4) & 0x7fffffff) < iVar18) {
        FUN_03060c58(plVar11 + 0x13,PTR_PTR_047d1a50,(long)iVar18);
      }
      if ((int)plVar11[0x14] != iVar18) {
        *(int *)(plVar11 + 0x14) = iVar18;
      }
      lVar9 = *(long *)(plVar11[1] + 0x20);
      lVar12 = *(long *)(lVar9 + 0x90);
      iVar18 = *(int *)(lVar9 + 0x60);
      if (*(long *)(lVar9 + 0x28) != 0) {
        uVar19 = *(uint *)((long)plVar11 + 0x34);
        uVar6 = uVar19 * 2;
        if (0 < (int)uVar6) {
          puVar23 = (undefined4 *)(*(long *)(lVar9 + 0x28) + (long)(int)plVar11[6] * 8);
          puVar15 = (undefined4 *)plVar11[0x13];
          if (6 < uVar6 - 1) {
            iVar21 = -(uVar6 & 0xfffffff8);
            puVar13 = puVar15;
            puVar16 = puVar23;
            do {
              *puVar13 = *puVar16;
              puVar13[1] = puVar16[1];
              puVar13[2] = puVar16[2];
              puVar13[3] = puVar16[3];
              puVar13[4] = puVar16[4];
              puVar13[5] = puVar16[5];
              puVar13[6] = puVar16[6];
              puVar23 = puVar16 + 8;
              puVar15 = puVar13 + 8;
              iVar21 = iVar21 + 8;
              puVar13[7] = puVar16[7];
              puVar13 = puVar15;
              puVar16 = puVar23;
            } while (iVar21 != 0);
          }
          if ((uVar6 & 6) != 0) {
            iVar21 = (uVar19 & 3) * -2;
            do {
              bVar7 = iVar21 != -1;
              iVar21 = iVar21 + 1;
              *puVar15 = *puVar23;
              puVar15 = puVar15 + 1;
              puVar23 = puVar23 + 1;
            } while (bVar7);
          }
        }
      }
      if ((lVar12 != 0) && (uVar19 = *(uint *)((long)plVar11 + 0x3c), 0 < (int)uVar19)) {
        uVar6 = uVar19 * 2;
        if (0 < (int)uVar6) {
          puVar15 = (undefined4 *)(plVar11[0x13] + (long)*(int *)((long)plVar11 + 0x34) * 8);
          puVar23 = (undefined4 *)
                    (lVar12 + (long)((int)plVar11[7] - *(int *)(*(long *)(plVar11[1] + 0x20) + 0x30)
                                    ) * 8);
          if (6 < uVar6 - 1) {
            iVar21 = -(uVar6 & 0xfffffff8);
            puVar13 = puVar23;
            puVar16 = puVar15;
            do {
              *puVar16 = *puVar13;
              puVar16[1] = puVar13[1];
              puVar16[2] = puVar13[2];
              puVar16[3] = puVar13[3];
              puVar16[4] = puVar13[4];
              puVar16[5] = puVar13[5];
              puVar16[6] = puVar13[6];
              puVar23 = puVar13 + 8;
              puVar15 = puVar16 + 8;
              iVar21 = iVar21 + 8;
              puVar16[7] = puVar13[7];
              puVar13 = puVar23;
              puVar16 = puVar15;
            } while (iVar21 != 0);
          }
          if ((uVar6 & 6) != 0) {
            iVar21 = (uVar19 & 3) * -2;
            do {
              bVar7 = iVar21 != -1;
              iVar21 = iVar21 + 1;
              *puVar15 = *puVar23;
              puVar23 = puVar23 + 1;
              puVar15 = puVar15 + 1;
            } while (bVar7);
          }
        }
      }
      lVar9 = plVar11[0x13];
      plVar11[0xd] = lVar9 + -8;
      uVar19 = *(int *)((long)plVar11 + 0x3c) + *(int *)((long)plVar11 + 0x34);
      if (0 < (int)uVar19) {
        lVar12 = 0;
        while( true ) {
          lVar9 = lVar9 + lVar12;
          if ((*(byte *)(lVar9 + 2) >> 6 & 1) == 0) {
            *(uint *)(lVar9 + 4) = *(uint *)(lVar9 + 4) & 0x3fffff | iVar18 << 0x16;
          }
          if ((ulong)uVar19 * 8 + -8 == lVar12) break;
          lVar9 = plVar11[0x13];
          lVar12 = lVar12 + 8;
        }
      }
      plVar11 = (long *)plVar11[0xc];
      uVar14 = (ulong)(uVar4 * -0x61c8864f >> 0x18);
      lVar9 = *plVar11;
      for (uVar5 = *(ushort *)(plVar11[2] + uVar14 * 2); -1 < (short)uVar5;
          uVar5 = *(ushort *)(plVar11[1] + (ulong)uVar5 * 2)) {
        if (*(uint *)(lVar9 + (ulong)uVar5 * 0x10 + 8) == uVar4) {
          puVar17 = (undefined8 *)(lVar9 + (ulong)uVar5 * 0x10);
          goto LAB_030c76c4;
        }
      }
      iVar18 = *(int *)((long)plVar11 + 0x1c);
      puVar17 = (undefined8 *)(lVar9 + (long)iVar18 * 0x10);
      *(int *)((long)plVar11 + 0x1c) = iVar18 + 1;
      *puVar17 = 0x7f7fffee7f7fffee;
      *(uint *)(puVar17 + 1) = uVar4;
      *(undefined4 *)((long)puVar17 + 0xc) = 0xffff;
      *(undefined2 *)(plVar11[1] + (long)(short)iVar18 * 2) =
           *(undefined2 *)(plVar11[2] + uVar14 * 2);
      *(short *)(plVar11[2] + uVar14 * 2) = (short)iVar18;
      lVar9 = *plVar11;
LAB_030c76c4:
      *(int *)(plVar11 + 8) = ((int)puVar17 - (int)lVar9) * 0x1000 >> 0x10;
      plVar11[9] = (long)puVar17;
      plVar11[10] = (long)puVar17;
      lVar9 = param_1[2];
      for (uVar5 = *(ushort *)(param_1[4] + uVar14 * 2); -1 < (short)uVar5;
          uVar5 = *(ushort *)(param_1[3] + (ulong)uVar5 * 2)) {
        if (*(uint *)(lVar9 + (ulong)uVar5 * 0x10 + 8) == uVar4) {
          puVar17 = (undefined8 *)(lVar9 + (ulong)uVar5 * 0x10);
          goto LAB_030c774c;
        }
      }
      iVar18 = *(int *)((long)param_1 + 0x2c);
      puVar17 = (undefined8 *)(lVar9 + (long)iVar18 * 0x10);
      *(int *)((long)param_1 + 0x2c) = iVar18 + 1;
      *puVar17 = 0x7f7fffee7f7fffee;
      *(uint *)(puVar17 + 1) = uVar4;
      *(undefined4 *)((long)puVar17 + 0xc) = 0xffff;
      *(undefined2 *)(param_1[3] + (long)(short)iVar18 * 2) =
           *(undefined2 *)(param_1[4] + uVar14 * 2);
      *(short *)(param_1[4] + uVar14 * 2) = (short)iVar18;
LAB_030c774c:
      *(undefined4 *)puVar17 = 0;
      fVar25 = (float)FUN_030c8978(plVar8,uVar22);
      *(float *)((long)puVar17 + 4) = fVar25;
      *(ushort *)((long)puVar17 + 0xe) = *(ushort *)((long)puVar17 + 0xe) | 5;
      if (fVar25 < *(float *)((long)param_1 + 0x44)) {
        *(float *)((long)param_1 + 0x44) = fVar25;
        *(uint *)(param_1 + 8) = uVar4;
        fVar25 = *(float *)((long)puVar17 + 4);
      }
      if (fVar25 < 3.40282e+38) {
        uVar26 = 0;
        if (param_4[1] != 0) {
          uVar26 = *(undefined4 *)(param_4[1] + lVar24 * 4);
        }
        puVar23 = (undefined4 *)param_1[0xb];
        *puVar23 = uVar26;
        if ((*(byte *)((long)puVar23 + 0xe) & 3) == 0) {
          fVar25 = (float)FUN_030c8978(plVar8,uVar22);
          puVar23[1] = fVar25;
          if (fVar25 < *(float *)((long)param_1 + 0x44)) {
            *(float *)((long)param_1 + 0x44) = fVar25;
            *(uint *)(param_1 + 8) = uVar4;
          }
        }
        uVar5 = *(ushort *)(param_1[4] + uVar14 * 2);
        pfVar10 = (float *)(param_1 + 6);
        if (-1 < (short)uVar5) {
          do {
            if (*(uint *)(param_1[2] + (ulong)uVar5 * 0x10 + 8) == uVar4) {
              pfVar10 = (float *)(param_1[2] + (ulong)uVar5 * 0x10);
              break;
            }
            uVar5 = *(ushort *)(param_1[3] + (ulong)uVar5 * 2);
          } while (-1 < (short)uVar5);
        }
        fVar25 = *(float *)((long)param_1 + 0x4c);
        fVar28 = *pfVar10;
        fVar30 = pfVar10[1];
        uVar19 = *(uint *)(param_1 + 0xf);
        puVar1 = (uint *)(param_1[0xe] + (long)(int)uVar19 * 8);
        *(uint *)(param_1 + 0xf) = uVar19 + 1;
        *puVar1 = uVar4;
        puVar1[1] = (uint)(fVar28 + fVar25 * fVar30);
        lVar9 = param_1[0xe];
        puVar23 = (undefined4 *)(lVar9 + (long)(int)uVar19 * 8);
        uVar26 = *puVar23;
        iVar18 = puVar23[1];
        if ((int)uVar19 < 1) {
LAB_030c789c:
          uVar22 = (ulong)(int)uVar19;
        }
        else {
          do {
            uVar4 = uVar19;
            if (-1 < (int)(uVar19 - 1)) {
              uVar4 = uVar19 - 1;
            }
            uVar22 = (ulong)(uint)((int)uVar4 >> 1);
            if (*(int *)(lVar9 + uVar22 * 8 + 4) <= iVar18) goto LAB_030c789c;
            *(undefined8 *)(lVar9 + (ulong)uVar19 * 8) = *(undefined8 *)(lVar9 + uVar22 * 8);
            lVar9 = param_1[0xe];
            bVar7 = 2 < (int)uVar19;
            uVar19 = (int)uVar4 >> 1;
          } while (bVar7);
        }
        *(undefined4 *)(lVar9 + uVar22 * 8) = uVar26;
        *(int *)(param_1[0xe] + uVar22 * 8 + 4) = iVar18;
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)param_4[2]);
  }
  if (0 < (int)uVar3) {
    uVar22 = 0;
    do {
      iVar18 = *(int *)(lVar2 + uVar22 * 4);
      if (iVar18 != -1) {
        uVar14 = (ulong)((uint)(iVar18 * -0x61c8864f) >> 0x18);
        lVar24 = param_1[2];
        for (uVar5 = *(ushort *)(param_1[4] + uVar14 * 2); -1 < (short)uVar5;
            uVar5 = *(ushort *)(param_1[3] + (ulong)uVar5 * 2)) {
          if (*(int *)(lVar24 + (ulong)uVar5 * 0x10 + 8) == iVar18) {
            puVar17 = (undefined8 *)(lVar24 + (ulong)uVar5 * 0x10);
            goto LAB_030c7980;
          }
        }
        iVar21 = *(int *)((long)param_1 + 0x2c);
        puVar17 = (undefined8 *)(lVar24 + (long)iVar21 * 0x10);
        *(int *)((long)param_1 + 0x2c) = iVar21 + 1;
        *puVar17 = 0x7f7fffee7f7fffee;
        *(int *)(puVar17 + 1) = iVar18;
        *(undefined4 *)((long)puVar17 + 0xc) = 0xffff;
        *(undefined2 *)(param_1[3] + (long)(short)iVar21 * 2) =
             *(undefined2 *)(param_1[4] + uVar14 * 2);
        *(short *)(param_1[4] + uVar14 * 2) = (short)iVar21;
LAB_030c7980:
        *(undefined4 *)((long)puVar17 + 4) = 0;
        *(ushort *)((long)puVar17 + 0xe) = *(ushort *)((long)puVar17 + 0xe) | 8;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar3);
  }
  return;
}


