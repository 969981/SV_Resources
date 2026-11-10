/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004b89a8; name: FUN_004b89a8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_004b89a8(long *param_1,byte *param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  void *pvVar3;
  char cVar4;
  byte bVar5;
  ulong uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong uVar12;
  void *__dest;
  size_t sVar13;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  long extraout_x1_03;
  long extraout_x1_04;
  undefined8 uVar14;
  char *pcVar15;
  uint uVar16;
  undefined4 uVar17;
  byte *pbVar18;
  byte *pbVar19;
  long *plVar20;
  int *piVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  ulong uVar27;
  long lVar28;
  undefined8 *puVar29;
  undefined2 uVar30;
  undefined8 uVar31;
  byte local_278 [16];
  undefined8 local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_200;
  undefined4 local_1f8;
  byte *local_1d0;
  undefined4 local_1c8;
  undefined **local_1a0;
  undefined4 local_198;
  undefined *local_170;
  byte **local_168;
  byte *local_140;
  uint local_138;
  undefined8 local_130;
  byte *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulong *local_e0;
  undefined8 uStack_d8;
  ulong *local_d0;
  ulong local_b0;
  uint uStack_a8;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  char cStack_a0;
  char acStack_9f [5];
  undefined1 uStack_9a;
  undefined1 uStack_99;
  ulong local_80;
  ulong uStack_78;
  ulong *local_70;
  
  if (*(long *)(param_2 + 0x78) == 0) {
    uVar10 = FUN_004ddbec();
    *(undefined8 *)(param_2 + 0x78) = uVar10;
  }
  FUN_004a32dc(param_1[0xb],param_2);
  if ((*(byte *)(param_3 + 0x10) >> 1 & 1) != 0) {
    uVar10 = *(undefined8 *)(param_3 + 0x20);
    iVar9 = FUN_004ab754(param_1,uVar10,*(undefined8 *)(param_2 + 8),0,1);
    lVar28 = extraout_x1;
    if (iVar9 == 0) {
      if (*(char *)(*param_1 + 0x2a) == '\0') goto LAB_004b8d1c;
      iVar9 = FUN_004abe80(*param_1,uVar10,2);
      lVar28 = extraout_x1_00;
    }
    if (iVar9 == 1) {
      *(long *)(param_2 + 0x50) = lVar28;
      uVar12 = (ulong)*(uint *)(lVar28 + 0x7c);
      iVar9 = *(int *)(param_2 + 0x44);
      if (0 < (int)*(uint *)(lVar28 + 0x7c)) {
        piVar21 = (int *)(*(long *)(lVar28 + 0x48) + 4);
        do {
          if ((piVar21[-1] <= iVar9) && (iVar9 < *piVar21)) goto LAB_004b89f8;
          piVar21 = piVar21 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (*(char *)(*param_1 + 0x2a) != '\0') {
        pbVar18 = *(byte **)(param_3 + 0x20);
        if ((*pbVar18 & 1) == 0) {
          if ((*pbVar18 & 0xfe) == 0x42) {
            pbVar18 = pbVar18 + 1;
            goto LAB_004b92ac;
          }
        }
        else if (*(long *)(pbVar18 + 8) == 0x21) {
          pbVar18 = *(byte **)(pbVar18 + 0x10);
LAB_004b92ac:
          if (((*(long *)pbVar18 == 0x702e656c676f6f67 &&
               *(long *)(pbVar18 + 8) == 0x2e6675626f746f72) &&
              (*(long *)(pbVar18 + 0x10) == 0x4d2e656764697262 &&
              *(long *)(pbVar18 + 0x18) == 0x6553656761737365)) && pbVar18[0x20] == 0x74)
          goto LAB_004b89f8;
        }
      }
      pbVar19 = *(byte **)(lVar28 + 8);
      pbVar18 = *(byte **)(pbVar19 + 0x10);
      if ((*pbVar19 & 1) == 0) {
        pbVar18 = pbVar19 + 1;
      }
      uVar10 = *(undefined8 *)(param_2 + 8);
      local_b0._0_1_ = (byte)pbVar18;
      local_b0._1_7_ = (undefined7)((ulong)pbVar18 >> 8);
      uStack_a8 = (uint)(*pbVar19 >> 1);
      if ((*pbVar19 & 1) != 0) {
        uStack_a8 = (uint)*(undefined8 *)(pbVar19 + 8);
      }
      local_e0 = (ulong *)FUN_00533180(iVar9,(long)&uStack_d8 + 4);
      sVar13 = strlen((char *)local_e0);
      uStack_108 = CONCAT44(uStack_108._4_4_,0xffffffff);
      local_138 = 0xffffffff;
      local_168 = (byte **)CONCAT44(local_168._4_4_,0xffffffff);
      local_198 = 0xffffffff;
      local_1c8 = 0xffffffff;
      local_1f8 = 0xffffffff;
      local_228 = 0xffffffff;
      local_258 = 0xffffffff;
      uStack_d8 = CONCAT44(uStack_d8._4_4_,(int)sVar13);
      local_110 = (byte *)0x0;
      local_140 = (byte *)0x0;
      local_170 = (undefined *)0x0;
      local_1a0 = (undefined **)0x0;
      local_1d0 = (byte *)0x0;
      local_200 = 0;
      local_230 = 0;
      local_260 = 0;
      FUN_00506f30(&local_80,"\"$0\" does not declare $1 as an extension number.",&local_b0,
                   &local_e0,&local_110,&local_140,&local_170,&local_1a0,&local_1d0,&local_200,
                   &local_230,&local_260);
      plVar22 = (long *)param_1[2];
      if (plVar22 != (long *)0x0) {
                    /* try { // try from 004b9408 to 004b941b has its CatchHandler @ 004b9f3c */
        (**(code **)(*plVar22 + 0x10))(plVar22,param_1 + 7,uVar10,param_3,1,&local_80);
      }
      *(undefined1 *)(param_1 + 6) = 1;
      if ((local_80 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_70);
      }
      goto LAB_004b89f8;
    }
    if (iVar9 == 0) {
LAB_004b8d1c:
      FUN_004aa92c(param_1,*(undefined8 *)(param_2 + 8),param_3,3,*(undefined8 *)(param_3 + 0x20));
      return;
    }
    uVar14 = *(undefined8 *)(param_2 + 8);
    FUN_004a8ec0(&local_e0,&DAT_03c246d6,*(undefined8 *)(param_3 + 0x20));
                    /* try { // try from 004b8bf4 to 004b8c07 has its CatchHandler @ 004b9fa8 */
    puVar29 = (undefined8 *)FUN_0021d540(&local_e0,"\" is not a message type.",0x18);
    uVar31 = puVar29[1];
    uVar10 = puVar29[2];
    cStack_a0 = (char)uVar10;
    acStack_9f = SUB85((ulong)uVar10 >> 8,0);
    uStack_9a = (undefined1)((ulong)uVar10 >> 0x30);
    uStack_99 = (undefined1)((ulong)uVar10 >> 0x38);
    uStack_a8 = (uint)uVar31;
    uStack_a4 = (undefined2)((ulong)uVar31 >> 0x20);
    uStack_a2 = (undefined2)((ulong)uVar31 >> 0x30);
    local_b0._0_1_ = (byte)*puVar29;
    local_b0._1_7_ = (undefined7)((ulong)*puVar29 >> 8);
    puVar29[1] = 0;
    puVar29[2] = 0;
    *puVar29 = 0;
    plVar22 = (long *)param_1[2];
    if (plVar22 != (long *)0x0) {
                    /* try { // try from 004b8c34 to 004b8c47 has its CatchHandler @ 004b9f70 */
      (**(code **)(*plVar22 + 0x10))(plVar22,param_1 + 7,uVar14,param_3,3,&local_b0);
    }
LAB_004b97e8:
    *(undefined1 *)(param_1 + 6) = 1;
    if (((byte)local_b0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,
                   CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT51(acStack_9f,cStack_a0))));
    }
    if (((ulong)local_e0 & 1) == 0) {
      return;
    }
    puVar11 = local_d0;
    goto LAB_004b9db0;
  }
LAB_004b89f8:
  if ((*(long *)(param_2 + 0x58) != 0) && (*(int *)(param_2 + 0x3c) != 1)) {
    FUN_004aa7f4(param_1,*(undefined8 *)(param_2 + 8),param_3,0,
                 "Fields of oneofs must themselves have label LABEL_OPTIONAL.");
  }
  uVar16 = *(uint *)(param_3 + 0x10);
  if ((uVar16 >> 2 & 1) != 0) {
    iVar9 = *(int *)(param_3 + 0x58);
    if (*(char *)(*param_1 + 0x2b) == '\0') {
      puVar2 = PTR_DAT_047cd790;
      if (*(undefined **)(param_3 + 0x40) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_3 + 0x40);
      }
      bVar7 = puVar2[0x4f] != '\0';
    }
    else {
      bVar7 = false;
    }
    cVar4 = *(char *)(*param_1 + 0x29);
    uVar10 = *(undefined8 *)(param_3 + 0x28);
    iVar8 = FUN_004ab754(param_1,uVar10,*(undefined8 *)(param_2 + 8),1,bVar7 | cVar4 == '\0');
    lVar28 = extraout_x1_01;
    if (iVar8 == 0) {
      if (*(char *)(*param_1 + 0x2a) != '\0') {
        iVar8 = FUN_004abe80(*param_1,uVar10,uVar16 >> 3 & 1 | (uint)(iVar9 == 0xe));
        lVar28 = extraout_x1_02;
        goto joined_r0x004b8dd8;
      }
LAB_004b8ddc:
      if ((cVar4 != '\0') && (bVar7 != true)) {
        pbVar18 = *(byte **)(param_3 + 0x28);
        if ((*pbVar18 & 1) == 0) {
          uVar14 = *(undefined8 *)(pbVar18 + 8);
          uVar10 = *(undefined8 *)(pbVar18 + 0x10);
          cStack_a0 = (char)uVar10;
          acStack_9f = SUB85((ulong)uVar10 >> 8,0);
          uStack_9a = (undefined1)((ulong)uVar10 >> 0x30);
          uStack_99 = (undefined1)((ulong)uVar10 >> 0x38);
          uStack_a8 = (uint)uVar14;
          uStack_a4 = (undefined2)((ulong)uVar14 >> 0x20);
          uStack_a2 = (undefined2)((ulong)uVar14 >> 0x30);
          local_b0._0_1_ = (byte)*(undefined8 *)pbVar18;
          local_b0._1_7_ = (undefined7)((ulong)*(undefined8 *)pbVar18 >> 8);
        }
        else {
          uVar12 = *(ulong *)(pbVar18 + 8);
          pvVar3 = *(void **)(pbVar18 + 0x10);
          if (uVar12 < 0x17) {
            __dest = (void *)((ulong)&local_b0 | 1);
            local_b0._0_1_ = (byte)((uint)uVar12 << 1);
          }
          else {
            if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            uVar27 = uVar12 + 0x10 & 0xfffffffffffffff0;
            __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar27);
            local_b0._0_1_ = (byte)uVar27 | 1;
            uStack_a4 = (undefined2)(uVar12 >> 0x20);
            uStack_a2 = (undefined2)(uVar12 >> 0x30);
            cStack_a0 = (char)__dest;
            acStack_9f = SUB85((ulong)__dest >> 8,0);
            uStack_9a = (undefined1)((ulong)__dest >> 0x30);
            uStack_99 = (undefined1)((ulong)__dest >> 0x38);
            local_b0._1_7_ = (undefined7)(uVar27 >> 8);
            uStack_a8 = (uint)uVar12;
          }
          memcpy(__dest,pvVar3,uVar12 + 1);
        }
                    /* try { // try from 004b9854 to 004b9857 has its CatchHandler @ 004b9fbc */
        uVar10 = FUN_004a3f0c(param_1[1]);
        *(undefined8 *)(param_2 + 0x30) = uVar10;
        lVar28 = param_1[1];
        puVar11 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
        if (puVar11 != (ulong *)0x0) {
          if (((byte)local_b0 & 1) == 0) {
            puVar11[2] = CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT51(acStack_9f,cStack_a0)));
            puVar11[1] = CONCAT26(uStack_a2,CONCAT24(uStack_a4,uStack_a8));
            *puVar11 = CONCAT71(local_b0._1_7_,(byte)local_b0);
          }
          else {
            uVar12 = CONCAT26(uStack_a2,CONCAT24(uStack_a4,uStack_a8));
            pvVar3 = (void *)CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT51(acStack_9f,cStack_a0)));
            if (uVar12 < 0x17) {
              pbVar18 = (byte *)((long)puVar11 + 1);
              *(byte *)puVar11 = (byte)(uStack_a8 << 1);
            }
            else {
              if (0xffffffffffffffef < uVar12) {
                    /* try { // try from 004b9e60 to 004b9e6f has its CatchHandler @ 004b9fbc */
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_length_error();
              }
              uVar27 = uVar12 + 0x10 & 0xfffffffffffffff0;
              pbVar18 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar27);
              puVar11[1] = uVar12;
              puVar11[2] = (ulong)pbVar18;
              *puVar11 = uVar27 | 1;
            }
            memcpy(pbVar18,pvVar3,uVar12 + 1);
          }
        }
                    /* try { // try from 004b9930 to 004b9937 has its CatchHandler @ 004b9fbc */
        local_e0 = puVar11;
        FUN_004a3dc0(lVar28 + 0xd0,&local_e0);
        *(ulong **)(param_2 + 0x80) = puVar11;
        if ((*(byte *)(param_3 + 0x10) >> 3 & 1) != 0) {
          lVar28 = param_1[1];
          puVar26 = *(ulong **)(param_3 + 0x30);
          puVar11 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
          if (puVar11 != (ulong *)0x0) {
            if ((*puVar26 & 1) == 0) {
              uVar27 = puVar26[1];
              uVar12 = *puVar26;
              puVar11[2] = puVar26[2];
              puVar11[1] = uVar27;
              *puVar11 = uVar12;
            }
            else {
              uVar12 = puVar26[1];
              pvVar3 = (void *)puVar26[2];
              if (uVar12 < 0x17) {
                pbVar18 = (byte *)((long)puVar11 + 1);
                *(byte *)puVar11 = (byte)((int)uVar12 << 1);
              }
              else {
                if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                uVar27 = uVar12 + 0x10 & 0xfffffffffffffff0;
                pbVar18 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar27);
                puVar11[1] = uVar12;
                puVar11[2] = (ulong)pbVar18;
                *puVar11 = uVar27 | 1;
              }
              memcpy(pbVar18,pvVar3,uVar12 + 1);
            }
          }
                    /* try { // try from 004b9d78 to 004b9da3 has its CatchHandler @ 004b9fbc */
          local_e0 = puVar11;
          FUN_004a3dc0(lVar28 + 0xd0,&local_e0);
          *(ulong **)(param_2 + 0x88) = puVar11;
        }
        FUN_004a3544(param_1[0xb],param_2);
        if (param_2[0x43] != 0) {
          FUN_004a3be4(param_1[1],param_2);
        }
        if (((byte)local_b0 & 1) == 0) {
          return;
        }
        puVar11 = (ulong *)CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT51(acStack_9f,cStack_a0)));
        goto LAB_004b9db0;
      }
      if (bVar7 == false) {
LAB_004b9260:
        FUN_004aa92c(param_1,*(undefined8 *)(param_2 + 8),param_3,2,*(undefined8 *)(param_3 + 0x28))
        ;
        return;
      }
      local_b0._0_1_ = 0x2a;
      uStack_a8._1_3_ = s_google_protobuf_Empty_03c3a6de._8_3_;
      uStack_a4 = s_google_protobuf_Empty_03c3a6de._11_2_;
      local_b0._1_7_ = s_google_protobuf_Empty_03c3a6de._0_7_;
      uStack_a8._0_1_ = s_google_protobuf_Empty_03c3a6de[7];
      uStack_a2 = s_google_protobuf_Empty_03c3a6de._13_2_;
      cStack_a0 = s_google_protobuf_Empty_03c3a6de[0xf];
      acStack_9f[0] = s_google_protobuf_Empty_03c3a6de[0x10];
      acStack_9f[1] = s_google_protobuf_Empty_03c3a6de[0x11];
      acStack_9f[2] = s_google_protobuf_Empty_03c3a6de[0x12];
      acStack_9f[3] = s_google_protobuf_Empty_03c3a6de[0x13];
      acStack_9f[4] = s_google_protobuf_Empty_03c3a6de[0x14];
      uStack_9a = 0;
                    /* try { // try from 004b8e5c to 004b8e6b has its CatchHandler @ 004b9f2c */
      iVar8 = FUN_004ab5d4(param_1,&local_b0,1);
      if (((byte)local_b0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,
                     CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT51(acStack_9f,cStack_a0))));
      }
      lVar28 = extraout_x1_03;
      if (iVar8 == 0) goto LAB_004b9260;
    }
    else {
joined_r0x004b8dd8:
      if (iVar8 == 0) goto LAB_004b8ddc;
    }
    if ((*(byte *)(param_3 + 0x11) >> 2 & 1) == 0) {
      if (iVar8 == 1) {
        uVar17 = 0xb;
      }
      else {
        if (iVar8 != 4) {
          uVar14 = *(undefined8 *)(param_2 + 8);
          FUN_004a8ec0(&local_e0,&DAT_03c246d6,*(undefined8 *)(param_3 + 0x28));
                    /* try { // try from 004b9704 to 004b9717 has its CatchHandler @ 004b9f28 */
          puVar29 = (undefined8 *)FUN_0021d540(&local_e0,"\" is not a type.",0x10);
          uVar31 = puVar29[1];
          uVar10 = puVar29[2];
          cStack_a0 = (char)uVar10;
          acStack_9f = SUB85((ulong)uVar10 >> 8,0);
          uStack_9a = (undefined1)((ulong)uVar10 >> 0x30);
          uStack_99 = (undefined1)((ulong)uVar10 >> 0x38);
          uStack_a8 = (uint)uVar31;
          uStack_a4 = (undefined2)((ulong)uVar31 >> 0x20);
          uStack_a2 = (undefined2)((ulong)uVar31 >> 0x30);
          local_b0._0_1_ = (byte)*puVar29;
          local_b0._1_7_ = (undefined7)((ulong)*puVar29 >> 8);
          puVar29[1] = 0;
          puVar29[2] = 0;
          *puVar29 = 0;
          plVar22 = (long *)param_1[2];
          if (plVar22 != (long *)0x0) {
                    /* try { // try from 004b9744 to 004b9757 has its CatchHandler @ 004b9f20 */
            (**(code **)(*plVar22 + 0x10))(plVar22,param_1 + 7,uVar14,param_3,2,&local_b0);
          }
          goto LAB_004b97e8;
        }
        uVar17 = 0xe;
      }
      *(undefined4 *)(param_2 + 0x38) = uVar17;
    }
    puVar11 = *(ulong **)(param_2 + 0x30);
    if (puVar11 != (ulong *)0x0) {
      local_110 = PTR_LAB_047cd728;
      local_140 = param_2;
      if (*puVar11 != 0xffffffffffffffff) {
        local_b0._0_1_ = (byte)&local_110;
        local_b0._1_7_ = (undefined7)((ulong)&local_110 >> 8);
        uStack_a8 = (uint)&local_140;
        uStack_a4 = (undefined2)((ulong)&local_140 >> 0x20);
        uStack_a2 = (undefined2)((ulong)&local_140 >> 0x30);
        local_e0 = &local_b0;
        std::__call_once(puVar11,&local_e0,(_func_void_void_ptr *)&LAB_004c0750);
      }
    }
    uVar16 = *(uint *)(param_2 + 0x38);
    if ((uVar16 & 0xfffffffe) == 10) {
      if (iVar8 == 1) {
        *(long *)(param_2 + 0x68) = lVar28;
        if (param_2[0x40] == 0) goto LAB_004b8af8;
        uVar10 = *(undefined8 *)(param_2 + 8);
        pcVar15 = "Messages can\'t have default values.";
LAB_004b950c:
        uVar14 = 4;
        goto LAB_004b8af4;
      }
      uVar14 = *(undefined8 *)(param_2 + 8);
      FUN_004a8ec0(&local_e0,&DAT_03c246d6,*(undefined8 *)(param_3 + 0x28));
                    /* try { // try from 004b9684 to 004b9697 has its CatchHandler @ 004b9f30 */
      puVar29 = (undefined8 *)FUN_0021d540(&local_e0,"\" is not a message type.",0x18);
      uVar31 = puVar29[1];
      uVar10 = puVar29[2];
      cStack_a0 = (char)uVar10;
      acStack_9f = SUB85((ulong)uVar10 >> 8,0);
      uStack_9a = (undefined1)((ulong)uVar10 >> 0x30);
      uStack_99 = (undefined1)((ulong)uVar10 >> 0x38);
      uStack_a8 = (uint)uVar31;
      uStack_a4 = (undefined2)((ulong)uVar31 >> 0x20);
      uStack_a2 = (undefined2)((ulong)uVar31 >> 0x30);
      local_b0._0_1_ = (byte)*puVar29;
      local_b0._1_7_ = (undefined7)((ulong)*puVar29 >> 8);
      puVar29[1] = 0;
      puVar29[2] = 0;
      *puVar29 = 0;
      plVar22 = (long *)param_1[2];
      if (plVar22 != (long *)0x0) {
                    /* try { // try from 004b96c4 to 004b96d7 has its CatchHandler @ 004b9f24 */
        (**(code **)(*plVar22 + 0x10))(plVar22,param_1 + 7,uVar14,param_3,2,&local_b0);
      }
    }
    else {
      puVar11 = *(ulong **)(param_2 + 0x30);
      if (puVar11 != (ulong *)0x0) {
        local_110 = PTR_LAB_047cd728;
        local_140 = param_2;
        if (*puVar11 != 0xffffffffffffffff) {
          local_b0._0_1_ = (byte)&local_110;
          local_b0._1_7_ = (undefined7)((ulong)&local_110 >> 8);
          uStack_a8 = (uint)&local_140;
          uStack_a4 = (undefined2)((ulong)&local_140 >> 0x20);
          uStack_a2 = (undefined2)((ulong)&local_140 >> 0x30);
          local_e0 = &local_b0;
          std::__call_once(puVar11,&local_e0,(_func_void_void_ptr *)&LAB_004c0750);
        }
        uVar16 = *(uint *)(param_2 + 0x38);
      }
      if (uVar16 != 0xe) {
        uVar10 = *(undefined8 *)(param_2 + 8);
        pcVar15 = "Field with primitive type has type_name.";
        goto LAB_004b8ae8;
      }
      if (iVar8 == 4) {
        puVar11 = *(ulong **)(param_2 + 0x30);
        *(long *)(param_2 + 0x70) = lVar28;
        if (puVar11 != (ulong *)0x0) {
          local_110 = param_2;
          if (*puVar11 != 0xffffffffffffffff) {
            local_b0._0_1_ = (byte)PTR_LAB_047cd728;
            local_b0._1_7_ = (undefined7)((ulong)PTR_LAB_047cd728 >> 8);
            uStack_a8 = (uint)&local_110;
            uStack_a4 = (undefined2)((ulong)&local_110 >> 0x20);
            uStack_a2 = (undefined2)((ulong)&local_110 >> 0x30);
            local_e0 = &local_b0;
            std::__call_once(puVar11,&local_e0,(_func_void_void_ptr *)&LAB_004c9500);
          }
          lVar28 = *(long *)(param_2 + 0x70);
        }
        if (*(char *)(lVar28 + 0x28) == '\0') {
          if (param_2[0x40] != 0) {
            uVar12 = FUN_004fd9b0(*(undefined8 *)(param_3 + 0x30));
            if ((uVar12 & 1) == 0) {
              uVar10 = *(undefined8 *)(param_2 + 8);
              pcVar15 = "Default value for an enum field must be an identifier.";
              goto LAB_004b950c;
            }
            uVar10 = *(undefined8 *)(param_3 + 0x30);
            puVar11 = *(ulong **)(param_2 + 0x30);
            if ((puVar11 != (ulong *)0x0) && (local_110 = param_2, *puVar11 != 0xffffffffffffffff))
            {
              local_b0._0_1_ = (byte)PTR_LAB_047cd728;
              local_b0._1_7_ = (undefined7)((ulong)PTR_LAB_047cd728 >> 8);
              uStack_a8 = (uint)&local_110;
              uStack_a4 = (undefined2)((ulong)&local_110 >> 0x20);
              uStack_a2 = (undefined2)((ulong)&local_110 >> 0x30);
              local_e0 = &local_b0;
              std::__call_once(puVar11,&local_e0,(_func_void_void_ptr *)&LAB_004c9500);
            }
            iVar9 = FUN_004ab754(param_1,uVar10,*(undefined8 *)(*(long *)(param_2 + 0x70) + 8),0,1);
            if (iVar9 == 5) {
              lVar28 = *(long *)(extraout_x1_04 + 0x18);
              puVar11 = *(ulong **)(param_2 + 0x30);
              if ((puVar11 != (ulong *)0x0) && (local_110 = param_2, *puVar11 != 0xffffffffffffffff)
                 ) {
                local_b0._0_1_ = (byte)PTR_LAB_047cd728;
                local_b0._1_7_ = (undefined7)((ulong)PTR_LAB_047cd728 >> 8);
                uStack_a8 = (uint)&local_110;
                uStack_a4 = (undefined2)((ulong)&local_110 >> 0x20);
                uStack_a2 = (undefined2)((ulong)&local_110 >> 0x30);
                local_e0 = &local_b0;
                std::__call_once(puVar11,&local_e0,(_func_void_void_ptr *)&LAB_004c9500);
              }
              if (lVar28 == *(long *)(param_2 + 0x70)) {
                *(long *)(param_2 + 0x90) = extraout_x1_04;
                goto LAB_004b8af8;
              }
            }
            uVar10 = *(undefined8 *)(param_2 + 8);
            puVar11 = *(ulong **)(param_2 + 0x30);
            if ((puVar11 != (ulong *)0x0) && (local_1d0 = param_2, *puVar11 != 0xffffffffffffffff))
            {
              local_168 = &local_1d0;
              local_170 = PTR_LAB_047cd728;
              local_1a0 = &local_170;
              std::__call_once(puVar11,&local_1a0,(_func_void_void_ptr *)&LAB_004c9500);
            }
            FUN_004a8ec0(&local_140,"Enum type \"",*(undefined8 *)(*(long *)(param_2 + 0x70) + 8));
                    /* try { // try from 004b9c50 to 004b9c63 has its CatchHandler @ 004b9f04 */
            puVar29 = (undefined8 *)FUN_0021d540(&local_140,"\" has no value named \"",0x16);
            uStack_108 = puVar29[1];
            local_110 = (byte *)*puVar29;
            local_100 = puVar29[2];
            puVar29[1] = 0;
            puVar29[2] = 0;
            *puVar29 = 0;
            pbVar19 = *(byte **)(param_3 + 0x30);
            uVar12 = *(ulong *)(pbVar19 + 8);
            pbVar18 = *(byte **)(pbVar19 + 0x10);
            if ((*pbVar19 & 1) == 0) {
              pbVar18 = pbVar19 + 1;
              uVar12 = (ulong)(*pbVar19 >> 1);
            }
                    /* try { // try from 004b9c98 to 004b9c9f has its CatchHandler @ 004b9edc */
            puVar29 = (undefined8 *)FUN_0021d540(&local_110,pbVar18,uVar12);
            uStack_d8 = puVar29[1];
            local_e0 = (ulong *)*puVar29;
            local_d0 = (ulong *)puVar29[2];
            puVar29[1] = 0;
            puVar29[2] = 0;
            *puVar29 = 0;
                    /* try { // try from 004b9cb8 to 004b9ccb has its CatchHandler @ 004b9eb4 */
            puVar29 = (undefined8 *)FUN_0021d540(&local_e0,&DAT_03bfbda2,2);
            uVar31 = puVar29[1];
            uVar14 = puVar29[2];
            cStack_a0 = (char)uVar14;
            acStack_9f = SUB85((ulong)uVar14 >> 8,0);
            uStack_9a = (undefined1)((ulong)uVar14 >> 0x30);
            uStack_99 = (undefined1)((ulong)uVar14 >> 0x38);
            uStack_a8 = (uint)uVar31;
            uStack_a4 = (undefined2)((ulong)uVar31 >> 0x20);
            uStack_a2 = (undefined2)((ulong)uVar31 >> 0x30);
            local_b0._0_1_ = (byte)*puVar29;
            local_b0._1_7_ = (undefined7)((ulong)*puVar29 >> 8);
            puVar29[1] = 0;
            puVar29[2] = 0;
            *puVar29 = 0;
            plVar22 = (long *)param_1[2];
            if (plVar22 != (long *)0x0) {
                    /* try { // try from 004b9cf8 to 004b9d0b has its CatchHandler @ 004b9e70 */
              (**(code **)(*plVar22 + 0x10))(plVar22,param_1 + 7,uVar10,param_3,4,&local_b0);
            }
            *(undefined1 *)(param_1 + 6) = 1;
            if (((byte)local_b0 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,
                           CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT51(acStack_9f,cStack_a0))));
            }
            if (((ulong)local_e0 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_d0);
            }
            if (((ulong)local_110 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_100);
            }
            if (((ulong)local_140 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_130);
            }
            goto LAB_004b8af8;
          }
        }
        else {
          param_2[0x40] = 0;
        }
        puVar11 = *(ulong **)(param_2 + 0x30);
        if (puVar11 != (ulong *)0x0) {
          local_110 = param_2;
          if (*puVar11 != 0xffffffffffffffff) {
            local_b0._0_1_ = (byte)PTR_LAB_047cd728;
            local_b0._1_7_ = (undefined7)((ulong)PTR_LAB_047cd728 >> 8);
            uStack_a8 = (uint)&local_110;
            uStack_a4 = (undefined2)((ulong)&local_110 >> 0x20);
            uStack_a2 = (undefined2)((ulong)&local_110 >> 0x30);
            local_e0 = &local_b0;
            std::__call_once(puVar11,&local_e0,(_func_void_void_ptr *)&LAB_004c9500);
          }
          lVar28 = *(long *)(param_2 + 0x70);
        }
        if (0 < *(int *)(lVar28 + 0x2c)) {
          puVar11 = *(ulong **)(param_2 + 0x30);
          if (puVar11 != (ulong *)0x0) {
            local_110 = param_2;
            if (*puVar11 != 0xffffffffffffffff) {
              local_b0._0_1_ = (byte)PTR_LAB_047cd728;
              local_b0._1_7_ = (undefined7)((ulong)PTR_LAB_047cd728 >> 8);
              uStack_a8 = (uint)&local_110;
              uStack_a4 = (undefined2)((ulong)&local_110 >> 0x20);
              uStack_a2 = (undefined2)((ulong)&local_110 >> 0x30);
              local_e0 = &local_b0;
              std::__call_once(puVar11,&local_e0,(_func_void_void_ptr *)&LAB_004c9500);
            }
            lVar28 = *(long *)(param_2 + 0x70);
          }
          *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(lVar28 + 0x30);
        }
        goto LAB_004b8af8;
      }
      uVar14 = *(undefined8 *)(param_2 + 8);
      FUN_004a8ec0(&local_e0,&DAT_03c246d6,*(undefined8 *)(param_3 + 0x28));
                    /* try { // try from 004b9794 to 004b97a7 has its CatchHandler @ 004b9f1c */
      puVar29 = (undefined8 *)FUN_0021d540(&local_e0,"\" is not an enum type.",0x16);
      uVar31 = puVar29[1];
      uVar10 = puVar29[2];
      cStack_a0 = (char)uVar10;
      acStack_9f = SUB85((ulong)uVar10 >> 8,0);
      uStack_9a = (undefined1)((ulong)uVar10 >> 0x30);
      uStack_99 = (undefined1)((ulong)uVar10 >> 0x38);
      uStack_a8 = (uint)uVar31;
      uStack_a4 = (undefined2)((ulong)uVar31 >> 0x20);
      uStack_a2 = (undefined2)((ulong)uVar31 >> 0x30);
      local_b0._0_1_ = (byte)*puVar29;
      local_b0._1_7_ = (undefined7)((ulong)*puVar29 >> 8);
      puVar29[1] = 0;
      puVar29[2] = 0;
      *puVar29 = 0;
      plVar22 = (long *)param_1[2];
      if (plVar22 != (long *)0x0) {
                    /* try { // try from 004b97d4 to 004b97e7 has its CatchHandler @ 004b9f18 */
        (**(code **)(*plVar22 + 0x10))(plVar22,param_1 + 7,uVar14,param_3,2,&local_b0);
      }
    }
    goto LAB_004b97e8;
  }
  puVar11 = *(ulong **)(param_2 + 0x30);
  if (puVar11 != (ulong *)0x0) {
    local_110 = PTR_LAB_047cd728;
    local_140 = param_2;
    if (*puVar11 != 0xffffffffffffffff) {
      local_b0._0_1_ = (byte)&local_110;
      local_b0._1_7_ = (undefined7)((ulong)&local_110 >> 8);
      uStack_a8 = (uint)&local_140;
      uStack_a4 = (undefined2)((ulong)&local_140 >> 0x20);
      uStack_a2 = (undefined2)((ulong)&local_140 >> 0x30);
      local_e0 = &local_b0;
      std::__call_once(puVar11,&local_e0,(_func_void_void_ptr *)&LAB_004c0750);
    }
  }
  uVar16 = *(uint *)(param_2 + 0x38);
  if ((uVar16 & 0xfffffffe) == 10) {
LAB_004b8adc:
    uVar10 = *(undefined8 *)(param_2 + 8);
    pcVar15 = "Field with message or enum type missing type_name.";
LAB_004b8ae8:
    uVar14 = 2;
LAB_004b8af4:
    FUN_004aa7f4(param_1,uVar10,param_3,uVar14,pcVar15);
  }
  else {
    puVar11 = *(ulong **)(param_2 + 0x30);
    if (puVar11 != (ulong *)0x0) {
      local_110 = PTR_LAB_047cd728;
      local_140 = param_2;
      if (*puVar11 != 0xffffffffffffffff) {
        local_b0._0_1_ = (byte)&local_110;
        local_b0._1_7_ = (undefined7)((ulong)&local_110 >> 8);
        uStack_a8 = (uint)&local_140;
        uStack_a4 = (undefined2)((ulong)&local_140 >> 0x20);
        uStack_a2 = (undefined2)((ulong)&local_140 >> 0x30);
        local_e0 = &local_b0;
        std::__call_once(puVar11,&local_e0,(_func_void_void_ptr *)&LAB_004c0750);
      }
      uVar16 = *(uint *)(param_2 + 0x38);
    }
    if (uVar16 == 0xe) goto LAB_004b8adc;
  }
