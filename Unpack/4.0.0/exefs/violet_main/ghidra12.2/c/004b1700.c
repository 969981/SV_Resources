/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004b1700; name: FUN_004b1700
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b1700(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  byte *pbVar11;
  size_t sVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong *puVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  byte local_288 [16];
  undefined8 local_278;
  ulong local_270;
  undefined8 uStack_268;
  long *local_260;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_150;
  undefined4 local_148;
  char *local_120;
  undefined4 local_118;
  undefined1 auStack_114 [36];
  char *local_f0;
  undefined4 local_e8;
  undefined1 auStack_e4 [36];
  char *local_c0;
  undefined4 local_b8;
  undefined1 auStack_b4 [36];
  ulong *local_90;
  undefined8 uStack_88;
  char *local_80;
  
  lVar17 = param_3;
  if (param_3 == 0) {
    lVar17 = *(long *)(param_1 + 0x50);
  }
  uVar9 = FUN_004b3c30(param_1,*(undefined8 *)(lVar17 + 8),*(undefined8 *)(param_2 + 0x60));
  FUN_004ad8f4(param_1,*(undefined8 *)(param_2 + 0x60),uVar9,param_2);
  lVar17 = *(long *)(param_1 + 8);
  puVar24 = *(ulong **)(param_2 + 0x60);
  puVar10 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (puVar10 != (ulong *)0x0) {
    if ((*puVar24 & 1) == 0) {
      uVar25 = puVar24[1];
      uVar27 = *puVar24;
      puVar10[2] = puVar24[2];
      puVar10[1] = uVar25;
      *puVar10 = uVar27;
    }
    else {
      uVar27 = puVar24[1];
      pvVar2 = (void *)puVar24[2];
      if (uVar27 < 0x17) {
        pbVar11 = (byte *)((long)puVar10 + 1);
        *(byte *)puVar10 = (byte)((int)uVar27 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar27) {
LAB_004b21d0:
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar25 = uVar27 + 0x10 & 0xfffffffffffffff0;
        pbVar11 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar25);
        puVar10[1] = uVar27;
        puVar10[2] = (ulong)pbVar11;
        *puVar10 = uVar25 | 1;
      }
      memcpy(pbVar11,pvVar2,uVar27 + 1);
    }
  }
  local_90 = puVar10;
  FUN_004a3dc0(lVar17 + 0xd0,&local_90);
  *param_4 = puVar10;
  param_4[1] = uVar9;
  param_4[2] = *(undefined8 *)(param_1 + 0x50);
  param_4[3] = param_3;
  *(undefined2 *)(param_4 + 5) = 0;
  iVar15 = *(int *)(param_2 + 0x20);
  if (iVar15 == 0) {
    FUN_004aa7f4(param_1,uVar9,param_2,0,"Enums must contain at least one value.");
    iVar15 = *(int *)(param_2 + 0x20);
  }
  *(int *)((long)param_4 + 0x2c) = iVar15;
  uVar9 = FUN_004a41ac(*(undefined8 *)(param_1 + 8),iVar15 * 0x28);
  param_4[6] = uVar9;
  if ((0 < *(int *)(param_2 + 0x20)) &&
     (FUN_004b70f8(param_1,*(undefined8 *)(*(long *)(param_2 + 0x28) + 8),param_4,uVar9),
     1 < *(int *)(param_2 + 0x20))) {
    lVar17 = 0x28;
    lVar18 = 2;
    do {
      FUN_004b70f8(param_1,*(undefined8 *)(*(long *)(param_2 + 0x28) + lVar18 * 8),param_4,
                   param_4[6] + lVar17);
      lVar17 = lVar17 + 0x28;
      bVar1 = lVar18 < *(int *)(param_2 + 0x20);
      lVar18 = lVar18 + 1;
    } while (bVar1);
  }
  iVar15 = *(int *)(param_2 + 0x38);
  *(int *)(param_4 + 7) = iVar15;
  lVar17 = FUN_004a41ac(*(undefined8 *)(param_1 + 8),iVar15 << 3);
  param_4[8] = lVar17;
  iVar15 = *(int *)(param_2 + 0x38);
  if (0 < iVar15) {
    lVar18 = 0;
    lVar21 = 1;
    while( true ) {
      lVar14 = *(long *)(*(long *)(param_2 + 0x40) + lVar18 + 8);
      iVar3 = *(int *)(lVar14 + 0x18);
      *(int *)(lVar17 + lVar18) = iVar3;
      iVar4 = *(int *)(lVar14 + 0x1c);
      ((int *)(lVar17 + lVar18))[1] = iVar4;
      if (iVar4 < iVar3) {
        FUN_004aa7f4(param_1,param_4[1],lVar14,1,
                     "Reserved range end number must be greater than start number.");
        iVar15 = *(int *)(param_2 + 0x38);
      }
      if (iVar15 <= lVar21) break;
      lVar17 = param_4[8];
      lVar18 = lVar18 + 8;
      lVar21 = lVar21 + 1;
    }
  }
  uVar5 = *(uint *)(param_2 + 0x50);
  *(uint *)((long)param_4 + 0x3c) = uVar5;
  uVar9 = FUN_004a41ac(*(undefined8 *)(param_1 + 8),uVar5 << 3);
  param_4[9] = uVar9;
  puVar6 = PTR_FUN_047cba38;
  if (0 < (int)uVar5) {
    lVar17 = 0;
    do {
      lVar18 = *(long *)(param_1 + 8);
      puVar24 = *(ulong **)(*(long *)(param_2 + 0x58) + lVar17 + 8);
      puVar10 = (ulong *)FUN_0049e770(puVar6,0x18);
      if (puVar10 != (ulong *)0x0) {
        if ((*puVar24 & 1) == 0) {
          uVar25 = puVar24[1];
          uVar27 = *puVar24;
          puVar10[2] = puVar24[2];
          puVar10[1] = uVar25;
          *puVar10 = uVar27;
        }
        else {
          uVar27 = puVar24[1];
          pvVar2 = (void *)puVar24[2];
          if (uVar27 < 0x17) {
            pbVar11 = (byte *)((long)puVar10 + 1);
            *(byte *)puVar10 = (byte)((int)uVar27 << 1);
          }
          else {
            if (0xffffffffffffffef < uVar27) goto LAB_004b21d0;
            uVar25 = uVar27 + 0x10 & 0xfffffffffffffff0;
            pbVar11 = (byte *)FUN_0049e770(puVar6,uVar25);
            puVar10[1] = uVar27;
            puVar10[2] = (ulong)pbVar11;
            *puVar10 = uVar25 | 1;
          }
          memcpy(pbVar11,pvVar2,uVar27 + 1);
        }
      }
      local_90 = puVar10;
      FUN_004a3dc0(lVar18 + 0xd0,&local_90);
      *(ulong **)(param_4[9] + lVar17) = puVar10;
      lVar17 = lVar17 + 8;
    } while ((ulong)uVar5 * 8 != lVar17);
  }
  FUN_004b6754(param_1,param_2,param_4);
  param_4[4] = 0;
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) != 0) {
    uVar20 = *(undefined8 *)(param_2 + 0x68);
    local_80 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
    uVar7 = s_google_protobuf_EnumOptions_03c7ca6f._0_8_;
    uVar9 = CONCAT53(s_google_protobuf_EnumOptions_03c7ca6f._11_5_,
                     s_google_protobuf_EnumOptions_03c7ca6f._8_3_);
    uStack_88 = _UNK_03caa878;
    local_90 = _DAT_03caa870;
    uVar26 = CONCAT35(s_google_protobuf_EnumOptions_03c7ca6f._16_3_,
                      s_google_protobuf_EnumOptions_03c7ca6f._11_5_);
    *(undefined8 *)(local_80 + 0x13) = s_google_protobuf_EnumOptions_03c7ca6f._19_8_;
    *(undefined8 *)(local_80 + 0xb) = uVar26;
    *(undefined8 *)(local_80 + 8) = uVar9;
    *(undefined8 *)local_80 = uVar7;
    local_80[0x1b] = '\0';
                    /* try { // try from 004b1aa4 to 004b1abb has its CatchHandler @ 004b21d8 */
    FUN_004b7868(param_1,uVar20,param_4,3,&local_90);
    if (((ulong)local_90 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_80);
    }
  }
  FUN_004acb08(param_1,param_4[1],param_3,*param_4,param_2,4,param_4);
  iVar15 = *(int *)(param_2 + 0x38);
  if (0 < iVar15) {
    lVar17 = 2;
    lVar18 = 0;
    do {
      lVar21 = lVar18 + 1;
      if (lVar21 < iVar15) {
        lVar16 = *(long *)(param_2 + 0x40);
        lVar22 = *(long *)(lVar16 + lVar18 * 8 + 8);
        lVar14 = lVar17;
        while( true ) {
          lVar19 = *(long *)(lVar16 + lVar14 * 8);
          if ((*(int *)(lVar19 + 0x18) <= *(int *)(lVar22 + 0x1c)) &&
             (*(int *)(lVar22 + 0x18) <= *(int *)(lVar19 + 0x1c))) {
            uVar26 = param_4[1];
            uVar9 = *(undefined8 *)(lVar16 + lVar18 * 8 + 8);
            local_90 = (ulong *)FUN_00533180(*(int *)(lVar19 + 0x18),(long)&uStack_88 + 4);
            sVar12 = strlen((char *)local_90);
            uStack_88 = CONCAT44(uStack_88._4_4_,(int)sVar12);
            local_c0 = (char *)FUN_00533180(*(undefined4 *)(lVar19 + 0x1c),auStack_b4);
            sVar12 = strlen(local_c0);
            local_b8 = (undefined4)sVar12;
            local_f0 = (char *)FUN_00533180(*(undefined4 *)(lVar22 + 0x18),auStack_e4);
            sVar12 = strlen(local_f0);
            local_e8 = (undefined4)sVar12;
            local_120 = (char *)FUN_00533180(*(undefined4 *)(lVar22 + 0x1c),auStack_114);
            sVar12 = strlen(local_120);
            local_118 = (undefined4)sVar12;
            local_150 = 0;
            local_148 = 0xffffffff;
            local_180 = 0;
            local_178 = 0xffffffff;
            local_1b0 = 0;
            local_1a8 = 0xffffffff;
            local_1e0 = 0;
            local_1d8 = 0xffffffff;
            local_210 = 0;
            local_208 = 0xffffffff;
            local_240 = 0;
            local_238 = 0xffffffff;
            FUN_00506f30(&local_270,
                         "Reserved range $0 to $1 overlaps with already-defined range $2 to $3.",
                         &local_90,&local_c0,&local_f0,&local_120,&local_150,&local_180,&local_1b0,
                         &local_1e0,&local_210,&local_240);
            plVar13 = *(long **)(param_1 + 0x10);
            if (plVar13 != (long *)0x0) {
                    /* try { // try from 004b1c7c to 004b1c93 has its CatchHandler @ 004b2200 */
              (**(code **)(*plVar13 + 0x10))(plVar13,param_1 + 0x38,uVar26,uVar9,1,&local_270);
            }
            *(undefined1 *)(param_1 + 0x30) = 1;
            if ((local_270 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_260);
            }
            iVar15 = *(int *)(param_2 + 0x38);
          }
          if (iVar15 <= (int)lVar14) break;
          lVar16 = *(long *)(param_2 + 0x40);
          lVar14 = lVar14 + 1;
        }
      }
      lVar17 = lVar17 + 1;
      lVar18 = lVar21;
    } while (lVar21 < iVar15);
  }
  local_250 = 0x3f800000;
  uStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  local_260 = (long *)0x0;
  if (0 < *(int *)(param_2 + 0x50)) {
    lVar17 = 0;
    do {
      pbVar11 = *(byte **)(*(long *)(param_2 + 0x58) + lVar17 * 8 + 8);
      lVar18 = FUN_004c56cc(&local_270,pbVar11);
      if (lVar18 == 0) {
                    /* try { // try from 004b1d14 to 004b1d1f has its CatchHandler @ 004b21ec */
        FUN_004a5db0(&local_270,pbVar11);
      }
      else {
        local_90 = *(ulong **)(pbVar11 + 0x10);
        if ((*pbVar11 & 1) == 0) {
          local_90 = (ulong *)(pbVar11 + 1);
        }
        local_c0 = (char *)0x0;
        local_b8 = 0xffffffff;
        local_f0 = (char *)0x0;
        local_e8 = 0xffffffff;
        local_120 = (char *)0x0;
        local_118 = 0xffffffff;
        local_150 = 0;
        uVar5 = (uint)(*pbVar11 >> 1);
        if ((*pbVar11 & 1) != 0) {
          uVar5 = (uint)*(undefined8 *)(pbVar11 + 8);
        }
        local_148 = 0xffffffff;
        local_180 = 0;
        local_178 = 0xffffffff;
        local_1b0 = 0;
        local_1a8 = 0xffffffff;
        local_1e0 = 0;
        local_1d8 = 0xffffffff;
        local_210 = 0;
        local_208 = 0xffffffff;
        local_240 = 0;
        local_238 = 0xffffffff;
        uStack_88 = CONCAT44(uStack_88._4_4_,uVar5);
                    /* try { // try from 004b1dc0 to 004b1def has its CatchHandler @ 004b21fc */
        FUN_00506f30(local_288,"Enum value \"$0\" is reserved multiple times.",&local_90,&local_c0,
                     &local_f0,&local_120,&local_150,&local_180,&local_1b0,&local_1e0,&local_210,
                     &local_240);
        plVar13 = *(long **)(param_1 + 0x10);
        if (plVar13 != (long *)0x0) {
                    /* try { // try from 004b1e04 to 004b1e1b has its CatchHandler @ 004b21f4 */
          (**(code **)(*plVar13 + 0x10))(plVar13,param_1 + 0x38,pbVar11,param_2,0,local_288);
        }
        *(undefined1 *)(param_1 + 0x30) = 1;
        if ((local_288[0] & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_278);
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(param_2 + 0x50));
  }
  puVar6 = PTR_LAB_047cba48;
  uVar27 = local_270;
  plVar13 = local_260;
  if (0 < *(int *)((long)param_4 + 0x2c)) {
    lVar17 = 0;
    do {
      lVar18 = param_4[6];
      puVar23 = (undefined8 *)(lVar18 + lVar17 * 0x28);
      iVar15 = *(int *)(param_4 + 7);
      if (0 < iVar15) {
        lVar16 = lVar18 + lVar17 * 0x28;
        lVar14 = 0;
        lVar21 = 0;
        do {
          iVar3 = *(int *)(lVar16 + 0x10);
          if ((*(int *)(param_4[8] + lVar14) <= iVar3) &&
             (iVar3 <= *(int *)(param_4[8] + lVar14 + 4))) {
            uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x40) + lVar14 + 8);
            pbVar11 = (byte *)*puVar23;
            local_90 = *(ulong **)(pbVar11 + 0x10);
            if ((*pbVar11 & 1) == 0) {
              local_90 = (ulong *)(pbVar11 + 1);
            }
            uVar26 = *(undefined8 *)(lVar16 + 8);
            uVar5 = (uint)(*pbVar11 >> 1);
            if ((*pbVar11 & 1) != 0) {
              uVar5 = (uint)*(undefined8 *)(pbVar11 + 8);
            }
            uStack_88 = CONCAT44(uStack_88._4_4_,uVar5);
                    /* try { // try from 004b1f30 to 004b1f37 has its CatchHandler @ 004b2238 */
            local_c0 = (char *)FUN_00533180(iVar3,auStack_b4);
            sVar12 = strlen(local_c0);
            local_f0 = (char *)0x0;
            local_b8 = (undefined4)sVar12;
            local_e8 = 0xffffffff;
            local_120 = (char *)0x0;
            local_118 = 0xffffffff;
            local_150 = 0;
            local_148 = 0xffffffff;
            local_180 = 0;
            local_178 = 0xffffffff;
            local_1b0 = 0;
            local_1a8 = 0xffffffff;
            local_1e0 = 0;
            local_1d8 = 0xffffffff;
            local_210 = 0;
            local_208 = 0xffffffff;
            local_240 = 0;
            local_238 = 0xffffffff;
                    /* try { // try from 004b1f84 to 004b1fc7 has its CatchHandler @ 004b2234 */
            FUN_00506f30(local_288,"Enum value \"$0\" uses reserved number $1.",&local_90,&local_c0,
                         &local_f0,&local_120,&local_150,&local_180,&local_1b0,&local_1e0,&local_210
                         ,&local_240);
            plVar13 = *(long **)(param_1 + 0x10);
            if (plVar13 != (long *)0x0) {
                    /* try { // try from 004b1fdc to 004b1ff3 has its CatchHandler @ 004b2214 */
              (**(code **)(*plVar13 + 0x10))(plVar13,param_1 + 0x38,uVar26,uVar9,1,local_288);
            }
            *(undefined1 *)(param_1 + 0x30) = 1;
            if ((local_288[0] & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_278);
            }
            iVar15 = *(int *)(param_4 + 7);
          }
          lVar21 = lVar21 + 1;
          lVar14 = lVar14 + 8;
        } while (lVar21 < iVar15);
      }
      lVar21 = FUN_004c56cc(&local_270,*puVar23);
      if (lVar21 != 0) {
        pbVar11 = (byte *)*puVar23;
        local_90 = *(ulong **)(pbVar11 + 0x10);
        uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar17 * 8 + 8);
        if ((*pbVar11 & 1) == 0) {
          local_90 = (ulong *)(pbVar11 + 1);
        }
        uVar26 = *(undefined8 *)(lVar18 + lVar17 * 0x28 + 8);
        local_c0 = (char *)0x0;
        local_b8 = 0xffffffff;
        local_f0 = (char *)0x0;
        local_e8 = 0xffffffff;
        local_120 = (char *)0x0;
        local_118 = 0xffffffff;
        local_150 = 0;
        local_148 = 0xffffffff;
        local_180 = 0;
        local_178 = 0xffffffff;
        local_1b0 = 0;
        uVar5 = (uint)(*pbVar11 >> 1);
        if ((*pbVar11 & 1) != 0) {
          uVar5 = (uint)*(undefined8 *)(pbVar11 + 8);
        }
        local_1a8 = 0xffffffff;
        local_1e0 = 0;
        local_1d8 = 0xffffffff;
        local_210 = 0;
        local_240 = 0;
        local_238 = 0xffffffff;
        uStack_88 = CONCAT44(uStack_88._4_4_,uVar5);
        local_208 = 0xffffffff;
                    /* try { // try from 004b20c4 to 004b2107 has its CatchHandler @ 004b21f8 */
        FUN_00506f30(local_288,"Enum value \"$0\" is reserved.",&local_90,&local_c0,&local_f0,
                     &local_120,&local_150,&local_180,&local_1b0,&local_1e0,&local_210,&local_240);
        plVar13 = *(long **)(param_1 + 0x10);
        if (plVar13 != (long *)0x0) {
                    /* try { // try from 004b2118 to 004b212f has its CatchHandler @ 004b21f0 */
          (**(code **)(*plVar13 + 0x10))(plVar13,param_1 + 0x38,uVar26,uVar9,0,local_288);
        }
        *(undefined1 *)(param_1 + 0x30) = 1;
        if ((local_288[0] & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_278);
        }
      }
      lVar17 = lVar17 + 1;
      puVar6 = PTR_LAB_047cba48;
      uVar27 = local_270;
      plVar13 = local_260;
    } while (lVar17 < *(int *)((long)param_4 + 0x2c));
  }
  while (puVar8 = PTR_LAB_047cba48, PTR_LAB_047cba48 = puVar6, plVar13 != (long *)0x0) {
    lVar17 = *plVar13;
    local_270 = uVar27;
    if ((*(byte *)(plVar13 + 2) & 1) != 0) {
      FUN_0049e790(puVar8,plVar13[4]);
    }
    FUN_0049e790(puVar8,plVar13);
    puVar6 = PTR_LAB_047cba48;
    uVar27 = local_270;
    plVar13 = (long *)lVar17;
    PTR_LAB_047cba48 = puVar8;
  }
  local_270 = 0;
  if (uVar27 != 0) {
    FUN_0049e790(puVar6);
  }
  return;
}


