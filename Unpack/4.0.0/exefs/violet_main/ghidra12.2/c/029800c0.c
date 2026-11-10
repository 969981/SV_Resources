/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029800c0; name: FUN_029800c0
 */


void FUN_029800c0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 unaff_x21;
  undefined4 *puVar8;
  undefined8 unaff_x22;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_d8 [8];
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined2 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined1 uStack_b7;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined4 local_88 [4];
  undefined4 local_78 [6];
  undefined4 local_20;
  uint uStack_1c;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined2 uStack_16;
  undefined4 uStack_14;
  
  uVar2 = *(ushort *)(param_2 + 0xc);
  local_20 = (undefined4)unaff_x22;
  uStack_1c = (uint)((ulong)unaff_x22 >> 0x20);
  uVar4 = uStack_1c;
  uStack_18 = (undefined1)unaff_x21;
  uStack_17 = (undefined1)((ulong)unaff_x21 >> 8);
  uStack_16 = (undefined2)((ulong)unaff_x21 >> 0x10);
  uStack_1c = (uint)((ulong)unaff_x21 >> 0x20);
  uStack_14 = uStack_1c;
  if (uVar2 < 0x10) {
    switch(uVar2) {
    case 1:
      FUN_019ffc04();
      return;
    case 2:
      FUN_018cde54();
      return;
    case 4:
      local_20 = (undefined4)unaff_x21;
      uVar4 = FUN_019ffcd0(param_1,param_2,local_78 + 8);
      if (0 < (int)uVar4) {
        uVar9 = (ulong)uVar4;
        puVar8 = local_78 + 8;
        do {
          uVar1 = *puVar8;
          uStack_18 = (undefined1)uVar1;
          uStack_17 = (undefined1)((uint)uVar1 >> 8);
          uStack_16 = (undefined2)((uint)uVar1 >> 0x10);
          FUN_01461214(param_1);
          uVar7 = FUN_0293e664();
          FUN_0293e66c(uVar7,local_78 + 6,&uStack_18);
          uVar9 = uVar9 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar9 != 0);
      }
      return;
    case 8:
      uStack_1c = uVar4;
      uVar4 = FUN_019ffcd0(param_1,param_2,local_78);
      if (0 < (int)uVar4) {
        uVar9 = (ulong)uVar4;
        puVar8 = local_78;
        do {
          uVar1 = *puVar8;
          plVar5 = (long *)FUN_014813f4(param_1,uVar1);
          FUN_0293e210(&local_c8);
          local_c8 = CONCAT44(uVar1,*param_2);
          local_c0 = 0x10;
          auVar10 = FUN_01894970(*param_2,uVar1,1);
          local_b8 = auVar10[0];
          uStack_b7 = auVar10[1];
          uStack_b6 = auVar10._2_6_;
          uStack_b0 = auVar10._8_2_;
          uStack_ae = auVar10._10_6_;
          sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
          if (sVar3 == 0xd7) {
            local_a8 = CONCAT17(1,(undefined7)local_a8);
          }
          local_a8._0_6_ = CONCAT15(1,(undefined5)local_a8);
          FUN_01461214(param_1);
          uVar7 = FUN_01a042e4();
          FUN_01a042ec(uVar7,local_d0,&local_c8);
          uVar9 = uVar9 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar9 != 0);
      }
      return;
    }
  }
  else {
    if (uVar2 == 0x10) {
      if (*(byte *)(param_2 + 0xe) != 2) {
        uStack_18 = 0;
        uStack_17 = 1;
        local_20 = *param_2;
        uStack_1c = (uint)*(byte *)(param_2 + 0xe);
        FUN_01461214();
        uVar7 = FUN_0293f0d4();
        FUN_0293f0dc(uVar7,local_78 + 0x14,&local_20);
      }
      return;
    }
    if (uVar2 == 0x20) {
      uStack_1c = uVar4;
      uVar4 = FUN_019ffcd0(param_1,param_2,local_78 + 8);
      if (0 < (int)uVar4) {
        uVar9 = (ulong)uVar4;
        puVar8 = local_78 + 8;
        do {
          uVar7 = FUN_014813f4(param_1,*puVar8);
          FUN_02980580(param_1,uVar7,6,1,3,1);
          FUN_02980580(param_1,uVar7,7,2,4,2);
          uVar9 = uVar9 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar9 != 0);
      }
      return;
    }
    if (uVar2 == 0x40) {
      uStack_1c = uVar4;
      uVar4 = FUN_019ffcd0(param_1,param_2,local_88);
      if (0 < (int)uVar4) {
        uVar9 = (ulong)uVar4;
        puVar8 = local_88;
        do {
          uVar1 = *puVar8;
          lVar6 = FUN_018d5ce0(param_1,uVar1);
          if (lVar6 != 0) {
            local_b8 = 0;
            local_a8 = 0;
            local_98 = 0;
            uStack_b6 = 0;
            uStack_b0 = 0;
            local_d0[0] = *param_2;
            local_c0 = CONCAT11(local_c0._1_1_,1);
            local_bc = 1;
            local_90 = 0;
            local_a0 = 1;
            local_c8 = lVar6;
            FUN_01461214(param_1);
            uVar7 = FUN_019675d8();
            FUN_01480c5c(uVar7,auStack_d8,local_d0);
          }
          lVar6 = FUN_018d5ce0(param_1,uVar1);
          if (lVar6 != 0) {
            local_b8 = 0;
            local_a8 = 0;
            local_98 = 0;
            uStack_b6 = 0;
            uStack_b0 = 0;
            local_d0[0] = *param_2;
            local_c0 = CONCAT11(local_c0._1_1_,2);
            local_bc = 1;
            local_90 = 0;
            local_a0 = 1;
            local_c8 = lVar6;
            FUN_01461214(param_1);
            uVar7 = FUN_019675d8();
            FUN_01480c5c(uVar7,auStack_d8,local_d0);
          }
          lVar6 = FUN_018d5ce0(param_1,uVar1);
          if (lVar6 != 0) {
            local_b8 = 0;
            local_a8 = 0;
            local_98 = 0;
            uStack_b6 = 0;
            uStack_b0 = 0;
            local_d0[0] = *param_2;
            local_c0 = CONCAT11(local_c0._1_1_,3);
            local_bc = 1;
            local_90 = 0;
            local_a0 = 1;
            local_c8 = lVar6;
            FUN_01461214(param_1);
            uVar7 = FUN_019675d8();
            FUN_01480c5c(uVar7,auStack_d8,local_d0);
          }
          lVar6 = FUN_018d5ce0(param_1,uVar1);
          if (lVar6 != 0) {
            local_b8 = 0;
            local_a8 = 0;
            local_98 = 0;
            uStack_b6 = 0;
            uStack_b0 = 0;
            local_d0[0] = *param_2;
            local_c0 = CONCAT11(local_c0._1_1_,4);
            local_bc = 1;
            local_90 = 0;
            local_a0 = 1;
            local_c8 = lVar6;
            FUN_01461214(param_1);
            uVar7 = FUN_019675d8();
            FUN_01480c5c(uVar7,auStack_d8,local_d0);
          }
          lVar6 = FUN_018d5ce0(param_1,uVar1);
          if (lVar6 != 0) {
            local_b8 = 0;
            local_a8 = 0;
            local_98 = 0;
            uStack_b6 = 0;
            uStack_b0 = 0;
            local_d0[0] = *param_2;
            local_c0 = CONCAT11(local_c0._1_1_,5);
            local_bc = 1;
            local_90 = 0;
            local_a0 = 1;
            local_c8 = lVar6;
            FUN_01461214(param_1);
            uVar7 = FUN_019675d8();
            FUN_01480c5c(uVar7,auStack_d8,local_d0);
          }
          uVar9 = uVar9 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar9 != 0);
      }
      return;
    }
  }
  return;
}


