/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0325bafc; name: FUN_0325bafc
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0325bafc(long *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  byte bVar28;
  byte bVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  byte bVar33;
  byte bVar34;
  float local_420 [256];
  float *local_20;
  
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  local_20 = (float *)((ulong)local_420 | 4);
  bVar12 = (byte)_DAT_03cab270;
  bVar13 = (byte)((ulong)_DAT_03cab270 >> 0x20);
  bVar14 = (byte)_UNK_03cab278;
  bVar15 = (byte)((ulong)_UNK_03cab278 >> 0x20);
  if ((char)param_1[2] == '\0') {
    do {
      pfVar10 = local_20 + -1;
      pfVar1 = (float *)((long)param_1 + (long)(int)local_20[-1] * 0x80 + *param_1);
      pfVar11 = pfVar1 + 4;
      fVar16 = (float)*(undefined8 *)pfVar11;
      fVar22 = (float)*(undefined8 *)pfVar1;
      iVar32 = -(uint)(fVar22 <= fVar16);
      bVar28 = (byte)iVar32;
      fVar18 = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20);
      fVar24 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20);
      iVar5 = -(uint)(fVar24 <= fVar18);
      bVar29 = (byte)iVar5;
      fVar19 = (float)*(undefined8 *)(pfVar1 + 6);
      fVar25 = (float)*(undefined8 *)(pfVar1 + 2);
      iVar30 = -(uint)(fVar25 <= fVar19);
      fVar21 = (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20);
      fVar27 = (float)((ulong)*(undefined8 *)(pfVar1 + 2) >> 0x20);
      iVar31 = -(uint)(fVar27 <= fVar21);
      bVar33 = (byte)iVar30;
      bVar34 = (byte)iVar31;
      iVar32 = CONCAT13((byte)((uint)iVar5 >> 0x18) & (byte)((uint)iVar32 >> 0x18) &
                        (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                        CONCAT12((byte)((uint)iVar5 >> 0x10) & (byte)((uint)iVar32 >> 0x10) &
                                 (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                                 CONCAT11((byte)((uint)iVar5 >> 8) & (byte)((uint)iVar32 >> 8) &
                                          (byte)((uint)iVar30 >> 8) & (byte)((uint)iVar31 >> 8),
                                          bVar29 & bVar28 & bVar33 & bVar34)));
      if (*(char *)(pfVar1 + 0x1c) == '\0') {
        if (iVar32 == 0) {
          bVar28 = (bVar28 & bVar12) + (bVar29 & bVar13) + (bVar33 & bVar14) + (bVar34 & bVar15);
          if ((bVar28 & 1) != 0) {
            *pfVar1 = fVar22 + *param_2;
            *pfVar11 = fVar16 + *param_2;
            pfVar1[8] = param_2[1] + pfVar1[8];
            pfVar1[0xc] = param_2[1] + pfVar1[0xc];
            pfVar1[0x10] = param_2[2] + pfVar1[0x10];
            pfVar1[0x14] = param_2[2] + pfVar1[0x14];
            *pfVar10 = pfVar1[0x18];
            pfVar10 = local_20;
          }
          local_20 = pfVar10;
          if ((bVar28 >> 1 & 1) != 0) {
            pfVar1[1] = *param_2 + pfVar1[1];
            pfVar1[5] = *param_2 + pfVar1[5];
            pfVar1[9] = param_2[1] + pfVar1[9];
            pfVar1[0xd] = param_2[1] + pfVar1[0xd];
            pfVar1[0x11] = param_2[2] + pfVar1[0x11];
            pfVar1[0x15] = param_2[2] + pfVar1[0x15];
            *local_20 = pfVar1[0x19];
            local_20 = local_20 + 1;
          }
          if ((bVar28 >> 2 & 1) != 0) {
            pfVar1[2] = *param_2 + pfVar1[2];
            pfVar1[6] = *param_2 + pfVar1[6];
            pfVar1[10] = param_2[1] + pfVar1[10];
            pfVar1[0xe] = param_2[1] + pfVar1[0xe];
            pfVar1[0x12] = param_2[2] + pfVar1[0x12];
            pfVar1[0x16] = param_2[2] + pfVar1[0x16];
            *local_20 = pfVar1[0x1a];
            local_20 = local_20 + 1;
          }
          if ((bVar28 >> 3 & 1) != 0) {
            pfVar1[3] = *param_2 + pfVar1[3];
            pfVar1[7] = *param_2 + pfVar1[7];
            pfVar1[0xb] = param_2[1] + pfVar1[0xb];
            pfVar1[0xf] = param_2[1] + pfVar1[0xf];
            pfVar1[0x13] = param_2[2] + pfVar1[0x13];
            pfVar1[0x17] = param_2[2] + pfVar1[0x17];
            *local_20 = pfVar1[0x1b];
            local_20 = local_20 + 1;
          }
        }
        else {
          *(ulong *)(pfVar1 + 2) = CONCAT44(fVar2 + fVar27,fVar2 + fVar25);
          *(ulong *)pfVar1 = CONCAT44(fVar2 + fVar24,fVar2 + fVar22);
          *(ulong *)(pfVar1 + 6) = CONCAT44(fVar2 + fVar21,fVar2 + fVar19);
          *(ulong *)pfVar11 = CONCAT44(fVar2 + fVar18,fVar2 + fVar16);
          fVar16 = fVar3 + (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20);
          *(ulong *)(pfVar1 + 10) =
               CONCAT44(fVar3 + (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20),
                        fVar3 + (float)*(undefined8 *)(pfVar1 + 10));
          *(ulong *)(pfVar1 + 8) =
               CONCAT17((char)((uint)fVar16 >> 0x18),
                        CONCAT16((char)((uint)fVar16 >> 0x10),
                                 CONCAT15((char)((uint)fVar16 >> 8),
                                          CONCAT14(SUB41(fVar16,0),
                                                   fVar3 + (float)*(undefined8 *)(pfVar1 + 8)))));
          *(ulong *)(pfVar1 + 0xe) =
               CONCAT44(fVar3 + (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20),
                        fVar3 + (float)*(undefined8 *)(pfVar1 + 0xe));
          *(ulong *)(pfVar1 + 0xc) =
               CONCAT44(fVar3 + (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20),
                        fVar3 + (float)*(undefined8 *)(pfVar1 + 0xc));
          fVar16 = fVar4 + (float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20);
          *(ulong *)(pfVar1 + 0x12) =
               CONCAT44(fVar4 + (float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20),
                        fVar4 + (float)*(undefined8 *)(pfVar1 + 0x12));
          *(ulong *)(pfVar1 + 0x10) =
               CONCAT17((char)((uint)fVar16 >> 0x18),
                        CONCAT16((char)((uint)fVar16 >> 0x10),
                                 CONCAT15((char)((uint)fVar16 >> 8),
                                          CONCAT14(SUB41(fVar16,0),
                                                   fVar4 + (float)*(undefined8 *)(pfVar1 + 0x10)))))
          ;
          *(ulong *)(pfVar1 + 0x16) =
               CONCAT44(fVar4 + (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20),
                        fVar4 + (float)*(undefined8 *)(pfVar1 + 0x16));
          *(ulong *)(pfVar1 + 0x14) =
               CONCAT44(fVar4 + (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20),
                        fVar4 + (float)*(undefined8 *)(pfVar1 + 0x14));
          uVar17 = *(undefined8 *)(pfVar1 + 0x18);
          *(undefined8 *)(local_20 + 1) = *(undefined8 *)(pfVar1 + 0x1a);
          *(undefined8 *)pfVar10 = uVar17;
          local_20 = local_20 + 3;
        }
      }
      else {
        local_20 = pfVar10;
        if (iVar32 == 0) {
          bVar28 = (bVar28 & bVar12) + (bVar29 & bVar13) + (bVar33 & bVar14) + (bVar34 & bVar15);
          if ((bVar28 & 1) != 0) {
            *pfVar1 = fVar22 + *param_2;
            *pfVar11 = fVar16 + *param_2;
            pfVar1[8] = param_2[1] + pfVar1[8];
            pfVar1[0xc] = param_2[1] + pfVar1[0xc];
            pfVar1[0x10] = param_2[2] + pfVar1[0x10];
            pfVar1[0x14] = param_2[2] + pfVar1[0x14];
          }
          if ((bVar28 >> 1 & 1) != 0) {
            pfVar1[1] = *param_2 + pfVar1[1];
            pfVar1[5] = *param_2 + pfVar1[5];
            pfVar1[9] = param_2[1] + pfVar1[9];
            pfVar1[0xd] = param_2[1] + pfVar1[0xd];
            pfVar1[0x11] = param_2[2] + pfVar1[0x11];
            pfVar1[0x15] = param_2[2] + pfVar1[0x15];
          }
          if ((bVar28 >> 2 & 1) != 0) {
            pfVar1[2] = *param_2 + pfVar1[2];
            pfVar1[6] = *param_2 + pfVar1[6];
            pfVar1[10] = param_2[1] + pfVar1[10];
            pfVar1[0xe] = param_2[1] + pfVar1[0xe];
            pfVar1[0x12] = param_2[2] + pfVar1[0x12];
            pfVar1[0x16] = param_2[2] + pfVar1[0x16];
          }
          if ((bVar28 >> 3 & 1) != 0) {
            pfVar1[3] = *param_2 + pfVar1[3];
            pfVar1[7] = *param_2 + pfVar1[7];
            pfVar1[0xb] = param_2[1] + pfVar1[0xb];
            pfVar1[0xf] = param_2[1] + pfVar1[0xf];
            pfVar1[0x13] = param_2[2] + pfVar1[0x13];
            pfVar1[0x17] = param_2[2] + pfVar1[0x17];
          }
        }
        else {
          *(ulong *)(pfVar1 + 2) = CONCAT44(fVar2 + fVar27,fVar2 + fVar25);
          *(ulong *)pfVar1 = CONCAT44(fVar2 + fVar24,fVar2 + fVar22);
          *(ulong *)(pfVar1 + 6) = CONCAT44(fVar2 + fVar21,fVar2 + fVar19);
          *(ulong *)pfVar11 = CONCAT44(fVar2 + fVar18,fVar2 + fVar16);
          *(ulong *)(pfVar1 + 10) =
               CONCAT44(fVar3 + (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20),
                        fVar3 + (float)*(undefined8 *)(pfVar1 + 10));
          *(ulong *)(pfVar1 + 8) =
               CONCAT44(fVar3 + (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20),
                        fVar3 + (float)*(undefined8 *)(pfVar1 + 8));
          *(ulong *)(pfVar1 + 0xe) =
               CONCAT44(fVar3 + (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20),
                        fVar3 + (float)*(undefined8 *)(pfVar1 + 0xe));
          *(ulong *)(pfVar1 + 0xc) =
               CONCAT44(fVar3 + (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20),
                        fVar3 + (float)*(undefined8 *)(pfVar1 + 0xc));
          fVar16 = fVar4 + (float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20);
          *(ulong *)(pfVar1 + 0x12) =
               CONCAT44(fVar4 + (float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20),
                        fVar4 + (float)*(undefined8 *)(pfVar1 + 0x12));
          *(ulong *)(pfVar1 + 0x10) =
               CONCAT17((char)((uint)fVar16 >> 0x18),
                        CONCAT16((char)((uint)fVar16 >> 0x10),
                                 CONCAT15((char)((uint)fVar16 >> 8),
                                          CONCAT14(SUB41(fVar16,0),
                                                   fVar4 + (float)*(undefined8 *)(pfVar1 + 0x10)))))
          ;
          *(ulong *)(pfVar1 + 0x16) =
               CONCAT44(fVar4 + (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20),
                        fVar4 + (float)*(undefined8 *)(pfVar1 + 0x16));
          *(ulong *)(pfVar1 + 0x14) =
               CONCAT44(fVar4 + (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20),
                        fVar4 + (float)*(undefined8 *)(pfVar1 + 0x14));
        }
      }
    } while (local_420 != local_20);
  }
  else if (1 < (int)param_1[1]) {
    lVar7 = 1;
    lVar8 = 0xdc;
    do {
      lVar9 = *param_1;
      lVar6 = lVar8 + lVar9;
      uVar26 = *(undefined8 *)((long)param_1 + lVar6 + -0x54);
      uVar23 = *(undefined8 *)((long)param_1 + lVar6 + -0x5c);
      uVar20 = *(undefined8 *)((long)param_1 + lVar6 + -0x44);
      uVar17 = *(undefined8 *)((long)param_1 + lVar6 + -0x4c);
      fVar16 = (float)uVar17;
      fVar22 = (float)uVar23;
      iVar32 = -(uint)(fVar22 <= fVar16);
      fVar18 = (float)((ulong)uVar17 >> 0x20);
      fVar24 = (float)((ulong)uVar23 >> 0x20);
      iVar5 = -(uint)(fVar24 <= fVar18);
      fVar19 = (float)uVar20;
      fVar25 = (float)uVar26;
      iVar30 = -(uint)(fVar25 <= fVar19);
      fVar21 = (float)((ulong)uVar20 >> 0x20);
      fVar27 = (float)((ulong)uVar26 >> 0x20);
      iVar31 = -(uint)(fVar27 <= fVar21);
      if (CONCAT13((byte)((uint)iVar5 >> 0x18) & (byte)((uint)iVar32 >> 0x18) &
                   (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                   CONCAT12((byte)((uint)iVar5 >> 0x10) & (byte)((uint)iVar32 >> 0x10) &
                            (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                            CONCAT11((byte)((uint)iVar5 >> 8) & (byte)((uint)iVar32 >> 8) &
                                     (byte)((uint)iVar30 >> 8) & (byte)((uint)iVar31 >> 8),
                                     (byte)iVar5 & (byte)iVar32 & (byte)iVar30 & (byte)iVar31))) ==
          0) {
        bVar28 = ((byte)iVar32 & bVar12) + ((byte)iVar5 & bVar13) +
                 ((byte)iVar30 & bVar14) + ((byte)iVar31 & bVar15);
        if ((bVar28 & 1) != 0) {
          *(float *)((long)param_1 + lVar6 + -0x5c) = fVar22 + *param_2;
          *(float *)((long)param_1 + lVar6 + -0x4c) = fVar16 + *param_2;
          *(float *)((long)param_1 + lVar6 + -0x3c) =
               param_2[1] + *(float *)((long)param_1 + lVar6 + -0x3c);
          *(float *)((long)param_1 + lVar6 + -0x2c) =
               param_2[1] + *(float *)((long)param_1 + lVar6 + -0x2c);
          *(float *)((long)param_1 + lVar6 + -0x1c) =
               param_2[2] + *(float *)((long)param_1 + lVar6 + -0x1c);
          *(float *)((long)param_1 + lVar6 + -0xc) =
               param_2[2] + *(float *)((long)param_1 + lVar6 + -0xc);
        }
        if ((bVar28 >> 1 & 1) != 0) {
          *(float *)((long)param_1 + lVar6 + -0x58) =
               *param_2 + *(float *)((long)param_1 + lVar6 + -0x58);
          *(float *)((long)param_1 + lVar6 + -0x48) =
               *param_2 + *(float *)((long)param_1 + lVar6 + -0x48);
          *(float *)((long)param_1 + lVar6 + -0x38) =
               param_2[1] + *(float *)((long)param_1 + lVar6 + -0x38);
          *(float *)((long)param_1 + lVar6 + -0x28) =
               param_2[1] + *(float *)((long)param_1 + lVar6 + -0x28);
          *(float *)((long)param_1 + lVar6 + -0x18) =
               param_2[2] + *(float *)((long)param_1 + lVar6 + -0x18);
          *(float *)((long)param_1 + lVar6 + -8) =
               param_2[2] + *(float *)((long)param_1 + lVar6 + -8);
        }
        if ((bVar28 >> 2 & 1) != 0) {
          *(float *)((long)param_1 + lVar6 + -0x54) =
               *param_2 + *(float *)((long)param_1 + lVar6 + -0x54);
          *(float *)((long)param_1 + lVar6 + -0x44) =
               *param_2 + *(float *)((long)param_1 + lVar6 + -0x44);
          *(float *)((long)param_1 + lVar6 + -0x34) =
               param_2[1] + *(float *)((long)param_1 + lVar6 + -0x34);
          *(float *)((long)param_1 + lVar6 + -0x24) =
               param_2[1] + *(float *)((long)param_1 + lVar6 + -0x24);
          *(float *)((long)param_1 + lVar6 + -0x14) =
               param_2[2] + *(float *)((long)param_1 + lVar6 + -0x14);
          *(float *)((long)param_1 + lVar6 + -4) =
               param_2[2] + *(float *)((long)param_1 + lVar6 + -4);
        }
        if ((bVar28 >> 3 & 1) != 0) {
          *(float *)((long)param_1 + lVar6 + -0x50) =
               *param_2 + *(float *)((long)param_1 + lVar6 + -0x50);
          *(float *)((long)param_1 + lVar6 + -0x40) =
               *param_2 + *(float *)((long)param_1 + lVar6 + -0x40);
          *(float *)((long)param_1 + lVar6 + -0x30) =
               param_2[1] + *(float *)((long)param_1 + lVar6 + -0x30);
          *(float *)((long)param_1 + lVar6 + -0x20) =
               param_2[1] + *(float *)((long)param_1 + lVar6 + -0x20);
          *(float *)((long)param_1 + lVar6 + -0x10) =
               param_2[2] + *(float *)((long)param_1 + lVar6 + -0x10);
          *(float *)((long)param_1 + lVar8 + lVar9) =
               param_2[2] + *(float *)((long)param_1 + lVar8 + lVar9);
        }
      }
      else {
        *(ulong *)((long)param_1 + lVar6 + -0x54) = CONCAT44(fVar2 + fVar27,fVar2 + fVar25);
        *(ulong *)((long)param_1 + lVar6 + -0x5c) = CONCAT44(fVar2 + fVar24,fVar2 + fVar22);
        uVar26 = *(undefined8 *)((long)param_1 + lVar6 + -0x24);
        uVar23 = *(undefined8 *)((long)param_1 + lVar6 + -0x2c);
        *(ulong *)((long)param_1 + lVar6 + -0x44) = CONCAT44(fVar2 + fVar21,fVar2 + fVar19);
        *(ulong *)((long)param_1 + lVar6 + -0x4c) = CONCAT44(fVar2 + fVar18,fVar2 + fVar16);
        uVar20 = *(undefined8 *)((long)param_1 + lVar6 + -0x34);
        uVar17 = *(undefined8 *)((long)param_1 + lVar6 + -0x3c);
        *(ulong *)((long)param_1 + lVar6 + -0x34) =
             CONCAT44(fVar3 + (float)((ulong)uVar20 >> 0x20),fVar3 + (float)uVar20);
        *(ulong *)((long)param_1 + lVar6 + -0x3c) =
             CONCAT44(fVar3 + (float)((ulong)uVar17 >> 0x20),fVar3 + (float)uVar17);
        uVar20 = *(undefined8 *)((long)param_1 + lVar6 + -0x14);
        uVar17 = *(undefined8 *)((long)param_1 + lVar6 + -0x1c);
        *(ulong *)((long)param_1 + lVar6 + -0x24) =
             CONCAT44(fVar3 + (float)((ulong)uVar26 >> 0x20),fVar3 + (float)uVar26);
        *(ulong *)((long)param_1 + lVar6 + -0x2c) =
             CONCAT44(fVar3 + (float)((ulong)uVar23 >> 0x20),fVar3 + (float)uVar23);
        uVar26 = *(undefined8 *)((long)param_1 + lVar6 + -4);
        uVar23 = *(undefined8 *)((long)param_1 + lVar6 + -0xc);
        *(ulong *)((long)param_1 + lVar6 + -0x14) =
             CONCAT44(fVar4 + (float)((ulong)uVar20 >> 0x20),fVar4 + (float)uVar20);
        *(ulong *)((long)param_1 + lVar6 + -0x1c) =
             CONCAT44(fVar4 + (float)((ulong)uVar17 >> 0x20),fVar4 + (float)uVar17);
        *(ulong *)((long)param_1 + lVar6 + -4) =
             CONCAT44(fVar4 + (float)((ulong)uVar26 >> 0x20),fVar4 + (float)uVar26);
        *(ulong *)((long)param_1 + lVar6 + -0xc) =
             CONCAT44(fVar4 + (float)((ulong)uVar23 >> 0x20),fVar4 + (float)uVar23);
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x80;
    } while (lVar7 < (int)param_1[1]);
  }
  return;
}


