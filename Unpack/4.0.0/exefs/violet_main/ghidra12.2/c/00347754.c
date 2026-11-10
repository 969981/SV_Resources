/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00347754; name: FUN_00347754
 */


void FUN_00347754(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  ulong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  byte local_100;
  char acStack_ff [5];
  undefined2 uStack_fa;
  char cStack_f8;
  char cStack_f7;
  char cStack_f6;
  char cStack_f5;
  char cStack_f4;
  char cStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 local_f0;
  undefined4 local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  FUN_0038db40();
  puVar2 = PTR_LAB_047cba48;
  if (*(long *)(param_1 + 0x150) != 0) {
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    if (*(long **)(param_1 + 0x140) != (long *)(param_1 + 0x148)) {
      pcVar11 = (char *)((ulong)&local_100 | 1);
      plVar10 = *(long **)(param_1 + 0x140);
      do {
                    /* try { // try from 003477f4 to 003477fb has its CatchHandler @ 00347ebc */
        FUN_002f09c0(&local_118,plVar10[4]);
        local_e0 = local_118;
        uVar1 = s_subchannelId_03c89292._0_8_;
        local_100 = 0x18;
        pcVar11[8] = 'e';
        pcVar11[9] = 'l';
        pcVar11[10] = 'I';
        pcVar11[0xb] = 'd';
        local_118 = 0;
        *(undefined8 *)pcVar11 = uVar1;
        cStack_f3 = '\0';
        local_e8 = 4;
        local_d0 = local_108;
        uStack_d8 = uStack_110;
        uStack_110 = 0;
        local_108 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_a0 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
                    /* try { // try from 00347840 to 0034784f has its CatchHandler @ 00347e40 */
        local_c8 = &local_c0;
        FUN_00347670(&local_98,&local_100,1);
                    /* try { // try from 00347850 to 0034785b has its CatchHandler @ 00347e2c */
        FUN_00347edc(&local_80,&local_98);
        FUN_0025cef0(&local_98,local_90);
        FUN_003481a8(&local_b0);
        FUN_0025cef0(&local_c8,local_c0);
        if ((local_e0 & 1) == 0) {
          if ((local_100 & 1) == 0) goto LAB_0034788c;
LAB_003478b4:
          FUN_0049e790(puVar2,local_f0);
          if ((local_118 & 1) != 0) goto LAB_003478c8;
LAB_00347894:
          plVar4 = (long *)plVar10[1];
          if ((long *)plVar10[1] == (long *)0x0) goto LAB_003478ec;
LAB_003478dc:
          do {
            plVar5 = plVar4;
            plVar4 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        else {
          FUN_0049e790(puVar2,local_d0);
          if ((local_100 & 1) != 0) goto LAB_003478b4;
LAB_0034788c:
          if ((local_118 & 1) == 0) goto LAB_00347894;
LAB_003478c8:
          FUN_0049e790(puVar2,local_108);
          plVar4 = (long *)plVar10[1];
          if ((long *)plVar10[1] != (long *)0x0) goto LAB_003478dc;
LAB_003478ec:
          plVar4 = plVar10 + 2;
          plVar5 = (long *)*plVar4;
          if ((long *)*plVar5 != plVar10) {
            do {
              lVar6 = *plVar4;
              plVar4 = (long *)(lVar6 + 0x10);
              plVar5 = (long *)*plVar4;
            } while (*plVar5 != lVar6);
          }
        }
        plVar10 = plVar5;
      } while (plVar5 != (long *)(param_1 + 0x148));
    }
    local_100 = 0x1a;
    acStack_ff[0] = s_subchannelRef_03c681e7[0];
    acStack_ff[1] = s_subchannelRef_03c681e7[1];
    acStack_ff[2] = s_subchannelRef_03c681e7[2];
    acStack_ff[3] = s_subchannelRef_03c681e7[3];
    acStack_ff[4] = s_subchannelRef_03c681e7[4];
    uStack_fa = s_subchannelRef_03c681e7._5_2_;
    cStack_f8 = s_subchannelRef_03c681e7[7];
    cStack_f7 = s_subchannelRef_03c681e7[8];
    cStack_f6 = s_subchannelRef_03c681e7[9];
    cStack_f5 = s_subchannelRef_03c681e7[10];
    cStack_f4 = s_subchannelRef_03c681e7[0xb];
    cStack_f3 = s_subchannelRef_03c681e7[0xc];
    uStack_f2 = 0;
                    /* try { // try from 00347940 to 00347953 has its CatchHandler @ 00347e08 */
    puVar3 = (undefined8 *)FUN_002885a4(param_2,&local_98,&local_100);
    puVar8 = (undefined8 *)*puVar3;
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
      puVar8[6] = local_f0;
      puVar8[5] = CONCAT17(uStack_f1,
                           CONCAT16(uStack_f2,
                                    CONCAT15(cStack_f3,
                                             CONCAT14(cStack_f4,
                                                      CONCAT13(cStack_f5,
                                                               CONCAT12(cStack_f6,
                                                                        CONCAT11(cStack_f7,cStack_f8
                                                                                )))))));
      puVar8[4] = CONCAT26(uStack_fa,CONCAT51(acStack_ff,local_100));
      cStack_f8 = '\0';
      cStack_f7 = '\0';
      cStack_f6 = '\0';
      cStack_f5 = '\0';
      cStack_f4 = '\0';
      cStack_f3 = '\0';
      uStack_f2 = 0;
      uStack_f1 = 0;
      local_f0 = 0;
      local_100 = 0;
      acStack_ff[0] = '\0';
      acStack_ff[1] = '\0';
      acStack_ff[2] = '\0';
      acStack_ff[3] = '\0';
      acStack_ff[4] = '\0';
      uStack_fa = 0;
      puVar8[0xc] = 0;
      puVar8[0xb] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xb] = puVar8 + 0xc;
      puVar8[10] = 0;
      puVar8[9] = 0;
      puVar8[8] = 0;
      puVar8[7] = 0;
      puVar8[0xf] = 0;
      puVar8[0x10] = 0;
      puVar8[2] = local_98;
      *puVar8 = 0;
      puVar8[1] = 0;
      *puVar3 = puVar8;
      if (*(long *)*param_2 == 0) {
        puVar3 = puVar8;
      }
      else {
        *param_2 = *(long *)*param_2;
        puVar3 = (undefined8 *)*puVar3;
      }
      FUN_010108e0(param_2[1],puVar3);
      param_2[2] = param_2[2] + 1;
    }
    plVar10 = puVar8 + 0xe;
    lVar6 = *plVar10;
    *(undefined4 *)(puVar8 + 7) = 6;
    puVar2 = PTR_LAB_047cba48;
    if (lVar6 != 0) {
      lVar7 = puVar8[0xf];
      if (lVar7 == lVar6) {
        lVar7 = lVar6;
      }
      else {
        do {
          lVar9 = lVar7 + -0x50;
          FUN_003481a8(lVar7 + -0x18);
          FUN_0025cef0(lVar7 + -0x30,*(undefined8 *)(lVar7 + -0x28));
          if ((*(byte *)(lVar7 + -0x48) & 1) != 0) {
            FUN_0049e790(puVar2,*(undefined8 *)(lVar7 + -0x38));
          }
          lVar7 = lVar9;
        } while (lVar6 != lVar9);
        lVar7 = *plVar10;
      }
      puVar8[0xf] = lVar6;
      FUN_0049e790(PTR_LAB_047cba48,lVar7);
      *plVar10 = 0;
      puVar8[0xf] = 0;
      puVar8[0x10] = 0;
    }
    puVar8[0xf] = uStack_78;
    puVar8[0xe] = local_80;
    puVar8[0x10] = local_70;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    if ((local_100 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_f0);
    }
    FUN_003481a8(&local_80);
  }
  puVar2 = PTR_LAB_047cba48;
  if (*(long *)(param_1 + 0x138) != 0) {
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    if (*(long **)(param_1 + 0x128) != (long *)(param_1 + 0x130)) {
      plVar10 = *(long **)(param_1 + 0x128);
      do {
                    /* try { // try from 00347b1c to 00347b23 has its CatchHandler @ 00347e28 */
        FUN_002f09c0(&local_118,plVar10[4]);
        local_e0 = local_118;
        uVar1 = s_channelId_03c25106._0_8_;
        local_100 = 0x12;
        ((char *)((ulong)&local_100 | 1))[8] = 'd';
        local_118 = 0;
        *(undefined8 *)((ulong)&local_100 | 1) = uVar1;
        cStack_f6 = '\0';
        local_e8 = 4;
        local_d0 = local_108;
        uStack_d8 = uStack_110;
        uStack_110 = 0;
        local_108 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_a0 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
                    /* try { // try from 00347b68 to 00347b77 has its CatchHandler @ 00347e24 */
        local_c8 = &local_c0;
        FUN_00347670(&local_98,&local_100,1);
                    /* try { // try from 00347b78 to 00347b83 has its CatchHandler @ 00347e20 */
        FUN_00347edc(&local_80,&local_98);
        FUN_0025cef0(&local_98,local_90);
        FUN_003481a8(&local_b0);
        FUN_0025cef0(&local_c8,local_c0);
        if ((local_e0 & 1) == 0) {
          if ((local_100 & 1) == 0) goto LAB_00347bb4;
LAB_00347bdc:
          FUN_0049e790(puVar2,local_f0);
          if ((local_118 & 1) != 0) goto LAB_00347bf0;
LAB_00347bbc:
          plVar4 = (long *)plVar10[1];
          if ((long *)plVar10[1] == (long *)0x0) goto LAB_00347c14;
LAB_00347c04:
          do {
            plVar5 = plVar4;
            plVar4 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        else {
          FUN_0049e790(puVar2,local_d0);
          if ((local_100 & 1) != 0) goto LAB_00347bdc;
LAB_00347bb4:
          if ((local_118 & 1) == 0) goto LAB_00347bbc;
LAB_00347bf0:
          FUN_0049e790(puVar2,local_108);
          plVar4 = (long *)plVar10[1];
          if ((long *)plVar10[1] != (long *)0x0) goto LAB_00347c04;
LAB_00347c14:
          plVar4 = plVar10 + 2;
          plVar5 = (long *)*plVar4;
          if ((long *)*plVar5 != plVar10) {
            do {
              lVar6 = *plVar4;
              plVar4 = (long *)(lVar6 + 0x10);
              plVar5 = (long *)*plVar4;
            } while (*plVar5 != lVar6);
          }
        }
        plVar10 = plVar5;
      } while (plVar5 != (long *)(param_1 + 0x130));
    }
    local_100 = 0x14;
    cStack_f7 = 'e';
    cStack_f6 = 'f';
    acStack_ff = s_channelRef_03c828e0._0_5_;
    uStack_fa = s_channelRef_03c828e0._5_2_;
    cStack_f8 = s_channelRef_03c828e0[7];
    cStack_f5 = '\0';
                    /* try { // try from 00347c68 to 00347c7b has its CatchHandler @ 00347e04 */
    puVar3 = (undefined8 *)FUN_002885a4(param_2,&local_98,&local_100);
    puVar8 = (undefined8 *)*puVar3;
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
      puVar8[6] = local_f0;
      puVar8[5] = CONCAT17(uStack_f1,
                           CONCAT16(uStack_f2,
                                    CONCAT15(cStack_f3,
                                             CONCAT14(cStack_f4,
                                                      CONCAT13(cStack_f5,
                                                               CONCAT12(cStack_f6,
                                                                        CONCAT11(cStack_f7,cStack_f8
                                                                                )))))));
      puVar8[4] = CONCAT26(uStack_fa,CONCAT51(acStack_ff,local_100));
      cStack_f8 = '\0';
      cStack_f7 = '\0';
      cStack_f6 = '\0';
      cStack_f5 = '\0';
      cStack_f4 = '\0';
      cStack_f3 = '\0';
      uStack_f2 = 0;
      uStack_f1 = 0;
      local_f0 = 0;
      local_100 = 0;
      acStack_ff[0] = '\0';
      acStack_ff[1] = '\0';
      acStack_ff[2] = '\0';
      acStack_ff[3] = '\0';
      acStack_ff[4] = '\0';
      uStack_fa = 0;
      puVar8[0xc] = 0;
      puVar8[0xb] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xb] = puVar8 + 0xc;
      puVar8[10] = 0;
      puVar8[9] = 0;
      puVar8[8] = 0;
      puVar8[7] = 0;
      puVar8[0xf] = 0;
      puVar8[0x10] = 0;
      puVar8[2] = local_98;
      *puVar8 = 0;
      puVar8[1] = 0;
      *puVar3 = puVar8;
      if (*(long *)*param_2 == 0) {
        puVar3 = puVar8;
      }
      else {
        *param_2 = *(long *)*param_2;
        puVar3 = (undefined8 *)*puVar3;
      }
      FUN_010108e0(param_2[1],puVar3);
      param_2[2] = param_2[2] + 1;
    }
    plVar10 = puVar8 + 0xe;
    lVar6 = *plVar10;
    *(undefined4 *)(puVar8 + 7) = 6;
    puVar2 = PTR_LAB_047cba48;
    if (lVar6 != 0) {
      lVar7 = puVar8[0xf];
      if (lVar7 == lVar6) {
        lVar7 = lVar6;
      }
      else {
        do {
          lVar9 = lVar7 + -0x50;
          FUN_003481a8(lVar7 + -0x18);
          FUN_0025cef0(lVar7 + -0x30,*(undefined8 *)(lVar7 + -0x28));
          if ((*(byte *)(lVar7 + -0x48) & 1) != 0) {
            FUN_0049e790(puVar2,*(undefined8 *)(lVar7 + -0x38));
          }
          lVar7 = lVar9;
        } while (lVar6 != lVar9);
        lVar7 = *plVar10;
      }
      puVar8[0xf] = lVar6;
      FUN_0049e790(PTR_LAB_047cba48,lVar7);
      *plVar10 = 0;
      puVar8[0xf] = 0;
      puVar8[0x10] = 0;
    }
    puVar8[0xf] = uStack_78;
    puVar8[0xe] = local_80;
    puVar8[0x10] = local_70;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    if ((local_100 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_f0);
    }
    FUN_003481a8(&local_80);
  }
                    /* try { // try from 00347ddc to 00347de3 has its CatchHandler @ 00347e1c */
  FUN_0038db60(param_1 + 0x108);
  return;
}


