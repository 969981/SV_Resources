/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0088ba30; name: FUN_0088ba30
 */


/* WARNING: Removing unreachable block (ram,0x0088bd30) */

float FUN_0088ba30(undefined8 *param_1,long param_2,int param_3,int param_4,undefined4 *param_5,
                  long param_6)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long local_1d8;
  uint local_1b4;
  long local_1b0;
  long local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  long local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  ulong uStack_168;
  long local_160;
  code *local_158;
  ulong uStack_150;
  undefined8 *local_148;
  long local_140;
  long local_138;
  float local_130;
  float fStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 local_120;
  float local_118;
  float local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  ushort local_100;
  undefined2 uStack_fe;
  undefined2 uStack_fc;
  ushort uStack_fa;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  if (*(char *)(param_1 + 7) == '\0') {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)((long)param_1 + 99) != '\0';
  }
  local_114 = *(float *)((long)param_1 + 0x14);
  fVar18 = *(float *)(param_1 + 3);
  fVar20 = *(float *)((long)param_1 + 0x3c);
  lVar1 = param_2 + (long)param_3 * 2;
  local_118 = fVar18;
  (**(code **)(*(long *)param_1[0xb] + 0x50))((long *)param_1[0xb],param_1,param_2,lVar1);
  fVar13 = (float)FUN_0088c324(param_1,&local_114,&local_118,param_2,param_3);
  local_128 = *(undefined4 *)((long)param_1 + 0xc);
  uStack_124 = *(undefined4 *)(param_1 + 2);
  fVar19 = *(float *)(param_1 + 3);
  local_130 = local_114;
  fStack_12c = local_118;
  local_120 = 0;
  if (param_4 != 0) {
    if (param_4 < 1) {
      uVar14 = 0;
    }
    else {
      uVar14 = *param_5;
    }
    *(undefined4 *)((long)param_1 + 0x14) = uVar14;
  }
  lVar11 = (long)param_3;
  local_148 = param_1;
  local_140 = param_2;
  local_138 = lVar1;
  FUN_00887584(&local_160,param_1[5],0);
  local_160 = param_2;
  (**(code **)(*(long *)param_1[0xb] + 0x30))((long *)param_1[0xb],&local_148);
  pcVar8 = local_158;
  if ((uStack_150 & 1) != 0) {
    pcVar8 = *(code **)(local_158 + *(long *)((long)&local_160 + ((long)uStack_150 >> 1)));
  }
  uVar4 = (*pcVar8)();
  if (lVar11 < local_160 - param_2 >> 1) {
switchD_0088bf94_caseD_4:
    if (bVar3) {
      fVar20 = *(float *)((long)param_1 + 0x14);
    }
    else {
      iVar6 = (**(code **)(*(long *)param_1[5] + 0xb0))((long *)param_1[5],local_120._4_4_,0);
      fVar20 = *(float *)((long)param_1 + 0x14) + *(float *)((long)param_1 + 0xc) * (float)iVar6;
      *(float *)((long)param_1 + 0x14) = fVar20;
    }
    if (((*(uint *)(param_1 + 10) & 0x300) != 0x100) && ((*(uint *)(param_1 + 10) & 0x300) != 0x200)
       ) {
      fVar18 = (fVar18 - fVar19) + *(float *)(param_1 + 3);
    }
    *(float *)(param_1 + 3) = fVar18;
    fVar18 = fVar20 - local_130;
    if (fVar20 - local_130 <= fVar13) {
      fVar18 = fVar13;
    }
    (**(code **)(*(long *)param_1[0xb] + 0x38))((long *)param_1[0xb],&local_148);
    (**(code **)(*(long *)param_1[0xb] + 0x58))((long *)param_1[0xb],param_1,param_2,lVar1);
    return fVar18;
  }
  fVar22 = 0.0;
  lVar10 = 0;
  local_1b4 = 0;
  local_1d8 = param_2;
  local_1b0 = param_2;
