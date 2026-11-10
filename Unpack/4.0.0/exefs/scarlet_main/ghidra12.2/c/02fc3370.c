/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fc3370; name: FUN_02fc3370
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fc3370(long *param_1,undefined8 *param_2,long param_3,ulong param_4,long param_5,
                 uint param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  float *pfVar7;
  long lVar8;
  int iVar9;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar15 [16];
  uint local_38 [2];
  
  lVar5 = *(long *)(*param_1 + 0x78);
  *(uint *)(param_1 + 3) = param_6;
  if (*(char *)(lVar5 + 0x18) == '\x15') {
    plVar6 = (long *)(lVar5 + (ulong)(param_6 >> 0x1d) * 8 + 0x48);
    lVar8 = *plVar6;
    lVar5 = 0;
    if (lVar8 != 0) {
      lVar5 = lVar8 + (long)plVar6;
    }
  }
  param_1[4] = lVar5;
  if ((*(char *)(lVar5 + 0x19) == '\x03') || ((*(byte *)(lVar5 + 0x1a) >> 3 & 1) != 0)) {
    lVar5 = 0;
    if ((*(byte *)(param_3 + 0x95) & 4) != 0) {
      lVar5 = param_3 + 0xc0;
    }
    local_38[0] = param_6;
    if ((lVar5 == 0) || ((param_4 & 1) == 0)) {
      pfVar7 = (float *)param_1[6];
      param_2[0x30] = 0;
      param_2[10] = 0;
      *(undefined4 *)(param_2 + 0x2b) = 0;
      param_2[0x2c] = 8;
      uVar4 = *(undefined8 *)pfVar7;
      param_2[1] = *(undefined8 *)(pfVar7 + 2);
      *param_2 = uVar4;
      uVar4 = *(undefined8 *)(pfVar7 + 4);
      param_2[3] = *(undefined8 *)(pfVar7 + 6);
      param_2[2] = uVar4;
      uVar4 = *(undefined8 *)(pfVar7 + 8);
      param_2[5] = *(undefined8 *)(pfVar7 + 10);
      param_2[4] = uVar4;
      uVar4 = *(undefined8 *)(pfVar7 + 0xc);
      param_2[7] = *(undefined8 *)(pfVar7 + 0xe);
      param_2[6] = uVar4;
      uVar4 = *(undefined8 *)(pfVar7 + 0x10);
      param_2[9] = *(undefined8 *)(pfVar7 + 0x12);
      param_2[8] = uVar4;
      auVar10 = NEON_fmov(0x3f800000,4);
      param_2[0x2f] = auVar10._8_8_;
      param_2[0x2e] = auVar10._0_8_;
      auVar11._0_4_ = ABS((float)DAT_03cab620 - *pfVar7);
      auVar11._4_4_ = ABS((float)((ulong)DAT_03cab620 >> 0x20) - pfVar7[1]);
      auVar11._8_4_ = ABS((float)DAT_03cab628 - pfVar7[2]);
      auVar11._12_4_ = ABS((float)((ulong)DAT_03cab628 >> 0x20) - pfVar7[3]);
      auVar15._0_4_ = ABS((float)_DAT_03cabe60 - (float)*(undefined8 *)(pfVar7 + 4));
      auVar15._4_4_ =
           ABS((float)((ulong)_DAT_03cabe60 >> 0x20) -
               (float)((ulong)*(undefined8 *)(pfVar7 + 4) >> 0x20));
      auVar15._8_4_ = ABS((float)_UNK_03cabe68 - (float)*(undefined8 *)(pfVar7 + 6));
      auVar15._12_4_ =
           ABS((float)((ulong)_UNK_03cabe68 >> 0x20) -
               (float)((ulong)*(undefined8 *)(pfVar7 + 6) >> 0x20));
      fVar1 = ABS((float)((ulong)_DAT_03caa5b0 >> 0x20) -
                  (float)((ulong)*(undefined8 *)(pfVar7 + 8) >> 0x20));
      fVar2 = ABS((float)_UNK_03caa5b8 - (float)*(undefined8 *)(pfVar7 + 10));
      fVar3 = ABS((float)((ulong)_UNK_03caa5b8 >> 0x20) -
                  (float)((ulong)*(undefined8 *)(pfVar7 + 10) >> 0x20));
      auVar11 = NEON_fmax(auVar11,auVar15,4);
      auVar10[4] = SUB41(fVar1,0);
      auVar10._0_4_ = ABS((float)_DAT_03caa5b0 - (float)*(undefined8 *)(pfVar7 + 8));
      auVar10[5] = (char)((uint)fVar1 >> 8);
      auVar10[6] = (char)((uint)fVar1 >> 0x10);
      auVar10[7] = (char)((uint)fVar1 >> 0x18);
      auVar10[8] = SUB41(fVar2,0);
      auVar10[9] = (char)((uint)fVar2 >> 8);
      auVar10[10] = (char)((uint)fVar2 >> 0x10);
      auVar10[0xb] = (char)((uint)fVar2 >> 0x18);
      auVar10[0xc] = SUB41(fVar3,0);
      auVar10[0xd] = (char)((uint)fVar3 >> 8);
      auVar10[0xe] = (char)((uint)fVar3 >> 0x10);
      auVar10[0xf] = (char)((uint)fVar3 >> 0x18);
      auVar10 = NEON_fmax(auVar11,auVar10,4);
      iVar9 = -(uint)(auVar10._0_4_ <= 1.1920929e-07);
      iVar12 = -(uint)(auVar10._4_4_ <= 1.1920929e-07);
      iVar13 = -(uint)(auVar10._8_4_ <= 1.1920929e-07);
      if (CONCAT13((byte)((uint)iVar12 >> 0x18) & (byte)((uint)iVar9 >> 0x18) &
                   (byte)((uint)iVar13 >> 0x18),
                   CONCAT12((byte)((uint)iVar12 >> 0x10) & (byte)((uint)iVar9 >> 0x10) &
                            (byte)((uint)iVar13 >> 0x10),
                            CONCAT11((byte)((uint)iVar12 >> 8) & (byte)((uint)iVar9 >> 8) &
                                     (byte)((uint)iVar13 >> 8),
                                     (byte)iVar12 & (byte)iVar9 & (byte)iVar13))) != 0) {
        *(undefined4 *)(param_2 + 0x2c) = 0xc;
        iVar9 = -(uint)(ABS(pfVar7[0xc]) <= 1.1920929e-07);
        iVar12 = -(uint)(ABS(pfVar7[0xd]) <= 1.1920929e-07);
        iVar13 = -(uint)(ABS(pfVar7[0xe]) <= 1.1920929e-07);
        if (CONCAT13((byte)((uint)iVar12 >> 0x18) & (byte)((uint)iVar9 >> 0x18) &
                     (byte)((uint)iVar13 >> 0x18),
                     CONCAT12((byte)((uint)iVar12 >> 0x10) & (byte)((uint)iVar9 >> 0x10) &
                              (byte)((uint)iVar13 >> 0x10),
                              CONCAT11((byte)((uint)iVar12 >> 8) & (byte)((uint)iVar9 >> 8) &
                                       (byte)((uint)iVar13 >> 8),
                                       (byte)iVar12 & (byte)iVar9 & (byte)iVar13))) != 0) {
          *(undefined4 *)(param_2 + 0x2c) = 0xd;
        }
      }
      *(undefined2 *)(param_2 + 0x17f) = 0xffff;
      (**(code **)(*(long *)PTR_DAT_047d19f0 +
                   (ulong)*(byte *)(*(long *)(*param_1 + 0x78) + 0x18) * 0x200 + 0xb8))
                (*(long *)(*param_1 + 0x78),local_38,1,param_2);
      if ((*(byte *)(param_2 + 0x2c) >> 4 & 1) == 0) {
        lVar5 = param_2[0x30];
      }
      else {
        lVar5 = FUN_02ef6ac4(param_2,0,param_5);
      }
      param_1[5] = lVar5;
      param_1[6] = (long)param_2;
    }
    else {
      FUN_02ee49cc(param_5,lVar5,lVar5 + 0x10,lVar5 + 0x20,lVar5 + 0x30);
      *(undefined4 *)(param_5 + 0x20) = *(undefined4 *)(lVar5 + 0x3c);
      iVar9 = -(uint)(*(float *)(lVar5 + 0x20) == *(float *)(lVar5 + 0x30));
      iVar12 = -(uint)(*(float *)(lVar5 + 0x24) == *(float *)(lVar5 + 0x34));
      iVar13 = -(uint)(*(float *)(lVar5 + 0x28) == *(float *)(lVar5 + 0x38));
      iVar14 = -(uint)(*(float *)(lVar5 + 0x2c) == *(float *)(lVar5 + 0x3c));
      if (CONCAT13((byte)((uint)iVar12 >> 0x18) & (byte)((uint)iVar9 >> 0x18) &
                   (byte)((uint)iVar13 >> 0x18) & (byte)((uint)iVar14 >> 0x18),
                   CONCAT12((byte)((uint)iVar12 >> 0x10) & (byte)((uint)iVar9 >> 0x10) &
                            (byte)((uint)iVar13 >> 0x10) & (byte)((uint)iVar14 >> 0x10),
                            CONCAT11((byte)((uint)iVar12 >> 8) & (byte)((uint)iVar9 >> 8) &
                                     (byte)((uint)iVar13 >> 8) & (byte)((uint)iVar14 >> 8),
                                     (byte)iVar12 & (byte)iVar9 & (byte)iVar13 & (byte)iVar14))) !=
          0) {
        iVar9 = *(int *)(param_5 + 0x40);
        lVar5 = 0;
        if (iVar9 != 0) {
          lVar5 = (long)iVar9 + param_5 + 0x40;
        }
        *(undefined8 *)(lVar5 + 0x24) = *(undefined8 *)(lVar5 + 0x18);
        *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)(lVar5 + 0x20);
        *(undefined4 *)(param_5 + 0x44) = 3;
      }
      param_1[5] = param_5;
    }
  }
  else {
    param_1[5] = lVar5;
  }
  return;
}


