/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124a094; name: FUN_0124a094
 */


void FUN_0124a094(long param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined8 local_1d8 [20];
  byte local_132;
  byte local_130;
  char local_124 [4];
  undefined4 local_120 [2];
  undefined8 local_118;
  undefined2 local_110;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  uint uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  ulong local_e4;
  undefined2 local_dc;
  undefined1 local_da;
  undefined2 local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined8 local_ce;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined1 auStack_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  *param_2 = 0;
  FUN_01243d84(local_1d8);
  FUN_0124a904(param_1,local_1d8);
  uVar14 = 0x24;
  uVar9 = 1;
  do {
    local_130 = 0;
    if (local_132 != 0) {
      uVar8 = 0;
      while( true ) {
        local_130 = (char)uVar8 + 1;
        plVar11 = (long *)local_1d8[uVar8];
        if (plVar11 == (long *)0x0) break;
        uVar8 = (**(code **)(*plVar11 + 0x200))(plVar11);
        if ((uVar8 & 1) == 0) {
          uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0);
          uVar3 = (**(code **)(*plVar11 + 0x98))(plVar11);
          cVar1 = FUN_01481420(uVar12,uVar3);
          if (cVar1 == '\n') goto switchD_0124a228_caseD_10;
          local_118 = 0;
          local_120[0] = 0;
          lVar10 = *(long *)(param_1 + 0x20);
          uVar3 = (**(code **)(*plVar11 + 0x98))(plVar11);
          plVar7 = (long *)FUN_01021c94(*(undefined8 *)
                                         (*(long *)(*(long *)(lVar10 + 0x20) + 0x10) + 0x30),uVar3);
          uVar8 = (**(code **)(*plVar7 + 0x570))(plVar7,uVar14,local_120,local_124);
          FUN_0129aff0(*(undefined8 *)(lVar10 + 0x18),0x19,uVar3,uVar14);
          if ((uVar8 & 1) == 0) goto switchD_0124a228_caseD_10;
          if (local_124[0] != '\0') {
            local_70 = 0;
            local_80 = 0;
            uStack_78 = 0;
            local_90._0_8_ = 0;
            local_90._8_8_ = 0;
            uVar3 = (**(code **)(*plVar11 + 0x98))(plVar11);
            uVar8 = FUN_0124a970(uVar14,local_120,uVar3,0,local_90);
            if ((uVar8 & 1) != 0) {
              uStack_10c = uStack_10c & 0xffffff00;
              uStack_e8 = 0;
              local_f8._0_4_ = 0;
              local_f8._4_4_ = 0;
              local_f0 = 0;
              local_ec = 0;
              local_108 = 0;
              uStack_104 = 0;
              local_100 = 0;
              uStack_fc = 0;
              uVar3 = (**(code **)(*plVar11 + 0x98))(plVar11);
              local_110 = (undefined2)uVar3;
              uStack_10e = (undefined1)((uint)uVar3 >> 0x10);
              uStack_10d = (undefined1)((uint)uVar3 >> 0x18);
              memcpy(&local_108,local_90,0x24);
              FUN_0124aab0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xd80),local_98,&local_110);
            }
            switch(uVar14) {
            case 0xe:
              FUN_0124ae50(param_1,plVar11,local_120);
              break;
            case 0xf:
              FUN_0124abe8(param_1,plVar11);
              break;
            case 0x13:
              FUN_0124ab94(param_1,plVar11);
              break;
            case 0x14:
              FUN_0124ac3c(param_1,plVar11,local_120);
            }
            goto switchD_0124a228_caseD_10;
          }
          uVar8 = (**(code **)(*plVar11 + 0x200))(plVar11);
          if ((uVar8 & 1) != 0) goto switchD_0124a228_caseD_10;
          uVar12 = FUN_0124acbc(param_1);
          iVar4 = (**(code **)(*plVar11 + 0x428))(plVar11,uVar14,uVar12);
          if (iVar4 != 0) {
            if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49c) >> 1 & 1) != 0) {
              uVar8 = (**(code **)(*plVar11 + 0x510))(plVar11,0x19);
              if ((uVar8 & 1) != 0) goto LAB_0124a450;
            }
            uVar5 = FUN_0124b630(*(undefined8 *)(param_1 + 0x38),plVar11,uVar14,iVar4);
            if (uVar5 == 0) goto LAB_0124a450;
            uVar3 = (undefined4)(0x29280000002627 >> (((ulong)(uVar14 - 4) & 7) << 3));
            if (6 < (uVar14 - 4 & 0xffff)) {
              uVar3 = 0;
            }
            uVar8 = FUN_0124b9a4(*(undefined8 *)
                                  (*(long *)(*(long *)(param_1 + 0x78) + 0x17a0) + 0x38),plVar11,
                                 uVar5,uVar3);
            if ((uVar8 & 1) == 0) goto LAB_0124a450;
            switch(uVar14) {
            case 4:
              FUN_0124ade8(*(undefined8 *)(param_1 + 0x20),plVar11,0x2c);
              uVar3 = (**(code **)(*plVar11 + 0x240))(plVar11,4);
              uVar13 = 0x27;
              local_90._0_2_ = 0x58;
              break;
            case 5:
              FUN_0124ade8(*(undefined8 *)(param_1 + 0x20),plVar11,0x2b);
              uVar3 = (**(code **)(*plVar11 + 0x240))(plVar11,5);
              uVar13 = 0x26;
              local_90._0_2_ = 0x52;
              break;
            case 9:
              FUN_0124ade8(*(undefined8 *)(param_1 + 0x20),plVar11,0x44);
              uVar3 = (**(code **)(*plVar11 + 0x240))(plVar11,9);
              uVar13 = 0x28;
              local_90._0_2_ = 0x6d;
              break;
            case 10:
              FUN_0124ade8(*(undefined8 *)(param_1 + 0x20),plVar11,0x43);
              uVar3 = (**(code **)(*plVar11 + 0x240))(plVar11,10);
              uVar13 = 0x29;
              local_90._0_2_ = 0x156;
              break;
            default:
              if (uVar14 == 0x2e) {
                FUN_0124ade8(*(undefined8 *)(param_1 + 0x20),plVar11,0x98);
              }
            case 6:
            case 7:
            case 8:
              uVar3 = (**(code **)(*plVar11 + 0x240))(plVar11,uVar14);
              local_70 = 0;
              local_80 = 0;
              uStack_78 = 0;
              local_90._0_8_ = 0;
              local_90._8_8_ = 0;
              if (uVar14 == 0x2e) {
                local_90._0_8_ = 0x7d;
                uVar6 = (**(code **)(*plVar11 + 0x98))(plVar11);
                local_90._2_2_ = 0x102;
                local_90._4_4_ = uVar6;
                local_90._8_4_ = 0x360;
              }
              uVar13 = 0;
              goto LAB_0124a41c;
            }
            local_70 = 0;
            local_80 = 0;
            uStack_78 = 0;
            local_90._8_8_ = 0;
            local_90._2_6_ = 0;
            uVar6 = (**(code **)(*plVar11 + 0x98))(plVar11);
            local_90._2_2_ = 0x82;
            local_90._4_4_ = uVar6;