LAB_0088bbc4:
  iVar6 = (int)lVar10;
  lVar9 = (long)iVar6;
  do {
    lVar12 = local_160;
    if (uVar4 < 0x20) {
      local_120 = CONCAT44(local_120._4_4_,~local_1b4) & 0xffffffff00000001;
      local_140 = local_160;
      if (param_4 <= iVar6 && local_1b0 == local_1d8 || (3.4028235e+38 <= fVar20 || uVar4 == 10))
      goto LAB_0088be84;
      uStack_178 = CONCAT44(fStack_12c,local_130);
      local_180 = local_138;
      local_170 = CONCAT44(uStack_124,local_128);
      uStack_168 = local_120;
      local_110 = *param_1;
      uStack_108 = param_1[1];
      uVar2 = param_1[2];
      local_f0 = param_1[4];
      local_100 = (ushort)uVar2;
      uStack_fe = (undefined2)((ulong)uVar2 >> 0x10);
      uStack_fc = (undefined2)((ulong)uVar2 >> 0x20);
      uStack_fa = (ushort)((ulong)uVar2 >> 0x30);
      local_f8 = (undefined4)param_1[3];
      uStack_f4 = (undefined4)((ulong)param_1[3] >> 0x20);
      local_e8 = param_1[5];
      local_e0 = param_1[6];
      local_d8 = param_1[7];
      uStack_d0 = param_1[8];
      local_c8 = param_1[9];
      uStack_c0 = param_1[10];
      local_b8 = param_1[0xb];
      uStack_b0 = param_1[0xc];
      local_190 = &local_110;
      local_1a0 = 0;
      local_198 = 0;
      local_188 = local_160;
      (**(code **)(*(long *)param_1[0xb] + 0x20))((long *)param_1[0xb],&local_1a0,&local_190,uVar4);
      if ((float)local_198 - (float)local_1a0 <= 0.0) break;
      fVar17 = 0.0;
      if (iVar6 < param_4) {
        fVar17 = *(float *)(param_6 + lVar9 * 4);
      }
      if ((float)CONCAT22(uStack_fa,uStack_fc) - local_130 <=
          *(float *)((long)param_1 + 0x3c) + fVar17) break;
      uVar4 = 10;
      local_120 = local_120 & 0xffffffff;
      local_160 = local_1b0;
      FUN_00884284(&local_110);
    }
    else {
      uVar7 = FUN_0088ac30(uVar4);
      if ((uVar7 & 1) == 0) goto LAB_0088c208;
      uVar14 = *(undefined4 *)(param_1 + 3);
      fVar17 = 0.0;
      if (!bVar3) {
        iVar5 = (**(code **)(*(long *)param_1[5] + 0xb0))((long *)param_1[5],local_120._4_4_,uVar4);
        fVar17 = *(float *)((long)param_1 + 0xc) * (float)iVar5;
      }
      (**(code **)(*(long *)param_1[5] + 0x90))((long *)param_1[5],&local_110,uVar4);
      if (local_100 <= uStack_fa) {
        fVar15 = fVar22;
        if (local_1b4 != 0) {
          fVar15 = fVar22 + *(float *)(param_1 + 8);
        }
        if (*(char *)(param_1 + 7) == '\0') {
          fVar16 = (float)NEON_ucvtf((uint)uStack_108._4_2_);
          fVar16 = *(float *)((long)param_1 + 0xc) * fVar16;
        }
        else {
          fVar16 = *(float *)(param_1 + 4);
        }
        fVar21 = 0.0;
        if (!bVar3) {
          iVar5 = (**(code **)(*(long *)param_1[5] + 0xb0))((long *)param_1[5],uVar4,0);
          fVar21 = *(float *)((long)param_1 + 0xc) * (float)iVar5;
        }
        fVar15 = fVar17 + fVar15 + fVar16 + fVar21;
        if ((param_4 > iVar6 || local_1b0 != local_1d8) && fVar20 < 3.4028235e+38) {
          fVar16 = 0.0;
          if (iVar6 < param_4) {
            fVar16 = *(float *)(param_6 + lVar9 * 4);
          }
          if (*(float *)((long)param_1 + 0x3c) + fVar16 < fVar15) {
            local_120 = local_120 & 0xffffffff;
            uVar4 = 10;
            local_160 = local_1b0;
            goto LAB_0088bc0c;
          }
        }
        if (local_1b4 == 0) {
          fVar16 = *(float *)((long)param_1 + 0x14);
        }
        else {
          fVar16 = *(float *)(param_1 + 8) + *(float *)((long)param_1 + 0x14);
          *(float *)((long)param_1 + 0x14) = fVar16;
        }
        fVar22 = fVar15 - fVar21;
        *(float *)((long)param_1 + 0x14) = fVar17 + fVar16;
        iVar6 = (**(code **)(*(long *)param_1[5] + 0xc0))();
        *(float *)(param_1 + 3) =
             *(float *)(param_1 + 3) + *(float *)(param_1 + 2) * (float)-(iVar6 + (short)local_e8);
        FUN_008842f8(param_1,&local_110);
        *(undefined4 *)(param_1 + 3) = uVar14;
        local_120 = CONCAT44(uVar4,(undefined4)local_120);
        local_1b4 = 1;
        lVar12 = local_160;
        goto LAB_0088c208;
      }
      pcVar8 = local_158;
      if ((uStack_150 & 1) != 0) {
        pcVar8 = *(code **)(local_158 + *(long *)((long)&local_160 + ((long)uStack_150 >> 1)));
      }
      uVar4 = (*pcVar8)();
    }
LAB_0088bc0c:
    if (lVar11 < local_160 - param_2 >> 1) goto switchD_0088bf94_caseD_4;
  } while( true );
  FUN_00884284(&local_110);
