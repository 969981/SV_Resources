/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00438770; name: FUN_00438770
 */


void FUN_00438770(byte *param_1,byte *param_2,int param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,uint *param_8,int param_9)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar8;
  byte bVar7;
  byte bVar6;
  byte bVar5;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  byte local_78 [4];
  byte local_74;
  byte local_73;
  byte local_72;
  byte local_71;
  byte local_70;
  byte local_6f;
  byte local_6e;
  byte local_6d;
  byte local_6c;
  byte local_6b;
  byte local_6a;
  byte local_69;
  uint local_68;
  uint uStack_64;
  
  if (0x40 < param_3) {
    return;
  }
  uVar21 = *param_8;
  uVar15 = param_8[1];
  uVar3 = param_3 + 7U >> 3;
  uVar22 = (ulong)uVar3;
  if (param_9 == 0) {
    if (uVar22 <= param_4) {
      iVar2 = param_3 + 7;
      if (-1 < param_3) {
        iVar2 = param_3;
      }
      uVar9 = param_3 % 8;
      uVar10 = 8 - uVar9;
      sVar1 = 8;
      if (uVar9 != 0) {
        sVar1 = 9;
      }
      uVar14 = uVar21;
      do {
        _local_68 = CONCAT44(uVar15,uVar14);
        FUN_004365c0(&local_68,param_5,param_6,param_7);
        uVar13 = 0;
        param_1 = param_1 + uVar22;
        uVar20 = 0;
        switch(uVar3) {
        case 8:
          param_1 = param_1 + -1;
          uVar13 = (uint)*param_1 << 0x18;
        case 7:
          param_1 = param_1 + -1;
          uVar13 = uVar13 | (uint)*param_1 << 0x10;
        case 6:
          param_1 = param_1 + -1;
          uVar13 = uVar13 | (uint)*param_1 << 8;
        case 5:
          param_1 = param_1 + -1;
          uVar13 = uVar13 | *param_1;
        case 4:
          uVar20 = uVar13;
          param_1 = param_1 + -1;
          uVar13 = (uint)*param_1 << 0x18;
        case 3:
          param_1 = param_1 + -1;
          uVar13 = uVar13 | (uint)*param_1 << 0x10;
        case 2:
          param_1 = param_1 + -1;
          uVar13 = uVar13 | (uint)*param_1 << 8;
        case 1:
          param_1 = param_1 + -1;
          uVar13 = uVar13 | *param_1;
          break;
        default:
          uVar20 = 0;
        }
        if (param_3 == 0x20) {
          uVar21 = uVar15;
          uVar12 = uVar13;
        }
        else {
          uVar21 = uVar13;
          uVar12 = uVar20;
          if (param_3 != 0x40) {
            local_78[1] = (byte)(uVar14 >> 8);
            local_78[2] = (byte)(uVar14 >> 0x10);
            local_78[3] = (byte)(uVar14 >> 0x18);
            local_73 = (byte)(uVar15 >> 8);
            local_72 = (byte)(uVar15 >> 0x10);
            local_71 = (byte)(uVar15 >> 0x18);
            local_6f = (byte)(uVar13 >> 8);
            local_6e = (byte)(uVar13 >> 0x10);
            local_74 = (byte)uVar15;
            local_70 = (byte)uVar13;
            local_6c = (byte)uVar20;
            local_6d = (byte)(uVar13 >> 0x18);
            local_6b = (byte)(uVar20 >> 8);
            local_6a = (byte)(uVar20 >> 0x10);
            local_78[0] = (byte)uVar14;
            local_69 = (byte)(uVar20 >> 0x18);
            memmove(local_78,local_78 + (iVar2 >> 3),sVar1);
            uVar21 = (uint)local_78[0];
            if (uVar9 == 0) {
              uVar12 = (uint)local_78[1];
              uVar15 = (uint)local_78[2];
              uVar16 = (uint)local_78[3];
              uVar14 = (uint)local_74;
              uVar17 = (uint)local_73;
              uVar18 = (uint)local_72;
              uVar19 = (uint)local_71;
            }
            else {
              uVar21 = (uint)(local_78[1] >> (ulong)(uVar10 & 0x1f)) |
                       (uint)local_78[0] << (ulong)(uVar9 & 0x1f);
              bVar11 = local_78[2] >> (ulong)(uVar10 & 0x1f);
              local_78[0] = (byte)uVar21;
              uVar15 = (uint)(local_78[3] >> (ulong)(uVar10 & 0x1f)) |
                       (uint)local_78[2] << (ulong)(uVar9 & 0x1f);
              local_78[2] = (byte)uVar15;
              uVar14 = (uint)(local_73 >> (ulong)(uVar10 & 0x1f)) |
                       (uint)local_74 << (ulong)(uVar9 & 0x1f);
              uVar12 = (uint)bVar11 | (uint)local_78[1] << (ulong)(uVar9 & 0x1f);
              uVar16 = (uint)(local_74 >> (ulong)(uVar10 & 0x1f)) |
                       (uint)local_78[3] << (ulong)(uVar9 & 0x1f);
              local_78[3] = (byte)uVar16;
              uVar17 = (uint)(local_72 >> (ulong)(uVar10 & 0x1f)) |
                       (uint)local_73 << (ulong)(uVar9 & 0x1f);
              uVar18 = (uint)(local_71 >> (ulong)(uVar10 & 0x1f)) |
                       (uint)local_72 << (ulong)(uVar9 & 0x1f);
              uVar19 = (uint)(local_70 >> (ulong)(uVar10 & 0x1f)) |
                       (uint)local_71 << (ulong)(uVar9 & 0x1f);
              local_78[1] = (byte)uVar12;
              local_74 = (byte)uVar14;
              local_73 = (byte)uVar17;
              local_72 = (byte)uVar18;
              local_71 = (byte)uVar19;
            }
            uVar21 = uVar21 & 0xff | (uVar12 & 0xff) << 8 | (uVar15 & 0xff) << 0x10 | uVar16 << 0x18
            ;
            uVar12 = uVar14 & 0xff | (uVar17 & 0xff) << 8 | (uVar18 & 0xff) << 0x10 | uVar19 << 0x18
            ;
          }
        }
        uVar15 = uVar12;
        param_4 = param_4 - uVar22;
        param_1 = param_1 + uVar22;
        param_2 = param_2 + uVar22;
        if (uVar22 - 1 < 8) {
          local_68 = local_68 ^ uVar13;
          uStack_64 = uStack_64 ^ uVar20;
          switch(uVar3) {
          case 8:
            param_2 = param_2 + -1;
            *param_2 = (byte)(uStack_64 >> 0x18);
          case 7:
            param_2 = param_2 + -1;
            *param_2 = (byte)(uStack_64 >> 0x10);
          case 6:
            param_2 = param_2 + -1;
            *param_2 = (byte)(uStack_64 >> 8);
          case 5:
            param_2 = param_2 + -1;
            *param_2 = (byte)uStack_64;
          case 4:
            param_2 = param_2 + -1;
            *param_2 = (byte)(local_68 >> 0x18);
          case 3:
            param_2 = param_2 + -1;
            *param_2 = (byte)(local_68 >> 0x10);
          case 2:
            param_2 = param_2 + -1;
            *param_2 = (byte)(local_68 >> 8);
          case 1:
            param_2 = param_2 + -1;
            *param_2 = (byte)local_68;
          }
        }
        param_2 = param_2 + uVar22;
        uVar14 = uVar21;
      } while (uVar22 <= param_4);
    }
  }
  else if (uVar22 <= param_4) {
    iVar2 = param_3 + 7;
    if (-1 < param_3) {
      iVar2 = param_3;
    }
    uVar10 = param_3 % 8;
    sVar1 = 8;
    if (uVar10 != 0) {
      sVar1 = 9;
    }
    uVar9 = 8 - uVar10;
    do {
      local_68 = uVar21;
      uStack_64 = uVar15;
      FUN_004365c0(&local_68,param_5,param_6,param_7);
      uVar14 = 0;
      param_1 = param_1 + uVar22;
      uVar13 = 0;
      switch(uVar3) {
      case 8:
        param_1 = param_1 + -1;
        uVar14 = (uint)*param_1 << 0x18;
      case 7:
        param_1 = param_1 + -1;
        uVar14 = uVar14 | (uint)*param_1 << 0x10;
      case 6:
        param_1 = param_1 + -1;
        uVar14 = uVar14 | (uint)*param_1 << 8;
      case 5:
        param_1 = param_1 + -1;
        uVar14 = uVar14 | *param_1;
      case 4:
        uVar13 = uVar14;
        param_1 = param_1 + -1;
        uVar14 = (uint)*param_1 << 0x18;
      case 3:
        param_1 = param_1 + -1;
        uVar14 = uVar14 | (uint)*param_1 << 0x10;
      case 2:
        param_1 = param_1 + -1;
        uVar14 = uVar14 | (uint)*param_1 << 8;
      case 1:
        param_1 = param_1 + -1;
        uVar14 = uVar14 | *param_1;
        break;
      default:
        uVar13 = 0;
      }
      uVar14 = local_68 ^ uVar14;
      uVar13 = uStack_64 ^ uVar13;
      param_2 = param_2 + uVar22;
      bVar5 = (byte)(uVar14 >> 0x10);
      bVar6 = (byte)(uVar14 >> 8);
      bVar7 = (byte)(uVar14 >> 0x18);
      bVar8 = (byte)(uVar13 >> 0x18);
      bVar4 = (byte)(uVar13 >> 8);
      bVar11 = (byte)(uVar13 >> 0x10);
      switch(uVar3) {
      case 8:
        param_2 = param_2 + -1;
        *param_2 = bVar8;
      case 7:
        param_2 = param_2 + -1;
        *param_2 = bVar11;
      case 6:
        param_2 = param_2 + -1;
        *param_2 = bVar4;
      case 5:
        param_2 = param_2 + -1;
        *param_2 = (byte)uVar13;
      case 4:
        param_2 = param_2 + -1;
        *param_2 = bVar7;
      case 3:
        param_2 = param_2 + -1;
        *param_2 = bVar5;
      case 2:
        param_2 = param_2 + -1;
        *param_2 = bVar6;
      case 1:
        param_2 = param_2 + -1;
        *param_2 = (byte)uVar14;
      }
      param_1 = param_1 + uVar22;
      param_4 = param_4 - uVar22;
      param_2 = param_2 + uVar22;
      uVar20 = uVar15;
      if (param_3 != 0x20) {
        if (param_3 == 0x40) {
          uVar20 = uVar14;
          uVar14 = uVar13;
        }
        else {
          local_78[1] = (byte)(uVar21 >> 8);
          local_78[2] = (byte)(uVar21 >> 0x10);
          local_78[3] = (byte)(uVar21 >> 0x18);
          local_73 = (byte)(uVar15 >> 8);
          local_72 = (byte)(uVar15 >> 0x10);
          local_78[0] = (byte)uVar21;
          local_74 = (byte)uVar15;
          local_71 = (byte)(uVar15 >> 0x18);
          local_70 = (byte)uVar14;
          local_6f = bVar6;
          local_6e = bVar5;
          local_6d = bVar7;
          local_6c = (byte)uVar13;
          local_6b = bVar4;
          local_6a = bVar11;
          local_69 = bVar8;
          memmove(local_78,local_78 + (iVar2 >> 3),sVar1);
          uVar21 = (uint)local_78[0];
          if (uVar10 == 0) {
            uVar15 = (uint)local_78[1];
            uVar14 = (uint)local_78[2];
            uVar13 = (uint)local_78[3];
            uVar12 = (uint)local_74;
            uVar16 = (uint)local_73;
            uVar17 = (uint)local_72;
            uVar18 = (uint)local_71;
          }
          else {
            uVar21 = (uint)(local_78[1] >> (ulong)(uVar9 & 0x1f)) |
                     (uint)local_78[0] << (ulong)(uVar10 & 0x1f);
            local_78[0] = (byte)uVar21;
            uVar15 = (uint)(local_78[2] >> (ulong)(uVar9 & 0x1f)) |
                     (uint)local_78[1] << (ulong)(uVar10 & 0x1f);
            uVar14 = (uint)(local_78[3] >> (ulong)(uVar9 & 0x1f)) |
                     (uint)local_78[2] << (ulong)(uVar10 & 0x1f);
            uVar13 = (uint)(local_74 >> (ulong)(uVar9 & 0x1f)) |
                     (uint)local_78[3] << (ulong)(uVar10 & 0x1f);
            local_78[1] = (byte)uVar15;
            local_78[2] = (byte)uVar14;
            local_78[3] = (byte)uVar13;
            uVar12 = (uint)(local_73 >> (ulong)(uVar9 & 0x1f)) |
                     (uint)local_74 << (ulong)(uVar10 & 0x1f);
            local_74 = (byte)uVar12;
            uVar16 = (uint)(local_72 >> (ulong)(uVar9 & 0x1f)) |
                     (uint)local_73 << (ulong)(uVar10 & 0x1f);
            local_73 = (byte)uVar16;
            uVar17 = (uint)(local_71 >> (ulong)(uVar9 & 0x1f)) |
                     (uint)local_72 << (ulong)(uVar10 & 0x1f);
            local_72 = (byte)uVar17;
            uVar18 = (uint)(local_70 >> (ulong)(uVar9 & 0x1f)) |
                     (uint)local_71 << (ulong)(uVar10 & 0x1f);
            local_71 = (byte)uVar18;
          }
          uVar20 = uVar21 & 0xff | (uVar15 & 0xff) << 8 | (uVar14 & 0xff) << 0x10 | uVar13 << 0x18;
          uVar14 = uVar12 & 0xff | (uVar16 & 0xff) << 8 | (uVar17 & 0xff) << 0x10 | uVar18 << 0x18;
        }
      }
      uVar15 = uVar14;
      uVar21 = uVar20;
    } while (uVar22 <= param_4);
  }
  *(char *)((long)param_8 + 1) = (char)(uVar21 >> 8);
  *(char *)((long)param_8 + 2) = (char)(uVar21 >> 0x10);
  *(char *)((long)param_8 + 3) = (char)(uVar21 >> 0x18);
  *(char *)(param_8 + 1) = (char)uVar15;
  *(char *)((long)param_8 + 5) = (char)(uVar15 >> 8);
  *(char *)param_8 = (char)uVar21;
  *(char *)((long)param_8 + 6) = (char)(uVar15 >> 0x10);
  *(char *)((long)param_8 + 7) = (char)(uVar15 >> 0x18);
  return;
}


