/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020089ac; name: FUN_020089ac
 */


void FUN_020089ac(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  int iStack_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int iStack_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int local_c0;
  int local_bc;
  int local_b8 [18];
  int local_68;
  int iStack_64;
  
  local_68 = *param_2;
  iStack_64 = param_2[1];
  FUN_02008514(param_1,&local_68);
  if ((((*(long *)(param_1 + 0x48) == 0) || (iVar12 = *param_2, iVar12 < 0)) ||
      (*(int *)(param_1 + 0x38) <= iVar12)) ||
     (((iVar11 = param_2[1], iVar11 < 0 || (*(int *)(param_1 + 0x3c) <= iVar11)) ||
      (lVar6 = *(long *)(*(long *)(param_1 + 0x48) +
                        (long)(iVar12 + *(int *)(param_1 + 0x38) * iVar11) * 8), lVar6 == 0)))) {
    return;
  }
  pauVar10 = *(undefined1 (**) [16])(lVar6 + 0x20);
joined_r0x02008a2c:
  if (pauVar10 == (undefined1 (*) [16])0x0) {
    return;
  }
  auVar14 = *pauVar10;
  fStack_108 = auVar14._8_4_;
  fStack_104 = auVar14._12_4_;
  local_110 = auVar14._0_4_;
  fStack_10c = auVar14._4_4_;
  if ((char)pauVar10[1][0] < '\0') {
    auVar14 = NEON_ext(auVar14,auVar14,8,1);
    fStack_10c = *(float *)pauVar10[2];
    fStack_108 = auVar14._0_4_;
    fStack_104 = 0.0;
  }
  lVar6 = 0;
  iVar12 = 0;
  local_d0 = 0;
  iStack_cc = 0;
  iVar11 = 0;
  local_d8 = 0;
  local_c8 = 0;
  iStack_c4 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_148 = 0;
  local_d4 = 0;
  local_e8 = 0;
  iStack_e4 = 0;
  local_e0 = 0;
  local_dc = 0;
  iStack_f4 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_120 = 0;
  local_118 = 0;
  local_130 = 0;
  local_128 = 0;
  local_140 = 0;
  local_138 = 0;
  local_b8[0xc] = 0;
  local_b8[0xd] = 0;
  local_b8[0xe] = 0;
  local_b8[0xf] = 0;
  local_b8[8] = 0;
  local_b8[9] = 0;
  local_b8[10] = 0;
  local_b8[0xb] = 0;
  local_b8[4] = 0;
  local_b8[5] = 0;
  local_b8[6] = 0;
  local_b8[7] = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  do {
    if (((*(long *)(param_1 + 0x48) != 0) &&
        (iVar1 = *param_2 + *(int *)((long)&DAT_03d60754 + lVar6), -1 < iVar1)) &&
       (((iVar1 < *(int *)(param_1 + 0x38) &&
         (((iVar2 = param_2[1] + *(int *)((long)&DAT_03d60758 + lVar6), -1 < iVar2 &&
           (iVar2 < *(int *)(param_1 + 0x3c))) &&
          (lVar4 = *(long *)(*(long *)(param_1 + 0x48) +
                            (long)(iVar1 + *(int *)(param_1 + 0x38) * iVar2) * 8), lVar4 != 0)))) &&
        (pauVar5 = (undefined1 (*) [16])FUN_0200892c(lVar4,pauVar10),
        pauVar5 != (undefined1 (*) [16])0x0)))) {
      auVar14 = *pauVar5;
      if ((char)pauVar5[1][0] < '\0') {
        auVar15 = NEON_ext(auVar14,auVar14,8,1);
        auVar14._4_4_ = *(undefined4 *)pauVar5[2];
        auVar14._8_4_ = auVar15._0_4_;
        auVar14._12_4_ = 0;
      }
      fVar13 = auVar14._0_4_ - local_110;
      fVar16 = auVar14._4_4_ - fStack_10c;
      fVar17 = auVar14._8_4_ - fStack_108;
      fVar18 = auVar14._12_4_ - fStack_104;
      fVar13 = fVar13 * fVar13;
      fVar16 = fVar16 * fVar16;
      fVar17 = fVar17 * fVar17;
      fVar18 = fVar18 * fVar18;
      auVar15._0_4_ = fVar13 + fVar16;
      auVar15._4_4_ = fVar17 + fVar18;
      auVar15._8_4_ = fVar13 + fVar16;
      auVar15._12_4_ = fVar17 + fVar18;
      auVar14 = NEON_ext(auVar15,auVar15,4,1);
      if (auVar14._0_4_ + auVar14._4_4_ < 81.0) {
        uVar7 = *(ulong *)(pauVar5[1] + 8);
        uVar8 = uVar7 >> 0x10;
        if ((uVar8 & 1) != 0) {
          iVar12 = iVar11 + 1;
          iVar11 = iVar11 + 1;
        }
        iVar1 = (int)local_148;
        if ((uVar8 & 4) != 0) {
          iStack_f4 = (int)local_148 + 1;
          iVar1 = (int)local_148 + 1;
        }
        if ((uVar7 & 0x80000) != 0) {
          local_f0 = local_148._4_4_ + 1;
          local_148._4_4_ = local_148._4_4_ + 1;
        }
        local_148 = CONCAT44(local_148._4_4_,iVar1);
        iVar1 = (int)local_140;
        if ((uVar7 & 0x100000) != 0) {
          local_ec = (int)local_140 + 1;
          iVar1 = (int)local_140 + 1;
        }
        if ((uVar7 & 0x200000) != 0) {
          local_e8 = local_140._4_4_ + 1;
          local_140._4_4_ = local_140._4_4_ + 1;
        }
        local_140 = CONCAT44(local_140._4_4_,iVar1);
        iVar1 = (int)local_138;
        if ((uVar8 & 0x40) != 0) {
          iStack_e4 = (int)local_138 + 1;
          iVar1 = (int)local_138 + 1;
        }
        if ((uVar7 & 0x800000) != 0) {
          local_e0 = local_138._4_4_ + 1;
          local_138._4_4_ = local_138._4_4_ + 1;
        }
        local_138 = CONCAT44(local_138._4_4_,iVar1);
        iVar1 = (int)local_130;
        if ((uVar7 & 0x1000000) != 0) {
          local_dc = (int)local_130 + 1;
          iVar1 = (int)local_130 + 1;
        }
        if ((uVar7 & 0x2000000) != 0) {
          local_d8 = local_130._4_4_ + 1;
          local_130._4_4_ = local_130._4_4_ + 1;
        }
        local_130 = CONCAT44(local_130._4_4_,iVar1);
        iVar1 = (int)local_128;
        if ((uVar7 & 0x4000000) != 0) {
          local_d0 = (int)local_128 + 1;
          iVar1 = (int)local_128 + 1;
        }
        if ((uVar7 & 0x8000000) != 0) {
          iStack_cc = local_128._4_4_ + 1;
          local_128._4_4_ = local_128._4_4_ + 1;
        }
        local_128 = CONCAT44(local_128._4_4_,iVar1);
        iVar1 = (int)local_120;
        if ((uVar7 & 0x10000000) != 0) {
          local_c8 = (int)local_120 + 1;
          iVar1 = (int)local_120 + 1;
        }
        if ((uVar7 & 0x20000000) != 0) {
          iStack_c4 = local_120._4_4_ + 1;
          local_120._4_4_ = local_120._4_4_ + 1;
        }
        local_120 = CONCAT44(local_120._4_4_,iVar1);
        iVar1 = (int)local_118;
        if ((uVar8 & 0x4000) != 0) {
          local_c0 = (int)local_118 + 1;
          iVar1 = (int)local_118 + 1;
        }
        if ((uVar7 & 0x80000000) != 0) {
          local_bc = local_118._4_4_ + 1;
          local_118._4_4_ = local_118._4_4_ + 1;
        }
        local_d4 = local_d4 + 1;
        local_118 = CONCAT44(local_118._4_4_,iVar1);
      }
    }
    lVar6 = lVar6 + 0xc;
  } while (lVar6 != 0xf0);
  local_b8[3] = local_f0;
  local_b8[2] = iStack_f4;
  local_b8[5] = local_e8;
  local_b8[4] = local_ec;
  local_b8[7] = local_e0;
  local_b8[6] = iStack_e4;
  local_b8[9] = local_d8;
  local_b8[8] = local_dc;
  local_b8[0xb] = iStack_cc;
  local_b8[10] = local_d0;
  local_b8[0xd] = iStack_c4;
  local_b8[0xc] = local_c8;
  local_b8[0xf] = local_bc;
  local_b8[0xe] = local_c0;
  uVar8 = *(ulong *)(pauVar10[1] + 8);
  uVar7 = 0;
  uVar9 = 0;
  lVar6 = 0;
  do {
    uVar3 = 1 << (ulong)((uint)lVar6 & 0x1f);
    if (((uint)(uVar8 >> 0x10) & 0xffff & uVar3) != 0) {
      iVar12 = iVar12 + 1;
      local_b8[lVar6] = iVar12;
    }
    fVar13 = (float)iVar12 / (float)(local_d4 + 1);
    if (1.0 <= fVar13) {
      uVar9 = uVar9 | uVar3;
LAB_02008d8c:
      uVar7 = (ulong)((uint)uVar7 | uVar3);
    }
    else if (0.8 <= fVar13) goto LAB_02008d8c;
    if (lVar6 == 0xf) break;
    iVar12 = local_b8[lVar6 + 1];
    lVar6 = lVar6 + 1;
  } while( true );
  *(ulong *)(pauVar10[1] + 8) = uVar8 & 0xffffffff | (ulong)(uVar9 & 0xffff) << 0x20 | uVar7 << 0x30
  ;
  pauVar10 = *(undefined1 (**) [16])(pauVar10[2] + 8);
  goto joined_r0x02008a2c;
}


