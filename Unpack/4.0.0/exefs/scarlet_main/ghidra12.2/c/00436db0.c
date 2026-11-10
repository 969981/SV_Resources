/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00436db0; name: FUN_00436db0
 */


void FUN_00436db0(byte *param_1,byte *param_2,int param_3,ulong param_4,undefined8 param_5,
                 uint *param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar5;
  byte bVar4;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar11;
  byte bVar10;
  byte bVar9;
  byte bVar8;
  uint uVar12;
  uint uVar13;
  uint7 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined3 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  undefined8 local_78;
  byte local_70 [4];
  byte local_6c;
  byte local_6b;
  byte local_6a;
  byte local_69;
  uint local_68;
  uint uStack_64;
  
  iVar1 = param_3 + 7;
  iVar3 = iVar1;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  iVar2 = param_3 + 0xe;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (0x3f < param_3 - 1U) {
    return;
  }
  uVar29 = *param_6;
  uVar27 = param_6[1];
  iVar2 = iVar2 >> 3;
  iVar3 = iVar3 >> 3;
  uVar26 = (ulong)iVar2;
  uVar12 = param_3 % 8;
  if (param_7 == 0) {
    if (uVar26 <= param_4) {
      uVar19 = 8 - uVar12;
      uVar13 = iVar2 - 1;
      uVar18 = uVar29;
      do {
        local_68 = uVar18;
        uStack_64 = uVar27;
        FUN_004348c0(&local_68,param_5,1);
        uVar20 = 0;
        param_1 = param_1 + uVar26;
        uVar29 = 0;
        uVar21 = 0;
        uVar22 = 0;
        switch(uVar13) {
        case 7:
          param_1 = param_1 + -1;
          uVar20 = (uint)*param_1 << 0x18;
        case 6:
          param_1 = param_1 + -1;
          uVar20 = uVar20 | (uint)*param_1 << 0x10;
        case 5:
          param_1 = param_1 + -1;
          uVar20 = uVar20 | (uint)*param_1 << 8;
        case 4:
          param_1 = param_1 + -1;
          uVar20 = uVar20 | *param_1;
        case 3:
          param_1 = param_1 + -1;
          uVar29 = (uint)*param_1 << 0x18;
        case 2:
          param_1 = param_1 + -1;
          uVar21 = uVar29 | (uint)*param_1 << 0x10;
        case 1:
          param_1 = param_1 + -1;
          uVar22 = uVar21 | (uint)*param_1 << 8;
        case 0:
          param_1 = param_1 + -1;
          uVar22 = uVar22 | *param_1;
          break;
        default:
          uVar22 = 0;
        }
        if (param_3 == 0x20) {
          uVar29 = uVar27;
          uVar21 = uVar22;
        }
        else {
          uVar29 = uVar22;
          uVar21 = uVar20;
          if (param_3 != 0x40) {
            local_78._0_4_ = uVar18 & 0xffffff00;
            local_78._0_5_ = (uint5)(uint)local_78;
            local_78._0_6_ = CONCAT15((char)(uVar27 >> 8),(uint5)local_78);
            local_78._0_7_ = CONCAT16((char)(uVar27 >> 0x10),(undefined6)local_78);
            uVar6 = (undefined1)(uVar27 >> 0x18);
            local_78 = CONCAT17(uVar6,(uint7)local_78);
            uVar15 = local_78;
            local_70[1] = (byte)(uVar22 >> 8);
            local_70[2] = (byte)(uVar22 >> 0x10);
            local_70[3] = (byte)(uVar22 >> 0x18);
            local_6b = (byte)(uVar20 >> 8);
            local_6a = (byte)(uVar20 >> 0x10);
            local_78 = CONCAT71(local_78._1_7_,(char)uVar18);
            uVar16 = local_78;
            local_78._5_3_ = SUB83(uVar15,5);
            uVar17 = local_78._5_3_;
            local_78._0_4_ = (uint)uVar16;
            local_78._0_5_ = CONCAT14((char)uVar27,(uint)local_78);
            uVar16 = local_78;
            local_70[0] = (byte)uVar22;
            local_6c = (byte)uVar20;
            local_69 = (byte)(uVar20 >> 0x18);
            if (uVar12 == 0) {
              uVar28 = *(ulong *)(local_70 + (long)iVar3 + -8);
              uVar29 = (uint)(uVar28 >> 8);
              uVar27 = (uint)(uVar28 >> 0x10);
              uVar18 = (uint)(uVar28 >> 0x18);
              uVar21 = (uint)(uVar28 >> 0x20);
              uVar23 = uVar21 >> 8;
              uVar24 = (uint)(ushort)(uVar28 >> 0x30);
              uVar25 = (uint)(byte)(uVar28 >> 0x38);
              local_78 = uVar28;
            }
            else {
              uVar29 = (uint)(local_70[(long)iVar3 + -7] >> (ulong)(uVar19 & 0x1f)) |
                       (uint)local_70[(long)iVar3 + -8] << (ulong)(uVar12 & 0x1f);
              uVar28 = (ulong)uVar29;
              uVar7 = (undefined1)uVar29;
              local_78 = CONCAT71(local_78._1_7_,uVar7);
              uVar29 = (uint)(local_70[(long)iVar3 + -6] >> (ulong)(uVar19 & 0x1f)) |
                       (uint)local_70[(long)iVar3 + -7] << (ulong)(uVar12 & 0x1f);
              local_78._2_6_ = SUB86(uVar16,2);
              local_78._0_2_ = CONCAT11((char)uVar29,uVar7);
              uVar27 = (uint)(local_70[(long)iVar3 + -5] >> (ulong)(uVar19 & 0x1f)) |
                       (uint)local_70[(long)iVar3 + -6] << (ulong)(uVar12 & 0x1f);
              local_78._3_5_ = SUB85(uVar16,3);
              local_78._0_3_ = CONCAT12((char)uVar27,(undefined2)local_78);
              uVar18 = (uint)(local_70[(long)iVar3 + -4] >> (ulong)(uVar19 & 0x1f)) |
                       (uint)local_70[(long)iVar3 + -5] << (ulong)(uVar12 & 0x1f);
              local_78._4_4_ = SUB84(uVar16,4);
              local_78._0_4_ = CONCAT13((char)uVar18,(undefined3)local_78);
              uVar21 = (uint)(local_70[(long)iVar3 + -3] >> (ulong)(uVar19 & 0x1f)) |
                       (uint)local_70[(long)iVar3 + -4] << (ulong)(uVar12 & 0x1f);
              local_78._0_5_ = CONCAT14((char)uVar21,(uint)local_78);
              local_78 = CONCAT35(uVar17,(uint5)local_78);
              uVar23 = (uint)(local_70[(long)iVar3 + -2] >> (ulong)(uVar19 & 0x1f)) |
                       (uint)local_70[(long)iVar3 + -3] << (ulong)(uVar12 & 0x1f);
              local_78._6_2_ = SUB82(uVar15,6);
              local_78._0_6_ = CONCAT15((char)uVar23,(uint5)local_78);
              uVar24 = (uint)(local_70[(long)iVar3 + -1] >> (ulong)(uVar19 & 0x1f)) |
                       (uint)local_70[(long)iVar3 + -2] << (ulong)(uVar12 & 0x1f);
              local_78._0_7_ = CONCAT16((char)uVar24,(undefined6)local_78);
              local_78 = CONCAT17(uVar6,(uint7)local_78);
              uVar25 = (uint)(local_70[iVar3] >> (ulong)(uVar19 & 0x1f)) |
                       (uint)local_70[(long)iVar3 + -1] << (ulong)(uVar12 & 0x1f);
              local_78 = CONCAT17((char)uVar25,(uint7)local_78);
            }
            uVar29 = (uint)uVar28 & 0xff | (uVar29 & 0xff) << 8 | (uVar27 & 0xff) << 0x10 |
                     uVar18 << 0x18;
            uVar21 = uVar21 & 0xff | (uVar23 & 0xff) << 8 | (uVar24 & 0xff) << 0x10 | uVar25 << 0x18
            ;
          }
        }
        uVar27 = uVar21;
        param_4 = param_4 - uVar26;
        param_1 = param_1 + uVar26;
        param_2 = param_2 + uVar26;
        if (uVar13 < 8) {
          local_68 = local_68 ^ uVar22;
          uStack_64 = uStack_64 ^ uVar20;
          switch(uVar13) {
          case 7:
            param_2 = param_2 + -1;
            *param_2 = (byte)(uStack_64 >> 0x18);
          case 6:
            param_2 = param_2 + -1;
            *param_2 = (byte)(uStack_64 >> 0x10);
          case 5:
            param_2 = param_2 + -1;
            *param_2 = (byte)(uStack_64 >> 8);
          case 4:
            param_2 = param_2 + -1;
            *param_2 = (byte)uStack_64;
          case 3:
            param_2 = param_2 + -1;
            *param_2 = (byte)(local_68 >> 0x18);
          case 2:
            param_2 = param_2 + -1;
            *param_2 = (byte)(local_68 >> 0x10);
          case 1:
            param_2 = param_2 + -1;
            *param_2 = (byte)(local_68 >> 8);
          case 0:
            param_2 = param_2 + -1;
            *param_2 = (byte)local_68;
          }
        }
        param_2 = param_2 + uVar26;
        uVar18 = uVar29;
      } while (uVar26 <= param_4);
    }
  }
  else if (uVar26 <= param_4) {
    uVar13 = 8 - uVar12;
    do {
      local_68 = uVar29;
      uStack_64 = uVar27;
      FUN_004348c0(&local_68,param_5,1);
      uVar19 = 0;
      param_1 = param_1 + uVar26;
      uVar18 = 0;
      uVar20 = 0;
      uVar21 = 0;
      switch(iVar2 + -1) {
      case 7:
        param_1 = param_1 + -1;
        uVar19 = (uint)*param_1 << 0x18;
      case 6:
        param_1 = param_1 + -1;
        uVar19 = uVar19 | (uint)*param_1 << 0x10;
      case 5:
        param_1 = param_1 + -1;
        uVar19 = uVar19 | (uint)*param_1 << 8;
      case 4:
        param_1 = param_1 + -1;
        uVar19 = uVar19 | *param_1;
      case 3:
        param_1 = param_1 + -1;
        uVar18 = (uint)*param_1 << 0x18;
      case 2:
        param_1 = param_1 + -1;
        uVar20 = uVar18 | (uint)*param_1 << 0x10;
      case 1:
        param_1 = param_1 + -1;
        uVar21 = uVar20 | (uint)*param_1 << 8;
      case 0:
        param_1 = param_1 + -1;
        uVar18 = uVar21 | *param_1;
      }
      local_68 = local_68 ^ uVar18;
      uStack_64 = uStack_64 ^ uVar19;
      param_2 = param_2 + uVar26;
      bVar8 = (byte)(local_68 >> 0x10);
      bVar9 = (byte)(local_68 >> 8);
      bVar10 = (byte)(local_68 >> 0x18);
      bVar11 = (byte)(uStack_64 >> 0x18);
      bVar4 = (byte)(uStack_64 >> 8);
      bVar5 = (byte)(uStack_64 >> 0x10);
      switch(iVar2 + -1) {
      case 7:
        param_2 = param_2 + -1;
        *param_2 = bVar11;
      case 6:
        param_2 = param_2 + -1;
        *param_2 = bVar5;
      case 5:
        param_2 = param_2 + -1;
        *param_2 = bVar4;
      case 4:
        param_2 = param_2 + -1;
        *param_2 = (byte)uStack_64;
      case 3:
        param_2 = param_2 + -1;
        *param_2 = bVar10;
      case 2:
        param_2 = param_2 + -1;
        *param_2 = bVar8;
      case 1:
        param_2 = param_2 + -1;
        *param_2 = bVar9;
      case 0:
        param_2 = param_2 + -1;
        *param_2 = (byte)local_68;
      }
      param_4 = param_4 - uVar26;
      param_1 = param_1 + uVar26;
      param_2 = param_2 + uVar26;
      uVar19 = uVar27;
      if (param_3 != 0x20) {
        if (param_3 == 0x40) {
          uVar19 = local_68;
          local_68 = uStack_64;
        }
        else {
          local_70[0] = (byte)local_68;
          local_70[3] = bVar10;
          local_78._0_4_ = uVar29 & 0xffffff00;
          local_78._0_5_ = (uint5)(uint)local_78;
          local_78._0_6_ = CONCAT15((char)(uVar27 >> 8),(uint5)local_78);
          local_6b = bVar4;
          local_78._0_7_ = CONCAT16((char)(uVar27 >> 0x10),(undefined6)local_78);
          local_6a = bVar5;
          uVar14 = (uint7)local_78 >> 0x28;
          local_78._0_4_ = (uint)CONCAT71((uint7)local_78 >> 8,(char)uVar29);
          local_78._0_5_ = CONCAT14((char)uVar27,(uint)local_78);
          uVar6 = (undefined1)(uVar27 >> 0x18);
          local_78 = CONCAT17(uVar6,CONCAT25((short)uVar14,(uint5)local_78));
          uVar15 = local_78;
          local_70[1] = bVar9;
          local_70[2] = bVar8;
          local_6c = (byte)uStack_64;
          local_69 = bVar11;
          if (uVar12 == 0) {
            uVar28 = *(ulong *)(local_70 + (long)iVar3 + -8);
            uVar29 = (uint)(uVar28 >> 8);
            uVar27 = (uint)(uVar28 >> 0x10);
            uVar19 = (uint)(uVar28 >> 0x18);
            uVar18 = (uint)(uVar28 >> 0x20);
            uVar20 = uVar18 >> 8;
            uVar21 = (uint)(ushort)(uVar28 >> 0x30);
            uVar22 = (uint)(byte)(uVar28 >> 0x38);
            local_78 = uVar28;
          }
          else {
            uVar29 = (uint)(local_70[(long)iVar3 + -7] >> (ulong)(uVar13 & 0x1f)) |
                     (uint)local_70[(long)iVar3 + -8] << (ulong)(uVar12 & 0x1f);
            uVar28 = (ulong)uVar29;
            uVar7 = (undefined1)uVar29;
            local_78 = CONCAT71(local_78._1_7_,uVar7);
            uVar29 = (uint)(local_70[(long)iVar3 + -6] >> (ulong)(uVar13 & 0x1f)) |
                     (uint)local_70[(long)iVar3 + -7] << (ulong)(uVar12 & 0x1f);
            local_78._2_6_ = SUB86(uVar15,2);
            local_78._0_2_ = CONCAT11((char)uVar29,uVar7);
            uVar27 = (uint)(local_70[(long)iVar3 + -5] >> (ulong)(uVar13 & 0x1f)) |
                     (uint)local_70[(long)iVar3 + -6] << (ulong)(uVar12 & 0x1f);
            local_78._3_5_ = SUB85(uVar15,3);
            local_78._0_3_ = CONCAT12((char)uVar27,(undefined2)local_78);
            uVar19 = (uint)(local_70[(long)iVar3 + -4] >> (ulong)(uVar13 & 0x1f)) |
                     (uint)local_70[(long)iVar3 + -5] << (ulong)(uVar12 & 0x1f);
            local_78._4_4_ = SUB84(uVar15,4);
            local_78._0_4_ = CONCAT13((char)uVar19,(undefined3)local_78);
            uVar18 = (uint)(local_70[(long)iVar3 + -3] >> (ulong)(uVar13 & 0x1f)) |
                     (uint)local_70[(long)iVar3 + -4] << (ulong)(uVar12 & 0x1f);
            local_78._5_3_ = SUB83(uVar15,5);
            local_78._0_5_ = CONCAT14((char)uVar18,(uint)local_78);
            uVar20 = (uint)(local_70[(long)iVar3 + -2] >> (ulong)(uVar13 & 0x1f)) |
                     (uint)local_70[(long)iVar3 + -3] << (ulong)(uVar12 & 0x1f);
            local_78._6_2_ = SUB82(uVar15,6);
            local_78._0_6_ = CONCAT15((char)uVar20,(uint5)local_78);
            uVar21 = (uint)(local_70[(long)iVar3 + -1] >> (ulong)(uVar13 & 0x1f)) |
                     (uint)local_70[(long)iVar3 + -2] << (ulong)(uVar12 & 0x1f);
            local_78._0_7_ = CONCAT16((char)uVar21,(undefined6)local_78);
            local_78 = CONCAT17(uVar6,(uint7)local_78);
            uVar22 = (uint)(local_70[iVar3] >> (ulong)(uVar13 & 0x1f)) |
                     (uint)local_70[(long)iVar3 + -1] << (ulong)(uVar12 & 0x1f);
            local_78 = CONCAT17((char)uVar22,(uint7)local_78);
          }
          uVar19 = (uint)uVar28 & 0xff | (uVar29 & 0xff) << 8 | (uVar27 & 0xff) << 0x10 |
                   uVar19 << 0x18;
          local_68 = uVar18 & 0xff | (uVar20 & 0xff) << 8 | (uVar21 & 0xff) << 0x10 | uVar22 << 0x18
          ;
        }
      }
      uVar27 = local_68;
      uVar29 = uVar19;
    } while (uVar26 <= param_4);
  }
  *(char *)((long)param_6 + 1) = (char)(uVar29 >> 8);
  *(char *)((long)param_6 + 2) = (char)(uVar29 >> 0x10);
  *(char *)((long)param_6 + 3) = (char)(uVar29 >> 0x18);
  *(char *)(param_6 + 1) = (char)uVar27;
  *(char *)((long)param_6 + 5) = (char)(uVar27 >> 8);
  *(char *)param_6 = (char)uVar29;
  *(char *)((long)param_6 + 6) = (char)(uVar27 >> 0x10);
  *(char *)((long)param_6 + 7) = (char)(uVar27 >> 0x18);
  return;
}


