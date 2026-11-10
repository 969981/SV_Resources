/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03167250; name: FUN_03167250
 */


/* WARNING: Removing unreachable block (ram,0x0316781c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_03167250(long param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined2 uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined *puVar18;
  void *pvVar19;
  void *pvVar20;
  bool bVar21;
  bool bVar22;
  int *piVar23;
  int iVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  int *piVar30;
  int *piVar31;
  int *piVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  int iVar37;
  uint uVar38;
  float fVar39;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar46;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar47 [16];
  float fVar51;
  float fVar52;
  float fVar54;
  undefined1 auVar53 [16];
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  undefined1 uVar61;
  byte bVar62;
  undefined1 uVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  int iVar73;
  float fVar74;
  int iVar75;
  float fVar76;
  int iVar77;
  float fVar78;
  int iVar79;
  undefined1 auVar80 [16];
  void *local_c0;
  undefined8 local_b8;
  long local_b0;
  void *local_a8;
  ulong local_a0;
  int *local_98;
  undefined8 local_90;
  long local_88;
  int *local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  
  uVar35 = param_3 - (long)param_2;
  iVar37 = (int)(uVar35 >> 4);
  local_98 = (int *)0x0;
  local_90 = 0x8000000000000000;
  lVar5 = tpidr_el0;
  lVar26 = *(long *)(lVar5 + 0x1000b8);
  if (lVar26 == 0) {
    lVar26 = FUN_00e5d3b4();
    *(long *)(lVar5 + 0x1000b8) = lVar26;
  }
  uVar25 = iVar37 * 5 + 5;
  local_88 = *(long *)(*(long *)(lVar26 + 0x3d0) + 0x10);
  if (*(long *)(local_88 + 8) != 0) {
    local_88 = 0;
  }
  local_78 = -(ulong)(uVar25 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar25 << 2;
  local_68 = local_78;
  if (local_88 == 0) {
    local_80 = (int *)(**(code **)PTR_DAT_047d1a08)(1,&local_68,0x40);
  }
  else {
    local_c0 = (void *)(local_78 + 0x3f & 0xffffffffffffffc0);
    if (local_c0 <= *(void **)(local_88 + 0x28)) {
      local_80 = *(int **)(local_88 + 0x38);
      if ((ulong)((long)local_c0 + (long)local_80) <= *(ulong *)(local_88 + 0x40)) {
        *(long *)(local_88 + 0x38) = (long)local_c0 + (long)local_80;
        goto LAB_0316732c;
      }
    }
    local_80 = (int *)FUN_031cf3b4(local_88,&local_c0);
  }
LAB_0316732c:
  puVar18 = PTR_DAT_047d19e0;
  uVar17 = _UNK_03cabb88;
  uVar10 = _DAT_03cabb80;
  local_90 = CONCAT44(uVar25,(uint)local_90) | 0x8000000000000000;
  local_98 = local_80;
  if (0 < iVar37) {
    auVar80 = NEON_fmov(0x3f800000,4);
    uVar28 = 0;
    uVar36 = (uVar35 >> 4) - 1;
    do {
      uVar34 = uVar28;
      pfVar4 = (float *)((long)param_2 +
                        (-(uVar36 >> 0x1f & 1) & 0xfffffff000000000 | (uVar36 & 0xffffffff) << 4));
      fVar8 = *pfVar4;
      fVar52 = pfVar4[1];
      fVar50 = pfVar4[2];
      fVar46 = (float)*(undefined8 *)(param_1 + 0x40);
      fVar48 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
      fVar49 = (float)*(undefined8 *)(param_1 + 0x48);
      fVar51 = (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
      fVar54 = (float)*(undefined8 *)(param_1 + 0x30);
      fVar74 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
      fVar76 = (float)*(undefined8 *)(param_1 + 0x38);
      fVar78 = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
      fVar39 = fVar46 + *(float *)(param_1 + 0x10) * fVar8 + *(float *)(param_1 + 0x20) * fVar52 +
               fVar54 * fVar50;
      fVar43 = fVar48 + *(float *)(param_1 + 0x14) * fVar8 + *(float *)(param_1 + 0x24) * fVar52 +
               fVar74 * fVar50;
      fVar44 = fVar49 + *(float *)(param_1 + 0x18) * fVar8 + *(float *)(param_1 + 0x28) * fVar52 +
               fVar76 * fVar50;
      fVar45 = fVar51 + *(float *)(param_1 + 0x1c) * fVar8 + *(float *)(param_1 + 0x2c) * fVar52 +
               fVar78 * fVar50;
      uVar9 = param_2[uVar34 * 2];
      fVar8 = (float)uVar9;
      fVar52 = (float)((ulong)uVar9 >> 0x20);
      fVar50 = (float)(param_2 + uVar34 * 2)[1];
      fVar46 = (fVar54 * fVar50 +
               *(float *)(param_1 + 0x20) * fVar52 + fVar46 + *(float *)(param_1 + 0x10) * fVar8) -
               fVar39;
      fVar48 = (fVar74 * fVar50 +
               *(float *)(param_1 + 0x24) * fVar52 + fVar48 + *(float *)(param_1 + 0x14) * fVar8) -
               fVar43;
      fVar49 = (fVar76 * fVar50 +
               *(float *)(param_1 + 0x28) * fVar52 + fVar49 + *(float *)(param_1 + 0x18) * fVar8) -
               fVar44;
      fVar50 = (fVar78 * fVar50 +
               *(float *)(param_1 + 0x2c) * fVar52 + fVar51 + *(float *)(param_1 + 0x1c) * fVar8) -
               fVar45;
      fVar51 = -fVar46;
      fVar8 = -fVar48;
      fVar52 = 16383.0 - fVar43;
      uVar61 = (undefined1)((uint)fVar52 >> 0x10);
      uVar63 = (undefined1)((uint)fVar52 >> 0x18);
      iVar24 = -(uint)(fVar51 == 0.0);
      bVar56 = (byte)((uint)iVar24 >> 8);
      bVar57 = (byte)((uint)iVar24 >> 0x10);
      bVar58 = (byte)((uint)iVar24 >> 0x18);
      iVar11 = -(uint)(fVar46 == 0.0);
      bVar60 = (byte)((uint)iVar11 >> 8);
      bVar62 = (byte)((uint)iVar11 >> 0x10);
      bVar64 = (byte)((uint)iVar11 >> 0x18);
      iVar12 = -(uint)(fVar8 == 0.0);
      bVar66 = (byte)((uint)iVar12 >> 8);
      bVar67 = (byte)((uint)iVar12 >> 0x10);
      bVar68 = (byte)((uint)iVar12 >> 0x18);
      fVar54 = (float)(CONCAT17((char)((uint)fVar48 >> 0x18),
                                CONCAT16((char)((uint)fVar48 >> 0x10),
                                         CONCAT15((char)((uint)fVar48 >> 8),
                                                  CONCAT14(SUB41(fVar48,0),fVar8)))) >> 0x20);
      iVar13 = -(uint)(fVar54 == 0.0);
      bVar70 = (byte)((uint)iVar13 >> 8);
      bVar71 = (byte)((uint)iVar13 >> 0x10);
      bVar72 = (byte)((uint)iVar13 >> 0x18);
      iVar73 = -(uint)(fVar39 < 0.0);
      iVar75 = -(uint)(16383.0 - fVar39 < 0.0);
      iVar77 = -(uint)(fVar43 < 0.0);
      uVar7 = (undefined2)
              (CONCAT15((char)((uint)fVar52 >> 8),CONCAT14(SUB41(fVar52,0),fVar43)) >> 0x20);
      iVar79 = -(uint)((float)CONCAT13(uVar63,CONCAT12(uVar61,uVar7)) < 0.0);
      if (CONCAT13(bVar64 & (byte)((uint)iVar75 >> 0x18) | bVar58 & (byte)((uint)iVar73 >> 0x18) |
                   bVar68 & (byte)((uint)iVar77 >> 0x18) | bVar72 & (byte)((uint)iVar79 >> 0x18),
                   CONCAT12(bVar62 & (byte)((uint)iVar75 >> 0x10) |
                            bVar57 & (byte)((uint)iVar73 >> 0x10) |
                            bVar67 & (byte)((uint)iVar77 >> 0x10) |
                            bVar71 & (byte)((uint)iVar79 >> 0x10),
                            CONCAT11(bVar60 & (byte)((uint)iVar75 >> 8) |
                                     bVar56 & (byte)((uint)iVar73 >> 8) |
                                     bVar66 & (byte)((uint)iVar77 >> 8) |
                                     bVar70 & (byte)((uint)iVar79 >> 8),
                                     (byte)iVar11 & (byte)iVar75 | (byte)iVar24 & (byte)iVar73 |
                                     (byte)iVar12 & (byte)iVar77 | (byte)iVar13 & (byte)iVar79))) ==
          0) {
        fVar52 = fVar39 / fVar51;
        fVar74 = (16383.0 - fVar39) / fVar46;
        fVar76 = fVar43 / fVar8;
        fVar78 = (float)CONCAT13(uVar63,CONCAT12(uVar61,uVar7)) / fVar54;
        iVar73 = -(uint)(fVar51 < 0.0);
        iVar75 = -(uint)(fVar46 < 0.0);
        iVar77 = -(uint)(fVar8 < 0.0);
        iVar79 = -(uint)(fVar54 < 0.0);
        bVar55 = SUB41(fVar52,0) & ~(byte)iVar24;
        bVar56 = (byte)((uint)fVar52 >> 8) & ~bVar56;
        bVar57 = (byte)((uint)fVar52 >> 0x10) & ~bVar57;
        bVar58 = (byte)((uint)fVar52 >> 0x18) & ~bVar58;
        bVar59 = SUB41(fVar74,0) & ~(byte)iVar11;
        bVar60 = (byte)((uint)fVar74 >> 8) & ~bVar60;
        bVar62 = (byte)((uint)fVar74 >> 0x10) & ~bVar62;
        bVar64 = (byte)((uint)fVar74 >> 0x18) & ~bVar64;
        bVar65 = SUB41(fVar76,0) & ~(byte)iVar12;
        bVar66 = (byte)((uint)fVar76 >> 8) & ~bVar66;
        bVar67 = (byte)((uint)fVar76 >> 0x10) & ~bVar67;
        bVar68 = (byte)((uint)fVar76 >> 0x18) & ~bVar68;
        bVar69 = SUB41(fVar78,0) & ~(byte)iVar13;
        bVar70 = (byte)((uint)fVar78 >> 8) & ~bVar70;
        bVar71 = (byte)((uint)fVar78 >> 0x10) & ~bVar71;
        bVar72 = (byte)((uint)fVar78 >> 0x18) & ~bVar72;
        auVar53._0_4_ = -(uint)(0.0 < fVar51);
        auVar53._4_4_ = -(uint)(0.0 < fVar46);
        auVar53._8_4_ = -(uint)(0.0 < fVar8);
        auVar53._12_4_ = -(uint)(0.0 < fVar54);
        auVar47[1] = bVar56;
        auVar47[0] = bVar55;
        auVar47[2] = bVar57;
        auVar47[3] = bVar58;
        auVar47[4] = bVar59;
        auVar47[5] = bVar60;
        auVar47[6] = bVar62;
        auVar47[7] = bVar64;
        auVar47[8] = bVar65;
        auVar47[9] = bVar66;
        auVar47[10] = bVar67;
        auVar47[0xb] = bVar68;
        auVar47[0xc] = bVar69;
        auVar47[0xd] = bVar70;
        auVar47[0xe] = bVar71;
        auVar47[0xf] = bVar72;
        auVar41[1] = bVar56 & (byte)((uint)iVar73 >> 8);
        auVar41[0] = bVar55 & (byte)iVar73;
        auVar41[2] = bVar57 & (byte)((uint)iVar73 >> 0x10);
        auVar41[3] = bVar58 & (byte)((uint)iVar73 >> 0x18);
        auVar41[4] = bVar59 & (byte)iVar75;
        auVar41[5] = bVar60 & (byte)((uint)iVar75 >> 8);
        auVar41[6] = bVar62 & (byte)((uint)iVar75 >> 0x10);
        auVar41[7] = bVar64 & (byte)((uint)iVar75 >> 0x18);
        auVar41[8] = bVar65 & (byte)iVar77;
        auVar41[9] = bVar66 & (byte)((uint)iVar77 >> 8);
        auVar41[10] = bVar67 & (byte)((uint)iVar77 >> 0x10);
        auVar41[0xb] = bVar68 & (byte)((uint)iVar77 >> 0x18);
        auVar41[0xc] = bVar69 & (byte)iVar79;
        auVar41[0xd] = bVar70 & (byte)((uint)iVar79 >> 8);
        auVar41[0xe] = bVar71 & (byte)((uint)iVar79 >> 0x10);
        auVar41[0xf] = bVar72 & (byte)((uint)iVar79 >> 0x18);
        fVar8 = (float)NEON_fmaxnmv(auVar41,4);
        fVar52 = (float)NEON_fminnmv(auVar80 ^ (auVar80 ^ auVar47) & auVar53,4);
        if (fVar8 < fVar52) {
          fVar51 = fVar43 + fVar48 * fVar8;
          fVar54 = fVar44 + fVar49 * fVar8;
          fVar74 = fVar45 + fVar50 * fVar8;
          auVar40._0_4_ = fVar39 + fVar46 * fVar52;
          auVar40._4_4_ = fVar43 + fVar48 * fVar52;
          auVar40._8_4_ = fVar44 + fVar49 * fVar52;
          auVar40._12_4_ = fVar45 + fVar50 * fVar52;
          auVar6[4] = SUB41(fVar51,0);
          auVar6._0_4_ = fVar39 + fVar46 * fVar8;
          auVar6[5] = (char)((uint)fVar51 >> 8);
          auVar6[6] = (char)((uint)fVar51 >> 0x10);
          auVar6[7] = (char)((uint)fVar51 >> 0x18);
          auVar6[8] = SUB41(fVar54,0);
          auVar6[9] = (char)((uint)fVar54 >> 8);
          auVar6[10] = (char)((uint)fVar54 >> 0x10);
          auVar6[0xb] = (char)((uint)fVar54 >> 0x18);
          auVar6[0xc] = SUB41(fVar74,0);
          auVar6[0xd] = (char)((uint)fVar74 >> 8);
          auVar6[0xe] = (char)((uint)fVar74 >> 0x10);
          auVar6[0xf] = (char)((uint)fVar74 >> 0x18);
          auVar14._8_8_ = uVar17;
          auVar14._0_8_ = uVar10;
          auVar47 = a64_TBL(ZEXT816(0),auVar6,auVar14);
          auVar15._8_8_ = uVar17;
          auVar15._0_8_ = uVar10;
          auVar41 = a64_TBL(ZEXT816(0),auVar40,auVar15);
          auVar41 = auVar41 ^ (auVar41 ^ auVar47) & *(undefined1 (*) [16])(puVar18 + 0x30);
          auVar42._0_4_ = (int)(auVar41._0_4_ + 0.5);
          auVar42._4_4_ = (int)(auVar41._4_4_ + 0.5);
          auVar42._8_4_ = (int)(auVar41._8_4_ + 0.5);
          auVar42._12_4_ = (int)(auVar41._12_4_ + 0.5);
          auVar16._8_4_ = 0x3fff;
          auVar16._0_8_ = 0x3fff00003fff;
          auVar16._12_4_ = 0x3fff;
          auVar41 = NEON_smin(auVar42,auVar16,4);
          uVar25 = auVar41._4_4_ | auVar41._0_4_ << 0x10;
          uVar38 = auVar41._12_4_ | auVar41._8_4_ << 0x10;
          if (uVar25 != uVar38) {
            iVar24 = 0;
            if ((uint)local_90 == 0) {
LAB_03167500:
              local_98[iVar24] = uVar25;
              local_90 = local_90 & 0xffffffff00000000;
              iVar24 = iVar24 + 1;
            }
            else {
              FUN_03165ca0(local_98[(int)((uint)local_90 + -1)],uVar25,&local_98);
              iVar24 = (uint)local_90;
              if (((uint)local_90 == 0) || (local_98[(int)((uint)local_90 + -1)] != uVar25))
              goto LAB_03167500;
            }
            local_98[iVar24] = uVar38;
            local_90 = CONCAT44(local_90._4_4_,iVar24 + 1);
          }
        }
      }
      uVar28 = uVar34 + 1;
      uVar36 = uVar34;
    } while ((uVar35 >> 4 & 0xffffffff) != uVar34 + 1);
  }
  uVar25 = (uint)local_90 - 1;
  if (uVar25 == 0 || (int)(uint)local_90 < 1) {
    if (0 < iVar37) {
      uVar10 = param_2[((long)(uVar35 * 0x10000000 + -0x100000000) >> 0x20) * 2];
      fVar50 = (float)uVar10;
      fVar51 = SUB164(*(undefined1 (*) [16])(param_1 + 0x10),0);
      fVar39 = SUB164(*(undefined1 (*) [16])(param_1 + 0x10),4);
      fVar46 = (float)((ulong)uVar10 >> 0x20);
      fVar48 = (float)(param_2 + ((long)(uVar35 * 0x10000000 + -0x100000000) >> 0x20) * 2)[1];
      fVar8 = (float)*(undefined8 *)(param_1 + 0x30);
      fVar52 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
      uVar35 = uVar35 >> 4 & 0xffffffff;
      fVar49 = *(float *)(param_1 + 0x40) + fVar51 * fVar50 + *(float *)(param_1 + 0x20) * fVar46 +
               fVar8 * fVar48 + -8191.0;
      fVar50 = *(float *)(param_1 + 0x44) + fVar39 * fVar50 + *(float *)(param_1 + 0x24) * fVar46 +
               fVar52 * fVar48 + -8191.0;
      do {
        fVar48 = (float)*param_2;
        fVar43 = (float)((ulong)*param_2 >> 0x20);
        fVar46 = fVar8 * (float)param_2[1] +
                 *(float *)(param_1 + 0x20) * fVar43 + *(float *)(param_1 + 0x40) + fVar51 * fVar48
                 + -8191.0;
        fVar48 = fVar52 * (float)param_2[1] +
                 *(float *)(param_1 + 0x24) * fVar43 + *(float *)(param_1 + 0x44) + fVar39 * fVar48
                 + -8191.0;
        if (fVar49 * fVar48 - fVar46 * fVar50 < 0.0) goto LAB_03167978;
        uVar35 = uVar35 - 1;
        param_2 = param_2 + 2;
        fVar49 = fVar46;
        fVar50 = fVar48;
      } while (uVar35 != 0);
    }
    if ((local_90 & 0x7ffffffc00000000) == 0) {
      FUN_03168124(&local_98,PTR_PTR_047d1a50,4);
    }
    if ((uint)local_90 != 4) {
      local_90 = CONCAT44(local_90._4_4_,4);
    }
    *local_98 = 0;
    local_98[1] = 0x3fff0000;
    local_98[2] = 0x3fff3fff;
    local_98[3] = 0x3fff;
LAB_03167654:
    uVar38 = (uint)local_90;
LAB_03167658:
    uVar35 = (ulong)uVar38;
  }
  else {
    if (*local_98 == local_98[uVar25]) {
      local_90 = CONCAT44(local_90._4_4_,uVar25);
    }
    else {
      FUN_03165ca0(local_98[uVar25],*local_98,&local_98);
    }
    uVar28 = FUN_03165b50(&local_98);
    uVar35 = local_90;
    piVar32 = local_98;
    if ((uVar28 & 1) != 0) goto LAB_03167654;
    iVar37 = (uint)local_90;
    uVar28 = local_90 & 0xffffffff;
    lVar26 = (long)(int)(uint)local_90;
    if ((int)(uint)local_90 < 2) {
      iVar24 = *local_98;
      uVar36 = 1;
    }
    else {
      uVar36 = uVar28 - 1;
      if ((uint)local_90 == 2) {
        uVar38 = 0;
        lVar27 = 1;
LAB_031678b0:
        uVar25 = (uint)lVar27;
        if ((uint)local_98[(int)uVar38] <= (uint)local_98[lVar27]) {
          uVar25 = uVar38;
        }
        uVar38 = uVar25;
      }
      else {
        uVar34 = 0;
        uVar25 = 0;
        do {
          uVar29 = uVar34;
          if ((uint)local_98[uVar29 + 1] < (uint)local_98[(int)uVar25]) {
            uVar25 = (int)uVar29 + 1;
          }
          uVar38 = (int)uVar29 + 2;
          if ((uint)local_98[(int)uVar25] <= (uint)local_98[uVar29 + 2]) {
            uVar38 = uVar25;
          }
          uVar34 = uVar29 + 2;
          uVar25 = uVar38;
        } while ((uVar36 & 0xfffffffffffffffe) != uVar29 + 2);
        lVar27 = uVar29 + 3;
        if ((uVar36 & 1) != 0) goto LAB_031678b0;
      }
      uVar25 = (uint)local_90 - uVar38;
      if (uVar38 != 0 && uVar25 != 0) {
        lVar27 = *(long *)(lVar5 + 0x1000b8);
        if (lVar27 == 0) {
          lVar27 = FUN_00e5d3b4();
          *(long *)(lVar5 + 0x1000b8) = lVar27;
        }
        lVar27 = *(long *)(*(long *)(lVar27 + 0x3d0) + 0x10);
        if (*(long *)(lVar27 + 8) == 0) {
          uVar34 = lVar26 * 4;
          local_68 = uVar34;
          if (lVar27 == 0) goto LAB_03167b3c;
          local_c0 = (void *)(uVar34 + 0x3f & 0xffffffffffffffc0);
          if (*(void **)(lVar27 + 0x28) < local_c0) {
LAB_03167930:
            piVar23 = (int *)FUN_031cf3b4(lVar27,&local_c0);
          }
          else {
            piVar23 = *(int **)(lVar27 + 0x38);
            if (*(ulong *)(lVar27 + 0x40) < (ulong)((long)local_c0 + (long)piVar23))
            goto LAB_03167930;
            *(long *)(lVar27 + 0x38) = (long)local_c0 + (long)piVar23;
          }
          bVar22 = false;
        }
        else {
          local_68 = lVar26 << 2;
LAB_03167b3c:
          uVar34 = local_68;
          bVar22 = true;
          piVar23 = (int *)(**(code **)PTR_DAT_047d1a08)(1,&local_68,0x40);
          lVar27 = 0;
        }
        if ((0 < iVar37) && (piVar32 != piVar23)) {
          uVar29 = uVar35 & 3;
          if (uVar36 < 3) {
            uVar36 = 0;
          }
          else {
            uVar36 = 0;
            piVar30 = piVar23 + 2;
            piVar31 = piVar32 + 2;
            do {
              piVar30[-2] = piVar31[-2];
              piVar30[-1] = piVar31[-1];
              *piVar30 = *piVar31;
              piVar1 = piVar31 + 1;
              uVar36 = uVar36 + 4;
              piVar31 = piVar31 + 4;
              piVar30[1] = *piVar1;
              piVar30 = piVar30 + 4;
            } while ((uVar35 & 0xfffffffc) != uVar36);
          }
          if ((uVar35 & 3) != 0) {
            piVar30 = piVar32 + uVar36;
            piVar31 = piVar23 + uVar36;
            do {
              uVar29 = uVar29 - 1;
              *piVar31 = *piVar30;
              piVar30 = piVar30 + 1;
              piVar31 = piVar31 + 1;
            } while (uVar29 != 0);
          }
        }
        if ((0 < (int)uVar25) && (piVar23 + (lVar26 - (int)uVar25) != piVar32)) {
          uVar33 = (ulong)uVar25;
          uVar29 = uVar33 & 3;
          uVar36 = 0;
          if (2 < uVar33 - 1) {
            piVar30 = piVar32 + 2;
            piVar31 = piVar23 + (((long)(int)uVar38 + lVar26 + 2) - (long)iVar37);
            do {
              piVar30[-2] = piVar31[-2];
              piVar30[-1] = piVar31[-1];
              *piVar30 = *piVar31;
              piVar1 = piVar31 + 1;
              uVar36 = uVar36 + 4;
              piVar31 = piVar31 + 4;
              piVar30[1] = *piVar1;
              piVar30 = piVar30 + 4;
            } while ((uVar33 & 0xfffffffc) != uVar36);
          }
          if ((uVar25 & 3) != 0) {
            piVar30 = piVar23 + (((long)(int)uVar38 + uVar36 + lVar26) - (long)iVar37);
            piVar31 = piVar32 + uVar36;
            do {
              uVar29 = uVar29 - 1;
              *piVar31 = *piVar30;
              piVar30 = piVar30 + 1;
              piVar31 = piVar31 + 1;
            } while (uVar29 != 0);
          }
        }
        if ((0 < (int)uVar38) && (piVar32 + (int)uVar25 != piVar23)) {
          uVar29 = (ulong)uVar38;
          uVar36 = uVar29 & 3;
          if (uVar29 - 1 < 3) {
            uVar33 = 0;
          }
          else {
            uVar33 = 0;
            piVar30 = piVar23 + 2;
            piVar31 = piVar32 + (lVar26 - (int)uVar38) + 2;
            do {
              piVar31[-2] = piVar30[-2];
              piVar31[-1] = piVar30[-1];
              *piVar31 = *piVar30;
              piVar1 = piVar30 + 1;
              uVar33 = uVar33 + 4;
              piVar30 = piVar30 + 4;
              piVar31[1] = *piVar1;
              piVar31 = piVar31 + 4;
            } while ((uVar29 & 0xfffffffc) != uVar33);
          }
          if ((uVar38 & 3) != 0) {
            piVar30 = piVar23 + uVar33;
            piVar32 = piVar32 + ((uVar33 + lVar26) - (long)(int)uVar38);
            do {
              uVar36 = uVar36 - 1;
              *piVar32 = *piVar30;
              piVar30 = piVar30 + 1;
              piVar32 = piVar32 + 1;
            } while (uVar36 != 0);
          }
        }
        if (bVar22) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(1,piVar23,uVar34);
        }
        else {
          uVar36 = uVar34 + 0x3f & 0xffffffffffffffc0;
          if ((*(ulong *)(lVar27 + 0x28) < uVar36) ||
             (*(long *)(lVar27 + 0x38) != uVar36 + (long)piVar23)) {
            if (piVar23 != (int *)0x0) {
              if (*(ulong *)(lVar27 + 0x28) < uVar36 + 0x40) {
                *(int *)(*(long *)(lVar27 + 0x30) + 0x20) =
                     *(int *)(*(long *)(lVar27 + 0x30) + 0x20) + -1;
                (**(code **)(**(long **)(lVar27 + 0x10) + 0x18))
                          (*(long **)(lVar27 + 0x10),(long)piVar23 - (long)piVar23[-1],uVar36 + 0x44
                          );
              }
              else {
                if (*(long *)(lVar27 + 0x38) == uVar36 + (long)piVar23) {
                  *(int **)(lVar27 + 0x38) = piVar23;
                  goto LAB_03167dec;
                }
                FUN_031cf778(lVar27);
              }
            }
          }
          else {
            *(int **)(lVar27 + 0x38) = piVar23;
            if (*(int **)(lVar27 + 0x48) == piVar23) {
LAB_03167dec:
              FUN_031cf578(lVar27);
            }
          }
        }
      }
      uVar36 = 1;
      iVar24 = *local_98;
      do {
        if (local_98[uVar36] == iVar24) goto LAB_03167e1c;
        uVar36 = uVar36 + 1;
      } while (uVar28 != uVar36);
      uVar36 = uVar35 & 0xffffffff;
    }
LAB_03167e1c:
    uVar25 = (uint)uVar36;
    if ((int)(uVar25 + 1) < iVar37) {
      uVar35 = uVar36 & 0xffffffff;
      while( true ) {
        if (local_98[uVar35 + 1] != iVar24) {
          local_98[(int)uVar36] = local_98[uVar35 + 1];
          uVar36 = (ulong)((int)uVar36 + 1);
        }
        uVar25 = (uint)uVar36;
        if (iVar37 + -2 == (int)uVar35) break;
        uVar35 = uVar35 + 1;
      }
    }
    if ((uint)local_90 != uVar25) {
      local_90 = CONCAT44(local_90._4_4_,uVar25);
    }
    iVar37 = *local_98;
    if ((int)uVar25 < 2) {
LAB_03167fe4:
      uVar38 = 2;
    }
    else {
      uVar35 = 0;
      do {
        iVar24 = local_98[uVar35 + 1];
        if (uVar35 != 0) {
          iVar11 = iVar24 - iVar37;
          iVar11 = (iVar11 * 2 & 0x10000U) + iVar11;
          iVar12 = iVar11 >> 0x10;
          iVar11 = (int)(short)iVar11;
          uVar28 = uVar35;
          do {
            iVar13 = local_98[(ulong)((int)uVar28 - 1) + 1] - iVar37;
            iVar13 = (iVar13 * 2 & 0x10000U) + iVar13;
            iVar73 = iVar13 >> 0x10;
            iVar77 = (int)(short)iVar13;
            iVar13 = iVar73 * iVar11;
            iVar75 = iVar77 * iVar12;
            bVar21 = SBORROW4(iVar13,iVar75);
            bVar22 = iVar13 - iVar75 < 0;
            if (iVar13 == iVar75) {
              bVar21 = SBORROW4(iVar12,iVar73);
              bVar22 = iVar12 - iVar73 < 0;
              if (iVar12 == iVar73) {
                bVar21 = SBORROW4(iVar11,iVar77);
                bVar22 = iVar11 - iVar77 < 0;
              }
            }
            if (bVar22 == bVar21) goto LAB_03167ef8;
            local_98[uVar28 + 1] = local_98[(ulong)((int)uVar28 - 1) + 1];
            uVar36 = uVar28 - 1;
            bVar22 = 0 < (long)uVar28;
            uVar28 = uVar36;
          } while (uVar36 != 0 && bVar22);
        }
        uVar28 = 0;
LAB_03167ef8:
        uVar35 = uVar35 + 1;
        *(int *)((long)local_98 +
                (-(uVar28 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar28 & 0xffffffff) << 2) + 4) =
             iVar24;
      } while (uVar35 != uVar25 - 1);
      if ((int)uVar25 < 3) goto LAB_03167fe4;
      uVar35 = 2;
      uVar38 = 2;
      do {
        if (local_98[uVar35] == local_98[(long)(int)uVar38 + -1]) {
          uVar2 = uVar38;
        }
        else {
          uVar2 = uVar38 + 1;
          local_98[(int)uVar38] = local_98[uVar35];
          if (2 < (int)uVar38) {
            lVar26 = (long)(int)uVar2;
            uVar3 = 3;
            if ((int)uVar2 < 4) {
              uVar3 = uVar38;
            }
            do {
              iVar37 = local_98[lVar26 + -2] - local_98[lVar26 + -3];
              iVar24 = local_98[lVar26 + -1] - local_98[lVar26 + -3];
              iVar37 = (iVar37 * 2 & 0x10000U) + iVar37;
              iVar24 = (iVar24 * 2 & 0x10000U) + iVar24;
              if ((iVar24 >> 0x10) * (int)(short)iVar37 <= (int)(short)iVar24 * (iVar37 >> 0x10)) {
                uVar2 = (uint)lVar26;
                break;
              }
              local_98[lVar26 + -2] = local_98[lVar26 + -1];
              bVar22 = 4 < lVar26;
              lVar26 = lVar26 + -1;
              uVar2 = uVar3;
            } while (bVar22);
          }
        }
        uVar38 = uVar2;
        uVar35 = uVar35 + 1;
      } while (uVar35 != uVar25);
    }
    uVar35 = local_90 & 0xffffffff;
    if ((int)(uint)local_90 < (int)uVar38) {
      local_90 = CONCAT44(local_90._4_4_,uVar38);
      goto LAB_03167658;
    }
    if ((int)uVar38 < (int)(uint)local_90) {
      uVar35 = (ulong)uVar38;
      local_90 = CONCAT44(local_90._4_4_,uVar38);
    }
  }
  local_c0 = (void *)0x0;
  local_b8 = 0x8000000000000000;
  lVar26 = *(long *)(lVar5 + 0x1000b8);
  if (lVar26 == 0) {
    lVar26 = FUN_00e5d3b4();
    *(long *)(lVar5 + 0x1000b8) = lVar26;
  }
  local_b0 = *(long *)(*(long *)(lVar26 + 0x3d0) + 0x10);
  if (*(long *)(local_b0 + 8) != 0) {
    local_b0 = 0;
  }
  local_a0 = -(uVar35 >> 0x1f) & 0xfffffffe00000000 | uVar35 << 1;
  local_70 = local_a0;
  if (local_b0 == 0) {
    local_a8 = (void *)(**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40);
  }
  else {
    local_68 = local_a0 + 0x3f & 0xffffffffffffffc0;
    if (local_68 <= *(ulong *)(local_b0 + 0x28)) {
      local_a8 = *(void **)(local_b0 + 0x38);
      if (local_68 + (long)local_a8 <= *(ulong *)(local_b0 + 0x40)) {
        *(ulong *)(local_b0 + 0x38) = local_68 + (long)local_a8;
        goto LAB_031676f4;
      }
    }
    local_a8 = (void *)FUN_031cf3b4(local_b0,&local_68);
  }
LAB_031676f4:
  uVar25 = (uint)uVar35;
  local_b8._4_4_ = uVar25 | 0x80000000;
  local_c0 = local_a8;
  if ((int)uVar25 < 1) {
    if ((int)uVar25 < 0) {
      local_b8._0_4_ = uVar25;
    }
  }
  else {
    local_b8._0_4_ = uVar25;
    memset(local_a8,0xff,(ulong)(uVar25 - 1) * 2 + 2);
  }
  pvVar20 = local_a8;
  pvVar19 = local_c0;
  FUN_03165e70(param_1,&local_98,(param_4 & 0xffff) + 1,&local_c0);
  if (pvVar20 == pvVar19) {
    local_b8._0_4_ = 0;
  }
  if (local_b0 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,pvVar20);
  }
  else {
    uVar35 = local_a0 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_b0 + 0x28) < uVar35) ||
       (*(long *)(local_b0 + 0x38) != uVar35 + (long)pvVar20)) {
      if (pvVar20 != (void *)0x0) {
        if (*(ulong *)(local_b0 + 0x28) < uVar35 + 0x40) {
          *(int *)(*(long *)(local_b0 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_b0 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_b0 + 0x10) + 0x18))
                    (*(long **)(local_b0 + 0x10),(long)pvVar20 - (long)*(int *)((long)pvVar20 - 4),
                     uVar35 + 0x44);
        }
        else {
          if (*(long *)(local_b0 + 0x38) == uVar35 + (long)pvVar20) {
            *(void **)(local_b0 + 0x38) = pvVar20;
            goto LAB_03167948;
          }
          FUN_031cf778(local_b0,pvVar20);
        }
      }
    }
    else {
      *(void **)(local_b0 + 0x38) = pvVar20;
      if (*(void **)(local_b0 + 0x48) == pvVar20) {
LAB_03167948:
        FUN_031cf578();
      }
    }
  }
  uVar25 = local_b8._4_4_;
  uVar35 = (ulong)local_b8._4_4_;
  local_b8 = uVar35 << 0x20;
  if ((pvVar19 != (void *)0x0) && (-1 < (int)uVar25)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,pvVar19,uVar35 << 1);
  }
LAB_03167978:
  if (local_80 == local_98) {
    local_90 = local_90 & 0xffffffff00000000;
  }
  if (local_88 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_03167a44;
  }
  uVar35 = local_78 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(local_88 + 0x28) < uVar35) ||
     (*(long *)(local_88 + 0x38) != uVar35 + (long)local_80)) {
    if (local_80 == (int *)0x0) goto LAB_03167a44;
    if (*(ulong *)(local_88 + 0x28) < uVar35 + 0x40) {
      *(int *)(*(long *)(local_88 + 0x30) + 0x20) = *(int *)(*(long *)(local_88 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_88 + 0x10) + 0x18))
                (*(long **)(local_88 + 0x10),(long)local_80 - (long)local_80[-1],uVar35 + 0x44);
      goto LAB_03167a44;
    }
    if (*(long *)(local_88 + 0x38) != uVar35 + (long)local_80) {
      FUN_031cf778();
      goto LAB_03167a44;
    }
    *(int **)(local_88 + 0x38) = local_80;
  }
  else {
    *(int **)(local_88 + 0x38) = local_80;
    if (*(int **)(local_88 + 0x48) != local_80) goto LAB_03167a44;
  }
  FUN_031cf578();
LAB_03167a44:
  uVar35 = local_90;
  uVar28 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < (long)uVar35) && (local_98 != (int *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_98,uVar28 << 2);
  }
  return 1;
}


