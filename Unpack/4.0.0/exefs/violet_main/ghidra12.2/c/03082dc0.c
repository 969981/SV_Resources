/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03082dc0; name: FUN_03082dc0
 */


void FUN_03082dc0(long *param_1,long *param_2,long *param_3,long *param_4)

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
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  undefined8 uVar26;
  float fVar27;
  int iVar28;
  undefined8 uVar29;
  float fVar30;
  int iVar31;
  int iVar32;
  undefined8 uVar33;
  float fVar34;
  int iVar35;
  undefined8 uVar36;
  float fVar37;
  int iVar38;
  float fVar39;
  int iVar40;
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
    lVar11 = *param_1;
    lVar10 = *param_2;
    lVar7 = 0;
    if (lVar11 != 0) {
      lVar7 = lVar11 + (long)param_1;
    }
    puVar12 = (undefined8 *)(lVar7 + uVar15 * 0x30);
    lVar7 = 0;
    if (lVar10 != 0) {
      lVar7 = lVar10 + (long)param_2;
    }
    puVar9 = (undefined8 *)(lVar7 + uVar14 * 0x30);
    uVar19 = puVar12[1];
    uVar16 = *puVar12;
    uVar26 = puVar12[3];
    uVar21 = puVar12[2];
    uVar33 = puVar9[1];
    uVar29 = *puVar9;
    uVar41 = puVar9[3];
    uVar36 = puVar9[2];
    iVar42 = -(uint)((float)uVar16 <= (float)uVar36);
    iVar44 = -(uint)((float)((ulong)uVar16 >> 0x20) <= (float)((ulong)uVar36 >> 0x20));
    iVar47 = -(uint)((float)uVar19 <= (float)uVar41);
    iVar50 = -(uint)((float)uVar29 <= (float)uVar21);
    iVar52 = -(uint)((float)((ulong)uVar29 >> 0x20) <= (float)((ulong)uVar21 >> 0x20));
    iVar55 = -(uint)((float)uVar33 <= (float)uVar26);
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
        uVar3 = *(uint *)((long)puVar12 + 0x24);
        if (uVar3 == 0) {
          uVar3 = *(uint *)((long)puVar9 + 0x24);
          if (uVar3 == 0) {
            lVar10 = *param_4;
            lVar11 = *(long *)(*(long *)(*(long *)(lVar10 + 0x50) + 0x38) +
                              (long)*(int *)(puVar9 + 5) * 0x100);
            if (lVar11 != 0) {
              plVar8 = *(long **)(lVar11 + 0xc0);
              *(undefined8 *)(lVar10 + 0x38) = uVar19;
              *(undefined8 *)(lVar10 + 0x30) = uVar16;
              *(undefined8 *)(lVar10 + 0x48) = uVar26;
              *(undefined8 *)(lVar10 + 0x40) = uVar21;
              (**(code **)(*plVar8 + 0x48))(plVar8,lVar10,*(undefined8 *)(lVar10 + 0x58));
            }
          }
          else {
            uVar4 = *(uint *)(puVar9 + 5);
            lVar11 = 0;
            if (lVar10 != 0) {
              lVar11 = lVar10 + (long)param_2;
            }
            puVar9 = (undefined8 *)(lVar11 + (ulong)uVar3 * 0x30);
            puVar12 = (undefined8 *)(lVar11 + (ulong)uVar4 * 0x30);
            iVar35 = -(uint)((float)uVar16 <= (float)puVar9[2]);
            fVar17 = (float)((ulong)uVar16 >> 0x20);
            iVar38 = -(uint)(fVar17 <= (float)((ulong)puVar9[2] >> 0x20));
            iVar40 = -(uint)((float)uVar19 <= (float)puVar9[3]);
            iVar28 = -(uint)((float)*puVar9 <= (float)uVar21);
            fVar23 = (float)((ulong)uVar21 >> 0x20);
            iVar31 = -(uint)((float)((ulong)*puVar9 >> 0x20) <= fVar23);
            iVar32 = -(uint)((float)puVar9[1] <= (float)uVar26);
            iVar44 = -(uint)((float)uVar16 <= (float)puVar12[2]);
            iVar47 = -(uint)(fVar17 <= (float)((ulong)puVar12[2] >> 0x20));
            iVar50 = -(uint)((float)uVar19 <= (float)puVar12[3]);
            iVar52 = -(uint)((float)*puVar12 <= (float)uVar21);
            iVar55 = -(uint)((float)((ulong)*puVar12 >> 0x20) <= fVar23);
            iVar25 = -(uint)((float)puVar12[1] <= (float)uVar26);
            if (CONCAT13((byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar55 >> 0x18) &
                         (byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar52 >> 0x18) &
                         (byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                         CONCAT12((byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar55 >> 0x10) &
                                  (byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar52 >> 0x10) &
                                  (byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                                  CONCAT11((byte)((uint)iVar47 >> 8) & (byte)((uint)iVar55 >> 8) &
                                           (byte)((uint)iVar44 >> 8) & (byte)((uint)iVar52 >> 8) &
                                           (byte)((uint)iVar50 >> 8) & (byte)((uint)iVar25 >> 8),
                                           (byte)iVar47 & (byte)iVar55 & (byte)iVar44 & (byte)iVar52
                                           & (byte)iVar50 & (byte)iVar25))) != 0) {
              iVar44 = iVar42 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar42) {
                FUN_030832d0(param_3,PTR_PTR_047d1a50,(long)iVar44);
                iVar42 = (int)param_3[1];
              }
              *(int *)(param_3 + 1) = iVar44;
              *(ulong *)(*param_3 + (long)iVar42 * 8) = uVar15 | (ulong)uVar4 << 0x20;
            }
            if (CONCAT13((byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar31 >> 0x18) &
                         (byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                         (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar32 >> 0x18),
                         CONCAT12((byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar31 >> 0x10) &
                                  (byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                                  (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar32 >> 0x10),
                                  CONCAT11((byte)((uint)iVar38 >> 8) & (byte)((uint)iVar31 >> 8) &
                                           (byte)((uint)iVar35 >> 8) & (byte)((uint)iVar28 >> 8) &
                                           (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar32 >> 8),
                                           (byte)iVar38 & (byte)iVar31 & (byte)iVar35 & (byte)iVar28
                                           & (byte)iVar40 & (byte)iVar32))) != 0) {
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
          uVar4 = *(uint *)(puVar12 + 5);
          lVar2 = 0;
          if (lVar11 != 0) {
            lVar2 = lVar11 + (long)param_1;
          }
          puVar13 = (undefined8 *)(lVar2 + (ulong)uVar3 * 0x30);
          puVar12 = (undefined8 *)(lVar2 + (ulong)uVar4 * 0x30);
          uVar5 = *(uint *)((long)puVar9 + 0x24);
          fVar39 = (float)*puVar13;
          fVar53 = (float)((ulong)*puVar13 >> 0x20);
          fVar56 = (float)puVar13[1];
          fVar64 = (float)puVar13[2];
          fVar45 = (float)((ulong)puVar13[2] >> 0x20);
          fVar48 = (float)puVar13[3];
          fVar20 = (float)*puVar12;
          fVar22 = (float)((ulong)*puVar12 >> 0x20);
          fVar24 = (float)puVar12[1];
          fVar17 = (float)puVar12[2];
          fVar23 = (float)((ulong)puVar12[2] >> 0x20);
          fVar18 = (float)puVar12[3];
          if (uVar5 == 0) {
            iVar35 = -(uint)(fVar39 <= (float)uVar36);
            fVar39 = (float)((ulong)uVar36 >> 0x20);
            iVar38 = -(uint)(fVar53 <= fVar39);
            iVar40 = -(uint)(fVar56 <= (float)uVar41);
            iVar52 = -(uint)(fVar20 <= (float)uVar36);
            iVar55 = -(uint)(fVar22 <= fVar39);
            iVar25 = -(uint)(fVar24 <= (float)uVar41);
            iVar44 = -(uint)((float)uVar29 <= fVar17);
            fVar17 = (float)((ulong)uVar29 >> 0x20);
            iVar47 = -(uint)(fVar17 <= fVar23);
            iVar50 = -(uint)((float)uVar33 <= fVar18);
            iVar28 = -(uint)((float)uVar29 <= fVar64);
            iVar31 = -(uint)(fVar17 <= fVar45);
            iVar32 = -(uint)((float)uVar33 <= fVar48);
            if (CONCAT13((byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar55 >> 0x18) &
                         (byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar52 >> 0x18) &
                         (byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                         CONCAT12((byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar55 >> 0x10) &
                                  (byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar52 >> 0x10) &
                                  (byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                                  CONCAT11((byte)((uint)iVar47 >> 8) & (byte)((uint)iVar55 >> 8) &
                                           (byte)((uint)iVar44 >> 8) & (byte)((uint)iVar52 >> 8) &
                                           (byte)((uint)iVar50 >> 8) & (byte)((uint)iVar25 >> 8),
                                           (byte)iVar47 & (byte)iVar55 & (byte)iVar44 & (byte)iVar52
                                           & (byte)iVar50 & (byte)iVar25))) != 0) {
              iVar44 = iVar42 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar42) {
                FUN_030832d0(param_3,PTR_PTR_047d1a50,(long)iVar44);
                iVar42 = (int)param_3[1];
              }
              *(int *)(param_3 + 1) = iVar44;
              *(ulong *)(*param_3 + (long)iVar42 * 8) = (ulong)uVar4 | uVar14 << 0x20;
            }
            if (CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar38 >> 0x18) &
                         (byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                         (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar40 >> 0x18),
                         CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar38 >> 0x10) &
                                  (byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                                  (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar40 >> 0x10),
                                  CONCAT11((byte)((uint)iVar31 >> 8) & (byte)((uint)iVar38 >> 8) &
                                           (byte)((uint)iVar28 >> 8) & (byte)((uint)iVar35 >> 8) &
                                           (byte)((uint)iVar32 >> 8) & (byte)((uint)iVar40 >> 8),
                                           (byte)iVar31 & (byte)iVar38 & (byte)iVar28 & (byte)iVar35
                                           & (byte)iVar32 & (byte)iVar40))) != 0) {
              iVar42 = (int)param_3[1];
              lVar10 = (long)iVar42 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar42) {
                FUN_030832d0(param_3,PTR_PTR_047d1a50,lVar10);
                iVar42 = (int)param_3[1];
              }
              lVar11 = *param_3;
              goto LAB_03083214;
            }
          }
          else {
            uVar6 = *(uint *)(puVar9 + 5);
            lVar11 = 0;
            if (lVar10 != 0) {
              lVar11 = lVar10 + (long)param_2;
            }
            puVar9 = (undefined8 *)(lVar11 + (ulong)uVar5 * 0x30);
            puVar12 = (undefined8 *)(lVar11 + (ulong)uVar6 * 0x30);
            fVar34 = (float)puVar9[2];
            iVar58 = -(uint)(fVar39 <= fVar34);
            fVar37 = (float)((ulong)puVar9[2] >> 0x20);
            iVar59 = -(uint)(fVar53 <= fVar37);
            iVar60 = -(uint)(fVar56 <= (float)puVar9[3]);
            fVar27 = (float)*puVar9;
            iVar61 = -(uint)(fVar27 <= fVar64);
            fVar30 = (float)((ulong)*puVar9 >> 0x20);
            iVar62 = -(uint)(fVar30 <= fVar45);
            iVar63 = -(uint)((float)puVar9[1] <= fVar48);
            iVar35 = -(uint)(fVar20 <= fVar34);
            iVar38 = -(uint)(fVar22 <= fVar37);
            iVar40 = -(uint)(fVar24 <= (float)puVar9[3]);
            iVar28 = -(uint)(fVar27 <= fVar17);
            iVar31 = -(uint)(fVar30 <= fVar23);
            iVar32 = -(uint)((float)puVar9[1] <= fVar18);
            fVar27 = (float)puVar12[2];
            iVar51 = -(uint)(fVar39 <= fVar27);
            fVar30 = (float)((ulong)puVar12[2] >> 0x20);
            iVar54 = -(uint)(fVar53 <= fVar30);
            iVar57 = -(uint)(fVar56 <= (float)puVar12[3]);
            fVar39 = (float)*puVar12;
            iVar43 = -(uint)(fVar39 <= fVar64);
            fVar64 = (float)((ulong)*puVar12 >> 0x20);
            iVar46 = -(uint)(fVar64 <= fVar45);
            iVar49 = -(uint)((float)puVar12[1] <= fVar48);
            iVar52 = -(uint)(fVar20 <= fVar27);
            iVar55 = -(uint)(fVar22 <= fVar30);
            iVar25 = -(uint)(fVar24 <= (float)puVar12[3]);
            iVar44 = -(uint)(fVar39 <= fVar17);
            iVar47 = -(uint)(fVar64 <= fVar23);
            iVar50 = -(uint)((float)puVar12[1] <= fVar18);
            if (CONCAT13((byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar47 >> 0x18) &
                         (byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar44 >> 0x18) &
                         (byte)((uint)iVar25 >> 0x18) & (byte)((uint)iVar50 >> 0x18),
                         CONCAT12((byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar47 >> 0x10) &
                                  (byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar44 >> 0x10) &
                                  (byte)((uint)iVar25 >> 0x10) & (byte)((uint)iVar50 >> 0x10),
                                  CONCAT11((byte)((uint)iVar55 >> 8) & (byte)((uint)iVar47 >> 8) &
                                           (byte)((uint)iVar52 >> 8) & (byte)((uint)iVar44 >> 8) &
                                           (byte)((uint)iVar25 >> 8) & (byte)((uint)iVar50 >> 8),
                                           (byte)iVar55 & (byte)iVar47 & (byte)iVar52 & (byte)iVar44
                                           & (byte)iVar25 & (byte)iVar50))) != 0) {
              iVar44 = iVar42 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar42) {
                FUN_030832d0(param_3,PTR_PTR_047d1a50,(long)iVar44);
                iVar42 = (int)param_3[1];
              }
              *(int *)(param_3 + 1) = iVar44;
              *(ulong *)(*param_3 + (long)iVar42 * 8) = CONCAT44(uVar6,uVar4);
            }
            if (CONCAT13((byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar31 >> 0x18) &
                         (byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                         (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar32 >> 0x18),
                         CONCAT12((byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar31 >> 0x10) &
                                  (byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                                  (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar32 >> 0x10),
                                  CONCAT11((byte)((uint)iVar38 >> 8) & (byte)((uint)iVar31 >> 8) &
                                           (byte)((uint)iVar35 >> 8) & (byte)((uint)iVar28 >> 8) &
                                           (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar32 >> 8),
                                           (byte)iVar38 & (byte)iVar31 & (byte)iVar35 & (byte)iVar28
                                           & (byte)iVar40 & (byte)iVar32))) != 0) {
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
              lVar11 = *param_3;
              uVar14 = (ulong)uVar5;
LAB_03083214:
              *(int *)(param_3 + 1) = (int)lVar10;
              *(ulong *)(lVar11 + (long)iVar42 * 8) = (ulong)uVar3 | uVar14 << 0x20;
            }
          }
        }
        if ((int)param_3[1] <= (int)lVar7) {
          return;
        }
        iVar42 = (int)param_3[1] + -1;
        *(int *)(param_3 + 1) = iVar42;
        lVar11 = *param_1;
        lVar10 = *param_2;
        puVar1 = (uint *)(*param_3 + (long)iVar42 * 8);
        uVar15 = (ulong)*puVar1;
        uVar14 = (ulong)puVar1[1];
        lVar2 = 0;
        if (lVar11 != 0) {
          lVar2 = lVar11 + (long)param_1;
        }
        puVar12 = (undefined8 *)(lVar2 + uVar15 * 0x30);
        lVar2 = 0;
        if (lVar10 != 0) {
          lVar2 = lVar10 + (long)param_2;
        }
        puVar9 = (undefined8 *)(lVar2 + uVar14 * 0x30);
        uVar19 = puVar12[1];
        uVar16 = *puVar12;
        uVar26 = puVar12[3];
        uVar21 = puVar12[2];
        uVar33 = puVar9[1];
        uVar29 = *puVar9;
        uVar41 = puVar9[3];
        uVar36 = puVar9[2];
      } while( true );
    }
  }
  return;
}


