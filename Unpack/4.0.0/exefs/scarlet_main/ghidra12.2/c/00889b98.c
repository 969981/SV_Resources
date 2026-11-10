/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00889b98; name: FUN_00889b98
 */


/* WARNING: Removing unreachable block (ram,0x00889f20) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00889b98(long *param_1,float *param_2,ulong *param_3,int param_4)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 **ppuVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  float *pfVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 **ppuVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  long lStack_190;
  undefined8 local_188;
  long local_180;
  long lStack_178;
  long local_170;
  long lStack_168;
  long local_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  undefined8 *local_130;
  ulong uStack_128;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulong uStack_108;
  float local_100;
  undefined8 local_fc;
  float local_f4;
  ulong local_f0;
  code *local_e8;
  ulong uStack_e0;
  long *local_d8;
  ulong local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  float local_98;
  float local_94;
  
  if ((char)param_1[7] == '\0') {
    bVar5 = false;
  }
  else {
    bVar5 = *(char *)((long)param_1 + 99) != '\0';
  }
  uVar12 = *param_3;
  local_b8 = *(undefined4 *)((long)param_1 + 0xc);
  uStack_b4 = (undefined4)param_1[2];
  uVar1 = uVar12 + (long)param_4;
  fVar19 = *(float *)((long)param_1 + 0x3c);
  local_c0 = 0;
  local_b0 = 0;
  local_94 = 0.0;
  local_d8 = param_1;
  local_d0 = uVar12;
  local_c8 = uVar1;
  FUN_00887520(&local_f0,param_1[5],0);
  local_98 = (float)FUN_00884288(local_d8);
  *param_2 = 0.0;
  param_2[2] = 0.0;
  uVar14 = (ulong)local_198._4_4_;
  local_198 = uVar14 << 0x20;
  pfVar3 = &local_98;
  if (0.0 <= local_98) {
    pfVar3 = (float *)&local_198;
  }
  pfVar2 = &local_98;
  if (local_98 <= 0.0) {
    pfVar2 = (float *)&local_198;
  }
  pfVar13 = param_2 + 1;
  *pfVar13 = *pfVar3;
  local_198 = uVar14 << 0x20;
  ppuVar16 = (undefined8 **)(param_2 + 3);
  *(float *)ppuVar16 = *pfVar2;
  local_f0 = uVar12;
  (**(code **)(*(long *)param_1[0xb] + 0x40))((long *)param_1[0xb],&local_d8);
  pcVar11 = local_e8;
  if ((uStack_e0 & 1) != 0) {
    pcVar11 = *(code **)(local_e8 + *(long *)((long)&local_f0 + ((long)uStack_e0 >> 1)));
  }
  uVar6 = (*pcVar11)();
  if (local_f0 <= uVar1) {
    fVar20 = 0.0;
    fVar17 = 0.0;
    fVar21 = 0.0;
    uVar15 = 0;
    local_1b0 = 0;
    uVar14 = 0;
LAB_00889da8:
    fVar22 = local_94;
    do {
      uVar12 = local_f0;
      if (uVar6 < 0x20) {
        if ((uVar6 == 10) && (*(char *)((long)param_1 + 0x61) == '\0')) {
          if (!bVar5) {
            iVar7 = (**(code **)(*(long *)param_1[5] + 0xb0))((long *)param_1[5],local_b0._4_4_,0);
            fVar21 = fVar17 + *(float *)((long)param_1 + 0xc) * (float)iVar7;
            fVar22 = fVar21;
            fVar20 = fVar21;
          }
          local_b0 = 0;
        }
        local_fc = 0;
        local_f4 = 0.0;
        local_b0 = CONCAT44(local_b0._4_4_,~uVar15) & 0xffffffff00000001;
        *(float *)((long)param_1 + 0x14) = fVar21;
        local_100 = fVar21;
        local_d0 = local_f0;
        if (((uVar14 != 0) && (fVar19 < 3.4028235e+38)) && (uVar6 != 10)) {
          local_120 = local_c8;
          uStack_118 = local_c0;
          local_110 = CONCAT44(uStack_b4,local_b8);
          uStack_108 = local_b0;
          local_198 = *param_1;
          lStack_190 = param_1[1];
          local_188 = param_1[2];
          local_180 = param_1[3];
          lStack_178 = param_1[4];
          local_170 = param_1[5];
          lStack_168 = param_1[6];
          local_160 = param_1[7];
          lStack_158 = param_1[8];
          local_150 = param_1[9];
          lStack_148 = param_1[10];
          local_140 = param_1[0xb];
          lStack_138 = param_1[0xc];
          local_130 = &local_198;
          local_1a8 = 0;
          local_1a0 = 0;
          uStack_128 = local_f0;
          (**(code **)(*(long *)param_1[0xb] + 0x20))
                    ((long *)param_1[0xb],&local_1a8,&local_130,uVar6);
          if (0.0 < (float)local_1a0 - (float)local_1a8) {
            if (local_188._4_4_ - (float)local_c0 <= *(float *)((long)param_1 + 0x3c))
            goto LAB_00889f68;
            local_f0 = uVar14;
            FUN_00884284(&local_198);
            uVar12 = local_f0;
            fVar17 = fVar21;
            goto joined_r0x0088a038;
          }
LAB_00889f68:
          FUN_00884284(&local_198);
        }
        local_94 = fVar22;
        uVar9 = (**(code **)(*(long *)param_1[0xb] + 0x20))
                          ((long *)param_1[0xb],&local_100,&local_d8,uVar6);
        if (((uVar6 == 10) && (*(char *)((long)param_1 + 0x62) != '\0')) &&
           (*(float *)(param_1 + 3) < *(float *)ppuVar16)) {
          *(float *)(param_1 + 3) = *(float *)ppuVar16;
        }
        local_f0 = local_d0;
        fVar20 = local_100;
        if (*param_2 <= local_100) {
          fVar20 = *param_2;
        }
        fVar17 = (float)local_fc;
        if (param_2[1] <= (float)local_fc) {
          fVar17 = param_2[1];
        }
        *param_2 = fVar20;
        param_2[1] = fVar17;
        fVar20 = local_fc._4_4_;
        if (local_fc._4_4_ <= param_2[2]) {
          fVar20 = param_2[2];
        }
        fVar17 = local_f4;
        if (local_f4 <= param_2[3]) {
          fVar17 = param_2[3];
        }
        param_2[2] = fVar20;
        param_2[3] = fVar17;
        fVar20 = *(float *)((long)param_1 + 0x14);
        local_94 = fVar20;
        uVar15 = 0;
        switch(uVar9) {
        case 2:
          uVar15 = 1;
        default:
          uVar12 = local_d0;
          fVar17 = fVar20;
          fVar21 = fVar20;
          break;
        case 3:
          goto switchD_0088a100_caseD_3;
        case 4:
          *param_3 = *param_3 + (long)param_4;
          return 0;
        }
        goto LAB_0088a1cc;
      }
      uVar10 = FUN_0088ac30(uVar6);
      if ((uVar10 & 1) == 0) {
        local_94 = fVar22;
        goto LAB_0088a1cc;
      }
      fVar23 = fVar17;
      if (uVar15 != 0) {
        fVar23 = fVar17 + *(float *)(param_1 + 8);
      }
      if ((char)param_1[7] == '\0') {
        iVar7 = (**(code **)(*(long *)param_1[5] + 0x80))((long *)param_1[5],uVar6);
        fVar23 = fVar23 + *(float *)((long)param_1 + 0xc) * (float)iVar7;
        if (bVar5) goto LAB_00889f58;
LAB_00889fb8:
        iVar7 = (**(code **)(*(long *)param_1[5] + 0xb0))((long *)param_1[5],local_b0._4_4_,uVar6);
        fVar18 = *(float *)((long)param_1 + 0xc);
        iVar8 = (**(code **)(*(long *)param_1[5] + 0xb0))((long *)param_1[5],uVar6,0);
        fVar24 = *(float *)((long)param_1 + 0xc) * (float)iVar8;
        fVar23 = fVar23 + fVar18 * (float)iVar7 + fVar24;
      }
      else {
        fVar23 = fVar23 + *(float *)(param_1 + 4);
        if (!bVar5) goto LAB_00889fb8;
LAB_00889f58:
        fVar24 = 0.0;
        fVar23 = fVar23 + 0.0;
      }
      if ((3.4028235e+38 <= fVar19 || uVar14 == 0) ||
         (uVar12 = uVar14, fVar23 + *(float *)(param_1 + 9) <= *(float *)((long)param_1 + 0x3c)))
      goto LAB_0088a110;
joined_r0x0088a038:
      local_f0 = uVar12;
      uVar6 = 10;
      local_1b0 = 1;
      if (uVar1 < local_f0) {
        local_1b0 = 1;
        local_94 = fVar22;
        goto switchD_0088a100_caseD_3;
      }
    } while( true );
  }
  local_1b0 = 0;
  fVar20 = 0.0;
joined_r0x0088a204:
  if (!bVar5) {
    local_b0._4_4_ = (undefined4)(local_b0 >> 0x20);
    uVar9 = local_b0._4_4_;
    iVar7 = (**(code **)(*(long *)param_1[5] + 0xb0))((long *)param_1[5],uVar9,0);
    fVar20 = fVar20 + *(float *)((long)param_1 + 0xc) * (float)iVar7;
    local_94 = fVar20;
  }
  fVar19 = fVar20;
  if (*param_2 <= fVar20) {
    fVar19 = *param_2;
  }
  *param_2 = fVar19;
  if (fVar20 <= param_2[2]) {
    fVar20 = param_2[2];
  }
  param_2[2] = fVar20;
  *param_3 = local_f0;
  (**(code **)(*(long *)param_1[0xb] + 0x48))((long *)param_1[0xb],&local_d8);
  return local_1b0;
LAB_0088a110:
  local_94 = fVar23;
  pfVar3 = &local_94;
  if (*param_2 <= fVar23) {
    pfVar3 = param_2;
  }
  *param_2 = *pfVar3;
  pfVar3 = &local_94;
  if (fVar23 <= param_2[2]) {
    pfVar3 = param_2 + 2;
  }
  param_2[2] = *pfVar3;
  if (*(char *)((long)param_1 + 0x62) != '\0') {
    fVar20 = *(float *)(param_1 + 3);
    local_198._4_4_ = (uint)((ulong)local_198 >> 0x20);
    local_198 = CONCAT44(local_198._4_4_,fVar20);
    pfVar3 = (float *)&local_198;
    if (*pfVar13 <= fVar20) {
      pfVar3 = pfVar13;
    }
    *pfVar13 = *pfVar3;
    fVar17 = (float)(**(code **)(*(long *)param_1[0xb] + 0x28))((long *)param_1[0xb],param_1);
    local_130 = (undefined8 *)CONCAT44(local_130._4_4_,fVar20 + fVar17);
    ppuVar4 = &local_130;
    if (fVar20 + fVar17 <= *(float *)ppuVar16) {
      ppuVar4 = ppuVar16;
    }
    *(float *)ppuVar16 = *(float *)ppuVar4;
  }
  fVar20 = fVar23 - fVar24;
  local_b0 = CONCAT44(uVar6,(undefined4)local_b0);
  local_94 = fVar20;
  uVar15 = 1;
  uVar12 = local_f0;
  fVar17 = fVar20;
  fVar21 = fVar20;
LAB_0088a1cc:
  if (3.4028235e+38 <= fVar19) {
    uVar12 = uVar14;
  }
  pcVar11 = local_e8;
  if ((uStack_e0 & 1) != 0) {
    pcVar11 = *(code **)(local_e8 + *(long *)((long)&local_f0 + ((long)uStack_e0 >> 1)));
  }
  uVar6 = (*pcVar11)();
  uVar14 = uVar12;
  if (uVar1 < local_f0) goto switchD_0088a100_caseD_3;
  goto LAB_00889da8;
switchD_0088a100_caseD_3:
  goto joined_r0x0088a204;
}


