/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ec25b0; name: FUN_02ec25b0
 */


void FUN_02ec25b0(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  byte *pbVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  int iVar27;
  undefined8 uVar26;
  float fVar28;
  int iVar29;
  float fVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int iVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  long lVar51;
  ulong uVar52;
  ulong uVar53;
  
  if ((int)param_1[1] != 0) {
    lVar17 = param_1[2];
    lVar13 = param_1[4];
    iVar23 = -(uint)((float)param_3[2] <= (float)lVar13);
    iVar27 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= (float)((ulong)lVar13 >> 0x20));
    iVar29 = -(uint)((float)param_3[3] <= (float)param_1[5]);
    iVar31 = -(uint)((float)lVar17 <= (float)param_3[4]);
    iVar35 = -(uint)((float)((ulong)lVar17 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
    iVar36 = -(uint)((float)param_1[3] <= (float)param_3[5]);
    if (CONCAT13((byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                 (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar23 >> 0x18) &
                 (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar29 >> 0x18),
                 CONCAT12((byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                          (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar23 >> 0x10) &
                          (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar29 >> 0x10),
                          CONCAT11((byte)((uint)iVar35 >> 8) & (byte)((uint)iVar27 >> 8) &
                                   (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar23 >> 8) &
                                   (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar29 >> 8),
                                   (byte)iVar35 & (byte)iVar27 & (byte)iVar31 & (byte)iVar23 &
                                   (byte)iVar36 & (byte)iVar29))) != 0) {
      lVar12 = param_2[1];
      uVar16 = 0;
      pbVar22 = (byte *)(*param_1 + (long)param_1);
      uVar52 = param_1[5];
      uVar53 = param_1[3];
LAB_02ec2640:
      bVar7 = pbVar22[3];
      uVar15 = (uint)uVar16;
      if ((char)bVar7 < '\0') goto LAB_02ec281c;
      lVar13 = *param_3;
      lVar17 = *(long *)(lVar13 + 0xa8);
      if (lVar17 == 0) {
LAB_02ec26b0:
        lVar21 = *(long *)(lVar13 + 0x50);
        lVar20 = (long)(param_1 + 8) + (ulong)CONCAT11(bVar7,pbVar22[4]) * 0x60 + param_1[8];
        lVar18 = *(long *)(lVar21 + 0x40);
        lVar17 = lVar18 + lVar21 + 0x40;
        lVar51 = 0;
        if (lVar18 != 0) {
          lVar51 = lVar17;
        }
        iVar23 = (int)(lVar20 - lVar51 >> 5) * -0x55555555;
        if ((*(int *)(lVar13 + 0x94) != iVar23) || (*(int *)(lVar13 + 0x98) != iVar23)) {
          lVar17 = lVar17 + (long)iVar23 * 0x60;
          *(long *)(lVar13 + 0x60) = lVar17;
          *(int *)(lVar13 + 0x94) = iVar23;
          *(int *)(lVar13 + 0x98) = iVar23;
          lVar18 = *(long *)(lVar21 + 0x70);
          lVar51 = 0;
          if (lVar18 != 0) {
            lVar51 = lVar18 + lVar21 + 0x70;
          }
          *(ulong *)(lVar13 + 0x70) = lVar51 + (ulong)*(uint *)(lVar17 + 0x48) * 4;
          lVar18 = *(long *)(lVar21 + 0x80);
          lVar51 = 0;
          if (lVar18 != 0) {
            lVar51 = lVar18 + lVar21 + 0x80;
          }
          *(ulong *)(lVar13 + 0x78) = lVar51 + (ulong)*(byte *)(lVar17 + 0x5b) * 0x80000;
          lVar18 = *(long *)(lVar21 + 0x60);
          lVar51 = 0;
          if (lVar18 != 0) {
            lVar51 = lVar18 + lVar21 + 0x60;
          }
          lVar51 = lVar51 + (ulong)*(uint *)(lVar17 + 0x4c) * 2;
          *(long *)(lVar13 + 0x80) = lVar51;
          lVar19 = *(long *)(lVar21 + 0x90);
          lVar18 = 0;
          if (lVar19 != 0) {
            lVar18 = lVar19 + lVar21 + 0x90;
          }
          *(ulong *)(lVar13 + 0x88) = lVar18 + (ulong)*(uint *)(lVar17 + 0x54) * 4;
          *(uint *)(lVar13 + 0x90) = (uint)*(byte *)(lVar17 + 0x58);
          lVar19 = *(long *)(lVar21 + 0x50);
          lVar18 = 0;
          if (lVar19 != 0) {
            lVar18 = lVar19 + lVar21 + 0x50;
          }
          *(ulong *)(lVar13 + 0x68) = lVar18 + (ulong)*(uint *)(lVar17 + 0x50) * 4;
          uVar26 = *(undefined8 *)(lVar17 + 0x30);
          *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(lVar17 + 0x38);
          *(undefined8 *)(lVar13 + 0x30) = uVar26;
          uVar26 = *(undefined8 *)(lVar17 + 0x3c);
          *(ulong *)(lVar13 + 0x48) = (ulong)*(uint *)(lVar17 + 0x44);
          *(undefined8 *)(lVar13 + 0x40) = uVar26;
          *(ulong *)(lVar13 + 0x80) = lVar51 + (ulong)*(byte *)(lVar17 + 0x58) * -2;
        }
        FUN_02ec2adc(lVar20,param_2,param_3);
      }
      else {
        lVar20 = *(long *)(lVar17 + 0x20);
        lVar51 = 0;
        if (lVar20 != 0) {
          lVar51 = lVar20 + lVar17 + 0x20;
        }
        lVar21 = *(long *)(lVar51 + 0x48);
        lVar20 = 0;
        if (lVar21 != 0) {
          lVar20 = lVar21 + lVar51 + 0x48;
        }
        uVar6 = uVar15 + 0x1f;
        if (-1 < (int)uVar15) {
          uVar6 = uVar15;
        }
        if ((*(uint *)(lVar17 + 0x28 +
                      (long)((int)uVar6 >> 5) * 4 +
                      (long)(*(int *)(lVar20 + 0x68) << 3) * 4 + *(long *)(lVar17 + 0x28)) >>
             (ulong)(uVar15 & 0x1f) & 1) != 0) goto LAB_02ec26b0;
      }
      goto LAB_02ec27e0;
    }
  }
  return;
LAB_02ec281c:
  uVar2 = (long)(int)uVar15 + 1;
  fVar47 = (float)lVar13;
  fVar46 = (float)lVar17;
  fVar34 = (float)((ulong)lVar13 >> 0x20);
  fVar32 = (float)((ulong)lVar17 >> 0x20);
  fVar25 = (float)uVar52;
  fVar33 = (float)uVar53;
  uVar1 = (((ulong)bVar7 & 0x7f) << 9 | (ulong)pbVar22[4] << 1) + (long)(int)uVar15;
  pbVar22 = (byte *)((long)param_1 + uVar2 * 5 + *param_1);
  pbVar3 = (byte *)((long)param_1 + uVar1 * 5 + *param_1);
  bVar9 = *pbVar22 >> 4;
  bVar7 = *pbVar22 & 0xf;
  fVar24 = (fVar47 - fVar46) * 0.0044247787;
  fVar28 = (fVar34 - fVar32) * 0.0044247787;
  fVar30 = (fVar25 - fVar33) * 0.0044247787;
  bVar4 = pbVar22[1] & 0xf;
  fVar37 = fVar46 + (float)(byte)(bVar9 * bVar9) * fVar24;
  bVar8 = pbVar22[1] >> 4;
  bVar10 = pbVar22[2] >> 4;
  bVar9 = pbVar22[2] & 0xf;
  bVar11 = *pbVar3 >> 4;
  bVar5 = *pbVar3 & 0xf;
  fVar38 = fVar32 + (float)(byte)(bVar8 * bVar8) * fVar28;
  lVar17 = CONCAT44(fVar38,fVar37);
  fVar39 = fVar33 + (float)(byte)(bVar10 * bVar10) * fVar30;
  fVar48 = fVar47 - (float)(byte)(bVar7 * bVar7) * fVar24;
  fVar46 = fVar46 + (float)(byte)(bVar11 * bVar11) * fVar24;
  uVar53 = (ulong)(uint)fVar39;
  bVar8 = pbVar3[1] >> 4;
  bVar7 = pbVar3[1] & 0xf;
  bVar10 = pbVar3[2] >> 4;
  fVar49 = fVar34 - (float)(byte)(bVar4 * bVar4) * fVar28;
  lVar13 = CONCAT44(fVar49,fVar48);
  fVar47 = fVar47 - (float)(byte)(bVar5 * bVar5) * fVar24;
  fVar50 = fVar25 - (float)(byte)(bVar9 * bVar9) * fVar30;
  uVar52 = (ulong)(uint)fVar50;
  fVar32 = fVar32 + (float)(byte)(bVar8 * bVar8) * fVar28;
  lVar51 = CONCAT44(fVar32,fVar46);
  bVar4 = pbVar3[2] & 0xf;
  fVar33 = fVar33 + (float)(byte)(bVar10 * bVar10) * fVar30;
  fVar34 = fVar34 - (float)(byte)(bVar7 * bVar7) * fVar28;
  lVar20 = CONCAT44(fVar34,fVar47);
  fVar25 = fVar25 - (float)(byte)(bVar4 * bVar4) * fVar30;
  fVar30 = (float)param_3[4];
  iVar43 = -(uint)(fVar37 <= fVar30);
  fVar37 = (float)((ulong)param_3[4] >> 0x20);
  iVar44 = -(uint)(fVar38 <= fVar37);
  iVar45 = -(uint)(fVar39 <= (float)param_3[5]);
  fVar24 = (float)param_3[2];
  iVar40 = -(uint)(fVar24 <= fVar48);
  fVar28 = (float)((ulong)param_3[2] >> 0x20);
  iVar41 = -(uint)(fVar28 <= fVar49);
  iVar42 = -(uint)((float)param_3[3] <= fVar50);
  iVar23 = -(uint)(fVar24 <= fVar47);
  iVar27 = -(uint)(fVar28 <= fVar34);
  iVar29 = -(uint)((float)param_3[3] <= fVar25);
  iVar31 = -(uint)(fVar46 <= fVar30);
  iVar35 = -(uint)(fVar32 <= fVar37);
  iVar36 = -(uint)(fVar33 <= (float)param_3[5]);
  bVar7 = CONCAT13((byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar41 >> 0x18) &
                   (byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar40 >> 0x18) &
                   (byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar42 >> 0x18),
                   CONCAT12((byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar41 >> 0x10) &
                            (byte)((uint)iVar43 >> 0x10) & (byte)((uint)iVar40 >> 0x10) &
                            (byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar42 >> 0x10),
                            CONCAT11((byte)((uint)iVar44 >> 8) & (byte)((uint)iVar41 >> 8) &
                                     (byte)((uint)iVar43 >> 8) & (byte)((uint)iVar40 >> 8) &
                                     (byte)((uint)iVar45 >> 8) & (byte)((uint)iVar42 >> 8),
                                     (byte)iVar44 & (byte)iVar41 & (byte)iVar43 & (byte)iVar40 &
                                     (byte)iVar45 & (byte)iVar42))) != 0 |
          (CONCAT13((byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                    (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar23 >> 0x18) &
                    (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar29 >> 0x18),
                    CONCAT12((byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                             (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar23 >> 0x10) &
                             (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar29 >> 0x10),
                             CONCAT11((byte)((uint)iVar35 >> 8) & (byte)((uint)iVar27 >> 8) &
                                      (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar23 >> 8) &
                                      (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar29 >> 8),
                                      (byte)iVar35 & (byte)iVar27 & (byte)iVar31 & (byte)iVar23 &
                                      (byte)iVar36 & (byte)iVar29))) != 0) << 1;
  uVar16 = uVar2 & 0xffffffff;
  if (bVar7 != 1) {
    if (bVar7 == 3) {
      iVar23 = (int)param_2[1];
      lVar21 = (long)iVar23;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar23) {
        FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar21 + 1);
        iVar23 = (int)param_2[1];
      }
      plVar14 = (long *)(*param_2 + (long)iVar23 * 0x30);
      *(int *)(param_2 + 1) = (int)(lVar21 + 1);
      *(int *)(plVar14 + 4) = (int)uVar1;
      uVar16 = uVar2 & 0xffffffff;
      plVar14[1] = (ulong)(uint)fVar33;
      *plVar14 = lVar51;
      plVar14[3] = (ulong)(uint)fVar25;
      plVar14[2] = lVar20;
    }
    else if (bVar7 == 2) {
      uVar16 = uVar1 & 0xffffffff;
      pbVar22 = pbVar3;
      lVar13 = lVar20;
      uVar52 = (ulong)(uint)fVar25;
      lVar17 = lVar51;
      uVar53 = (ulong)(uint)fVar33;
    }
    else {
LAB_02ec27e0:
      if ((int)param_2[1] <= (int)lVar12) {
        return;
      }
      iVar23 = (int)param_2[1] + -1;
      *(int *)(param_2 + 1) = iVar23;
      plVar14 = (long *)(*param_2 + (long)iVar23 * 0x30);
      uVar16 = (ulong)(int)plVar14[4];
      pbVar22 = (byte *)((long)param_1 + uVar16 * 5 + *param_1);
      lVar13 = plVar14[2];
      uVar52 = plVar14[3];
      lVar17 = *plVar14;
      uVar53 = plVar14[1];
    }
  }
  goto LAB_02ec2640;
}