LAB_004b8af8:
  uVar12 = FUN_004a3544(param_1[0xb],param_2);
  if ((uVar12 & 1) == 0) {
    lVar28 = *(long *)(param_2 + 0x50);
    uVar12 = *(ulong *)(param_1[0xb] + 0xa0);
    if (uVar12 != 0) {
      uVar10 = CONCAT17(POPCOUNT((char)(uVar12 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar12 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar12 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar12 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar12 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar12 >> 0x10)
                                                                             ),
                                                                     CONCAT11(POPCOUNT((char)(uVar12
                                                                                             >> 8)),
                                                                              POPCOUNT((char)uVar12)
                                                                             )))))));
      iVar9 = *(int *)(param_2 + 0x44);
      uVar30 = NEON_uaddlv(uVar10,1);
      uVar27 = (long)iVar9 * 0x1000193 ^ lVar28 * 0x100011b;
      uVar25 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar30) & 0xffffffff;
      if (uVar25 < 2) {
        uVar24 = uVar27 & uVar12 - 1;
      }
      else {
        uVar24 = uVar27;
        if (uVar12 <= uVar27) {
          uVar24 = 0;
          if (uVar12 != 0) {
            uVar24 = uVar27 / uVar12;
          }
          uVar24 = uVar27 - uVar24 * uVar12;
        }
      }
      plVar22 = *(long **)(*(long *)(param_1[0xb] + 0x98) + uVar24 * 8);
      if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
        if (uVar25 < 2) {
          do {
            if (uVar27 == plVar22[1]) {
              if ((plVar22[2] == lVar28) && ((int)plVar22[3] == iVar9)) goto LAB_004b8f6c;
            }
            else if ((plVar22[1] & uVar12 - 1) != uVar24) break;
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
        else {
          do {
            uVar25 = plVar22[1];
            if (uVar27 == uVar25) {
              if ((plVar22[2] == lVar28) && ((int)plVar22[3] == iVar9)) goto LAB_004b8f6c;
            }
            else {
              if (uVar12 <= uVar25) {
                uVar6 = 0;
                if (uVar12 != 0) {
                  uVar6 = uVar25 / uVar12;
                }
                uVar25 = uVar25 - uVar6 * uVar12;
              }
              if (uVar25 != uVar24) break;
            }
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
      }
    }
    puVar29 = (undefined8 *)0x0;
    goto LAB_004b8f78;
  }
  if (param_2[0x43] == 0) {
    return;
  }
  uVar12 = FUN_004a3be4(param_1[1],param_2);
  if ((uVar12 & 1) != 0) {
    return;
  }
  uVar12 = *(ulong *)(param_2 + 0x50);
  iVar9 = *(int *)(param_2 + 0x44);
  plVar22 = *(long **)(param_1[1] + 0x188);
  if (plVar22 == (long *)0x0) {
LAB_004b8b88:
    lVar28 = 0;
    if (uVar12 != 0) goto LAB_004b8b90;
LAB_004b98c8:
    local_80 = 0x6e776f6e6b6e750e;
    uStack_78 = uStack_78 & 0xffffffffffffff00;
  }
  else {
    plVar1 = (long *)(param_1[1] + 0x188);
    plVar20 = plVar1;
    do {
      while ((uVar12 <= (ulong)plVar22[4] &&
             ((uVar12 < (ulong)plVar22[4] || (iVar9 <= (int)plVar22[5]))))) {
        plVar23 = (long *)*plVar22;
        plVar20 = plVar22;
        plVar22 = plVar23;
        if (plVar23 == (long *)0x0) goto LAB_004b8b74;
      }
      plVar22 = (long *)plVar22[1];
    } while (plVar22 != (long *)0x0);
LAB_004b8b74:
    if (((plVar20 == plVar1) || (uVar12 < (ulong)plVar20[4])) ||
       ((uVar12 <= (ulong)plVar20[4] && (iVar9 < (int)plVar20[5])))) goto LAB_004b8b88;
    lVar28 = plVar20[6];
    if (uVar12 == 0) goto LAB_004b98c8;
LAB_004b8b90:
    puVar11 = *(ulong **)(uVar12 + 8);
    if ((*puVar11 & 1) == 0) {
      uStack_78 = puVar11[1];
      local_80 = *puVar11;
      local_70 = (ulong *)puVar11[2];
    }
    else {
      uVar12 = puVar11[1];
      pvVar3 = (void *)puVar11[2];
      if (uVar12 < 0x17) {
        puVar11 = (ulong *)((ulong)&local_80 | 1);
        local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar12 << 1));
      }
      else {
        if (0xffffffffffffffef < uVar12) {
LAB_004b9e50:
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar27 = uVar12 + 0x10 & 0xfffffffffffffff0;
        puVar11 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,uVar27);
        local_80 = uVar27 | 1;
        uStack_78 = uVar12;
        local_70 = puVar11;
      }
      memcpy(puVar11,pvVar3,uVar12 + 1);
      iVar9 = *(int *)(param_2 + 0x44);
    }
  }
                    /* try { // try from 004b99e4 to 004b99e7 has its CatchHandler @ 004b9f44 */
  pcVar15 = (char *)FUN_00533180(iVar9,&uStack_a4);
  local_b0._0_1_ = (byte)pcVar15;
  local_b0._1_7_ = (undefined7)((ulong)pcVar15 >> 8);
  sVar13 = strlen(pcVar15);
  uStack_a8 = (uint)sVar13;
  uVar16 = (uint)((byte)local_80 >> 1);
  local_e0 = (ulong *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    uVar16 = (uint)uStack_78;
    local_e0 = local_70;
  }
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar16);
  pbVar18 = *(byte **)(lVar28 + 8);
  local_110 = *(byte **)(pbVar18 + 0x10);
  if ((*pbVar18 & 1) == 0) {
    local_110 = pbVar18 + 1;
  }
  uVar16 = (uint)(*pbVar18 >> 1);
  if ((*pbVar18 & 1) != 0) {
    uVar16 = (uint)*(undefined8 *)(pbVar18 + 8);
  }
  uStack_108 = CONCAT44(uStack_108._4_4_,uVar16);
  pbVar18 = (byte *)**(undefined8 **)(lVar28 + 0x28);
  local_140 = *(byte **)(pbVar18 + 0x10);
  if ((*pbVar18 & 1) == 0) {
    local_140 = pbVar18 + 1;
  }
  local_170 = (undefined *)0x0;
  local_168 = (byte **)CONCAT44(local_168._4_4_,0xffffffff);
  local_1a0 = (undefined **)0x0;
  local_198 = 0xffffffff;
  local_1d0 = (byte *)0x0;
  local_1c8 = 0xffffffff;
  local_200 = 0;
  local_1f8 = 0xffffffff;
  local_230 = 0;
  local_228 = 0xffffffff;
  local_260 = 0;
  local_258 = 0xffffffff;
  local_138 = (uint)(*pbVar18 >> 1);
  if ((*pbVar18 & 1) != 0) {
    local_138 = (uint)*(undefined8 *)(pbVar18 + 8);
  }
                    /* try { // try from 004b9ab8 to 004b9af7 has its CatchHandler @ 004b9f40 */
  FUN_00506f30(local_278,
               "Extension number $0 has already been used in \"$1\" by extension \"$2\" defined in $3."
               ,&local_b0,&local_e0,&local_110,&local_140,&local_170,&local_1a0,&local_1d0,
               &local_200,&local_230,&local_260);
  plVar22 = (long *)param_1[2];
  if (plVar22 != (long *)0x0) {
                    /* try { // try from 004b9b10 to 004b9b1f has its CatchHandler @ 004b9f34 */
    (**(code **)(*plVar22 + 0x18))
              (plVar22,param_1 + 7,*(undefined8 *)(param_2 + 8),param_3,1,local_278);
  }
