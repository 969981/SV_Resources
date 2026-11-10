/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0307d05c; name: FUN_0307d05c
 */


void FUN_0307d05c(long param_1,int *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar6;
  long lVar5;
  float fVar7;
  int iVar8;
  float fVar9;
  long lVar10;
  float fVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar1 = (long *)(*(long *)(param_1 + 0x38) + (long)*param_2 * 0x100);
  lVar3 = plVar1[0xc];
  iVar4 = -(uint)((float)lVar3 == (float)param_3[6]);
  iVar6 = -(uint)((float)((ulong)lVar3 >> 0x20) == (float)((ulong)param_3[6] >> 0x20));
  iVar8 = -(uint)((float)plVar1[0xd] == (float)param_3[7]);
  if (CONCAT13((byte)((uint)iVar6 >> 0x18) & (byte)((uint)iVar4 >> 0x18) &
               (byte)((uint)iVar8 >> 0x18),
               CONCAT12((byte)((uint)iVar6 >> 0x10) & (byte)((uint)iVar4 >> 0x10) &
                        (byte)((uint)iVar8 >> 0x10),
                        CONCAT11((byte)((uint)iVar6 >> 8) & (byte)((uint)iVar4 >> 8) &
                                 (byte)((uint)iVar8 >> 8),(byte)iVar6 & (byte)iVar4 & (byte)iVar8)))
      == 0) {
    lVar2 = param_3[1];
    lVar3 = *param_3;
  }
  else {
    lVar5 = plVar1[6];
    lVar2 = param_3[1];
    lVar3 = *param_3;
    iVar4 = -(uint)((float)lVar5 == (float)lVar3);
    iVar6 = -(uint)((float)((ulong)lVar5 >> 0x20) == (float)((ulong)lVar3 >> 0x20));
    iVar8 = -(uint)((float)plVar1[7] == (float)lVar2);
    if (CONCAT13((byte)((uint)iVar6 >> 0x18) & (byte)((uint)iVar4 >> 0x18) &
                 (byte)((uint)iVar8 >> 0x18),
                 CONCAT12((byte)((uint)iVar6 >> 0x10) & (byte)((uint)iVar4 >> 0x10) &
                          (byte)((uint)iVar8 >> 0x10),
                          CONCAT11((byte)((uint)iVar6 >> 8) & (byte)((uint)iVar4 >> 8) &
                                   (byte)((uint)iVar8 >> 8),(byte)iVar6 & (byte)iVar4 & (byte)iVar8)
                         )) != 0) {
      iVar4 = -(uint)((float)plVar1[8] == (float)param_3[2]);
      iVar6 = -(uint)((float)((ulong)plVar1[8] >> 0x20) == (float)((ulong)param_3[2] >> 0x20));
      iVar8 = -(uint)((float)plVar1[9] == (float)param_3[3]);
      if (CONCAT13((byte)((uint)iVar6 >> 0x18) & (byte)((uint)iVar4 >> 0x18) &
                   (byte)((uint)iVar8 >> 0x18),
                   CONCAT12((byte)((uint)iVar6 >> 0x10) & (byte)((uint)iVar4 >> 0x10) &
                            (byte)((uint)iVar8 >> 0x10),
                            CONCAT11((byte)((uint)iVar6 >> 8) & (byte)((uint)iVar4 >> 8) &
                                     (byte)((uint)iVar8 >> 8),
                                     (byte)iVar6 & (byte)iVar4 & (byte)iVar8))) != 0) {
        iVar4 = -(uint)((float)plVar1[10] == (float)param_3[4]);
        iVar6 = -(uint)((float)((ulong)plVar1[10] >> 0x20) == (float)((ulong)param_3[4] >> 0x20));
        iVar8 = -(uint)((float)plVar1[0xb] == (float)param_3[5]);
        if (CONCAT13((byte)((uint)iVar6 >> 0x18) & (byte)((uint)iVar4 >> 0x18) &
                     (byte)((uint)iVar8 >> 0x18),
                     CONCAT12((byte)((uint)iVar6 >> 0x10) & (byte)((uint)iVar4 >> 0x10) &
                              (byte)((uint)iVar8 >> 0x10),
                              CONCAT11((byte)((uint)iVar6 >> 8) & (byte)((uint)iVar4 >> 8) &
                                       (byte)((uint)iVar8 >> 8),
                                       (byte)iVar6 & (byte)iVar4 & (byte)iVar8))) != 0) {
          iVar4 = -(uint)((float)plVar1[0x10] == (float)param_3[10]);
          iVar6 = -(uint)((float)((ulong)plVar1[0x10] >> 0x20) ==
                         (float)((ulong)param_3[10] >> 0x20));
          iVar8 = -(uint)((float)plVar1[0x11] == (float)param_3[0xb]);
          if (CONCAT13((byte)((uint)iVar6 >> 0x18) & (byte)((uint)iVar4 >> 0x18) &
                       (byte)((uint)iVar8 >> 0x18),
                       CONCAT12((byte)((uint)iVar6 >> 0x10) & (byte)((uint)iVar4 >> 0x10) &
                                (byte)((uint)iVar8 >> 0x10),
                                CONCAT11((byte)((uint)iVar6 >> 8) & (byte)((uint)iVar4 >> 8) &
                                         (byte)((uint)iVar8 >> 8),
                                         (byte)iVar6 & (byte)iVar4 & (byte)iVar8))) != 0) {
            iVar4 = -(uint)((float)plVar1[0xe] == (float)param_3[8]);
            iVar6 = -(uint)((float)((ulong)plVar1[0xe] >> 0x20) ==
                           (float)((ulong)param_3[8] >> 0x20));
            iVar8 = -(uint)((float)plVar1[0xf] == (float)param_3[9]);
            if (CONCAT13((byte)((uint)iVar6 >> 0x18) & (byte)((uint)iVar4 >> 0x18) &
                         (byte)((uint)iVar8 >> 0x18),
                         CONCAT12((byte)((uint)iVar6 >> 0x10) & (byte)((uint)iVar4 >> 0x10) &
                                  (byte)((uint)iVar8 >> 0x10),
                                  CONCAT11((byte)((uint)iVar6 >> 8) & (byte)((uint)iVar4 >> 8) &
                                           (byte)((uint)iVar8 >> 8),
                                           (byte)iVar6 & (byte)iVar4 & (byte)iVar8))) != 0) {
              return;
            }
          }
        }
      }
    }
  }
  plVar1[7] = lVar2;
  plVar1[6] = lVar3;
  lVar3 = param_3[2];
  plVar1[9] = param_3[3];
  plVar1[8] = lVar3;
  lVar3 = param_3[4];
  plVar1[0xb] = param_3[5];
  plVar1[10] = lVar3;
  lVar3 = param_3[6];
  plVar1[0xd] = param_3[7];
  plVar1[0xc] = lVar3;
  lVar2 = param_3[8];
  lVar3 = *plVar1;
  plVar1[0xf] = param_3[9];
  plVar1[0xe] = lVar2;
  lVar2 = param_3[10];
  plVar1[0x11] = param_3[0xb];
  plVar1[0x10] = lVar2;
  if (lVar3 != 0) {
    lVar10 = param_3[1];
    lVar5 = *param_3;
    *(long *)(lVar3 + 0x68) = lVar10;
    *(long *)(lVar3 + 0x60) = lVar5;
    lVar13 = param_3[3];
    lVar12 = param_3[2];
    *(long *)(lVar3 + 0x78) = lVar13;
    *(long *)(lVar3 + 0x70) = lVar12;
    lVar19 = param_3[5];
    lVar17 = param_3[4];
    *(long *)(lVar3 + 0x88) = lVar19;
    *(long *)(lVar3 + 0x80) = lVar17;
    lVar16 = param_3[7];
    lVar15 = param_3[6];
    *(long *)(lVar3 + 0x98) = lVar16;
    *(long *)(lVar3 + 0x90) = lVar15;
    lVar2 = param_3[8];
    *(long *)(lVar3 + 0xa8) = param_3[9];
    *(long *)(lVar3 + 0xa0) = lVar2;
    lVar2 = param_3[10];
    *(long *)(lVar3 + 0xb8) = param_3[0xb];
    *(long *)(lVar3 + 0xb0) = lVar2;
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x68);
      uStack_38 = *(undefined8 *)(lVar3 + 0x98);
      local_40 = *(undefined8 *)(lVar3 + 0x90);
      uStack_28 = *(undefined8 *)(lVar3 + 0xa8);
      uStack_30 = *(undefined8 *)(lVar3 + 0xa0);
      fVar21 = (float)uStack_30;
      fVar11 = (float)local_40;
      iVar4 = -(uint)(fVar21 < fVar11);
      fVar7 = (float)((ulong)uStack_30 >> 0x20);
      fVar14 = (float)((ulong)local_40 >> 0x20);
      iVar6 = -(uint)(fVar7 < fVar14);
      fVar9 = (float)uStack_28;
      fVar18 = (float)uStack_38;
      iVar8 = -(uint)(fVar9 < fVar18);
      if (CONCAT13((byte)((uint)iVar6 >> 0x18) | (byte)((uint)iVar4 >> 0x18) |
                   (byte)((uint)iVar8 >> 0x18),
                   CONCAT12((byte)((uint)iVar6 >> 0x10) | (byte)((uint)iVar4 >> 0x10) |
                            (byte)((uint)iVar8 >> 0x10),
                            CONCAT11((byte)((uint)iVar6 >> 8) | (byte)((uint)iVar4 >> 8) |
                                     (byte)((uint)iVar8 >> 8),
                                     (byte)iVar6 | (byte)iVar4 | (byte)iVar8))) == 0) {
        fVar27 = (fVar11 + fVar21) * 0.5;
        fVar28 = (fVar14 + fVar7) * 0.5;
        fVar29 = (fVar18 + fVar9) * 0.5;
        fVar21 = (fVar21 - fVar11) * 0.5;
        fVar22 = (fVar7 - fVar14) * 0.5;
        fVar23 = (fVar9 - fVar18) * 0.5;
        fVar7 = (float)((ulong)lVar5 >> 0x20);
        fVar11 = (float)((ulong)lVar10 >> 0x20);
        fVar9 = (float)((ulong)lVar12 >> 0x20);
        fVar14 = (float)((ulong)lVar13 >> 0x20);
        fVar18 = (float)((ulong)lVar17 >> 0x20);
        fVar20 = (float)((ulong)lVar19 >> 0x20);
        fVar24 = ABS((float)lVar5 * fVar21) + ABS((float)lVar12 * fVar22) +
                 ABS((float)lVar17 * fVar23);
        fVar25 = ABS(fVar7 * fVar21) + ABS(fVar9 * fVar22) + ABS(fVar18 * fVar23);
        fVar26 = ABS((float)lVar10 * fVar21) + ABS((float)lVar13 * fVar22) +
                 ABS((float)lVar19 * fVar23);
        fVar22 = ABS(fVar11 * fVar21) + ABS(fVar14 * fVar22) + ABS(fVar20 * fVar23);
        fVar21 = (float)lVar15 +
                 (float)lVar17 * fVar29 + (float)lVar5 * fVar27 + (float)lVar12 * fVar28;
        fVar7 = (float)((ulong)lVar15 >> 0x20) + fVar18 * fVar29 + fVar7 * fVar27 + fVar9 * fVar28;
        fVar9 = (float)lVar16 +
                (float)lVar19 * fVar29 + (float)lVar10 * fVar27 + (float)lVar13 * fVar28;
        fVar11 = (float)((ulong)lVar16 >> 0x20) +
                 fVar20 * fVar29 + fVar11 * fVar27 + fVar14 * fVar28;
        uStack_30 = CONCAT44(fVar7 + fVar25,fVar21 + fVar24);
        uStack_28 = CONCAT44(fVar11 + fVar22,fVar9 + fVar26);
        local_40 = CONCAT44(fVar7 - fVar25,fVar21 - fVar24);
        uStack_38 = CONCAT44(fVar11 - fVar22,fVar9 - fVar26);
      }
      if (*(char *)(param_1 + 0x30) != '\x01') {
        lVar2 = FUN_0307f764((long *)(param_1 + 0x20));
      }
      FUN_0086f84c(lVar2,(int)plVar1[3],&local_40);
    }
  }
  lVar3 = plVar1[2];
  if (lVar3 != 0) {
    lVar2 = *param_3;
    *(long *)(lVar3 + 0x48) = param_3[1];
    *(long *)(lVar3 + 0x40) = lVar2;
    lVar2 = param_3[2];
    *(long *)(lVar3 + 0x58) = param_3[3];
    *(long *)(lVar3 + 0x50) = lVar2;
    lVar2 = param_3[4];
    *(long *)(lVar3 + 0x68) = param_3[5];
    *(long *)(lVar3 + 0x60) = lVar2;
    lVar2 = param_3[6];
    *(long *)(lVar3 + 0x78) = param_3[7];
    *(long *)(lVar3 + 0x70) = lVar2;
  }
  return;
}


