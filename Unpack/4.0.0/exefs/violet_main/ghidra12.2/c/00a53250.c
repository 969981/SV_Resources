/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a53250; name: FUN_00a53250
 */


void FUN_00a53250(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ushort uVar15;
  ushort uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
LAB_00a5328c:
  puVar19 = param_2 + -3;
  puVar17 = param_1;
LAB_00a5329c:
  param_1 = puVar17;
  uVar6 = (long)param_2 - (long)param_1;
  switch(((long)uVar6 >> 3) * -0x5555555555555555) {
  case 0:
  case 1:
    goto switchD_00a5386c_caseD_0;
  case 2:
    local_f0 = param_2[-2];
    uStack_e8 = param_2[-1];
    local_f8 = *puVar19;
    local_108 = param_1[1];
    uStack_100 = param_1[2];
    local_110 = *param_1;
    uVar3 = *(uint *)*param_3;
    if (2 < uVar3) {
      return;
    }
    if (*(ushort *)((long)&local_f8 + (ulong)uVar3 * 2 + 4) <
        *(ushort *)((long)&local_110 + (ulong)uVar3 * 2 + 4)) {
      uVar1 = *param_1;
      uVar14 = param_1[1];
      uVar13 = param_1[2];
      uVar2 = param_2[-1];
      uVar12 = *puVar19;
      param_1[1] = param_2[-2];
      param_1[2] = uVar2;
      *param_1 = uVar12;
      param_2[-2] = uVar14;
      param_2[-1] = uVar13;
      *puVar19 = uVar1;
      return;
    }
    return;
  case 3:
    FUN_00a53ae0(param_1,param_1 + 3,puVar19,param_3);
    return;
  case 4:
    FUN_00a53d80(param_1,param_1 + 3,param_1 + 6,puVar19,param_3);
    return;
  case 5:
    FUN_00a53f60(param_1,param_1 + 3,param_1 + 6,param_1 + 9,puVar19,param_3);
    return;
  default:
    if (0x2e7 < (long)uVar6) {
      puVar17 = param_1 + (uVar6 / 0x30) * 3;
      if ((long)uVar6 < 0x5da9) {
        iVar4 = FUN_00a53ae0(param_1,puVar17,puVar19,param_3);
      }
      else {
        lVar10 = (uVar6 / 0x60) * 2 + uVar6 / 0x60;
        iVar4 = FUN_00a53f60(param_1,param_1 + lVar10,puVar17,puVar17 + lVar10,puVar19,param_3);
      }
      local_120 = param_1[1];
      uStack_118 = param_1[2];
      local_128 = *param_1;
      local_138 = puVar17[1];
      uStack_130 = puVar17[2];
      local_140 = *puVar17;
      uVar3 = *(uint *)*param_3;
      uVar6 = (ulong)uVar3;
      if ((2 < uVar3) ||
         (*(ushort *)((long)&local_140 + uVar6 * 2 + 4) <=
          *(ushort *)((long)&local_128 + uVar6 * 2 + 4))) {
        puVar9 = param_2 + -6;
        while (puVar7 = puVar9, param_1 != puVar7) {
          local_210 = puVar7[1];
          uStack_208 = puVar7[2];
          local_218 = *puVar7;
          local_228 = puVar17[1];
          uStack_220 = puVar17[2];
          local_230 = *puVar17;
          if (uVar3 < 3) {
            uVar15 = *(ushort *)((long)&local_218 + uVar6 * 2 + 4);
            uVar16 = *(ushort *)((long)&local_230 + uVar6 * 2 + 4);
          }
          else {
            uVar15 = 0;
            uVar16 = 0;
          }
          puVar9 = puVar7 + -3;
          if (uVar15 < uVar16) goto code_r0x00a533f4;
        }
        local_150 = param_1[1];
        uStack_148 = param_1[2];
        local_158 = *param_1;
        local_168 = param_2[-2];
        uStack_160 = param_2[-1];
        puVar9 = param_1 + 3;
        local_170 = *puVar19;
        if ((2 < uVar3) ||
           (*(ushort *)((long)&local_170 + uVar6 * 2 + 4) <=
            *(ushort *)((long)&local_158 + uVar6 * 2 + 4))) {
          if (puVar9 == puVar19) {
            return;
          }
          puVar9 = param_1 + 6;
          while( true ) {
            local_180 = param_1[1];
            uStack_178 = param_1[2];
            local_188 = *param_1;
            local_198 = puVar9[-2];
            uStack_190 = puVar9[-1];
            local_1a0 = puVar9[-3];
            if ((uVar3 < 3) &&
               (*(ushort *)((long)&local_188 + uVar6 * 2 + 4) <
                *(ushort *)((long)&local_1a0 + uVar6 * 2 + 4))) break;
            puVar9 = puVar9 + 3;
            if (param_2 == puVar9) {
              return;
            }
          }
          local_80 = puVar9[-3];
          local_78 = puVar9[-2];
          uStack_70 = puVar9[-1];
          uVar1 = param_2[-1];
          uVar14 = *puVar19;
          puVar9[-2] = param_2[-2];
          puVar9[-1] = uVar1;
          puVar9[-3] = uVar14;
          param_2[-2] = local_78;
          param_2[-1] = uStack_70;
          *puVar19 = local_80;
        }
        puVar7 = puVar19;
        if (puVar9 == puVar19) {
          return;
        }
        do {
          uVar3 = *(uint *)*param_3;
          uVar6 = (ulong)uVar3;
          puVar17 = puVar9 + -3;
          do {
            puVar11 = puVar17;
            local_1b0 = param_1[1];
            uStack_1a8 = param_1[2];
            local_1b8 = *param_1;
            local_1c8 = puVar11[4];
            uStack_1c0 = puVar11[5];
            local_1d0 = puVar11[3];
            if (uVar3 < 3) {
              uVar15 = *(ushort *)((long)&local_1b8 + uVar6 * 2 + 4);
              uVar16 = *(ushort *)((long)&local_1d0 + uVar6 * 2 + 4);
            }
            else {
              uVar15 = 0;
              uVar16 = 0;
            }
            puVar17 = puVar11 + 3;
          } while (uVar16 <= uVar15);
          puVar9 = puVar11 + 6;
          do {
            puVar8 = puVar7;
            puVar7 = puVar8 + -3;
            local_1e0 = param_1[1];
            uStack_1d8 = param_1[2];
            local_1e8 = *param_1;
            local_200 = *puVar7;
            local_1f8 = puVar8[-2];
            uStack_1f0 = puVar8[-1];
            if (2 < uVar3) break;
          } while (*(ushort *)((long)&local_1e8 + uVar6 * 2 + 4) <
                   *(ushort *)((long)&local_200 + uVar6 * 2 + 4));
          if (puVar7 <= puVar17) goto LAB_00a5329c;
          local_80 = *puVar17;
          local_78 = puVar11[4];
          uStack_70 = puVar11[5];
          uVar1 = puVar8[-1];
          uVar14 = *puVar7;
          puVar11[4] = puVar8[-2];
          puVar11[5] = uVar1;
          *puVar17 = uVar14;
          puVar8[-2] = local_78;
          puVar8[-1] = uStack_70;
          *puVar7 = local_80;
        } while( true );
      }
      puVar7 = puVar19;
      goto LAB_00a53428;
    }
    FUN_00a53ae0(param_1,param_1 + 3,param_1 + 6,param_3);
    if (param_1 + 9 == param_2) {
      return;
    }
    lVar10 = 0x30;
    puVar17 = param_1 + 9;
    puVar19 = param_1 + 6;
  }
LAB_00a5392c:
  puVar9 = puVar17;
  local_80 = *puVar9;
  local_78 = puVar9[1];
  uStack_70 = puVar9[2];
  local_90 = puVar19[1];
  uStack_88 = puVar19[2];
  local_98 = *puVar19;
  uVar3 = *(uint *)*param_3;
  if ((uVar3 < 3) &&
     (*(ushort *)((long)&local_80 + (ulong)uVar3 * 2 + 4) <
      *(ushort *)((long)&local_98 + (ulong)uVar3 * 2 + 4))) {
    local_b0 = *puVar9;
    local_a8 = puVar9[1];
    local_a0 = puVar9[2];
    lVar18 = lVar10;
    while( true ) {
      puVar17 = (undefined8 *)((long)param_1 + lVar18);
      puVar17[3] = *puVar17;
      puVar17[4] = puVar17[1];
      puVar17[5] = puVar17[2];
      if (lVar18 == 0) break;
      local_c8 = local_b0;
      uStack_c0 = local_a8;
      local_b8 = local_a0;
      local_d8 = puVar17[-2];
      uStack_d0 = puVar17[-1];
      local_e0 = puVar17[-3];
      uVar3 = *(uint *)*param_3;
      if ((2 < uVar3) ||
         (lVar18 = lVar18 + -0x18,
         *(ushort *)((long)&local_e0 + (ulong)uVar3 * 2 + 4) <=
         *(ushort *)((long)&local_c8 + (ulong)uVar3 * 2 + 4))) goto LAB_00a539fc;
    }
    puVar17 = param_1;
LAB_00a539fc:
    puVar17[1] = local_a8;
    puVar17[2] = local_a0;
    *puVar17 = local_b0;
  }
  lVar10 = lVar10 + 0x18;
  puVar17 = puVar9 + 3;
  puVar19 = puVar9;
  if (puVar9 + 3 == param_2) {
switchD_00a5386c_caseD_0:
    return;
  }
  goto LAB_00a5392c;
code_r0x00a533f4:
  local_80 = *param_1;
  local_78 = param_1[1];
  iVar4 = iVar4 + 1;
  uStack_70 = param_1[2];
  uVar1 = puVar7[1];
  uVar14 = puVar7[2];
  *param_1 = *puVar7;
  param_1[1] = uVar1;
  param_1[2] = uVar14;
  *puVar7 = local_80;
  puVar7[1] = local_78;
  puVar7[2] = uStack_70;
LAB_00a53428:
  puVar9 = param_1 + 3;
  if (puVar9 < puVar7) {
    do {
      uVar3 = *(uint *)*param_3;
      uVar6 = (ulong)uVar3;
      puVar11 = puVar9;
      do {
        puVar8 = puVar11;
        local_240 = puVar8[1];
        uStack_238 = puVar8[2];
        local_248 = *puVar8;
        local_258 = puVar17[1];
        uStack_250 = puVar17[2];
        local_260 = *puVar17;
        if (2 < uVar3) {
          puVar11 = puVar9 + 3;
          goto LAB_00a53498;
        }
        puVar11 = puVar8 + 3;
      } while (*(ushort *)((long)&local_248 + uVar6 * 2 + 4) <
               *(ushort *)((long)&local_260 + uVar6 * 2 + 4));
      puVar9 = puVar8;
LAB_00a53498:
      do {
        puVar8 = puVar7;
        puVar7 = puVar8 + -3;
        local_278 = *puVar7;
        local_270 = puVar8[-2];
        uStack_268 = puVar8[-1];
        local_290 = *puVar17;
        local_288 = puVar17[1];
        uStack_280 = puVar17[2];
        if (uVar3 < 3) {
          uVar15 = *(ushort *)((long)&local_278 + uVar6 * 2 + 4);
          uVar16 = *(ushort *)((long)&local_290 + uVar6 * 2 + 4);
        }
        else {
          uVar15 = 0;
          uVar16 = 0;
        }
      } while (uVar16 <= uVar15);
      if (puVar7 < puVar9) break;
      local_80 = *puVar9;
      local_78 = puVar9[1];
      uStack_70 = puVar9[2];
      uVar1 = puVar8[-1];
      uVar14 = *puVar7;
      puVar9[1] = puVar8[-2];
      puVar9[2] = uVar1;
      *puVar9 = uVar14;
      puVar8[-2] = local_78;
      puVar8[-1] = uStack_70;
      iVar4 = iVar4 + 1;
      *puVar7 = local_80;
      puVar8 = puVar7;
      if (puVar17 != puVar9) {
        puVar8 = puVar17;
      }
      puVar17 = puVar8;
      puVar9 = puVar11;
    } while( true );
  }
  if (puVar9 != puVar17) {
    local_2a0 = puVar17[1];
    uStack_298 = puVar17[2];
    local_2a8 = *puVar17;
    local_2c0 = *puVar9;
    local_2b8 = puVar9[1];
    uStack_2b0 = puVar9[2];
    uVar3 = *(uint *)*param_3;
    if ((uVar3 < 3) &&
       (*(ushort *)((long)&local_2a8 + (ulong)uVar3 * 2 + 4) <
        *(ushort *)((long)&local_2c0 + (ulong)uVar3 * 2 + 4))) {
      local_80 = *puVar9;
      local_78 = puVar9[1];
      iVar4 = iVar4 + 1;
      uStack_70 = puVar9[2];
      uVar1 = puVar17[2];
      uVar14 = *puVar17;
      puVar9[1] = puVar17[1];
      puVar9[2] = uVar1;
      *puVar9 = uVar14;
      puVar17[1] = local_78;
      puVar17[2] = uStack_70;
      *puVar17 = local_80;
    }
  }
  if (iVar4 == 0) {
    uVar6 = FUN_00a541d0(param_1,puVar9,param_3);
    uVar5 = FUN_00a541d0(puVar9 + 3,param_2,param_3);
    if ((uVar5 & 1) != 0) goto LAB_00a53848;
    puVar17 = puVar9 + 3;
    if ((uVar6 & 1) != 0) goto LAB_00a5329c;
  }
  if (((long)param_2 - (long)puVar9 >> 3) * -0x5555555555555555 <=
      ((long)puVar9 - (long)param_1 >> 3) * -0x5555555555555555) {
    FUN_00a53250(puVar9 + 3,param_2,param_3);
    param_2 = puVar9;
    goto LAB_00a5328c;
  }
  FUN_00a53250(param_1,puVar9,param_3);
  puVar17 = puVar9 + 3;
  goto LAB_00a5329c;
LAB_00a53848:
  param_2 = puVar9;
  if ((uVar6 & 1) != 0) {
    return;
  }
  goto LAB_00a5328c;
}


