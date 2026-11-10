/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031041c0; name: FUN_031041c0
 */


void FUN_031041c0(long param_1,undefined8 param_2,int *param_3)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  bool bVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float local_50 [4];
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    iVar21 = *param_3;
    iVar20 = param_3[1];
    if (iVar20 < 2) {
      iVar20 = 1;
    }
    iVar27 = 1;
    do {
      FUN_03103dfc(param_1,param_2,param_3,local_50);
      if (iVar20 == iVar27) {
        return;
      }
      iVar2 = iVar27 + 1;
      bVar17 = iVar27 < iVar21;
      iVar27 = iVar2;
    } while ((bVar17) || (local_50[0] == 0.0));
  }
  else {
    lVar19 = (long)*(int *)(param_1 + 0x20) + -1;
    lVar18 = *(long *)(param_1 + 0x18);
    lVar25 = lVar18 + lVar19 * 0x40;
    bVar5 = *(byte *)(lVar25 + 0x28);
    auVar28 = *(undefined1 (*) [16])(lVar25 + 0x10);
    if (bVar5 != 0xff) {
      bVar17 = (bVar5 & 1) != 0;
      iVar20 = 1;
      if (bVar17) {
        iVar20 = 2;
      }
      iVar21 = 1;
      if (!bVar17) {
        iVar21 = 2;
      }
      local_50[2] = auVar28._8_4_;
      fVar15 = local_50[2];
      local_50[3] = auVar28._12_4_;
      fVar16 = local_50[3];
      local_50[0] = auVar28._0_4_;
      fVar29 = local_50[0];
      local_50[1] = auVar28._4_4_;
      fVar14 = local_50[1];
      uVar22 = (iVar20 + ((int)(char)bVar5 >> 1)) % 3;
      uVar23 = (iVar21 + ((int)(char)bVar5 >> 1)) % 3;
      if (2 < uVar22) {
        uVar22 = 3;
      }
      local_50[uVar22] = *(float *)(lVar25 + 0x20) + local_50[uVar22];
      if (2 < uVar23) {
        uVar23 = 3;
      }
      local_50[uVar23] = *(float *)(lVar25 + 0x24) + local_50[uVar23];
      auVar28._0_4_ = fVar29 + (local_50[0] - fVar29) * 0.5;
      auVar28._4_4_ = fVar14 + (local_50[1] - fVar14) * 0.5;
      auVar28._8_4_ = fVar15 + (local_50[2] - fVar15) * 0.5;
      auVar28._12_4_ = fVar16 + (local_50[3] - fVar16) * 0.5;
    }
    puVar6 = (undefined8 *)(lVar18 + lVar19 * 0x40);
    puVar6[1] = auVar28._8_8_;
    *puVar6 = auVar28._0_8_;
    puVar13 = PTR_DAT_047d19e0;
    uVar24 = (ulong)(*(int *)(param_1 + 0x20) - 2);
    if (1 < *(int *)(param_1 + 0x20)) {
      lVar18 = uVar24 << 6;
      lVar25 = uVar24 + 1;
      do {
        lVar26 = *(long *)(param_1 + 0x18);
        lVar19 = lVar26 + lVar18;
        bVar5 = *(byte *)(lVar19 + 0x28);
        if (bVar5 == 0xff) {
          auVar28 = *(undefined1 (*) [16])(lVar19 + 0x10);
        }
        else {
          bVar17 = (bVar5 & 1) != 0;
          pauVar1 = (undefined1 (*) [12])(lVar19 + 0x10);
          fVar29 = (float)((ulong)*(undefined8 *)(lVar19 + 0x18) >> 0x20);
          auVar12 = *pauVar1;
          iVar20 = 1;
          if (bVar17) {
            iVar20 = 2;
          }
          iVar21 = 1;
          if (!bVar17) {
            iVar21 = 2;
          }
          local_50[2] = (float)*(undefined8 *)(lVar19 + 0x18);
          local_50[0] = (float)*(undefined8 *)*pauVar1;
          local_50[1] = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
          auVar9._12_4_ = fVar29;
          auVar9._0_12_ = *pauVar1;
          auVar7._12_4_ =
               (int)((ulong)*(undefined8 *)
                             (*(undefined1 (*) [12])
                               (puVar13 +
                               (ulong)(uint)(1 << (ulong)((int)((uint)bVar5 << 0x18) >> 0x19 & 0x1f)
                                            ) * 0x10) + 8) >> 0x20);
          auVar7._0_12_ =
               *(undefined1 (*) [12])
                (puVar13 +
                (ulong)(uint)(1 << (ulong)((int)((uint)bVar5 << 0x18) >> 0x19 & 0x1f)) * 0x10);
          auVar28 = auVar28 ^ (auVar28 ^ auVar9) & auVar7;
          iVar20 = (iVar20 + ((int)(char)bVar5 >> 1)) % 3;
          iVar21 = (iVar21 + ((int)(char)bVar5 >> 1)) % 3;
          pfVar4 = (float *)((ulong)local_50 | 0xc);
          if (iVar20 == 1) {
            pfVar4 = (float *)((ulong)local_50 | 4);
          }
          pfVar3 = (float *)((ulong)local_50 | 8);
          if (iVar20 != 2) {
            pfVar3 = pfVar4;
          }
          pfVar4 = local_50;
          if (iVar20 != 0) {
            pfVar4 = pfVar3;
          }
          local_50[3] = fVar29;
          *pfVar4 = *(float *)(lVar19 + 0x20) + *pfVar4;
          pfVar4 = (float *)((ulong)local_50 | 0xc);
          if (iVar21 == 1) {
            pfVar4 = (float *)((ulong)local_50 | 4);
          }
          pfVar3 = (float *)((ulong)local_50 | 8);
          if (iVar21 != 2) {
            pfVar3 = pfVar4;
          }
          pfVar4 = local_50;
          if (iVar21 != 0) {
            pfVar4 = pfVar3;
          }
          *pfVar4 = *(float *)(lVar19 + 0x24) + *pfVar4;
          auVar8._4_4_ = local_50[1];
          auVar8._0_4_ = local_50[0];
          auVar8._8_4_ = local_50[2];
          auVar8._12_4_ = local_50[3];
          auVar11._4_4_ = -(uint)(auVar28._4_4_ < local_50[1]);
          auVar11._0_4_ = -(uint)(auVar28._0_4_ < local_50[0]);
          auVar11._8_4_ = -(uint)(auVar28._8_4_ < local_50[2]);
          auVar11._12_4_ = -(uint)(auVar28._12_4_ < local_50[3]);
          auVar10._12_4_ = fVar29;
          auVar10._0_12_ = auVar12;
          auVar28 = NEON_fmax(auVar10,auVar28 ^ (auVar28 ^ auVar8) & ~auVar11,4);
        }
        lVar25 = lVar25 + -1;
        puVar6 = (undefined8 *)(lVar26 + lVar18);
        puVar6[1] = auVar28._8_8_;
        *puVar6 = auVar28._0_8_;
        lVar18 = lVar18 + -0x40;
      } while (0 < lVar25);
    }
    iVar21 = param_3[2];
    iVar20 = param_3[3];
    if (iVar20 < 2) {
      iVar20 = 1;
    }
    iVar27 = 1;
    do {
      FUN_03103dfc(param_1,param_2,param_3,local_50);
      if (iVar20 == iVar27) break;
      iVar2 = iVar27 + 1;
      bVar17 = iVar27 < iVar21;
      iVar27 = iVar2;
    } while ((bVar17) || (local_50[0] == 0.0));
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  return;
}


