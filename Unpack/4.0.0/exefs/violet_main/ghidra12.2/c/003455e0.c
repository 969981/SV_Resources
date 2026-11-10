/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003455e0; name: FUN_003455e0
 */


void FUN_003455e0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  long *plVar9;
  long lVar10;
  byte *local_130;
  byte *pbStack_128;
  byte *local_120 [2];
  byte local_110;
  uint uStack_10f;
  undefined2 uStack_10b;
  char cStack_109;
  char cStack_108;
  undefined7 uStack_107;
  char cStack_100;
  undefined2 uStack_ff;
  undefined5 uStack_fd;
  undefined4 local_f8;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *local_a8;
  long local_a0;
  long local_98;
  byte local_90;
  undefined7 uStack_8f;
  byte bStack_88;
  undefined7 uStack_87;
  byte *local_80;
  byte *local_78;
  byte **ppbStack_70;
  undefined1 auStack_68 [8];
  
  if (*(long *)(param_2 + 0x30) == 0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[4] = param_1 + 5;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
                    /* try { // try from 00345614 to 0034561b has its CatchHandler @ 00345b6c */
    FUN_0038cd10(&local_90,*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x50));
    local_e0 = local_80;
    local_110 = 0x22;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    uStack_ff = 0x70;
    local_f8 = 4;
    puStack_d8 = &local_d0;
    local_80 = (byte *)0x0;
    local_b0 = 0;
    uStack_107 = s_creationTimestamp_03c828eb._8_7_;
    cStack_100 = s_creationTimestamp_03c828eb[0xf];
    uStack_10f = s_creationTimestamp_03c828eb._0_4_;
    uStack_10b = s_creationTimestamp_03c828eb._4_2_;
    cStack_109 = s_creationTimestamp_03c828eb[6];
    cStack_108 = s_creationTimestamp_03c828eb[7];
    local_90 = 0;
    uStack_8f._0_1_ = '\0';
    uStack_8f._1_1_ = '\0';
    uStack_8f._2_1_ = '\0';
    uStack_8f._3_1_ = '\0';
    uStack_8f._4_1_ = '\0';
    uStack_8f._5_1_ = '\0';
    uStack_8f._6_1_ = '\0';
    bStack_88 = 0;
    uStack_87._0_1_ = '\0';
    uStack_87._1_1_ = '\0';
    uStack_87._2_1_ = '\0';
    uStack_87._3_1_ = '\0';
    uStack_87._4_1_ = '\0';
    uStack_87._5_1_ = '\0';
    uStack_87._6_1_ = '\0';
                    /* try { // try from 00345670 to 0034567f has its CatchHandler @ 00345b40 */
    FUN_003454f0(&local_a8,&local_110,1);
    FUN_00287f48(&local_110);
    if ((local_90 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_80);
    }
    if (*(long *)(param_2 + 0x20) != 0) {
                    /* try { // try from 003456ac to 003456b3 has its CatchHandler @ 00345b38 */
      FUN_00345c40(&local_110);
      local_90 = 0x1e;
      uStack_8f._0_1_ = s_numEventsLogged_03c0f8f7[0];
      uStack_8f._1_1_ = s_numEventsLogged_03c0f8f7[1];
      uStack_8f._2_1_ = s_numEventsLogged_03c0f8f7[2];
      uStack_8f._3_1_ = s_numEventsLogged_03c0f8f7[3];
      uStack_8f._4_1_ = s_numEventsLogged_03c0f8f7[4];
      uStack_8f._5_1_ = s_numEventsLogged_03c0f8f7[5];
      uStack_8f._6_1_ = s_numEventsLogged_03c0f8f7[6];
      bStack_88 = s_numEventsLogged_03c0f8f7[7];
      uStack_87._0_1_ = s_numEventsLogged_03c0f8f7[8];
      uStack_87._1_1_ = s_numEventsLogged_03c0f8f7[9];
      uStack_87._2_1_ = s_numEventsLogged_03c0f8f7[10];
      uStack_87._3_1_ = s_numEventsLogged_03c0f8f7[0xb];
      uStack_87._4_1_ = s_numEventsLogged_03c0f8f7[0xc];
      uStack_87._5_1_ = s_numEventsLogged_03c0f8f7[0xd];
      uStack_87._6_1_ = s_numEventsLogged_03c0f8f7[0xe];
      local_130 = &local_90;
      local_80 = (byte *)((ulong)local_80 & 0xffffffffffffff00);
                    /* try { // try from 003456e0 to 003456fb has its CatchHandler @ 00345b0c */
      lVar4 = FUN_00289114(&local_a8,&local_90,&DAT_03cd7566,&local_130,auStack_68);
      *(undefined4 *)(lVar4 + 0x38) = 4;
      if ((*(byte *)(lVar4 + 0x40) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(lVar4 + 0x50));
      }
      *(ulong *)(lVar4 + 0x50) = CONCAT53(uStack_fd,CONCAT21(uStack_ff,cStack_100));
      *(ulong *)(lVar4 + 0x48) = CONCAT71(uStack_107,cStack_108);
      *(ulong *)(lVar4 + 0x40) =
           CONCAT17(cStack_109,CONCAT25(uStack_10b,CONCAT41(uStack_10f,local_110)));
      local_110 = 0;
      uStack_10f = uStack_10f & 0xffffff00;
      if (((local_90 & 1) != 0) && (FUN_0049e790(PTR_LAB_047cba48,local_80), (local_110 & 1) != 0))
      {
        FUN_0049e790(PTR_LAB_047cba48,CONCAT53(uStack_fd,CONCAT21(uStack_ff,cStack_100)));
      }
    }
    puVar2 = PTR_FUN_047cba38;
    lVar4 = *(long *)(param_2 + 0x38);
    if (lVar4 != 0) {
      local_130 = (byte *)0x0;
      pbStack_128 = (byte *)0x0;
      local_120[0] = (byte *)0x0;
      do {
        while( true ) {
                    /* try { // try from 003457e0 to 003457eb has its CatchHandler @ 00345b80 */
          FUN_00344fb0(&local_110,lVar4);
          pbVar3 = pbStack_128;
          if (pbStack_128 < local_120[0]) break;
          lVar10 = (long)pbStack_128 - (long)local_130 >> 4;
          uVar1 = lVar10 * -0x3333333333333333 + 1;
          if (0x333333333333333 < uVar1) {
                    /* try { // try from 00345adc to 00345ae3 has its CatchHandler @ 00345ae4 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar7 = (long)local_120[0] - (long)local_130 >> 4;
          local_78 = (byte *)0x0;
          uVar6 = lVar7 * -0x6666666666666666;
          if (uVar1 <= uVar6) {
            uVar1 = uVar6;
          }
          if (0x199999999999998 < (ulong)(lVar7 * -0x3333333333333333)) {
            uVar1 = 0x333333333333333;
          }
          ppbStack_70 = local_120;
          if (uVar1 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = FUN_0049e770(puVar2,uVar1 * 0x50);
          }
          local_80 = (byte *)(lVar7 + lVar10 * 0x10);
          local_90 = (byte)lVar7;
          uStack_8f = (undefined7)((ulong)lVar7 >> 8);
          bStack_88 = (byte)local_80;
          uStack_87 = (undefined7)((ulong)local_80 >> 8);
          local_78 = (byte *)(lVar7 + uVar1 * 0x50);
                    /* try { // try from 0034588c to 00345897 has its CatchHandler @ 00345b70 */
          FUN_0028f3c0(local_80,&local_110);
          pbVar3 = local_130;
          local_80 = (byte *)((long)local_80 + 0x50);
          if (pbStack_128 == local_130) {
            pbVar5 = (byte *)CONCAT71(uStack_87,bStack_88);
            pbStack_128 = local_130;
          }
          else {
            pbVar5 = (byte *)CONCAT71(uStack_87,bStack_88);
            pbVar8 = pbStack_128;
            do {
              pbVar8 = pbVar8 + -0x50;
                    /* try { // try from 003458bc to 003458c3 has its CatchHandler @ 00345b88 */
              FUN_002886bc(pbVar5 + -0x50,pbVar8);
              pbVar5 = (byte *)(CONCAT71(uStack_87,bStack_88) - 0x50);
              bStack_88 = (byte)pbVar5;
              uStack_87 = (undefined7)((ulong)pbVar5 >> 8);
            } while (pbVar3 != pbVar8);
          }
          pbVar3 = local_78;
          bStack_88 = (byte)local_130;
          uStack_87 = (undefined7)((ulong)local_130 >> 8);
          local_78 = local_120[0];
          local_120[0] = pbVar3;
          local_130 = pbVar5;
          pbVar3 = pbStack_128;
          pbStack_128 = local_80;
          local_90 = bStack_88;
          uStack_8f = uStack_87;
          local_80 = pbVar3;
          FUN_0028f660(&local_90);
          FUN_00288048(&local_110);
          lVar4 = *(long *)(lVar4 + 0x38);
          if (lVar4 == 0) goto LAB_003458e4;
        }
                    /* try { // try from 003457f8 to 00345803 has its CatchHandler @ 00345b74 */
        FUN_0028f3c0(pbStack_128,&local_110);
        pbStack_128 = pbVar3 + 0x50;
        FUN_00288048(&local_110);
        lVar4 = *(long *)(lVar4 + 0x38);
      } while (lVar4 != 0);
LAB_003458e4:
      local_110 = 0xc;
      uStack_10b = 0x7374;
      uStack_10f = 0x6e657665;
      cStack_109 = '\0';
      local_90 = (byte)&local_110;
      uStack_8f = (undefined7)((ulong)&local_110 >> 8);
                    /* try { // try from 0034590c to 00345927 has its CatchHandler @ 00345aec */
      lVar4 = FUN_00289114(&local_a8,&local_110,&DAT_03cd7566,&local_90,auStack_68);
      *(undefined4 *)(lVar4 + 0x38) = 6;
      plVar9 = (long *)(lVar4 + 0x70);
      lVar10 = *plVar9;
      if (lVar10 != 0) {
        lVar7 = *(long *)(lVar4 + 0x78);
        if (lVar7 == lVar10) {
          lVar7 = lVar10;
        }
        else {
          do {
            lVar7 = lVar7 + -0x50;
            FUN_00288048(lVar7);
          } while (lVar10 != lVar7);
          lVar7 = *plVar9;
        }
        *(long *)(lVar4 + 0x78) = lVar10;
        FUN_0049e790(PTR_LAB_047cba48,lVar7);
        *plVar9 = 0;
        *(undefined8 *)(lVar4 + 0x78) = 0;
        *(undefined8 *)(lVar4 + 0x80) = 0;
      }
      *(byte **)(lVar4 + 0x78) = pbStack_128;
      *(byte **)(lVar4 + 0x70) = local_130;
      *(byte **)(lVar4 + 0x80) = local_120[0];
      local_130 = (byte *)0x0;
      pbStack_128 = (byte *)0x0;
      local_120[0] = (byte *)0x0;
      if ((local_110 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,CONCAT53(uStack_fd,CONCAT21(uStack_ff,cStack_100)));
        pbVar3 = local_130;
        puVar2 = PTR_LAB_047cba48;
        pbVar5 = pbStack_128;
        if (local_130 != (byte *)0x0) {
          while (pbVar8 = pbVar5, pbVar8 != pbVar3) {
            if (*(long *)(pbVar8 + -0x18) != 0) {
              FUN_00345dd0(pbVar8 + -0x18);
              FUN_0049e790(puVar2,*(undefined8 *)(pbVar8 + -0x18));
            }
            FUN_0025cef0(pbVar8 + -0x30,*(undefined8 *)(pbVar8 + -0x28));
            pbVar5 = pbVar8 + -0x50;
            if ((pbVar8[-0x48] & 1) != 0) {
              FUN_0049e790(puVar2,*(undefined8 *)(pbVar8 + -0x38));
            }
          }
          pbStack_128 = pbVar3;
          FUN_0049e790(PTR_LAB_047cba48,local_130);
        }
      }
    }
    *(undefined4 *)param_1 = 5;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = local_a8;
    plVar9 = param_1 + 5;
    *plVar9 = local_a0;
    param_1[6] = local_98;
    if (local_98 == 0) {
      param_1[4] = plVar9;
    }
    else {
      *(long **)(local_a0 + 0x10) = plVar9;
      local_a8 = &local_a0;
      local_a0 = 0;
      local_98 = 0;
    }
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    FUN_0025cef0(&local_a8,local_a0);
  }
  return;
}


