/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb5d94; name: FUN_00cb5d94
 */


void FUN_00cb5d94(long *param_1,long *param_2,float *param_3,undefined1 param_4,long param_5)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ushort *puVar7;
  ushort uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  float fVar13;
  int iVar14;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar21;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float local_60;
  undefined4 uStack_5c;
  ulong local_48;
  int local_28;
  int local_24;
  
  param_1[2] = 1;
  *(undefined4 *)(param_1 + 3) = 0x4030e;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar1 = PTR_DAT_047e3498 + 0x10;
  param_1[9] = (long)param_2;
  *param_1 = (long)puVar1;
  param_1[1] = 0xffffffff;
  if ((param_2 == (long *)0x0) || (param_2[1] == 0)) {
    uVar8 = 0xc;
  }
  else {
    plVar10 = param_2 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = *plVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar8 = *(ushort *)((long)param_1 + 0x1a) | 8;
  }
  plVar10 = param_1 + 10;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  lVar9 = 0;
  if (param_5 != 0) {
    lVar9 = param_5 - (long)plVar10;
  }
  param_1[10] = lVar9;
  *(ushort *)((long)param_1 + 0x1a) = uVar8;
  *(undefined1 *)((long)param_1 + 0x19) = param_4;
  auVar30._0_8_ = CONCAT44(ABS(param_3[1]),ABS(*param_3));
  auVar30._8_4_ = ABS(param_3[2]);
  auVar30._12_4_ = 0x3f800000;
  param_1[0x11] = auVar30._8_8_;
  param_1[0x10] = auVar30._0_8_;
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0xb,(uint *)((long)param_1 + 0x5c));
  auVar30 = NEON_fmov(0x3f800000,4);
  iVar21 = -(uint)(*(float *)(param_1 + 0x10) == 0.0);
  iVar27 = -(uint)(*(float *)((long)param_1 + 0x84) == 0.0);
  iVar28 = -(uint)(*(float *)(param_1 + 0x11) == 0.0);
  iVar29 = -(uint)(*(float *)((long)param_1 + 0x8c) == 0.0);
  fVar13 = auVar30._0_4_ / *(float *)(param_1 + 0x10);
  fVar18 = auVar30._4_4_ / *(float *)((long)param_1 + 0x84);
  fVar19 = auVar30._8_4_ / *(float *)(param_1 + 0x11);
  fVar20 = auVar30._12_4_ / *(float *)((long)param_1 + 0x8c);
  iVar14 = (int)param_1[0xb] + -1;
  *(byte *)(param_1 + 0xf) = SUB41(fVar19,0) & ~(byte)iVar28;
  *(byte *)((long)param_1 + 0x79) = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar28 >> 8);
  *(byte *)((long)param_1 + 0x7a) = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
  *(byte *)((long)param_1 + 0x7b) = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
  *(byte *)((long)param_1 + 0x7c) = SUB41(fVar20,0) & ~(byte)iVar29;
  *(byte *)((long)param_1 + 0x7d) = (byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar29 >> 8);
  *(byte *)((long)param_1 + 0x7e) = (byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
  *(byte *)((long)param_1 + 0x7f) = (byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
  *(byte *)(param_1 + 0xe) = SUB41(fVar13,0) & ~(byte)iVar21;
  *(byte *)((long)param_1 + 0x71) = (byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar21 >> 8);
  *(byte *)((long)param_1 + 0x72) = (byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
  *(byte *)((long)param_1 + 0x73) = (byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
  *(byte *)((long)param_1 + 0x74) = SUB41(fVar18,0) & ~(byte)iVar27;
  *(byte *)((long)param_1 + 0x75) = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar27 >> 8);
  *(byte *)((long)param_1 + 0x76) = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
  *(byte *)((long)param_1 + 0x77) = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
  iVar27 = LZCOUNT(iVar14);
  iVar21 = *(int *)((long)param_1 + 0x5c) + -1;
  *(int *)(param_1 + 0xb) = iVar14;
  *(int *)((long)param_1 + 0x5c) = iVar21;
  iVar14 = LZCOUNT(iVar21);
  *(int *)(param_1 + 0xc) = 0x20 - iVar27;
  *(int *)((long)param_1 + 100) = 0x20 - iVar14;
  *(char *)((long)param_1 + 0x1c) = 'B' - ((char)iVar14 + (char)iVar27);
  (**(code **)(*param_2 + 0x28))(param_2,0,0,&local_60,&local_24,&local_48);
  lVar9 = param_1[10];
  *(undefined1 *)(param_1 + 0xd) = 0;
  auVar22._0_8_ =
       CONCAT44(local_60 * *(float *)((long)param_1 + 0x84),*(float *)(param_1 + 0x10) * 0.0);
  auVar22._8_4_ = *(float *)(param_1 + 0x11) * 0.0;
  auVar22._12_4_ = *(float *)((long)param_1 + 0x8c) * 0.0;
  auVar26._0_8_ =
       CONCAT44(*(float *)((long)param_1 + 0x84) * local_60,
                *(float *)(param_1 + 0x10) * (float)(int)param_1[0xb]);
  auVar26._8_4_ = *(float *)(param_1 + 0x11) * (float)*(int *)((long)param_1 + 0x5c);
  auVar26._12_4_ = *(float *)((long)param_1 + 0x8c) * 0.0;
  param_1[0x13] = auVar22._8_8_;
  param_1[0x12] = auVar22._0_8_;
  param_1[0x15] = auVar26._8_8_;
  param_1[0x14] = auVar26._0_8_;
  if ((lVar9 == 0) || (lVar11 = lVar9 + (long)plVar10, lVar11 == 0)) {
    if ((0 < (int)param_1[0xb]) && (0 < *(int *)((long)param_1 + 0x5c))) {
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_24,&local_28);
      FUN_02eb2c30(plVar12,local_24 + -1,local_28 + -1,0,0,local_24 + -1,local_28 + -1,&local_60,
                   &local_48);
      auVar15._4_4_ = uStack_5c;
      auVar15._0_4_ = local_60;
      auVar15._8_8_ = 0;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = local_48;
      lVar11 = FUN_02eb3170(auVar15,auVar23,plVar12,2);
      lVar9 = 0;
      if (lVar11 != 0) {
        lVar9 = lVar11 - (long)plVar10;
      }
      param_1[10] = lVar9;
    }
  }
  else if (*(long *)(lVar11 + 8) != 0) {
    plVar12 = (long *)(lVar11 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar9 = *plVar10;
  }
  if ((lVar9 != 0) && (lVar9 = lVar9 + (long)plVar10, lVar9 != 0)) {
    uVar3 = *(uint *)(param_1 + 0xb);
    uVar4 = *(uint *)((long)param_1 + 0x5c);
    auVar16._0_4_ = (float)LZCOUNT((int)(float)(int)(uVar3 - 1));
    auVar16._4_4_ = (float)LZCOUNT((int)(float)(int)(uVar3 - 1));
    auVar16._8_8_ = 0;
    auVar24._0_4_ = (float)LZCOUNT((int)(float)(int)(uVar4 - 1));
    auVar24._4_4_ = (float)LZCOUNT((int)(float)(int)(uVar4 - 1));
    auVar24._8_8_ = 0;
    uVar2 = (uint)auVar16._0_4_;
    if ((uint)auVar24._0_4_ <= (uint)auVar16._0_4_) {
      uVar2 = (uint)auVar24._0_4_;
    }
    if (*(int *)(lVar9 + 0x50) < (int)(0x20 - uVar2)) {
      iVar14 = 0x1f - (*(int *)(lVar9 + 0x50) + uVar2);
      plVar10 = (long *)(lVar9 + 0x20);
      lVar11 = *plVar10;
      if ((*(short *)((long)plVar10 + (long)iVar14 * 0x18 + lVar11 + 0x10) != 0) &&
         (*(short *)((long)plVar10 + (long)iVar14 * 0x18 + lVar11 + 0x12) != 0)) {
        plVar10 = (long *)((long)plVar10 + (long)iVar14 * 0x18 + lVar11);
        puVar7 = (ushort *)(*plVar10 + (long)plVar10);
        auVar25._2_2_ = 0;
        auVar25._0_2_ = *puVar7;
        auVar25._4_2_ = puVar7[1];
        auVar25._6_2_ = 0;
        auVar25._8_2_ = puVar7[2];
        auVar25._10_2_ = 0;
        auVar25._12_2_ = puVar7[3];
        auVar25._14_2_ = 0;
        auVar17._2_2_ = 0;
        auVar17._0_2_ = puVar7[4];
        auVar17._4_2_ = puVar7[5];
        auVar17._6_2_ = 0;
        auVar17._8_2_ = puVar7[6];
        auVar17._10_2_ = 0;
        auVar17._12_2_ = puVar7[7];
        auVar17._14_2_ = 0;
        auVar26 = NEON_ucvtf(auVar25,4);
        auVar30 = NEON_ucvtf(auVar17,4);
        fVar13 = *(float *)(lVar9 + 0x40);
        fVar18 = (float)*(undefined8 *)(lVar9 + 0x30);
        auVar24._0_4_ = fVar18 + auVar26._0_4_ * fVar13;
        fVar19 = (float)((ulong)*(undefined8 *)(lVar9 + 0x30) >> 0x20);
        auVar24._4_4_ = fVar19 + auVar26._4_4_ * fVar13;
        fVar20 = (float)*(undefined8 *)(lVar9 + 0x38);
        auVar24._8_4_ = fVar20 + auVar26._8_4_ * fVar13;
        fVar31 = (float)((ulong)*(undefined8 *)(lVar9 + 0x38) >> 0x20);
        auVar24._12_4_ = fVar31 + auVar26._12_4_ * fVar13;
        auVar16._0_4_ = fVar18 + auVar30._0_4_ * fVar13;
        auVar16._4_4_ = fVar19 + auVar30._4_4_ * fVar13;
        auVar16._8_4_ = fVar20 + auVar30._8_4_ * fVar13;
        auVar16._12_4_ = fVar31 + auVar30._12_4_ * fVar13;
      }
      fVar18 = (float)NEON_fminnmv(auVar24,4);
      fVar13 = (float)NEON_fmaxnmv(auVar16,4);
      param_1[0x13] = param_1[0x13];
      param_1[0x12] = CONCAT44(fVar18 * *(float *)((long)param_1 + 0x84),(int)param_1[0x12]);
      param_1[0x15] = param_1[0x15];
      param_1[0x14] = CONCAT44(fVar13 * *(float *)((long)param_1 + 0x84),(int)param_1[0x14]);
    }
    else {
      FUN_02eb2c30(param_1[9],uVar3,uVar4,uVar3 & (int)uVar3 >> 0x1f,uVar4 & (int)uVar4 >> 0x1f,
                   uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU),
                   uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU),&local_60,&local_48);
      *(float *)((long)param_1 + 0x94) = *(float *)((long)param_1 + 0x84) * local_60;
      *(float *)((long)param_1 + 0xa4) = *(float *)((long)param_1 + 0x84) * (float)local_48;
    }
  }
  return;
}