LAB_0088be84:
  uVar14 = (**(code **)(*(long *)param_1[0xb] + 0x18))((long *)param_1[0xb],uVar4,&local_148);
  fVar17 = local_114;
  fVar22 = *(float *)((long)param_1 + 0x14);
  if (((uVar4 == 10) && (*(char *)((long)param_1 + 0x61) == '\0')) &&
     (local_120 = local_120 & 0xffffffff, *(char *)((long)param_1 + 0x62) != '\0')) {
    fVar15 = *(float *)(param_1 + 3);
    local_190 = (undefined8 *)0x0;
    local_188 = 0;
    local_1a0 = local_160;
    uStack_108 = param_1[1];
    local_f0 = param_1[4];
    local_100 = (ushort)param_1[2];
    uStack_fe = (undefined2)((ulong)param_1[2] >> 0x10);
    uStack_f4 = (undefined4)((ulong)param_1[3] >> 0x20);
    local_110 = *param_1;
    local_e8 = param_1[5];
    local_e0 = param_1[6];
    local_d8 = param_1[7];
    uStack_d0 = param_1[8];
    local_b8 = param_1[0xb];
    uStack_b0 = param_1[0xc];
    local_c8 = param_1[9];
    uStack_c0 = param_1[10];
    uStack_fc = 0;
    uStack_fa = 0;
    local_f8 = 0;
    FUN_0088b314(&local_110,&local_190,&local_1a0,param_3 - (int)((ulong)(local_160 - param_2) >> 1)
                );
    fVar21 = local_188._4_4_ - local_190._4_4_;
    FUN_00884284(&local_110);
    fVar16 = (float)(**(code **)(*(long *)param_1[0xb] + 0x28))((long *)param_1[0xb],param_1);
    *(float *)(param_1 + 3) = fVar15 + (fVar21 - fVar16);
  }
  local_1b4 = 0;
  switch(uVar14) {
  case 2:
    local_1b4 = 1;
    break;
  case 3:
    lVar10 = lVar9 + 1;
    fVar15 = 0.0;
    if ((int)lVar10 < param_4) {
      fVar15 = (float)param_5[lVar10];
    }
    if ((*(uint *)(param_1 + 10) & 3) == 2) {
      local_190 = (undefined8 *)0x0;
      local_188 = 0;
      local_1a0 = local_140;
      uStack_108 = param_1[1];
      local_f0 = param_1[4];
      local_100 = (ushort)param_1[2];
      uStack_fe = (undefined2)((ulong)param_1[2] >> 0x10);
      uStack_f4 = (undefined4)((ulong)param_1[3] >> 0x20);
      local_110 = *param_1;
      local_e8 = param_1[5];
      local_e0 = param_1[6];
      local_d8 = param_1[7];
      uStack_d0 = param_1[8];
      local_b8 = param_1[0xb];
      uStack_b0 = param_1[0xc];
      local_c8 = param_1[9];
      uStack_c0 = param_1[10];
      uStack_fc = 0;
      uStack_fa = 0;
      local_f8 = 0;
      FUN_0088b314(&local_110,&local_190,&local_1a0,
                   param_3 - (int)((ulong)(local_140 - param_2) >> 1));
      fVar16 = (float)local_188 - (float)local_190;
      FUN_00884284(&local_110);
      fVar16 = fVar13 - fVar16;
LAB_0088c1b0:
      fVar21 = local_130 + fVar16;
      fVar16 = fVar13;
    }
    else {
      if ((*(uint *)(param_1 + 10) & 3) == 1) {
        local_190 = (undefined8 *)0x0;
        local_188 = 0;
        local_1a0 = local_140;
        uStack_108 = param_1[1];
        local_f0 = param_1[4];
        local_100 = (ushort)param_1[2];
        uStack_fe = (undefined2)((ulong)param_1[2] >> 0x10);
        uStack_f4 = (undefined4)((ulong)param_1[3] >> 0x20);
        local_110 = *param_1;
        local_e8 = param_1[5];
        local_e0 = param_1[6];
        local_d8 = param_1[7];
        uStack_d0 = param_1[8];
        local_b8 = param_1[0xb];
        uStack_b0 = param_1[0xc];
        local_c8 = param_1[9];
        uStack_c0 = param_1[10];
        uStack_fc = 0;
        uStack_fa = 0;
        local_f8 = 0;
        FUN_0088b314(&local_110,&local_190,&local_1a0,
                     param_3 - (int)((ulong)(local_140 - param_2) >> 1));
        fVar21 = (float)local_188 - (float)local_190;
        FUN_00884284(&local_110);
        fVar16 = fVar13 * 0.5;
        if (*(char *)(param_1 + 0xc) != '\0') {
          fVar16 = (float)(int)(fVar13 * 0.5);
        }
        fVar21 = fVar21 * 0.5;
        if (*(char *)(param_1 + 0xc) != '\0') {
          fVar21 = (float)(int)fVar21;
        }
        fVar16 = fVar16 - fVar21;
        goto LAB_0088c1b0;
      }
      fVar16 = *(float *)((long)param_1 + 0x14) - local_130;
      fVar21 = local_130;
      if (fVar16 <= fVar13) {
        fVar16 = fVar13;
      }
    }
    fVar13 = fVar16;
    *(float *)((long)param_1 + 0x14) = fVar15 + fVar21;
    if (3.4028235e+38 <= fVar20) {
      local_1b4 = 0;
    }
    else {
      local_1b4 = 0;
      local_1d8 = local_160;
    }
    break;
  case 4:
    goto switchD_0088bf94_caseD_4;
  }
  fVar22 = fVar22 - fVar17;
  local_160 = local_140;
  lVar12 = local_140;
LAB_0088c208:
  if (3.4028235e+38 <= fVar20) {
    lVar12 = local_1b0;
  }
  pcVar8 = local_158;
  if ((uStack_150 & 1) != 0) {
    pcVar8 = *(code **)(local_158 + *(long *)((long)&local_160 + ((long)uStack_150 >> 1)));
  }
  uVar4 = (*pcVar8)();
  local_1b0 = lVar12;
  if (lVar11 < local_160 - param_2 >> 1) goto switchD_0088bf94_caseD_4;
  goto LAB_0088bbc4;
}


