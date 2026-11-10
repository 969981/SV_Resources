/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004b0328; name: FUN_004b0328
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b0328(long *param_1,long param_2,long param_3,undefined8 *param_4)

{
  bool bVar1;
  int *piVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  byte *pbVar11;
  size_t sVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  undefined8 uVar28;
  ulong uVar29;
  int local_2cc;
  long local_2c8;
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
  byte *local_f0;
  uint local_e8;
  undefined1 auStack_e4 [36];
  char *local_c0;
  undefined4 local_b8;
  undefined1 auStack_b4 [36];
  ulong *local_90;
  undefined8 uStack_88;
  char *local_80;
  
  lVar19 = param_3;
  if (param_3 == 0) {
    lVar19 = param_1[10];
  }
  uVar9 = FUN_004b3c30(param_1,*(undefined8 *)(lVar19 + 8),*(undefined8 *)(param_2 + 0xd8));
  FUN_004ad8f4(param_1,*(undefined8 *)(param_2 + 0xd8),uVar9,param_2);
  lVar19 = param_1[1];
  puVar22 = *(ulong **)(param_2 + 0xd8);
  puVar10 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (puVar10 != (ulong *)0x0) {
    if ((*puVar22 & 1) == 0) {
      uVar27 = puVar22[1];
      uVar29 = *puVar22;
      puVar10[2] = puVar22[2];
      puVar10[1] = uVar27;
      *puVar10 = uVar29;
    }
    else {
      uVar29 = puVar22[1];
      pvVar3 = (void *)puVar22[2];
      if (uVar29 < 0x17) {
        pbVar11 = (byte *)((long)puVar10 + 1);
        *(byte *)puVar10 = (byte)((int)uVar29 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar29) {
LAB_004b15f4:
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar27 = uVar29 + 0x10 & 0xfffffffffffffff0;
        pbVar11 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar27);
        puVar10[1] = uVar29;
        puVar10[2] = (ulong)pbVar11;
        *puVar10 = uVar27 | 1;
      }
      memcpy(pbVar11,pvVar3,uVar29 + 1);
    }
  }
  local_90 = puVar10;
  FUN_004a3dc0(lVar19 + 0xd0,&local_90);
  *param_4 = puVar10;
  param_4[1] = uVar9;
  param_4[2] = param_1[10];
  param_4[3] = param_3;
  *(undefined2 *)((long)param_4 + 0x8c) = 0;
  *(undefined1 *)((long)param_4 + 0x8e) = 0;
  lVar19 = FUN_004c4d68(*(long *)(*param_1 + 0x20) + 0x90,uVar9);
  if (lVar19 != 0) {
    *(char *)((long)param_4 + 0x8e) = (char)*(undefined4 *)(lVar19 + 0x28);
  }
  iVar16 = *(int *)(param_2 + 0x98);
  *(int *)((long)param_4 + 0x6c) = iVar16;
  uVar9 = FUN_004a41ac(param_1[1],iVar16 * 0x30);
  param_4[6] = uVar9;
  if ((0 < *(int *)(param_2 + 0x98)) &&
     (FUN_004b3ddc(param_1,*(undefined8 *)(*(long *)(param_2 + 0xa0) + 8),param_4,uVar9),
     1 < *(int *)(param_2 + 0x98))) {
    lVar19 = 0x30;
    lVar20 = 2;
    do {
      FUN_004b3ddc(param_1,*(undefined8 *)(*(long *)(param_2 + 0xa0) + lVar20 * 8),param_4,
                   param_4[6] + lVar19);
      lVar19 = lVar19 + 0x30;
      bVar1 = lVar20 < *(int *)(param_2 + 0x98);
      lVar20 = lVar20 + 1;
    } while (bVar1);
  }
  iVar16 = *(int *)(param_2 + 0x20);
  *(int *)(param_4 + 0xd) = iVar16;
  uVar9 = FUN_004a41ac(param_1[1],iVar16 * 0x98);
  param_4[5] = uVar9;
  if ((0 < *(int *)(param_2 + 0x20)) &&
     (FUN_004b45a4(param_1,*(undefined8 *)(*(long *)(param_2 + 0x28) + 8),param_4,uVar9,0),
     1 < *(int *)(param_2 + 0x20))) {
    lVar19 = 0x98;
    lVar20 = 2;
    do {
      FUN_004b45a4(param_1,*(undefined8 *)(*(long *)(param_2 + 0x28) + lVar20 * 8),param_4,
                   param_4[5] + lVar19,0);
      lVar19 = lVar19 + 0x98;
      bVar1 = lVar20 < *(int *)(param_2 + 0x20);
      lVar20 = lVar20 + 1;
    } while (bVar1);
  }
  iVar16 = *(int *)(param_2 + 0x38);
  *(int *)((long)param_4 + 0x74) = iVar16;
  uVar9 = FUN_004a41ac(param_1[1],iVar16 * 0x90);
  param_4[7] = uVar9;
  if ((0 < *(int *)(param_2 + 0x38)) &&
     (FUN_004b0328(param_1,*(undefined8 *)(*(long *)(param_2 + 0x40) + 8),param_4,uVar9),
     1 < *(int *)(param_2 + 0x38))) {
    lVar19 = 0x90;
    lVar20 = 2;
    do {
      FUN_004b0328(param_1,*(undefined8 *)(*(long *)(param_2 + 0x40) + lVar20 * 8),param_4,
                   param_4[7] + lVar19);
      lVar19 = lVar19 + 0x90;
      bVar1 = lVar20 < *(int *)(param_2 + 0x38);
      lVar20 = lVar20 + 1;
    } while (bVar1);
  }
  iVar16 = *(int *)(param_2 + 0x50);
  *(int *)(param_4 + 0xf) = iVar16;
  uVar9 = FUN_004a41ac(param_1[1],iVar16 * 0x50);
  param_4[8] = uVar9;
  if ((0 < *(int *)(param_2 + 0x50)) &&
     (FUN_004b1700(param_1,*(undefined8 *)(*(long *)(param_2 + 0x58) + 8),param_4,uVar9),
     1 < *(int *)(param_2 + 0x50))) {
    lVar19 = 0x50;
    lVar20 = 2;
    do {
      FUN_004b1700(param_1,*(undefined8 *)(*(long *)(param_2 + 0x58) + lVar20 * 8),param_4,
                   param_4[8] + lVar19);
      lVar19 = lVar19 + 0x50;
      bVar1 = lVar20 < *(int *)(param_2 + 0x50);
      lVar20 = lVar20 + 1;
    } while (bVar1);
  }
  iVar16 = *(int *)(param_2 + 0x68);
  *(int *)((long)param_4 + 0x7c) = iVar16;
  uVar9 = FUN_004a41ac(param_1[1],iVar16 << 4);
  param_4[9] = uVar9;
  if ((0 < *(int *)(param_2 + 0x68)) &&
     (FUN_004b3fc4(param_1,*(undefined8 *)(*(long *)(param_2 + 0x70) + 8),param_4,uVar9),
     1 < *(int *)(param_2 + 0x68))) {
    lVar19 = 0x10;
    lVar20 = 2;
    do {
      FUN_004b3fc4(param_1,*(undefined8 *)(*(long *)(param_2 + 0x70) + lVar20 * 8),param_4,
                   param_4[9] + lVar19);
      lVar19 = lVar19 + 0x10;
      bVar1 = lVar20 < *(int *)(param_2 + 0x68);
      lVar20 = lVar20 + 1;
    } while (bVar1);
  }
  iVar16 = *(int *)(param_2 + 0x80);
  *(int *)(param_4 + 0x10) = iVar16;
  uVar9 = FUN_004a41ac(param_1[1],iVar16 * 0x98);
  param_4[10] = uVar9;
  if ((0 < *(int *)(param_2 + 0x80)) &&
     (FUN_004b45a4(param_1,*(undefined8 *)(*(long *)(param_2 + 0x88) + 8),param_4,uVar9,1),
     1 < *(int *)(param_2 + 0x80))) {
    lVar19 = 0x98;
    lVar20 = 2;
    do {
      FUN_004b45a4(param_1,*(undefined8 *)(*(long *)(param_2 + 0x88) + lVar20 * 8),param_4,
                   param_4[10] + lVar19,1);
      lVar19 = lVar19 + 0x98;
      bVar1 = lVar20 < *(int *)(param_2 + 0x80);
      lVar20 = lVar20 + 1;
    } while (bVar1);
  }
  iVar16 = *(int *)(param_2 + 0xb0);
  *(int *)((long)param_4 + 0x84) = iVar16;
  lVar19 = FUN_004a41ac(param_1[1],iVar16 << 3);
  param_4[0xb] = lVar19;
  iVar16 = *(int *)(param_2 + 0xb0);
  if (0 < iVar16) {
    lVar20 = 0;
    while( true ) {
      lVar15 = *(long *)(*(long *)(param_2 + 0xb8) + lVar20 * 8 + 8);
      uVar9 = *(undefined8 *)(lVar15 + 0x18);
      *(undefined8 *)(lVar19 + lVar20 * 8) = uVar9;
      if ((int)uVar9 < 1) {
        FUN_004aa7f4(param_1,param_4[1],lVar15,1,"Reserved numbers must be positive integers.");
        iVar16 = *(int *)(param_2 + 0xb0);
      }
      lVar20 = lVar20 + 1;
      if (iVar16 <= lVar20) break;
      lVar19 = param_4[0xb];
    }
  }
  uVar4 = *(uint *)(param_2 + 200);
  *(uint *)(param_4 + 0x11) = uVar4;
  uVar9 = FUN_004a41ac(param_1[1],uVar4 << 3);
  param_4[0xc] = uVar9;
  puVar6 = PTR_FUN_047cba38;
  if (0 < (int)uVar4) {
    lVar19 = 0;
    do {
      lVar20 = param_1[1];
      puVar22 = *(ulong **)(*(long *)(param_2 + 0xd0) + lVar19 + 8);
      puVar10 = (ulong *)FUN_0049e770(puVar6,0x18);
      if (puVar10 != (ulong *)0x0) {
        if ((*puVar22 & 1) == 0) {
          uVar27 = puVar22[1];
          uVar29 = *puVar22;
          puVar10[2] = puVar22[2];
          puVar10[1] = uVar27;
          *puVar10 = uVar29;
        }
        else {
          uVar29 = puVar22[1];
          pvVar3 = (void *)puVar22[2];
          if (uVar29 < 0x17) {
            pbVar11 = (byte *)((long)puVar10 + 1);
            *(byte *)puVar10 = (byte)((int)uVar29 << 1);
          }
          else {
            if (0xffffffffffffffef < uVar29) goto LAB_004b15f4;
            uVar27 = uVar29 + 0x10 & 0xfffffffffffffff0;
            pbVar11 = (byte *)FUN_0049e770(puVar6,uVar27);
            puVar10[1] = uVar29;
            puVar10[2] = (ulong)pbVar11;
            *puVar10 = uVar27 | 1;
          }
          memcpy(pbVar11,pvVar3,uVar29 + 1);
        }
      }
      local_90 = puVar10;
      FUN_004a3dc0(lVar20 + 0xd0,&local_90);
      *(ulong **)(param_4[0xc] + lVar19) = puVar10;
      lVar19 = lVar19 + 8;
    } while ((ulong)uVar4 * 8 != lVar19);
  }
  param_4[4] = 0;
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) != 0) {
    uVar24 = *(undefined8 *)(param_2 + 0xe0);
    local_80 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
    uVar7 = s_google_protobuf_MessageOptions_03c2cf0a._0_8_;
    uVar9 = CONCAT26(s_google_protobuf_MessageOptions_03c2cf0a._14_2_,
                     s_google_protobuf_MessageOptions_03c2cf0a._8_6_);
    uStack_88 = _UNK_03cab618;
    local_90 = _DAT_03cab610;
    uVar28 = CONCAT62(s_google_protobuf_MessageOptions_03c2cf0a._16_6_,
                      s_google_protobuf_MessageOptions_03c2cf0a._14_2_);
    *(undefined8 *)(local_80 + 0x16) = s_google_protobuf_MessageOptions_03c2cf0a._22_8_;
    *(undefined8 *)(local_80 + 0xe) = uVar28;
    *(undefined8 *)(local_80 + 8) = uVar9;
    *(undefined8 *)local_80 = uVar7;
    local_80[0x1e] = '\0';
                    /* try { // try from 004b095c to 004b0973 has its CatchHandler @ 004b15fc */
    FUN_004b4438(param_1,uVar24,param_4,7,&local_90);
    if (((ulong)local_90 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_80);
    }
  }
  FUN_004acb08(param_1,param_4[1],param_3,*param_4,param_2,1,param_4);
  iVar16 = *(int *)(param_2 + 0xb0);
  if (0 < iVar16) {
    lVar19 = 2;
    lVar20 = 0;
    do {
      lVar15 = lVar20 + 1;
      if (lVar15 < iVar16) {
        lVar18 = *(long *)(param_2 + 0xb8);
        lVar25 = *(long *)(lVar18 + lVar20 * 8 + 8);
        lVar26 = lVar19;
        while( true ) {
          lVar21 = *(long *)(lVar18 + lVar26 * 8);
          if ((*(int *)(lVar21 + 0x18) < *(int *)(lVar25 + 0x1c)) &&
             (*(int *)(lVar25 + 0x18) < *(int *)(lVar21 + 0x1c))) {
            uVar28 = param_4[1];
            uVar9 = *(undefined8 *)(lVar18 + lVar20 * 8 + 8);
            local_90 = (ulong *)FUN_00533180(*(int *)(lVar21 + 0x18),(long)&uStack_88 + 4);
            sVar12 = strlen((char *)local_90);
            uStack_88 = CONCAT44(uStack_88._4_4_,(int)sVar12);
            local_c0 = (char *)FUN_00533180(*(int *)(lVar21 + 0x1c) + -1,auStack_b4);
            sVar12 = strlen(local_c0);
            local_b8 = (undefined4)sVar12;
            local_f0 = (byte *)FUN_00533180(*(undefined4 *)(lVar25 + 0x18),auStack_e4);
            sVar12 = strlen((char *)local_f0);
            local_e8 = (uint)sVar12;
            local_120 = (char *)FUN_00533180(*(int *)(lVar25 + 0x1c) + -1,auStack_114);
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
            plVar13 = (long *)param_1[2];
            if (plVar13 != (long *)0x0) {
                    /* try { // try from 004b0b40 to 004b0b57 has its CatchHandler @ 004b1628 */
              (**(code **)(*plVar13 + 0x10))(plVar13,param_1 + 7,uVar28,uVar9,1,&local_270);
            }
            *(undefined1 *)(param_1 + 6) = 1;
            if ((local_270 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_260);
            }
            iVar16 = *(int *)(param_2 + 0xb0);
          }
          if (iVar16 <= (int)lVar26) break;
          lVar18 = *(long *)(param_2 + 0xb8);
          lVar26 = lVar26 + 1;
        }
      }
      lVar19 = lVar19 + 1;
      lVar20 = lVar15;
    } while (lVar15 < iVar16);
  }
  local_250 = 0x3f800000;
  uStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  local_260 = (long *)0x0;
  if (0 < *(int *)(param_2 + 200)) {
    lVar19 = 0;
    do {
      pbVar11 = *(byte **)(*(long *)(param_2 + 0xd0) + lVar19 * 8 + 8);
      lVar20 = FUN_004c56cc(&local_270,pbVar11);
      if (lVar20 == 0) {
                    /* try { // try from 004b0bd0 to 004b0bdb has its CatchHandler @ 004b1610 */
        FUN_004a5db0(&local_270,pbVar11);
      }
      else {
        local_90 = *(ulong **)(pbVar11 + 0x10);
        if ((*pbVar11 & 1) == 0) {
          local_90 = (ulong *)(pbVar11 + 1);
        }
        local_c0 = (char *)0x0;
        local_b8 = 0xffffffff;
        local_f0 = (byte *)0x0;
        local_e8 = 0xffffffff;
        local_120 = (char *)0x0;
        local_118 = 0xffffffff;
        local_150 = 0;
        uVar4 = (uint)(*pbVar11 >> 1);
        if ((*pbVar11 & 1) != 0) {
          uVar4 = (uint)*(undefined8 *)(pbVar11 + 8);
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
        uStack_88 = CONCAT44(uStack_88._4_4_,uVar4);
                    /* try { // try from 004b0c7c to 004b0caf has its CatchHandler @ 004b1620 */
        FUN_00506f30(local_288,"Field name \"$0\" is reserved multiple times.",&local_90,&local_c0,
                     &local_f0,&local_120,&local_150,&local_180,&local_1b0,&local_1e0,&local_210,
                     &local_240);
        plVar13 = (long *)param_1[2];
        if (plVar13 != (long *)0x0) {
                    /* try { // try from 004b0cc0 to 004b0cd7 has its CatchHandler @ 004b1618 */
          (**(code **)(*plVar13 + 0x10))(plVar13,param_1 + 7,pbVar11,param_2,0,local_288);
        }
        *(undefined1 *)(param_1 + 6) = 1;
        if ((local_288[0] & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_278);
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(int *)(param_2 + 200));
  }
  if (0 < *(int *)(param_4 + 0xd)) {
    lVar19 = 0;
    plVar13 = param_1 + 7;
    do {
      lVar20 = param_4[5];
      puVar23 = (undefined8 *)(lVar20 + lVar19 * 0x98);
      iVar16 = *(int *)((long)param_4 + 0x7c);
      if (0 < iVar16) {
        lVar18 = lVar20 + lVar19 * 0x98;
        lVar26 = 0;
        lVar15 = 0;
        piVar2 = (int *)(lVar18 + 0x44);
        do {
          iVar5 = *(int *)(param_4[9] + lVar26);
          iVar17 = *piVar2;
          if ((iVar5 <= iVar17) && (lVar25 = param_4[9] + lVar26, iVar17 < *(int *)(lVar25 + 4))) {
            uVar28 = *(undefined8 *)(lVar18 + 8);
            uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x70) + lVar15 * 8 + 8);
                    /* try { // try from 004b0dc8 to 004b0dcf has its CatchHandler @ 004b168c */
            local_90 = (ulong *)FUN_00533180(iVar5,(long)&uStack_88 + 4);
            sVar12 = strlen((char *)local_90);
            uStack_88 = CONCAT44(uStack_88._4_4_,(int)sVar12);
                    /* try { // try from 004b0de4 to 004b0deb has its CatchHandler @ 004b16a0 */
            local_c0 = (char *)FUN_00533180(*(int *)(lVar25 + 4) + -1,auStack_b4);
            sVar12 = strlen(local_c0);
            local_b8 = (undefined4)sVar12;
            pbVar11 = (byte *)*puVar23;
            local_f0 = *(byte **)(pbVar11 + 0x10);
            if ((*pbVar11 & 1) == 0) {
              local_f0 = pbVar11 + 1;
            }
            local_e8 = (uint)(*pbVar11 >> 1);
            if ((*pbVar11 & 1) != 0) {
              local_e8 = (uint)*(undefined8 *)(pbVar11 + 8);
            }
                    /* try { // try from 004b0e2c to 004b0e33 has its CatchHandler @ 004b169c */
            local_120 = (char *)FUN_00533180(*piVar2,auStack_114);
            sVar12 = strlen(local_120);
            local_150 = 0;
            local_118 = (undefined4)sVar12;
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
                    /* try { // try from 004b0e74 to 004b0eb7 has its CatchHandler @ 004b1698 */
            FUN_00506f30(local_288,"Extension range $0 to $1 includes field \"$2\" ($3).",&local_90,
                         &local_c0,&local_f0,&local_120,&local_150,&local_180,&local_1b0,&local_1e0,
                         &local_210,&local_240);
            plVar14 = (long *)param_1[2];
            if (plVar14 != (long *)0x0) {
                    /* try { // try from 004b0ec8 to 004b0edf has its CatchHandler @ 004b1644 */
              (**(code **)(*plVar14 + 0x10))(plVar14,plVar13,uVar28,uVar9,1,local_288);
            }
            *(undefined1 *)(param_1 + 6) = 1;
            if ((local_288[0] & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_278);
            }
            iVar16 = *(int *)((long)param_4 + 0x7c);
          }
          lVar15 = lVar15 + 1;
          lVar26 = lVar26 + 0x10;
        } while (lVar15 < iVar16);
      }
      iVar16 = *(int *)((long)param_4 + 0x84);
      if (0 < iVar16) {
        lVar18 = lVar20 + lVar19 * 0x98;
        lVar26 = 0;
        lVar15 = 0;
        do {
          iVar17 = *(int *)(lVar18 + 0x44);
          if ((*(int *)(param_4[0xb] + lVar26) <= iVar17) &&
             (iVar17 < *(int *)(param_4[0xb] + lVar26 + 4))) {
            uVar9 = *(undefined8 *)(*(long *)(param_2 + 0xb8) + lVar26 + 8);
            pbVar11 = (byte *)*puVar23;
            local_90 = *(ulong **)(pbVar11 + 0x10);
            if ((*pbVar11 & 1) == 0) {
              local_90 = (ulong *)(pbVar11 + 1);
            }
            uVar28 = *(undefined8 *)(lVar18 + 8);
            uVar4 = (uint)(*pbVar11 >> 1);
            if ((*pbVar11 & 1) != 0) {
              uVar4 = (uint)*(undefined8 *)(pbVar11 + 8);
            }
            uStack_88 = CONCAT44(uStack_88._4_4_,uVar4);
                    /* try { // try from 004b0fac to 004b0fb3 has its CatchHandler @ 004b1694 */
            local_c0 = (char *)FUN_00533180(iVar17,auStack_b4);
            sVar12 = strlen(local_c0);
            local_f0 = (byte *)0x0;
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
                    /* try { // try from 004b1000 to 004b1043 has its CatchHandler @ 004b1690 */
            FUN_00506f30(local_288,"Field \"$0\" uses reserved number $1.",&local_90,&local_c0,
                         &local_f0,&local_120,&local_150,&local_180,&local_1b0,&local_1e0,&local_210
                         ,&local_240);
            plVar14 = (long *)param_1[2];
            if (plVar14 != (long *)0x0) {
                    /* try { // try from 004b1054 to 004b106b has its CatchHandler @ 004b1640 */
              (**(code **)(*plVar14 + 0x10))(plVar14,plVar13,uVar28,uVar9,1,local_288);
            }
            *(undefined1 *)(param_1 + 6) = 1;
            if ((local_288[0] & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_278);
            }
            iVar16 = *(int *)((long)param_4 + 0x84);
          }
          lVar15 = lVar15 + 1;
          lVar26 = lVar26 + 8;
        } while (lVar15 < iVar16);
      }
      lVar15 = FUN_004c56cc(&local_270,*puVar23);
      if (lVar15 != 0) {
        pbVar11 = (byte *)*puVar23;
        local_90 = *(ulong **)(pbVar11 + 0x10);
        uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar19 * 8 + 8);
        if ((*pbVar11 & 1) == 0) {
          local_90 = (ulong *)(pbVar11 + 1);
        }
        uVar28 = *(undefined8 *)(lVar20 + lVar19 * 0x98 + 8);
        local_c0 = (char *)0x0;
        local_b8 = 0xffffffff;
        local_f0 = (byte *)0x0;
        local_e8 = 0xffffffff;
        local_120 = (char *)0x0;
        local_118 = 0xffffffff;
        local_150 = 0;
        local_148 = 0xffffffff;
        local_180 = 0;
        local_178 = 0xffffffff;
        local_1b0 = 0;
        uVar4 = (uint)(*pbVar11 >> 1);
        if ((*pbVar11 & 1) != 0) {
          uVar4 = (uint)*(undefined8 *)(pbVar11 + 8);
        }
        local_1a8 = 0xffffffff;
        local_1e0 = 0;
        local_1d8 = 0xffffffff;
        local_210 = 0;
        local_240 = 0;
        local_238 = 0xffffffff;
        uStack_88 = CONCAT44(uStack_88._4_4_,uVar4);
        local_208 = 0xffffffff;
                    /* try { // try from 004b1138 to 004b117b has its CatchHandler @ 004b161c */
        FUN_00506f30(local_288,"Field name \"$0\" is reserved.",&local_90,&local_c0,&local_f0,
                     &local_120,&local_150,&local_180,&local_1b0,&local_1e0,&local_210,&local_240);
        plVar14 = (long *)param_1[2];
        if (plVar14 != (long *)0x0) {
                    /* try { // try from 004b118c to 004b11a3 has its CatchHandler @ 004b1614 */
          (**(code **)(*plVar14 + 0x10))(plVar14,plVar13,uVar28,uVar9,0,local_288);
        }
        *(undefined1 *)(param_1 + 6) = 1;
        if ((local_288[0] & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_278);
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(int *)(param_4 + 0xd));
  }
  iVar16 = *(int *)((long)param_4 + 0x7c);
  puVar6 = PTR_LAB_047cba48;
  uVar29 = local_270;
  plVar13 = local_260;
  if (0 < iVar16) {
    local_2c8 = 0;
    local_2cc = 1;
    lVar19 = 0;
    do {
      piVar2 = (int *)(param_4[9] + lVar19 * 0x10);
      iVar17 = *(int *)((long)param_4 + 0x84);
      if (0 < iVar17) {
        lVar15 = 0;
        lVar20 = 0;
        do {
          lVar26 = param_4[0xb];
          if (*(int *)(lVar26 + lVar15) < piVar2[1]) {
            if (*piVar2 < *(int *)(lVar26 + lVar15 + 4)) {
              uVar28 = param_4[1];
              uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x70) + lVar19 * 8 + 8);
                    /* try { // try from 004b12b4 to 004b12bb has its CatchHandler @ 004b167c */
              local_90 = (ulong *)FUN_00533180(*piVar2,(long)&uStack_88 + 4);
              sVar12 = strlen((char *)local_90);
              uStack_88 = CONCAT44(uStack_88._4_4_,(int)sVar12);
                    /* try { // try from 004b12d0 to 004b12d7 has its CatchHandler @ 004b1678 */
              local_c0 = (char *)FUN_00533180(piVar2[1] + -1,auStack_b4);
              sVar12 = strlen(local_c0);
              local_b8 = (undefined4)sVar12;
                    /* try { // try from 004b12e8 to 004b12ef has its CatchHandler @ 004b1688 */
              local_f0 = (byte *)FUN_00533180(*(undefined4 *)(lVar26 + lVar15),auStack_e4);
              sVar12 = strlen((char *)local_f0);
              local_e8 = (uint)sVar12;
                    /* try { // try from 004b1304 to 004b130b has its CatchHandler @ 004b1684 */
              local_120 = (char *)FUN_00533180(*(int *)(lVar26 + lVar15 + 4) + -1,auStack_114);
              sVar12 = strlen(local_120);
              local_150 = 0;
              local_118 = (undefined4)sVar12;
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
                    /* try { // try from 004b1348 to 004b138b has its CatchHandler @ 004b1680 */
              FUN_00506f30(local_288,
                           "Extension range $0 to $1 overlaps with reserved range $2 to $3.",
                           &local_90,&local_c0,&local_f0,&local_120,&local_150,&local_180,&local_1b0
                           ,&local_1e0,&local_210,&local_240);
              plVar13 = (long *)param_1[2];
              if (plVar13 != (long *)0x0) {
                    /* try { // try from 004b13a0 to 004b13b7 has its CatchHandler @ 004b163c */
                (**(code **)(*plVar13 + 0x10))(plVar13,param_1 + 7,uVar28,uVar9,1,local_288);
              }
              *(undefined1 *)(param_1 + 6) = 1;
              if ((local_288[0] & 1) != 0) {
                FUN_0049e790(PTR_LAB_047cba48,local_278);
              }
              iVar17 = *(int *)((long)param_4 + 0x84);
            }
          }
          lVar20 = lVar20 + 1;
          lVar15 = lVar15 + 8;
        } while (lVar20 < iVar17);
        iVar16 = *(int *)((long)param_4 + 0x7c);
      }
      lVar20 = lVar19 + 1;
      if (lVar20 < iVar16) {
        lVar15 = local_2c8;
        iVar17 = local_2cc;
        do {
          lVar26 = param_4[9] + lVar15;
          if ((*(int *)(lVar26 + 0x10) < piVar2[1]) && (*piVar2 < *(int *)(lVar26 + 0x14))) {
            uVar28 = param_4[1];
            uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x70) + lVar19 * 8 + 8);
                    /* try { // try from 004b1450 to 004b1457 has its CatchHandler @ 004b1668 */
            local_90 = (ulong *)FUN_00533180(*(int *)(lVar26 + 0x10),(long)&uStack_88 + 4);
            sVar12 = strlen((char *)local_90);
            uStack_88 = CONCAT44(uStack_88._4_4_,(int)sVar12);
                    /* try { // try from 004b146c to 004b1473 has its CatchHandler @ 004b1664 */
            local_c0 = (char *)FUN_00533180(*(int *)(lVar26 + 0x14) + -1,auStack_b4);
            sVar12 = strlen(local_c0);
            local_b8 = (undefined4)sVar12;
                    /* try { // try from 004b1484 to 004b148b has its CatchHandler @ 004b1674 */
            local_f0 = (byte *)FUN_00533180(*piVar2,auStack_e4);
            sVar12 = strlen((char *)local_f0);
            local_e8 = (uint)sVar12;
                    /* try { // try from 004b14a4 to 004b14ab has its CatchHandler @ 004b1670 */
            local_120 = (char *)FUN_00533180(piVar2[1] + -1,auStack_114);
            sVar12 = strlen(local_120);
            local_150 = 0;
            local_118 = (undefined4)sVar12;
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
                    /* try { // try from 004b14e8 to 004b152b has its CatchHandler @ 004b166c */
            FUN_00506f30(local_288,
                         "Extension range $0 to $1 overlaps with already-defined range $2 to $3.",
                         &local_90,&local_c0,&local_f0,&local_120,&local_150,&local_180,&local_1b0,
                         &local_1e0,&local_210,&local_240);
            plVar13 = (long *)param_1[2];
            if (plVar13 != (long *)0x0) {
                    /* try { // try from 004b153c to 004b1553 has its CatchHandler @ 004b1624 */
              (**(code **)(*plVar13 + 0x10))(plVar13,param_1 + 7,uVar28,uVar9,1,local_288);
            }
            *(undefined1 *)(param_1 + 6) = 1;
            if ((local_288[0] & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_278);
            }
            iVar16 = *(int *)((long)param_4 + 0x7c);
          }
          iVar17 = iVar17 + 1;
          lVar15 = lVar15 + 0x10;
        } while (iVar17 < iVar16);
      }
      local_2c8 = local_2c8 + 0x10;
      local_2cc = local_2cc + 1;
      lVar19 = lVar20;
      puVar6 = PTR_LAB_047cba48;
      uVar29 = local_270;
      plVar13 = local_260;
    } while (lVar20 < iVar16);
  }
  while (puVar8 = PTR_LAB_047cba48, PTR_LAB_047cba48 = puVar6, plVar13 != (long *)0x0) {
    lVar19 = *plVar13;
    local_270 = uVar29;
    if ((*(byte *)(plVar13 + 2) & 1) != 0) {
      FUN_0049e790(puVar8,plVar13[4]);
    }
    FUN_0049e790(puVar8,plVar13);
    puVar6 = PTR_LAB_047cba48;
    uVar29 = local_270;
    plVar13 = (long *)lVar19;
    PTR_LAB_047cba48 = puVar8;
  }
  local_270 = 0;
  if (uVar29 != 0) {
    FUN_0049e790(puVar6);
  }
  return;
}


