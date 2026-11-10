/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03083444; name: FUN_03083444
 */


void FUN_03083444(long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  undefined8 uVar21;
  float fVar22;
  int iVar23;
  int iVar24;
  undefined8 uVar25;
  float fVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  int iVar30;
  int iVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  float fVar45;
  int iVar46;
  int iVar47;
  float fVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  float fVar53;
  int iVar54;
  int iVar55;
  float fVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  float fVar64;
  
  uVar15 = (ulong)*(uint *)((long)param_1 + 0x1c);
  uVar14 = (ulong)*(uint *)((long)param_2 + 0x1c);
  if (*(uint *)((long)param_1 + 0x1c) != 0 && *(uint *)((long)param_2 + 0x1c) != 0) {
    lVar12 = *param_1;
    lVar10 = *param_2;
    lVar7 = 0;
    if (lVar12 != 0) {
      lVar7 = lVar12 + (long)param_1;
    }
    puVar11 = (undefined8 *)(lVar7 + uVar15 * 0x30);
    lVar7 = 0;
    if (lVar10 != 0) {
      lVar7 = lVar10 + (long)param_2;
    }
    puVar9 = (undefined8 *)(lVar7 + uVar14 * 0x30);
    uVar35 = puVar11[1];
    uVar33 = *puVar11;
    uVar41 = puVar11[3];
    uVar37 = puVar11[2];
    uVar21 = puVar9[1];
    uVar17 = *puVar9;
    uVar32 = puVar9[3];
    uVar25 = puVar9[2];
    iVar42 = -(uint)((float)uVar33 <= (float)uVar25);
    iVar44 = -(uint)((float)((ulong)uVar33 >> 0x20) <= (float)((ulong)uVar25 >> 0x20));
    iVar47 = -(uint)((float)uVar35 <= (float)uVar32);
    iVar50 = -(uint)((float)uVar17 <= (float)uVar37);
    iVar52 = -(uint)((float)((ulong)uVar17 >> 0x20) <= (float)((ulong)uVar37 >> 0x20));
    iVar55 = -(uint)((float)uVar21 <= (float)uVar41);
    if (CONCAT13((byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar52 >> 0x18) &
                 (byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar50 >> 0x18) &
                 (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar55 >> 0x18),
                 CONCAT12((byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar52 >> 0x10) &
                          (byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar50 >> 0x10) &
                          (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar55 >> 0x10),
                          CONCAT11((byte)((uint)iVar44 >> 8) & (byte)((uint)iVar52 >> 8) &
                                   (byte)((uint)iVar42 >> 8) & (byte)((uint)iVar50 >> 8) &
                                   (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar55 >> 8),
                                   (byte)iVar44 & (byte)iVar52 & (byte)iVar42 & (byte)iVar50 &
                                   (byte)iVar47 & (byte)iVar55))) != 0) {
      lVar7 = param_3[1];
      iVar42 = (int)lVar7;
      do {
        uVar3 = *(uint *)((long)puVar11 + 0x24);
        if (uVar3 == 0) {
          uVar3 = *(uint *)((long)puVar9 + 0x24);
          if (uVar3 == 0) {
            lVar10 = *param_4;
            lVar12 = *(long *)(*(long *)(*(long *)(lVar10 + 0x50) + 0x38) +
                              (long)*(int *)(puVar11 + 5) * 0x100);
            if (lVar12 != 0) {
              plVar8 = *(long **)(lVar12 + 0xc0);
              *(undefined8 *)(lVar10 + 0x38) = uVar21;
              *(undefined8 *)(lVar10 + 0x30) = uVar17;
              *(undefined8 *)(lVar10 + 0x48) = uVar32;
              *(undefined8 *)(lVar10 + 0x40) = uVar25;
              (**(code **)(*plVar8 + 0x48))(plVar8,lVar10,*(undefined8 *)(lVar10 + 0x58));
            }
          }
          else {
            uVar4 = *(uint *)(puVar9 + 5);
            lVar12 = 0;
            if (lVar10 != 0) {
              lVar12 = lVar10 + (long)param_2;
            }
            puVar9 = (undefined8 *)(lVar12 + (ulong)uVar3 * 0x30);
            puVar11 = (undefined8 *)(lVar12 + (ulong)uVar4 * 0x30);
            iVar23 = -(uint)((float)uVar33 <= (float)puVar9[2]);
            fVar19 = (float)((ulong)uVar33 >> 0x20);
            iVar27 = -(uint)(fVar19 <= (float)((ulong)puVar9[2] >> 0x20));
            iVar30 = -(uint)((float)uVar35 <= (float)puVar9[3]);
            iVar44 = -(uint)((float)*puVar9 <= (float)uVar37);
            fVar39 = (float)((ulong)uVar37 >> 0x20);
            iVar50 = -(uint)((float)((ulong)*puVar9 >> 0x20) <= fVar39);
            iVar55 = -(uint)((float)puVar9[1] <= (float)uVar41);
            iVar24 = -(uint)((float)uVar33 <= (float)puVar11[2]);
            iVar28 = -(uint)(fVar19 <= (float)((ulong)puVar11[2] >> 0x20));
            iVar31 = -(uint)((float)uVar35 <= (float)puVar11[3]);
            iVar47 = -(uint)((float)*puVar11 <= (float)uVar37);
            iVar52 = -(uint)((float)((ulong)*puVar11 >> 0x20) <= fVar39);
            iVar20 = -(uint)((float)puVar11[1] <= (float)uVar41);
            if (CONCAT13((byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar52 >> 0x18) &
                         (byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar47 >> 0x18) &
                         (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar20 >> 0x18),
                         CONCAT12((byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar52 >> 0x10) &
                                  (byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar47 >> 0x10) &
                                  (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar20 >> 0x10),
                                  CONCAT11((byte)((uint)iVar28 >> 8) & (byte)((uint)iVar52 >> 8) &
                                           (byte)((uint)iVar24 >> 8) & (byte)((uint)iVar47 >> 8) &
                                           (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar20 >> 8),
                                           (byte)iVar28 & (byte)iVar52 & (byte)iVar24 & (byte)iVar47
                                           & (byte)iVar31 & (byte)iVar20))) != 0) {
              iVar47 = iVar42 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar42) {
                FUN_030832d0(param_3,PTR_PTR_047d1a50,(long)iVar47);
                iVar42 = (int)param_3[1];
              }
              *(int *)(param_3 + 1) = iVar47;
              *(ulong *)(*param_3 + (long)iVar42 * 8) = uVar15 | (ulong)uVar4 << 0x20;
            }
            if (CONCAT13((byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar50 >> 0x18) &
                         (byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar44 >> 0x18) &
                         (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar55 >> 0x18),
                         CONCAT12((byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar50 >> 0x10) &
                                  (byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar44 >> 0x10) &
                                  (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar55 >> 0x10),
                                  CONCAT11((byte)((uint)iVar27 >> 8) & (byte)((uint)iVar50 >> 8) &
                                           (byte)((uint)iVar23 >> 8) & (byte)((uint)iVar44 >> 8) &
                                           (byte)((uint)iVar30 >> 8) & (byte)((uint)iVar55 >> 8),
                                           (byte)iVar27 & (byte)iVar50 & (byte)iVar23 & (byte)iVar44
                                           & (byte)iVar30 & (byte)iVar55))) != 0) {
              iVar42 = (int)param_3[1];
              lVar10 = (long)iVar42;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar42) {
                FUN_030832d0(param_3,PTR_PTR_047d1a50,lVar10 + 1);
                iVar42 = (int)param_3[1];
              }
              *(int *)(param_3 + 1) = (int)(lVar10 + 1);
              *(ulong *)(*param_3 + (long)iVar42 * 8) = uVar15 | (ulong)uVar3 << 0x20;
            }
          }
        }
        else {
          uVar4 = *(uint *)(puVar11 + 5);
          lVar2 = 0;
          if (lVar12 != 0) {
            lVar2 = lVar12 + (long)param_1;
          }
          puVar13 = (undefined8 *)(lVar2 + (ulong)uVar3 * 0x30);
          puVar11 = (undefined8 *)(lVar2 + (ulong)uVar4 * 0x30);
          uVar5 = *(uint *)((long)puVar9 + 0x24);
          fVar29 = (float)*puVar13;
          fVar53 = (float)((ulong)*puVar13 >> 0x20);
          fVar56 = (float)puVar13[1];
          fVar64 = (float)puVar13[2];
          fVar45 = (float)((ulong)puVar13[2] >> 0x20);
          fVar48 = (float)puVar13[3];
          fVar36 = (float)*puVar11;
          fVar38 = (float)((ulong)*puVar11 >> 0x20);
          fVar40 = (float)puVar11[1];
          fVar19 = (float)puVar11[2];
          fVar39 = (float)((ulong)puVar11[2] >> 0x20);
          fVar34 = (float)puVar11[3];
          if (uVar5 == 0) {
            iVar28 = -(uint)(fVar29 <= (float)uVar25);
            fVar29 = (float)((ulong)uVar25 >> 0x20);
            iVar30 = -(uint)(fVar53 <= fVar29);
            iVar31 = -(uint)(fVar56 <= (float)uVar32);
            iVar23 = -(uint)((float)uVar17 <= fVar19);
            fVar19 = (float)((ulong)uVar17 >> 0x20);
            iVar24 = -(uint)(fVar19 <= fVar39);
            iVar27 = -(uint)((float)uVar21 <= fVar34);
            iVar44 = -(uint)((float)uVar17 <= fVar64);
            iVar47 = -(uint)(fVar19 <= fVar45);
            iVar50 = -(uint)((float)uVar21 <= fVar48);
            iVar52 = -(uint)(fVar36 <= (float)uVar25);
            iVar55 = -(uint)(fVar38 <= fVar29);
            iVar20 = -(uint)(fVar40 <= (float)uVar32);
            if (CONCAT13((byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar55 >> 0x18) &
                         (byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar52 >> 0x18) &
                         (byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar20 >> 0x18),
                         CONCAT12((byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar55 >> 0x10) &
                                  (byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar52 >> 0x10) &
                                  (byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar20 >> 0x10),
                                  CONCAT11((byte)((uint)iVar24 >> 8) & (byte)((uint)iVar55 >> 8) &
                                           (byte)((uint)iVar23 >> 8) & (byte)((uint)iVar52 >> 8) &
                                           (byte)((uint)iVar27 >> 8) & (byte)((uint)iVar20 >> 8),
                                           (byte)iVar24 & (byte)iVar55 & (byte)iVar23 & (byte)iVar52
                                           & (byte)iVar27 & (byte)iVar20))) != 0) {
              iVar52 = iVar42 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar42) {
                FUN_030832d0(param_3,PTR_PTR_047d1a50,(long)iVar52);
                iVar42 = (int)param_3[1];
              }
              *(int *)(param_3 + 1) = iVar52;
              *(ulong *)(*param_3 + (long)iVar42 * 8) = (ulong)uVar4 | uVar14 << 0x20;
            }
            if (CONCAT13((byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
                         (byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                         (byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                         CONCAT12((byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                                  (byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                                  (byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                                  CONCAT11((byte)((uint)iVar47 >> 8) & (byte)((uint)iVar30 >> 8) &
                                           (byte)((uint)iVar44 >> 8) & (byte)((uint)iVar28 >> 8) &
                                           (byte)((uint)iVar50 >> 8) & (byte)((uint)iVar31 >> 8),
                                           (byte)iVar47 & (byte)iVar30 & (byte)iVar44 & (byte)iVar28
                                           & (byte)iVar50 & (byte)iVar31))) != 0) {
              iVar42 = (int)param_3[1];
              lVar10 = (long)iVar42 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar42) {
                FUN_030832d0(param_3,PTR_PTR_047d1a50,lVar10);
                iVar42 = (int)param_3[1];
              }
              lVar12 = *param_3;
              goto LAB_03083898;
            }
          }
          else {
            uVar6 = *(uint *)(puVar9 + 5);
            lVar12 = 0;
            if (lVar10 != 0) {
              lVar12 = lVar10 + (long)param_2;
            }
            puVar9 = (undefined8 *)(lVar12 + (ulong)uVar5 * 0x30);
            puVar11 = (undefined8 *)(lVar12 + (ulong)uVar6 * 0x30);
            fVar22 = (float)puVar9[2];
            iVar58 = -(uint)(fVar29 <= fVar22);
            fVar26 = (float)((ulong)puVar9[2] >> 0x20);
            iVar59 = -(uint)(fVar53 <= fVar26);
            iVar60 = -(uint)(fVar56 <= (float)puVar9[3]);
            fVar16 = (float)*puVar9;
            iVar61 = -(uint)(fVar16 <= fVar64);
            fVar18 = (float)((ulong)*puVar9 >> 0x20);
            iVar62 = -(uint)(fVar18 <= fVar45);
            iVar63 = -(uint)((float)puVar9[1] <= fVar48);
            iVar23 = -(uint)(fVar36 <= fVar22);
            iVar27 = -(uint)(fVar38 <= fVar26);
            iVar30 = -(uint)(fVar40 <= (float)puVar9[3]);
            iVar44 = -(uint)(fVar16 <= fVar19);
            iVar50 = -(uint)(fVar18 <= fVar39);
            iVar55 = -(uint)((float)puVar9[1] <= fVar34);
            fVar16 = (float)puVar11[2];
            iVar51 = -(uint)(fVar29 <= fVar16);
            fVar18 = (float)((ulong)puVar11[2] >> 0x20);
            iVar54 = -(uint)(fVar53 <= fVar18);
            iVar57 = -(uint)(fVar56 <= (float)puVar11[3]);
            fVar29 = (float)*puVar11;
            iVar43 = -(uint)(fVar29 <= fVar64);
            fVar64 = (float)((ulong)*puVar11 >> 0x20);
            iVar46 = -(uint)(fVar64 <= fVar45);
            iVar49 = -(uint)((float)puVar11[1] <= fVar48);
            iVar24 = -(uint)(fVar36 <= fVar16);
            iVar28 = -(uint)(fVar38 <= fVar18);
            iVar31 = -(uint)(fVar40 <= (float)puVar11[3]);
            iVar47 = -(uint)(fVar29 <= fVar19);
            iVar52 = -(uint)(fVar64 <= fVar39);
            iVar20 = -(uint)((float)puVar11[1] <= fVar34);
            if (CONCAT13((byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar52 >> 0x18) &
                         (byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar47 >> 0x18) &
                         (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar20 >> 0x18),
                         CONCAT12((byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar52 >> 0x10) &
                                  (byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar47 >> 0x10) &
                                  (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar20 >> 0x10),
                                  CONCAT11((byte)((uint)iVar28 >> 8) & (byte)((uint)iVar52 >> 8) &
                                           (byte)((uint)iVar24 >> 8) & (byte)((uint)iVar47 >> 8) &
                                           (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar20 >> 8),
                                           (byte)iVar28 & (byte)iVar52 & (byte)iVar24 & (byte)iVar47
                                           & (byte)iVar31 & (byte)iVar20))) != 0) {
              iVar47 = iVar42 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar42) {
                FUN_030832d0(param_3,PTR_PTR_047d1a50,(long)iVar47);
                iVar42 = (int)param_3[1];
              }
              *(int *)(param_3 + 1) = iVar47;
              *(ulong *)(*param_3 + (long)iVar42 * 8) = CONCAT44(uVar6,uVar4);
            }
            if (CONCAT13((byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar50 >> 0x18) &
                         (byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar44 >> 0x18) &
                         (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar55 >> 0x18),
                         CONCAT12((byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar50 >> 0x10) &
                                  (byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar44 >> 0x10) &
                                  (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar55 >> 0x10),
                                  CONCAT11((byte)((uint)iVar27 >> 8) & (byte)((uint)iVar50 >> 8) &
                                           (byte)((uint)iVar23 >> 8) & (byte)((uint)iVar44 >> 8) &
                                           (byte)((uint)iVar30 >> 8) & (byte)((uint)iVar55 >> 8),
                                           (byte)iVar27 & (byte)iVar50 & (byte)iVar23 & (byte)iVar44
                                           & (byte)iVar30 & (byte)iVar55))) != 0) {
              iVar42 = (int)param_3[1];
              lVar10 = (long)iVar42;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar42) {
                FUN_030832d0(param_3,PTR_PTR_047d1a50,lVar10 + 1);
                iVar42 = (int)param_3[1];
              }
              *(int *)(param_3 + 1) = (int)(lVar10 + 1);
              *(ulong *)(*param_3 + (long)iVar42 * 8) = CONCAT44(uVar5,uVar4);
            }
            if (CONCAT13((byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar46 >> 0x18) &
                         (byte)((uint)iVar51 >> 0x18) & (byte)((uint)iVar43 >> 0x18) &
                         (byte)((uint)iVar57 >> 0x18) & (byte)((uint)iVar49 >> 0x18),
                         CONCAT12((byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar46 >> 0x10) &
                                  (byte)((uint)iVar51 >> 0x10) & (byte)((uint)iVar43 >> 0x10) &
                                  (byte)((uint)iVar57 >> 0x10) & (byte)((uint)iVar49 >> 0x10),
                                  CONCAT11((byte)((uint)iVar54 >> 8) & (byte)((uint)iVar46 >> 8) &
                                           (byte)((uint)iVar51 >> 8) & (byte)((uint)iVar43 >> 8) &
                                           (byte)((uint)iVar57 >> 8) & (byte)((uint)iVar49 >> 8),
                                           (byte)iVar54 & (byte)iVar46 & (byte)iVar51 & (byte)iVar43
                                           & (byte)iVar57 & (byte)iVar49))) != 0) {
              iVar42 = (int)param_3[1];
              lVar10 = (long)iVar42;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar42) {
                FUN_030832d0(param_3,PTR_PTR_047d1a50,lVar10 + 1);
                iVar42 = (int)param_3[1];
              }
              *(int *)(param_3 + 1) = (int)(lVar10 + 1);
              *(ulong *)(*param_3 + (long)iVar42 * 8) = CONCAT44(uVar6,uVar3);
            }
            if (CONCAT13((byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar62 >> 0x18) &
                         (byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar61 >> 0x18) &
                         (byte)((uint)iVar60 >> 0x18) & (byte)((uint)iVar63 >> 0x18),
                         CONCAT12((byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar62 >> 0x10) &
                                  (byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar61 >> 0x10) &
                                  (byte)((uint)iVar60 >> 0x10) & (byte)((uint)iVar63 >> 0x10),
                                  CONCAT11((byte)((uint)iVar59 >> 8) & (byte)((uint)iVar62 >> 8) &
                                           (byte)((uint)iVar58 >> 8) & (byte)((uint)iVar61 >> 8) &
                                           (byte)((uint)iVar60 >> 8) & (byte)((uint)iVar63 >> 8),
                                           (byte)iVar59 & (byte)iVar62 & (byte)iVar58 & (byte)iVar61
                                           & (byte)iVar60 & (byte)iVar63))) != 0) {
              iVar42 = (int)param_3[1];
              lVar10 = (long)iVar42 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar42) {
                FUN_030832d0(param_3,PTR_PTR_047d1a50,lVar10);
                iVar42 = (int)param_3[1];
              }
              lVar12 = *param_3;
              uVar14 = (ulong)uVar5;
LAB_03083898:
              *(int *)(param_3 + 1) = (int)lVar10;
              *(ulong *)(lVar12 + (long)iVar42 * 8) = (ulong)uVar3 | uVar14 << 0x20;
            }
          }
        }
        if ((int)param_3[1] <= (int)lVar7) {
          return;
        }
        iVar42 = (int)param_3[1] + -1;
        *(int *)(param_3 + 1) = iVar42;
        lVar12 = *param_1;
        lVar10 = *param_2;
        puVar1 = (uint *)(*param_3 + (long)iVar42 * 8);
        uVar15 = (ulong)*puVar1;
        uVar14 = (ulong)puVar1[1];
        lVar2 = 0;
        if (lVar12 != 0) {
          lVar2 = lVar12 + (long)param_1;
        }
        puVar11 = (undefined8 *)(lVar2 + uVar15 * 0x30);
        lVar2 = 0;
        if (lVar10 != 0) {
          lVar2 = lVar10 + (long)param_2;
        }
        puVar9 = (undefined8 *)(lVar2 + uVar14 * 0x30);
        uVar35 = puVar11[1];
        uVar33 = *puVar11;
        uVar41 = puVar11[3];
        uVar37 = puVar11[2];
        uVar21 = puVar9[1];
        uVar17 = *puVar9;
        uVar32 = puVar9[3];
        uVar25 = puVar9[2];
      } while( true );
    }
  }
  return;
}