LAB_004b9218:
  if ((local_278[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_268);
  }
  if ((local_80 & 1) == 0) {
    return;
  }
  puVar11 = local_70;
LAB_004b9db0:
  FUN_0049e790(PTR_LAB_047cba48,puVar11);
  return;
LAB_004b8f6c:
  puVar29 = (undefined8 *)plVar22[4];
LAB_004b8f78:
  if (lVar28 == 0) {
    local_80 = 0x6e776f6e6b6e750e;
    uStack_78 = uStack_78 & 0xffffffffffffff00;
    bVar5 = param_2[0x43];
    uVar10 = *(undefined8 *)(param_2 + 8);
joined_r0x004b90f0:
    if (bVar5 != 0) goto LAB_004b90f4;
LAB_004b8fa4:
                    /* try { // try from 004b8fb0 to 004b8fb3 has its CatchHandler @ 004b9f4c */
    pcVar15 = (char *)FUN_00533180(*(undefined4 *)(param_2 + 0x44),&uStack_a4);
    local_b0._0_1_ = (byte)pcVar15;
    local_b0._1_7_ = (undefined7)((ulong)pcVar15 >> 8);
    sVar13 = strlen(pcVar15);
    uStack_a8 = (uint)sVar13;
    uVar16 = (uint)((byte)local_80 >> 1);
    local_e0 = (ulong *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      uVar16 = (uint)uStack_78;
      local_e0 = local_70;
    }
    uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar16);
    pbVar18 = (byte *)*puVar29;
    local_110 = *(byte **)(pbVar18 + 0x10);
    if ((*pbVar18 & 1) == 0) {
      local_110 = pbVar18 + 1;
    }
    local_140 = (byte *)0x0;
    local_138 = 0xffffffff;
    local_170 = (undefined *)0x0;
    local_168 = (byte **)CONCAT44(local_168._4_4_,0xffffffff);
    local_1a0 = (undefined **)0x0;
    local_198 = 0xffffffff;
    local_1d0 = (byte *)0x0;
    local_1c8 = 0xffffffff;
    local_200 = 0;
    local_1f8 = 0xffffffff;
    local_230 = 0;
    local_228 = 0xffffffff;
    local_260 = 0;
    local_258 = 0xffffffff;
    uVar16 = (uint)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      uVar16 = (uint)*(undefined8 *)(pbVar18 + 8);
    }
    uStack_108 = CONCAT44(uStack_108._4_4_,uVar16);
                    /* try { // try from 004b9058 to 004b9097 has its CatchHandler @ 004b9f48 */
    FUN_00506f30(local_278,"Field number $0 has already been used in \"$1\" by field \"$2\".",
                 &local_b0,&local_e0,&local_110,&local_140,&local_170,&local_1a0,&local_1d0,
                 &local_200,&local_230,&local_260);
    plVar22 = (long *)param_1[2];
    if (plVar22 != (long *)0x0) {
                    /* try { // try from 004b90ac to 004b90bf has its CatchHandler @ 004b9f38 */
      (**(code **)(*plVar22 + 0x10))(plVar22,param_1 + 7,uVar10,param_3,1,local_278);
    }
  }
  else {
    puVar11 = *(ulong **)(lVar28 + 8);
    if ((*puVar11 & 1) != 0) {
      uVar12 = puVar11[1];
      pvVar3 = (void *)puVar11[2];
      if (uVar12 < 0x17) {
        puVar11 = (ulong *)((ulong)&local_80 | 1);
        local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar12 << 1));
      }
      else {
        if (0xffffffffffffffef < uVar12) goto LAB_004b9e50;
        uVar27 = uVar12 + 0x10 & 0xfffffffffffffff0;
        puVar11 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,uVar27);
        local_80 = uVar27 | 1;
        uStack_78 = uVar12;
        local_70 = puVar11;
      }
      memcpy(puVar11,pvVar3,uVar12 + 1);
      bVar5 = param_2[0x43];
      uVar10 = *(undefined8 *)(param_2 + 8);
      goto joined_r0x004b90f0;
    }
    uStack_78 = puVar11[1];
    local_80 = *puVar11;
    local_70 = (ulong *)puVar11[2];
    uVar10 = *(undefined8 *)(param_2 + 8);
    if (param_2[0x43] == 0) goto LAB_004b8fa4;