LAB_0124a41c:
            local_f8 = local_90;
            local_110 = SUB82(plVar11,0);
            uStack_10e = (undefined1)((ulong)plVar11 >> 0x10);
            uStack_10d = (undefined1)((ulong)plVar11 >> 0x18);
            uStack_10c = (uint)((ulong)plVar11 >> 0x20);
            uStack_104 = CONCAT31(uStack_104._1_3_,uVar13);
            local_f0 = CONCAT31(local_f0._1_3_,1);
            local_108 = uVar5;
            local_100 = uVar3;
            FUN_0124af54(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x17c0),local_98,&local_110);
          }
LAB_0124a450:
          if (uVar14 < 0x24) {
            switch(uVar14) {
            case 0x12:
              FUN_0124c778(param_1,plVar11);
              break;
            case 0x13:
            case 0x16:
              break;
            case 0x14:
              FUN_0124b30c(param_1,plVar11);
              break;
            case 0x15:
              FUN_0124b3a8(param_1,plVar11);
              break;
            case 0x17:
              FUN_0124b514(param_1,plVar11);
              break;
            default:
              if (uVar14 == 8) {
                FUN_0124fe90(param_1,plVar11);
              }
            }
          }
          else if (uVar14 == 0x24) {
            FUN_0124b454(param_1,plVar11);
          }
          else if (uVar14 == 0x2b) {
            FUN_0124c9e4(param_1,plVar11);
          }
          else if (uVar14 == 0x30) {
            uVar8 = (**(code **)(*plVar11 + 0x200))(plVar11);
            if ((uVar8 & 1) == 0) {
              uVar5 = (**(code **)(*plVar11 + 0x98))(plVar11);
              auVar15 = (**(code **)(*plVar11 + 0x240))(plVar11,0x30);
              local_98[0] = 0;
              local_90 = auVar15;
              iVar4 = (**(code **)(*plVar11 + 0x280))(plVar11,5);
              if (0 < iVar4) {
                uStack_10c = 0;
                local_108 = 0;
                uStack_104 = 0;
                local_100 = 0;
                uStack_fc = 0;
                local_f8._0_4_ = 0;
                local_f8._4_4_ = 0;
                local_f0 = 0;
                local_ec = 0;
                uStack_e8 = 0;
                local_e4 = local_e4 & 0xffffffff00000000;
                local_110 = 0x95;
                uStack_10e = 10;
                uStack_10d = 10;
                uVar8 = FUN_0124bd20(local_90);
                local_110 = 0x95;
                if ((uVar8 & 1) != 0) {
                  local_110 = 0x96;
                }
                uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0);
                uStack_10e = FUN_01481420(uVar12,auVar15._0_8_ & 0xffffffff);
                uStack_10d = FUN_01481420(uVar12,uVar5);
                FUN_01250748(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x9a0),auStack_a0,
                             &local_110);
                local_d8 = 0;
                local_d4 = 0;
                local_d0 = 0;
                local_ce = 0x102000001000000;
                uStack_104 = 0;
                local_100 = 0;
                uStack_fc = 0;
                local_f8._0_4_ = 0;
                local_f8._4_4_ = 0;
                local_f0 = 0;
                local_ec = 0;
                uStack_e8 = 0;
                local_e4 = 0;
                local_c4 = 0;
                local_bc = 0;
                local_b4 = 0;
                local_ac = 0;
                uStack_10c = CONCAT31(uStack_10c._1_3_,1);
                local_a4 = 0;
                local_110 = auVar15._0_2_;
                uStack_10e = auVar15[2];
                uStack_10d = auVar15[3];
                local_dc = 0xff05;
                local_da = 0;
                local_108 = uVar5;
                FUN_01251258(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xe20),local_98,&local_110)
                ;
              }
            }
          }
        }
switchD_0124a228_caseD_10:
        if ((**(char **)(*(long *)(param_1 + 0x40) + 0x28) == '\b') ||
           (uVar8 = (ulong)local_130, local_132 <= local_130)) break;
      }
    }
    uVar8 = FUN_0124a808(param_1);
    if ((uVar8 & 1) == 0) {
      if (0x2c < uVar9) goto LAB_0124a7d4;
    }
    else {
      uVar8 = FUN_014603fc(param_1);
      if ((0x2c < uVar9) || ((uVar8 & 1) != 0)) {
LAB_0124a7d4:
        bVar2 = FUN_0124a934(param_1);
        *param_2 = bVar2 & 1;
        return;
      }
    }
    uVar14 = (uint)*(ushort *)(&UNK_03d69dd0 + (ulong)uVar9 * 2);
    uVar9 = uVar9 + 1;
  } while( true );
}