LAB_004b90f4:
                    /* try { // try from 004b9100 to 004b9103 has its CatchHandler @ 004b9f94 */
    pcVar15 = (char *)FUN_00533180(*(undefined4 *)(param_2 + 0x44),&uStack_a4);
    local_b0._0_1_ = (byte)pcVar15;
    local_b0._1_7_ = (undefined7)((ulong)pcVar15 >> 8);
    sVar13 = strlen(pcVar15);
    uStack_a8 = (uint)sVar13;
    uVar16 = (uint)((byte)local_80 >> 1);
    local_e0 = (ulong *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      uVar16 = (uint)uStack_78;
      local_e0 = local_70;
    }
    uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar16);
    pbVar18 = (byte *)puVar29[1];
    local_110 = *(byte **)(pbVar18 + 0x10);
    if ((*pbVar18 & 1) == 0) {
      local_110 = pbVar18 + 1;
    }
    local_140 = (byte *)0x0;
    local_138 = 0xffffffff;
    local_170 = (undefined *)0x0;
    local_168 = (byte **)CONCAT44(local_168._4_4_,0xffffffff);
    local_1a0 = (undefined **)0x0;
    local_198 = 0xffffffff;
    local_1d0 = (byte *)0x0;
    local_1c8 = 0xffffffff;
    local_200 = 0;
    local_1f8 = 0xffffffff;
    local_230 = 0;
    local_228 = 0xffffffff;
    local_260 = 0;
    local_258 = 0xffffffff;
    uVar16 = (uint)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      uVar16 = (uint)*(undefined8 *)(pbVar18 + 8);
    }
    uStack_108 = CONCAT44(uStack_108._4_4_,uVar16);
                    /* try { // try from 004b91a8 to 004b91e7 has its CatchHandler @ 004b9f90 */
    FUN_00506f30(local_278,
                 "Extension number $0 has already been used in \"$1\" by extension \"$2\".",
                 &local_b0,&local_e0,&local_110,&local_140,&local_170,&local_1a0,&local_1d0,
                 &local_200,&local_230,&local_260);
    plVar22 = (long *)param_1[2];
    if (plVar22 != (long *)0x0) {
                    /* try { // try from 004b91fc to 004b920f has its CatchHandler @ 004b9f50 */
      (**(code **)(*plVar22 + 0x10))(plVar22,param_1 + 7,uVar10,param_3,1,local_278);
    }
  }
  *(undefined1 *)(param_1 + 6) = 1;
  goto LAB_004b9218;
}


