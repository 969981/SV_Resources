/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c1cbcc; name: FUN_00c1cbcc
 */


byte * FUN_00c1cbcc(ulong *param_1,undefined8 param_2,uint param_3,byte *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  long *plVar19;
  undefined4 local_70 [2];
  char *local_68;
  undefined4 local_60;
  char local_58 [24];
  
  iVar7 = (int)param_2;
  if (*(char *)((long)param_1 + 9) != '\0') {
    if (*(char *)((long)param_1 + 0xb) != '\0') {
      if (*(uint *)((long)param_1 + 0xc) == 0) {
        return param_4;
      }
      uVar6 = iVar7 << 3 | 2;
      if (0x7f < uVar6) {
        pbVar8 = param_4;
        uVar5 = uVar6;
        do {
          uVar6 = uVar5 >> 7;
          uVar16 = uVar5 >> 0xe;
          param_4 = pbVar8 + 1;
          *pbVar8 = (byte)uVar5 | 0x80;
          pbVar8 = param_4;
          uVar5 = uVar6;
        } while (uVar16 != 0);
      }
      pbVar8 = param_4 + 1;
      *param_4 = (byte)uVar6;
      uVar6 = *(uint *)((long)param_1 + 0xc);
      if ((int)uVar6 < 0) {
        if ((ulong)(long)(int)uVar6 >> 0x38 == 0) {
          lVar12 = 8;
        }
        else {
          param_4[9] = (byte)((ulong)(long)(int)uVar6 >> 0x38) | 0x80;
          lVar12 = 10;
          param_4[10] = 0x81;
        }
        uVar5 = (int)uVar6 >> 0x1f;
        param_4[8] = (byte)(uVar5 >> 0x11) | 0x80;
        param_4[6] = (byte)(uVar5 >> 3) | 0x80;
        param_4[5] = (byte)((int)uVar6 >> 0x1c) | 0x80;
        param_4[4] = (byte)(uVar6 >> 0x15) | 0x80;
        param_4[3] = (byte)(uVar6 >> 0xe) | 0x80;
        param_4[7] = (byte)(uVar5 >> 10) | 0x80;
        param_4[1] = (byte)uVar6 | 0x80;
        uVar5 = (int)lVar12 - 1;
        param_4[2] = (byte)(uVar6 >> 7) | 0x80;
        pbVar8[uVar5] = pbVar8[uVar5] & 0x7f;
        pbVar9 = pbVar8 + lVar12;
      }
      else {
        if (0x7f < uVar6) {
          pbVar9 = pbVar8;
          uVar5 = uVar6;
          do {
            uVar6 = uVar5 >> 7;
            uVar16 = uVar5 >> 0xe;
            pbVar8 = pbVar9 + 1;
            *pbVar9 = (byte)uVar5 | 0x80;
            pbVar9 = pbVar8;
            uVar5 = uVar6;
          } while (uVar16 != 0);
        }
        pbVar9 = pbVar8 + 1;
        *pbVar8 = (byte)uVar6;
      }
      switch((char)param_1[1]) {
      case '\x01':
        piVar13 = (int *)*param_1;
        if (*piVar13 < 1) {
          return pbVar9;
        }
        lVar12 = 0;
        do {
          lVar14 = lVar12 * 8;
          lVar12 = lVar12 + 1;
          pbVar8 = pbVar9 + 8;
          *(undefined8 *)pbVar9 = *(undefined8 *)(*(long *)(piVar13 + 2) + lVar14 + 8);
          piVar13 = (int *)*param_1;
          pbVar9 = pbVar8;
        } while (lVar12 < *piVar13);
        return pbVar8;
      case '\x02':
        piVar13 = (int *)*param_1;
        if (*piVar13 < 1) {
          return pbVar9;
        }
        lVar12 = 0;
        do {
          lVar14 = lVar12 * 4;
          lVar12 = lVar12 + 1;
          pbVar8 = pbVar9 + 4;
          *(undefined4 *)pbVar9 = *(undefined4 *)(*(long *)(piVar13 + 2) + lVar14 + 8);
          piVar13 = (int *)*param_1;
          pbVar9 = pbVar8;
        } while (lVar12 < *piVar13);
        return pbVar8;
      case '\x03':
        piVar13 = (int *)*param_1;
        if (*piVar13 < 1) {
          return pbVar9;
        }
        lVar12 = 0;
        break;
      case '\x04':
        piVar13 = (int *)*param_1;
        if (*piVar13 < 1) {
          return pbVar9;
        }
        lVar12 = 0;
        do {
          uVar15 = *(ulong *)(*(long *)(piVar13 + 2) + lVar12 * 8 + 8);
          bVar2 = (byte)(uVar15 >> 0x38);
          uVar5 = (uint)uVar15;
          uVar16 = (uint)(uVar15 >> 0x1c);
          uVar6 = (uint)(uVar15 >> 0x20);
          if (bVar2 == 0) {
            if (uVar16 != 0) {
              if (uVar16 >> 0xe != 0) {
                if (0x1fffff < uVar16) {
                  lVar14 = 8;
                  goto LAB_00c1d0a4;
                }
                lVar14 = 7;
                goto LAB_00c1d0b0;
              }
              lVar14 = 5;
              if (0x7f < uVar16) {
                lVar14 = 6;
                goto LAB_00c1d0bc;
              }
              goto LAB_00c1d0c8;
            }
            if ((uVar15 >> 0xe & 0x3ffff) != 0) {
              if (0x1fffff < uVar5) {
                lVar14 = 4;
                goto LAB_00c1d0d0;
              }
              lVar14 = 3;
              goto LAB_00c1d0dc;
            }
            if (0x7f < uVar5) {
              lVar14 = 2;
              goto LAB_00c1d0e4;
            }
            lVar14 = 1;
          }
          else {
            lVar14 = 9;
            if (0x7f < bVar2) {
              lVar14 = 10;
              pbVar9[9] = 0x81;
            }
            pbVar9[8] = bVar2 | 0x80;
LAB_00c1d0a4:
            pbVar9[7] = (byte)(uVar6 >> 0x11) | 0x80;
LAB_00c1d0b0:
            pbVar9[6] = (byte)(uVar6 >> 10) | 0x80;
LAB_00c1d0bc:
            pbVar9[5] = (byte)(uVar6 >> 3) | 0x80;
LAB_00c1d0c8:
            pbVar9[4] = (byte)(uVar15 >> 0x1c) | 0x80;
LAB_00c1d0d0:
            pbVar9[3] = (byte)(uVar5 >> 0x15) | 0x80;
LAB_00c1d0dc:
            pbVar9[2] = (byte)(uVar15 >> 0xe) | 0x80;
LAB_00c1d0e4:
            pbVar9[1] = (byte)(uVar5 >> 7) | 0x80;
          }
          *pbVar9 = (byte)uVar15 | 0x80;
          uVar6 = (int)lVar14 - 1;
          pbVar9[uVar6] = pbVar9[uVar6] & 0x7f;
          piVar13 = (int *)*param_1;
          lVar12 = lVar12 + 1;
          pbVar9 = pbVar9 + lVar14;
          if (*piVar13 <= lVar12) {
            return pbVar9;
          }
        } while( true );
      case '\x05':
        piVar13 = (int *)*param_1;
        if (*piVar13 < 1) {
          return pbVar9;
        }
        lVar12 = 0;
        do {
          uVar6 = *(uint *)(*(long *)(piVar13 + 2) + lVar12 * 4 + 8);
          if ((int)uVar6 < 0) {
            if ((ulong)(long)(int)uVar6 >> 0x38 == 0) {
              lVar14 = 8;
            }
            else {
              pbVar9[8] = (byte)((ulong)(long)(int)uVar6 >> 0x38) | 0x80;
              lVar14 = 10;
              pbVar9[9] = 0x81;
            }
            uVar5 = (int)uVar6 >> 0x1f;
            pbVar9[7] = (byte)(uVar5 >> 0x11) | 0x80;
            pbVar9[5] = (byte)(uVar5 >> 3) | 0x80;
            pbVar9[4] = (byte)((int)uVar6 >> 0x1c) | 0x80;
            pbVar9[3] = (byte)(uVar6 >> 0x15) | 0x80;
            pbVar9[2] = (byte)(uVar6 >> 0xe) | 0x80;
            pbVar9[6] = (byte)(uVar5 >> 10) | 0x80;
            *pbVar9 = (byte)uVar6 | 0x80;
            uVar5 = (int)lVar14 - 1;
            pbVar9[1] = (byte)(uVar6 >> 7) | 0x80;
            pbVar9[uVar5] = pbVar9[uVar5] & 0x7f;
            pbVar8 = pbVar9 + lVar14;
          }
          else {
            if (0x7f < uVar6) {
              pbVar8 = pbVar9;
              uVar5 = uVar6;
              do {
                uVar6 = uVar5 >> 7;
                uVar16 = uVar5 >> 0xe;
                pbVar9 = pbVar8 + 1;
                *pbVar8 = (byte)uVar5 | 0x80;
                pbVar8 = pbVar9;
                uVar5 = uVar6;
              } while (uVar16 != 0);
            }
            pbVar8 = pbVar9 + 1;
            *pbVar9 = (byte)uVar6;
          }
          piVar13 = (int *)*param_1;
          lVar12 = lVar12 + 1;
          pbVar9 = pbVar8;
        } while (lVar12 < *piVar13);
        return pbVar8;
      case '\x06':
        piVar13 = (int *)*param_1;
        if (*piVar13 < 1) {
          return pbVar9;
        }
        lVar12 = 0;
        do {
          lVar14 = lVar12 * 8;
          lVar12 = lVar12 + 1;
          pbVar8 = pbVar9 + 8;
          *(undefined8 *)pbVar9 = *(undefined8 *)(*(long *)(piVar13 + 2) + lVar14 + 8);
          piVar13 = (int *)*param_1;
          pbVar9 = pbVar8;
        } while (lVar12 < *piVar13);
        return pbVar8;
      case '\a':
        piVar13 = (int *)*param_1;
        if (*piVar13 < 1) {
          return pbVar9;
        }
        lVar12 = 0;
        do {
          lVar14 = lVar12 * 4;
          lVar12 = lVar12 + 1;
          pbVar8 = pbVar9 + 4;
          *(undefined4 *)pbVar9 = *(undefined4 *)(*(long *)(piVar13 + 2) + lVar14 + 8);
          piVar13 = (int *)*param_1;
          pbVar9 = pbVar8;
        } while (lVar12 < *piVar13);
        return pbVar8;
      case '\b':
        piVar13 = (int *)*param_1;
        if (*piVar13 < 1) {
          return pbVar9;
        }
        lVar12 = 0;
        do {
          pbVar9[lVar12] = *(byte *)(*(long *)(piVar13 + 2) + lVar12 + 8);
          piVar13 = (int *)*param_1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *piVar13);
        return pbVar9 + lVar12;
      case '\t':
      case '\n':
      case '\v':
      case '\f':
        local_70[0] = 3;
        local_58[0x10] = '\0';
        local_58[0x11] = '\0';
        local_58[0x12] = '\0';
        local_58[0x13] = '\0';
        local_58[0x14] = '\0';
        local_58[0x15] = '\0';
        local_58[0x16] = '\0';
        local_58[0x17] = '\0';
        local_60 = 0x1e7;
        local_68 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/extension_set_heavy.cc"
        ;
        local_58[0] = '\0';
        local_58[1] = '\0';
        local_58[2] = '\0';
        local_58[3] = '\0';
        local_58[4] = '\0';
        local_58[5] = '\0';
        local_58[6] = '\0';
        local_58[7] = '\0';
        local_58[8] = '\0';
        local_58[9] = '\0';
        local_58[10] = '\0';
        local_58[0xb] = '\0';
        local_58[0xc] = '\0';
        local_58[0xd] = '\0';
        local_58[0xe] = '\0';
        local_58[0xf] = '\0';
        std::string::append(local_58);
        FUN_00bb0e90(local_70);
        FUN_00bb0d74(local_70);
        return pbVar9;
      case '\r':
        piVar13 = (int *)*param_1;
        if (*piVar13 < 1) {
          return pbVar9;
        }
        lVar12 = 0;
        do {
          uVar6 = *(uint *)(*(long *)(piVar13 + 2) + lVar12 * 4 + 8);
          if (0x7f < uVar6) {
            pbVar8 = pbVar9;
            uVar5 = uVar6;
            do {
              uVar6 = uVar5 >> 7;
              uVar16 = uVar5 >> 0xe;
              pbVar9 = pbVar8 + 1;
              *pbVar8 = (byte)uVar5 | 0x80;
              pbVar8 = pbVar9;
              uVar5 = uVar6;
            } while (uVar16 != 0);
          }
          pbVar8 = pbVar9 + 1;
          *pbVar9 = (byte)uVar6;
          piVar13 = (int *)*param_1;
          lVar12 = lVar12 + 1;
          pbVar9 = pbVar8;
        } while (lVar12 < *piVar13);
        return pbVar8;
      case '\x0e':
        piVar13 = (int *)*param_1;
        if (*piVar13 < 1) {
          return pbVar9;
        }
        lVar12 = 0;
        do {
          uVar6 = *(uint *)(*(long *)(piVar13 + 2) + lVar12 * 4 + 8);
          if ((int)uVar6 < 0) {
            if ((ulong)(long)(int)uVar6 >> 0x38 == 0) {
              lVar14 = 8;
            }
            else {
              pbVar9[8] = (byte)((ulong)(long)(int)uVar6 >> 0x38) | 0x80;
              lVar14 = 10;
              pbVar9[9] = 0x81;
            }
            uVar5 = (int)uVar6 >> 0x1f;
            pbVar9[7] = (byte)(uVar5 >> 0x11) | 0x80;
            pbVar9[5] = (byte)(uVar5 >> 3) | 0x80;
            pbVar9[4] = (byte)((int)uVar6 >> 0x1c) | 0x80;
            pbVar9[3] = (byte)(uVar6 >> 0x15) | 0x80;
            pbVar9[2] = (byte)(uVar6 >> 0xe) | 0x80;
            pbVar9[6] = (byte)(uVar5 >> 10) | 0x80;
            *pbVar9 = (byte)uVar6 | 0x80;
            uVar5 = (int)lVar14 - 1;
            pbVar9[1] = (byte)(uVar6 >> 7) | 0x80;
            pbVar9[uVar5] = pbVar9[uVar5] & 0x7f;
            pbVar8 = pbVar9 + lVar14;
          }
          else {
            if (0x7f < uVar6) {
              pbVar8 = pbVar9;
              uVar5 = uVar6;
              do {
                uVar6 = uVar5 >> 7;
                uVar16 = uVar5 >> 0xe;
                pbVar9 = pbVar8 + 1;
                *pbVar8 = (byte)uVar5 | 0x80;
                pbVar8 = pbVar9;
                uVar5 = uVar6;
              } while (uVar16 != 0);
            }
            pbVar8 = pbVar9 + 1;
            *pbVar9 = (byte)uVar6;
          }
          piVar13 = (int *)*param_1;
          lVar12 = lVar12 + 1;
          pbVar9 = pbVar8;
        } while (lVar12 < *piVar13);
        return pbVar8;
      case '\x0f':
        piVar13 = (int *)*param_1;
        if (*piVar13 < 1) {
          return pbVar9;
        }
        lVar12 = 0;
        do {
          lVar14 = lVar12 * 4;
          lVar12 = lVar12 + 1;
          pbVar8 = pbVar9 + 4;
          *(undefined4 *)pbVar9 = *(undefined4 *)(*(long *)(piVar13 + 2) + lVar14 + 8);
          piVar13 = (int *)*param_1;
          pbVar9 = pbVar8;
        } while (lVar12 < *piVar13);
        return pbVar8;
      case '\x10':
        piVar13 = (int *)*param_1;
        if (*piVar13 < 1) {
          return pbVar9;
        }
        lVar12 = 0;
        do {
          lVar14 = lVar12 * 8;
          lVar12 = lVar12 + 1;
          pbVar8 = pbVar9 + 8;
          *(undefined8 *)pbVar9 = *(undefined8 *)(*(long *)(piVar13 + 2) + lVar14 + 8);
          piVar13 = (int *)*param_1;
          pbVar9 = pbVar8;
        } while (lVar12 < *piVar13);
        return pbVar8;
      case '\x11':
        piVar13 = (int *)*param_1;
        if (*piVar13 < 1) {
          return pbVar9;
        }
        lVar12 = 0;
        do {
          iVar7 = *(int *)(*(long *)(piVar13 + 2) + lVar12 * 4 + 8);
          uVar6 = iVar7 << 1 ^ iVar7 >> 0x1f;
          if (0x7f < uVar6) {
            pbVar8 = pbVar9;
            uVar5 = uVar6;
            do {
              uVar6 = uVar5 >> 7;
              uVar16 = uVar5 >> 0xe;
              pbVar9 = pbVar8 + 1;
              *pbVar8 = (byte)uVar5 | 0x80;
              pbVar8 = pbVar9;
              uVar5 = uVar6;
            } while (uVar16 != 0);
          }
          pbVar8 = pbVar9 + 1;
          *pbVar9 = (byte)uVar6;
          piVar13 = (int *)*param_1;
          lVar12 = lVar12 + 1;
          pbVar9 = pbVar8;
        } while (lVar12 < *piVar13);
        return pbVar8;
      case '\x12':
        piVar13 = (int *)*param_1;
        if (*piVar13 < 1) {
          return pbVar9;
        }
        lVar12 = 0;
        do {
          lVar14 = *(long *)(*(long *)(piVar13 + 2) + lVar12 * 8 + 8);
          uVar15 = lVar14 << 1 ^ lVar14 >> 0x3f;
          bVar2 = (byte)(uVar15 >> 0x38);
          uVar5 = (uint)uVar15;
          uVar16 = (uint)(uVar15 >> 0x1c);
          uVar6 = (uint)(uVar15 >> 0x20);
          if (bVar2 == 0) {
            if (uVar16 != 0) {
              if (uVar16 >> 0xe != 0) {
                if (0x1fffff < uVar16) {
                  lVar14 = 8;
                  goto LAB_00c1d5fc;
                }
                lVar14 = 7;
                goto LAB_00c1d608;
              }
              lVar14 = 5;
              if (0x7f < uVar16) {
                lVar14 = 6;
                goto LAB_00c1d614;
              }
              goto LAB_00c1d620;
            }
            if ((uVar15 >> 0xe & 0x3ffff) != 0) {
              if (0x1fffff < uVar5) {
                lVar14 = 4;
                goto LAB_00c1d628;
              }
              lVar14 = 3;
              goto LAB_00c1d634;
            }
            if (0x7f < uVar5) {
              lVar14 = 2;
              goto LAB_00c1d63c;
            }
            lVar14 = 1;
          }
          else {
            lVar14 = 9;
            if (0x7f < bVar2) {
              lVar14 = 10;
              pbVar9[9] = 0x81;
            }
            pbVar9[8] = bVar2 | 0x80;
LAB_00c1d5fc:
            pbVar9[7] = (byte)(uVar6 >> 0x11) | 0x80;
LAB_00c1d608:
            pbVar9[6] = (byte)(uVar6 >> 10) | 0x80;
LAB_00c1d614:
            pbVar9[5] = (byte)(uVar6 >> 3) | 0x80;
LAB_00c1d620:
            pbVar9[4] = (byte)(uVar15 >> 0x1c) | 0x80;
LAB_00c1d628:
            pbVar9[3] = (byte)(uVar5 >> 0x15) | 0x80;
LAB_00c1d634:
            pbVar9[2] = (byte)(uVar15 >> 0xe) | 0x80;
LAB_00c1d63c:
            pbVar9[1] = (byte)(uVar5 >> 7) | 0x80;
          }
          *pbVar9 = (byte)uVar15 | 0x80;
          uVar6 = (int)lVar14 - 1;
          pbVar9[uVar6] = pbVar9[uVar6] & 0x7f;
          piVar13 = (int *)*param_1;
          lVar12 = lVar12 + 1;
          pbVar9 = pbVar9 + lVar14;
          if (*piVar13 <= lVar12) {
            return pbVar9;
          }
        } while( true );
      default:
        return pbVar9;
      }
      do {
        uVar15 = *(ulong *)(*(long *)(piVar13 + 2) + lVar12 * 8 + 8);
        bVar2 = (byte)(uVar15 >> 0x38);
        uVar5 = (uint)uVar15;
        uVar16 = (uint)(uVar15 >> 0x1c);
        uVar6 = (uint)(uVar15 >> 0x20);
        if (bVar2 == 0) {
          if (uVar16 != 0) {
            if (uVar16 >> 0xe != 0) {
              if (0x1fffff < uVar16) {
                lVar14 = 8;
                goto LAB_00c1cf5c;
              }
              lVar14 = 7;
              goto LAB_00c1cf68;
            }
            lVar14 = 5;
            if (0x7f < uVar16) {
              lVar14 = 6;
              goto LAB_00c1cf74;
            }
            goto LAB_00c1cf80;
          }
          if ((uVar15 >> 0xe & 0x3ffff) != 0) {
            if (0x1fffff < uVar5) {
              lVar14 = 4;
              goto LAB_00c1cf88;
            }
            lVar14 = 3;
            goto LAB_00c1cf94;
          }
          if (0x7f < uVar5) {
            lVar14 = 2;
            goto LAB_00c1cf9c;
          }
          lVar14 = 1;
        }
        else {
          lVar14 = 9;
          if (0x7f < bVar2) {
            lVar14 = 10;
            pbVar9[9] = 0x81;
          }
          pbVar9[8] = bVar2 | 0x80;
LAB_00c1cf5c:
          pbVar9[7] = (byte)(uVar6 >> 0x11) | 0x80;
LAB_00c1cf68:
          pbVar9[6] = (byte)(uVar6 >> 10) | 0x80;
LAB_00c1cf74:
          pbVar9[5] = (byte)(uVar6 >> 3) | 0x80;
LAB_00c1cf80:
          pbVar9[4] = (byte)(uVar15 >> 0x1c) | 0x80;
LAB_00c1cf88:
          pbVar9[3] = (byte)(uVar5 >> 0x15) | 0x80;
LAB_00c1cf94:
          pbVar9[2] = (byte)(uVar15 >> 0xe) | 0x80;
LAB_00c1cf9c:
          pbVar9[1] = (byte)(uVar5 >> 7) | 0x80;
        }
        *pbVar9 = (byte)uVar15 | 0x80;
        uVar6 = (int)lVar14 - 1;
        pbVar9[uVar6] = pbVar9[uVar6] & 0x7f;
        piVar13 = (int *)*param_1;
        lVar12 = lVar12 + 1;
        pbVar9 = pbVar9 + lVar14;
        if (*piVar13 <= lVar12) {
          return pbVar9;
        }
      } while( true );
    }
    switch((char)param_1[1]) {
    case '\x01':
      piVar13 = (int *)*param_1;
      if (*piVar13 < 1) {
        return param_4;
      }
      uVar6 = iVar7 << 3 | 1;
      if (uVar6 < 0x80) {
        lVar12 = 0;
        do {
          lVar14 = lVar12 * 8;
          lVar12 = lVar12 + 1;
          uVar11 = *(undefined8 *)(*(long *)(piVar13 + 2) + lVar14 + 8);
          *param_4 = (byte)uVar6;
          *(undefined8 *)(param_4 + 1) = uVar11;
          piVar13 = (int *)*param_1;
          param_4 = param_4 + 9;
        } while (lVar12 < *piVar13);
        return param_4;
      }
      lVar12 = 0;
      do {
        uVar11 = *(undefined8 *)(*(long *)(piVar13 + 2) + lVar12 * 8 + 8);
        param_4 = param_4 + 9;
        uVar5 = uVar6;
        do {
          pbVar8 = param_4;
          uVar16 = uVar5 >> 7;
          pbVar8[-9] = (byte)uVar5 | 0x80;
          param_4 = pbVar8 + 1;
          uVar17 = uVar5 >> 0xe;
          uVar5 = uVar16;
        } while (uVar17 != 0);
        pbVar8[-8] = (byte)uVar16;
        lVar12 = lVar12 + 1;
        *(undefined8 *)(pbVar8 + -7) = uVar11;
        piVar13 = (int *)*param_1;
      } while (lVar12 < *piVar13);
      return param_4;
    case '\x02':
      piVar13 = (int *)*param_1;
      if (*piVar13 < 1) {
        return param_4;
      }
      uVar6 = iVar7 << 3 | 5;
      if (uVar6 < 0x80) {
        lVar12 = 0;
        do {
          lVar14 = lVar12 * 4;
          lVar12 = lVar12 + 1;
          uVar1 = *(undefined4 *)(*(long *)(piVar13 + 2) + lVar14 + 8);
          *param_4 = (byte)uVar6;
          *(undefined4 *)(param_4 + 1) = uVar1;
          piVar13 = (int *)*param_1;
          param_4 = param_4 + 5;
        } while (lVar12 < *piVar13);
        return param_4;
      }
      lVar12 = 0;
      do {
        uVar1 = *(undefined4 *)(*(long *)(piVar13 + 2) + lVar12 * 4 + 8);
        param_4 = param_4 + 5;
        uVar5 = uVar6;
        do {
          pbVar8 = param_4;
          uVar16 = uVar5 >> 7;
          pbVar8[-5] = (byte)uVar5 | 0x80;
          param_4 = pbVar8 + 1;
          uVar17 = uVar5 >> 0xe;
          uVar5 = uVar16;
        } while (uVar17 != 0);
        pbVar8[-4] = (byte)uVar16;
        lVar12 = lVar12 + 1;
        *(undefined4 *)(pbVar8 + -3) = uVar1;
        piVar13 = (int *)*param_1;
      } while (lVar12 < *piVar13);
      return param_4;
    case '\x03':
      piVar13 = (int *)*param_1;
      if (*piVar13 < 1) {
        return param_4;
      }
      uVar6 = iVar7 * 8;
      if (uVar6 < 0x80) {
        lVar12 = 0;
        do {
          uVar15 = *(ulong *)(*(long *)(piVar13 + 2) + lVar12 * 8 + 8);
          pbVar8 = param_4 + 1;
          *param_4 = (byte)uVar6;
          bVar2 = (byte)(uVar15 >> 0x38);
          uVar16 = (uint)uVar15;
          uVar17 = (uint)(uVar15 >> 0x1c);
          uVar5 = (uint)(uVar15 >> 0x20);
          if (bVar2 == 0) {
            if (uVar17 != 0) {
              if (uVar17 >> 0xe != 0) {
                if (0x1fffff < uVar17) {
                  lVar14 = 8;
                  goto LAB_00c1ecf4;
                }
                lVar14 = 7;
                goto LAB_00c1ed00;
              }
              lVar14 = 5;
              if (0x7f < uVar17) {
                lVar14 = 6;
                goto LAB_00c1ed0c;
              }
              goto LAB_00c1ed18;
            }
            if ((uVar15 >> 0xe & 0x3ffff) != 0) {
              if (0x1fffff < uVar16) {
                lVar14 = 4;
                goto LAB_00c1ed20;
              }
              lVar14 = 3;
              goto LAB_00c1ed2c;
            }
            if (0x7f < uVar16) {
              lVar14 = 2;
              goto LAB_00c1ed34;
            }
            lVar14 = 1;
          }
          else {
            lVar14 = 9;
            if (0x7f < bVar2) {
              lVar14 = 10;
              param_4[10] = 0x81;
            }
            param_4[9] = bVar2 | 0x80;
LAB_00c1ecf4:
            param_4[8] = (byte)(uVar5 >> 0x11) | 0x80;
LAB_00c1ed00:
            param_4[7] = (byte)(uVar5 >> 10) | 0x80;
LAB_00c1ed0c:
            param_4[6] = (byte)(uVar5 >> 3) | 0x80;
LAB_00c1ed18:
            param_4[5] = (byte)(uVar15 >> 0x1c) | 0x80;
LAB_00c1ed20:
            param_4[4] = (byte)(uVar16 >> 0x15) | 0x80;
LAB_00c1ed2c:
            param_4[3] = (byte)(uVar15 >> 0xe) | 0x80;
LAB_00c1ed34:
            param_4[2] = (byte)(uVar16 >> 7) | 0x80;
          }
          *pbVar8 = (byte)uVar15 | 0x80;
          uVar5 = (int)lVar14 - 1;
          pbVar8[uVar5] = pbVar8[uVar5] & 0x7f;
          piVar13 = (int *)*param_1;
          param_4 = pbVar8 + lVar14;
          lVar12 = lVar12 + 1;
          if (*piVar13 <= lVar12) {
            return param_4;
          }
        } while( true );
      }
      lVar12 = 0;
      do {
        uVar15 = *(ulong *)(*(long *)(piVar13 + 2) + lVar12 * 8 + 8);
        uVar5 = uVar6;
        do {
          pbVar8 = param_4;
          uVar16 = uVar5 >> 7;
          uVar17 = uVar5 >> 0xe;
          pbVar9 = pbVar8 + 1;
          *pbVar8 = (byte)uVar5 | 0x80;
          param_4 = pbVar9;
          uVar5 = uVar16;
        } while (uVar17 != 0);
        *pbVar9 = (byte)uVar16;
        bVar2 = (byte)(uVar15 >> 0x38);
        uVar16 = (uint)uVar15;
        uVar17 = (uint)(uVar15 >> 0x1c);
        uVar5 = (uint)(uVar15 >> 0x20);
        if (bVar2 == 0) {
          if (uVar17 != 0) {
            if (uVar17 >> 0xe != 0) {
              if (0x1fffff < uVar17) {
                lVar14 = 8;
                goto LAB_00c1d7f0;
              }
              lVar14 = 7;
              goto LAB_00c1d7fc;
            }
            lVar14 = 5;
            if (0x7f < uVar17) {
              lVar14 = 6;
              goto LAB_00c1d808;
            }
            goto LAB_00c1d814;
          }
          if ((uVar15 >> 0xe & 0x3ffff) != 0) {
            if (0x1fffff < uVar16) {
              lVar14 = 4;
              goto LAB_00c1d81c;
            }
            lVar14 = 3;
            goto LAB_00c1d828;
          }
          if (0x7f < uVar16) {
            lVar14 = 2;
            goto LAB_00c1d830;
          }
          lVar14 = 1;
        }
        else {
          lVar14 = 9;
          if (0x7f < bVar2) {
            lVar14 = 10;
            pbVar8[0xb] = 0x81;
          }
          pbVar8[10] = bVar2 | 0x80;
LAB_00c1d7f0:
          pbVar8[9] = (byte)(uVar5 >> 0x11) | 0x80;
LAB_00c1d7fc:
          pbVar8[8] = (byte)(uVar5 >> 10) | 0x80;
LAB_00c1d808:
          pbVar8[7] = (byte)(uVar5 >> 3) | 0x80;
LAB_00c1d814:
          pbVar8[6] = (byte)(uVar15 >> 0x1c) | 0x80;
LAB_00c1d81c:
          pbVar8[5] = (byte)(uVar16 >> 0x15) | 0x80;
LAB_00c1d828:
          pbVar8[4] = (byte)(uVar15 >> 0xe) | 0x80;
LAB_00c1d830:
          pbVar8[3] = (byte)(uVar16 >> 7) | 0x80;
        }
        pbVar8[2] = (byte)uVar15 | 0x80;
        uVar5 = (int)lVar14 - 1;
        pbVar9[(ulong)uVar5 + 1] = pbVar9[(ulong)uVar5 + 1] & 0x7f;
        param_4 = pbVar9 + lVar14 + 1;
        piVar13 = (int *)*param_1;
        lVar12 = lVar12 + 1;
      } while (lVar12 < *piVar13);
      break;
    case '\x04':
      piVar13 = (int *)*param_1;
      if (*piVar13 < 1) {
        return param_4;
      }
      uVar6 = iVar7 * 8;
      if (uVar6 < 0x80) {
        lVar12 = 0;
        do {
          uVar15 = *(ulong *)(*(long *)(piVar13 + 2) + lVar12 * 8 + 8);
          pbVar8 = param_4 + 1;
          *param_4 = (byte)uVar6;
          bVar2 = (byte)(uVar15 >> 0x38);
          uVar16 = (uint)uVar15;
          uVar17 = (uint)(uVar15 >> 0x1c);
          uVar5 = (uint)(uVar15 >> 0x20);
          if (bVar2 == 0) {
            if (uVar17 != 0) {
              if (uVar17 >> 0xe != 0) {
                if (0x1fffff < uVar17) {
                  lVar14 = 8;
                  goto LAB_00c1ee34;
                }
                lVar14 = 7;
                goto LAB_00c1ee40;
              }
              lVar14 = 5;
              if (0x7f < uVar17) {
                lVar14 = 6;
                goto LAB_00c1ee4c;
              }
              goto LAB_00c1ee58;
            }
            if ((uVar15 >> 0xe & 0x3ffff) != 0) {
              if (0x1fffff < uVar16) {
                lVar14 = 4;
                goto LAB_00c1ee60;
              }
              lVar14 = 3;
              goto LAB_00c1ee6c;
            }
            if (0x7f < uVar16) {
              lVar14 = 2;
              goto LAB_00c1ee74;
            }
            lVar14 = 1;
          }
          else {
            lVar14 = 9;
            if (0x7f < bVar2) {
              lVar14 = 10;
              param_4[10] = 0x81;
            }
            param_4[9] = bVar2 | 0x80;
LAB_00c1ee34:
            param_4[8] = (byte)(uVar5 >> 0x11) | 0x80;
LAB_00c1ee40:
            param_4[7] = (byte)(uVar5 >> 10) | 0x80;
LAB_00c1ee4c:
            param_4[6] = (byte)(uVar5 >> 3) | 0x80;
LAB_00c1ee58:
            param_4[5] = (byte)(uVar15 >> 0x1c) | 0x80;
LAB_00c1ee60:
            param_4[4] = (byte)(uVar16 >> 0x15) | 0x80;
LAB_00c1ee6c:
            param_4[3] = (byte)(uVar15 >> 0xe) | 0x80;
LAB_00c1ee74:
            param_4[2] = (byte)(uVar16 >> 7) | 0x80;
          }
          *pbVar8 = (byte)uVar15 | 0x80;
          uVar5 = (int)lVar14 - 1;
          pbVar8[uVar5] = pbVar8[uVar5] & 0x7f;
          piVar13 = (int *)*param_1;
          param_4 = pbVar8 + lVar14;
          lVar12 = lVar12 + 1;
          if (*piVar13 <= lVar12) {
            return param_4;
          }
        } while( true );
      }
      lVar12 = 0;
      do {
        uVar15 = *(ulong *)(*(long *)(piVar13 + 2) + lVar12 * 8 + 8);
        uVar5 = uVar6;
        do {
          pbVar8 = param_4;
          uVar16 = uVar5 >> 7;
          uVar17 = uVar5 >> 0xe;
          pbVar9 = pbVar8 + 1;
          *pbVar8 = (byte)uVar5 | 0x80;
          param_4 = pbVar9;
          uVar5 = uVar16;
        } while (uVar17 != 0);
        *pbVar9 = (byte)uVar16;
        bVar2 = (byte)(uVar15 >> 0x38);
        uVar16 = (uint)uVar15;
        uVar17 = (uint)(uVar15 >> 0x1c);
        uVar5 = (uint)(uVar15 >> 0x20);
        if (bVar2 == 0) {
          if (uVar17 != 0) {
            if (uVar17 >> 0xe != 0) {
              if (0x1fffff < uVar17) {
                lVar14 = 8;
                goto LAB_00c1d974;
              }
              lVar14 = 7;
              goto LAB_00c1d980;
            }
            lVar14 = 5;
            if (0x7f < uVar17) {
              lVar14 = 6;
              goto LAB_00c1d98c;
            }
            goto LAB_00c1d998;
          }
          if ((uVar15 >> 0xe & 0x3ffff) != 0) {
            if (0x1fffff < uVar16) {
              lVar14 = 4;
              goto LAB_00c1d9a0;
            }
            lVar14 = 3;
            goto LAB_00c1d9ac;
          }
          if (0x7f < uVar16) {
            lVar14 = 2;
            goto LAB_00c1d9b4;
          }
          lVar14 = 1;
        }
        else {
          lVar14 = 9;
          if (0x7f < bVar2) {
            lVar14 = 10;
            pbVar8[0xb] = 0x81;
          }
          pbVar8[10] = bVar2 | 0x80;
LAB_00c1d974:
          pbVar8[9] = (byte)(uVar5 >> 0x11) | 0x80;
LAB_00c1d980:
          pbVar8[8] = (byte)(uVar5 >> 10) | 0x80;
LAB_00c1d98c:
          pbVar8[7] = (byte)(uVar5 >> 3) | 0x80;
LAB_00c1d998:
          pbVar8[6] = (byte)(uVar15 >> 0x1c) | 0x80;
LAB_00c1d9a0:
          pbVar8[5] = (byte)(uVar16 >> 0x15) | 0x80;
LAB_00c1d9ac:
          pbVar8[4] = (byte)(uVar15 >> 0xe) | 0x80;
LAB_00c1d9b4:
          pbVar8[3] = (byte)(uVar16 >> 7) | 0x80;
        }
        pbVar8[2] = (byte)uVar15 | 0x80;
        uVar5 = (int)lVar14 - 1;
        pbVar9[(ulong)uVar5 + 1] = pbVar9[(ulong)uVar5 + 1] & 0x7f;
        param_4 = pbVar9 + lVar14 + 1;
        piVar13 = (int *)*param_1;
        lVar12 = lVar12 + 1;
      } while (lVar12 < *piVar13);
      break;
    case '\x05':
      piVar13 = (int *)*param_1;
      if (*piVar13 < 1) {
        return param_4;
      }
      uVar6 = iVar7 * 8;
      if (uVar6 < 0x80) {
        lVar12 = 0;
        do {
          uVar5 = *(uint *)(*(long *)(piVar13 + 2) + lVar12 * 4 + 8);
          pbVar8 = param_4 + 1;
          *param_4 = (byte)uVar6;
          if ((int)uVar5 < 0) {
            if ((ulong)(long)(int)uVar5 >> 0x38 == 0) {
              lVar14 = 8;
            }
            else {
              param_4[9] = (byte)((ulong)(long)(int)uVar5 >> 0x38) | 0x80;
              lVar14 = 10;
              param_4[10] = 0x81;
            }
            uVar16 = (int)uVar5 >> 0x1f;
            param_4[8] = (byte)(uVar16 >> 0x11) | 0x80;
            param_4[6] = (byte)(uVar16 >> 3) | 0x80;
            param_4[5] = (byte)((int)uVar5 >> 0x1c) | 0x80;
            param_4[4] = (byte)(uVar5 >> 0x15) | 0x80;
            param_4[3] = (byte)(uVar5 >> 0xe) | 0x80;
            param_4[7] = (byte)(uVar16 >> 10) | 0x80;
            param_4[1] = (byte)uVar5 | 0x80;
            uVar16 = (int)lVar14 - 1;
            param_4[2] = (byte)(uVar5 >> 7) | 0x80;
            pbVar8[uVar16] = pbVar8[uVar16] & 0x7f;
            param_4 = pbVar8 + lVar14;
          }
          else {
            if (0x7f < uVar5) {
              pbVar9 = pbVar8;
              uVar16 = uVar5;
              do {
                uVar5 = uVar16 >> 7;
                uVar17 = uVar16 >> 0xe;
                pbVar8 = pbVar9 + 1;
                *pbVar9 = (byte)uVar16 | 0x80;
                pbVar9 = pbVar8;
                uVar16 = uVar5;
              } while (uVar17 != 0);
            }
            param_4 = pbVar8 + 1;
            *pbVar8 = (byte)uVar5;
          }
          piVar13 = (int *)*param_1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *piVar13);
        return param_4;
      }
      lVar12 = 0;
      do {
        uVar5 = *(uint *)(*(long *)(piVar13 + 2) + lVar12 * 4 + 8);
        uVar16 = uVar6;
        do {
          pbVar8 = param_4;
          uVar17 = uVar16 >> 7;
          uVar3 = uVar16 >> 0xe;
          param_4 = pbVar8 + 1;
          *pbVar8 = (byte)uVar16 | 0x80;
          uVar16 = uVar17;
        } while (uVar3 != 0);
        pbVar9 = pbVar8 + 2;
        *param_4 = (byte)uVar17;
        if ((int)uVar5 < 0) {
          if ((ulong)(long)(int)uVar5 >> 0x38 == 0) {
            lVar14 = 8;
          }
          else {
            pbVar8[10] = (byte)((ulong)(long)(int)uVar5 >> 0x38) | 0x80;
            lVar14 = 10;
            pbVar8[0xb] = 0x81;
          }
          uVar16 = (int)uVar5 >> 0x1f;
          pbVar8[9] = (byte)(uVar16 >> 0x11) | 0x80;
          pbVar8[7] = (byte)(uVar16 >> 3) | 0x80;
          pbVar8[6] = (byte)((int)uVar5 >> 0x1c) | 0x80;
          pbVar8[5] = (byte)(uVar5 >> 0x15) | 0x80;
          pbVar8[4] = (byte)(uVar5 >> 0xe) | 0x80;
          pbVar8[8] = (byte)(uVar16 >> 10) | 0x80;
          pbVar8[2] = (byte)uVar5 | 0x80;
          uVar16 = (int)lVar14 - 1;
          pbVar8[3] = (byte)(uVar5 >> 7) | 0x80;
          param_4[(ulong)uVar16 + 1] = param_4[(ulong)uVar16 + 1] & 0x7f;
          pbVar9 = param_4 + lVar14;
        }
        else {
          if (0x7f < uVar5) {
            pbVar8 = pbVar9;
            uVar16 = uVar5;
            do {
              uVar5 = uVar16 >> 7;
              uVar17 = uVar16 >> 0xe;
              pbVar9 = pbVar8 + 1;
              *pbVar8 = (byte)uVar16 | 0x80;
              pbVar8 = pbVar9;
              uVar16 = uVar5;
            } while (uVar17 != 0);
          }
          *pbVar9 = (byte)uVar5;
        }
        param_4 = pbVar9 + 1;
        piVar13 = (int *)*param_1;
        lVar12 = lVar12 + 1;
      } while (lVar12 < *piVar13);
      return param_4;
    case '\x06':
      piVar13 = (int *)*param_1;
      if (*piVar13 < 1) {
        return param_4;
      }
      uVar6 = iVar7 << 3 | 1;
      if (uVar6 < 0x80) {
        lVar12 = 0;
        do {
          lVar14 = lVar12 * 8;
          lVar12 = lVar12 + 1;
          uVar11 = *(undefined8 *)(*(long *)(piVar13 + 2) + lVar14 + 8);
          *param_4 = (byte)uVar6;
          *(undefined8 *)(param_4 + 1) = uVar11;
          piVar13 = (int *)*param_1;
          param_4 = param_4 + 9;
        } while (lVar12 < *piVar13);
        return param_4;
      }
      lVar12 = 0;
      do {
        uVar11 = *(undefined8 *)(*(long *)(piVar13 + 2) + lVar12 * 8 + 8);
        param_4 = param_4 + 9;
        uVar5 = uVar6;
        do {
          pbVar8 = param_4;
          uVar16 = uVar5 >> 7;
          pbVar8[-9] = (byte)uVar5 | 0x80;
          param_4 = pbVar8 + 1;
          uVar17 = uVar5 >> 0xe;
          uVar5 = uVar16;
        } while (uVar17 != 0);
        pbVar8[-8] = (byte)uVar16;
        lVar12 = lVar12 + 1;
        *(undefined8 *)(pbVar8 + -7) = uVar11;
        piVar13 = (int *)*param_1;
      } while (lVar12 < *piVar13);
      return param_4;
    case '\a':
      piVar13 = (int *)*param_1;
      if (*piVar13 < 1) {
        return param_4;
      }
      uVar6 = iVar7 << 3 | 5;
      if (uVar6 < 0x80) {
        lVar12 = 0;
        do {
          lVar14 = lVar12 * 4;
          lVar12 = lVar12 + 1;
          uVar1 = *(undefined4 *)(*(long *)(piVar13 + 2) + lVar14 + 8);
          *param_4 = (byte)uVar6;
          *(undefined4 *)(param_4 + 1) = uVar1;
          piVar13 = (int *)*param_1;
          param_4 = param_4 + 5;
        } while (lVar12 < *piVar13);
        return param_4;
      }
      lVar12 = 0;
      do {
        uVar1 = *(undefined4 *)(*(long *)(piVar13 + 2) + lVar12 * 4 + 8);
        param_4 = param_4 + 5;
        uVar5 = uVar6;
        do {
          pbVar8 = param_4;
          uVar16 = uVar5 >> 7;
          pbVar8[-5] = (byte)uVar5 | 0x80;
          param_4 = pbVar8 + 1;
          uVar17 = uVar5 >> 0xe;
          uVar5 = uVar16;
        } while (uVar17 != 0);
        pbVar8[-4] = (byte)uVar16;
        lVar12 = lVar12 + 1;
        *(undefined4 *)(pbVar8 + -3) = uVar1;
        piVar13 = (int *)*param_1;
      } while (lVar12 < *piVar13);
      return param_4;
    case '\b':
      piVar13 = (int *)*param_1;
      if (*piVar13 < 1) {
        return param_4;
      }
      uVar6 = iVar7 * 8;
      if (uVar6 < 0x80) {
        lVar12 = 0;
        do {
          lVar14 = *(long *)(piVar13 + 2) + lVar12;
          lVar12 = lVar12 + 1;
          bVar2 = *(byte *)(lVar14 + 8);
          *param_4 = (byte)uVar6;
          param_4[1] = bVar2;
          piVar13 = (int *)*param_1;
          param_4 = param_4 + 2;
        } while (lVar12 < *piVar13);
        return param_4;
      }
      lVar12 = 0;
      do {
        bVar2 = *(byte *)(*(long *)(piVar13 + 2) + lVar12 + 8);
        param_4 = param_4 + 2;
        uVar5 = uVar6;
        do {
          pbVar8 = param_4;
          uVar16 = uVar5 >> 7;
          pbVar8[-2] = (byte)uVar5 | 0x80;
          param_4 = pbVar8 + 1;
          uVar17 = uVar5 >> 0xe;
          uVar5 = uVar16;
        } while (uVar17 != 0);
        pbVar8[-1] = (byte)uVar16;
        lVar12 = lVar12 + 1;
        *pbVar8 = bVar2;
        piVar13 = (int *)*param_1;
      } while (lVar12 < *piVar13);
      return param_4;
    case '\t':
      uVar15 = *param_1;
      if (*(int *)(uVar15 + 8) < 1) {
        return param_4;
      }
      uVar6 = iVar7 << 3 | 2;
      if (uVar6 < 0x80) {
        lVar12 = 0;
        do {
          pbVar8 = *(byte **)(*(long *)(uVar15 + 0x10) + lVar12 * 8 + 8);
          pbVar9 = param_4 + 1;
          *param_4 = (byte)uVar6;
          uVar5 = (uint)(*pbVar8 >> 1);
          if ((*pbVar8 & 1) != 0) {
            uVar5 = *(uint *)(pbVar8 + 8);
          }
          if (0x7f < uVar5) {
            pbVar18 = pbVar9;
            uVar16 = uVar5;
            do {
              uVar5 = uVar16 >> 7;
              uVar17 = uVar16 >> 0xe;
              pbVar9 = pbVar18 + 1;
              *pbVar18 = (byte)uVar16 | 0x80;
              pbVar18 = pbVar9;
              uVar16 = uVar5;
            } while (uVar17 != 0);
          }
          *pbVar9 = (byte)uVar5;
          pbVar18 = *(byte **)(pbVar8 + 0x10);
          uVar5 = (uint)(*pbVar8 >> 1);
          if ((*pbVar8 & 1) == 0) {
            pbVar18 = pbVar8 + 1;
          }
          else {
            uVar5 = (uint)*(undefined8 *)(pbVar8 + 8);
          }
          memcpy(pbVar9 + 1,pbVar18,(long)(int)uVar5);
          uVar15 = *param_1;
          param_4 = pbVar9 + 1 + (int)uVar5;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *(int *)(uVar15 + 8));
        return param_4;
      }
      lVar12 = 0;
      do {
        pbVar9 = *(byte **)(*(long *)(uVar15 + 0x10) + lVar12 * 8 + 8);
        pbVar8 = param_4 + 1;
        uVar5 = uVar6;
        do {
          pbVar18 = pbVar8;
          uVar16 = uVar5 >> 7;
          pbVar18[-1] = (byte)uVar5 | 0x80;
          pbVar8 = pbVar18 + 1;
          uVar17 = uVar5 >> 0xe;
          uVar5 = uVar16;
        } while (uVar17 != 0);
        *pbVar18 = (byte)uVar16;
        uVar5 = (uint)(*pbVar9 >> 1);
        if ((*pbVar9 & 1) != 0) {
          uVar5 = *(uint *)(pbVar9 + 8);
        }
        if (0x7f < uVar5) {
          pbVar18 = pbVar8;
          uVar16 = uVar5;
          do {
            uVar5 = uVar16 >> 7;
            uVar17 = uVar16 >> 0xe;
            pbVar8 = pbVar18 + 1;
            *pbVar18 = (byte)uVar16 | 0x80;
            pbVar18 = pbVar8;
            uVar16 = uVar5;
          } while (uVar17 != 0);
        }
        *pbVar8 = (byte)uVar5;
        pbVar18 = *(byte **)(pbVar9 + 0x10);
        uVar5 = (uint)(*pbVar9 >> 1);
        if ((*pbVar9 & 1) == 0) {
          pbVar18 = pbVar9 + 1;
        }
        else {
          uVar5 = (uint)*(undefined8 *)(pbVar9 + 8);
        }
        memcpy(pbVar8 + 1,pbVar18,(long)(int)uVar5);
        uVar15 = *param_1;
        param_4 = pbVar8 + 1 + (int)uVar5;
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)(uVar15 + 8));
      return param_4;
    case '\n':
      uVar15 = *param_1;
      if (*(int *)(uVar15 + 8) < 1) {
        return param_4;
      }
      uVar6 = iVar7 << 3 | 3;
      uVar5 = iVar7 << 3 | 4;
      if (uVar6 < 0x80) {
        lVar12 = 0;
        do {
          plVar19 = *(long **)(*(long *)(uVar15 + 0x10) + lVar12 * 8 + 8);
          *param_4 = (byte)uVar6;
          pbVar8 = (byte *)(**(code **)(*plVar19 + 0x80))(plVar19,param_3 & 1,param_4 + 1);
          uVar16 = uVar5;
          if (0x7f < uVar5) {
            pbVar9 = pbVar8;
            uVar17 = uVar5;
            do {
              uVar16 = uVar17 >> 7;
              uVar3 = uVar17 >> 0xe;
              pbVar8 = pbVar9 + 1;
              *pbVar9 = (byte)uVar17 | 0x80;
              pbVar9 = pbVar8;
              uVar17 = uVar16;
            } while (uVar3 != 0);
          }
          param_4 = pbVar8 + 1;
          *pbVar8 = (byte)uVar16;
          uVar15 = *param_1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *(int *)(uVar15 + 8));
        return param_4;
      }
      lVar12 = 0;
      do {
        plVar19 = *(long **)(*(long *)(uVar15 + 0x10) + lVar12 * 8 + 8);
        uVar16 = uVar6;
        do {
          pbVar8 = param_4 + 1;
          uVar17 = uVar16 >> 7;
          *param_4 = (byte)uVar16 | 0x80;
          uVar3 = uVar16 >> 0xe;
          uVar16 = uVar17;
          param_4 = pbVar8;
        } while (uVar3 != 0);
        *pbVar8 = (byte)uVar17;
        pbVar8 = (byte *)(**(code **)(*plVar19 + 0x80))(plVar19,param_3 & 1);
        uVar16 = uVar5;
        if (0x7f < uVar5) {
          pbVar9 = pbVar8;
          uVar17 = uVar5;
          do {
            uVar16 = uVar17 >> 7;
            uVar3 = uVar17 >> 0xe;
            pbVar8 = pbVar9 + 1;
            *pbVar9 = (byte)uVar17 | 0x80;
            pbVar9 = pbVar8;
            uVar17 = uVar16;
          } while (uVar3 != 0);
        }
        param_4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar16;
        uVar15 = *param_1;
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)(uVar15 + 8));
      return param_4;
    case '\v':
      uVar15 = *param_1;
      if (*(int *)(uVar15 + 8) < 1) {
        return param_4;
      }
      uVar6 = iVar7 << 3 | 2;
      if (uVar6 < 0x80) {
        lVar12 = 0;
        do {
          plVar19 = *(long **)(*(long *)(uVar15 + 0x10) + lVar12 * 8 + 8);
          pbVar8 = param_4 + 1;
          *param_4 = (byte)uVar6;
          uVar15 = (**(code **)(*plVar19 + 0x78))(plVar19);
          uVar5 = (uint)uVar15;
          if (0x7f < uVar5) {
            uVar10 = uVar15 & 0xffffffff;
            pbVar9 = pbVar8;
            do {
              bVar2 = (byte)uVar15;
              uVar15 = uVar10 >> 7;
              uVar5 = (uint)uVar15;
              uVar4 = uVar10 >> 0xe;
              pbVar8 = pbVar9 + 1;
              *pbVar9 = bVar2 | 0x80;
              uVar10 = uVar15;
              pbVar9 = pbVar8;
            } while (uVar4 != 0);
          }
          *pbVar8 = (byte)uVar5;
          param_4 = (byte *)(**(code **)(*plVar19 + 0x80))(plVar19,param_3 & 1,pbVar8 + 1);
          uVar15 = *param_1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *(int *)(uVar15 + 8));
        return param_4;
      }
      lVar12 = 0;
      do {
        plVar19 = *(long **)(*(long *)(uVar15 + 0x10) + lVar12 * 8 + 8);
        pbVar8 = param_4 + 1;
        uVar5 = uVar6;
        do {
          pbVar9 = pbVar8;
          uVar16 = uVar5 >> 7;
          pbVar9[-1] = (byte)uVar5 | 0x80;
          pbVar8 = pbVar9 + 1;
          uVar17 = uVar5 >> 0xe;
          uVar5 = uVar16;
        } while (uVar17 != 0);
        *pbVar9 = (byte)uVar16;
        uVar15 = (**(code **)(*plVar19 + 0x78))(plVar19);
        uVar5 = (uint)uVar15;
        if (0x7f < uVar5) {
          uVar10 = uVar15 & 0xffffffff;
          pbVar9 = pbVar8;
          do {
            bVar2 = (byte)uVar15;
            uVar15 = uVar10 >> 7;
            uVar5 = (uint)uVar15;
            uVar4 = uVar10 >> 0xe;
            pbVar8 = pbVar9 + 1;
            *pbVar9 = bVar2 | 0x80;
            uVar10 = uVar15;
            pbVar9 = pbVar8;
          } while (uVar4 != 0);
        }
        *pbVar8 = (byte)uVar5;
        param_4 = (byte *)(**(code **)(*plVar19 + 0x80))(plVar19,param_3 & 1,pbVar8 + 1);
        uVar15 = *param_1;
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)(uVar15 + 8));
      return param_4;
    case '\f':
      uVar15 = *param_1;
      if (*(int *)(uVar15 + 8) < 1) {
        return param_4;
      }
      uVar6 = iVar7 << 3 | 2;
      if (uVar6 < 0x80) {
        lVar12 = 0;
        do {
          pbVar8 = *(byte **)(*(long *)(uVar15 + 0x10) + lVar12 * 8 + 8);
          pbVar9 = param_4 + 1;
          *param_4 = (byte)uVar6;
          uVar5 = (uint)(*pbVar8 >> 1);
          if ((*pbVar8 & 1) != 0) {
            uVar5 = *(uint *)(pbVar8 + 8);
          }
          if (0x7f < uVar5) {
            pbVar18 = pbVar9;
            uVar16 = uVar5;
            do {
              uVar5 = uVar16 >> 7;
              uVar17 = uVar16 >> 0xe;
              pbVar9 = pbVar18 + 1;
              *pbVar18 = (byte)uVar16 | 0x80;
              pbVar18 = pbVar9;
              uVar16 = uVar5;
            } while (uVar17 != 0);
          }
          *pbVar9 = (byte)uVar5;
          pbVar18 = *(byte **)(pbVar8 + 0x10);
          uVar5 = (uint)(*pbVar8 >> 1);
          if ((*pbVar8 & 1) == 0) {
            pbVar18 = pbVar8 + 1;
          }
          else {
            uVar5 = (uint)*(undefined8 *)(pbVar8 + 8);
          }
          memcpy(pbVar9 + 1,pbVar18,(long)(int)uVar5);
          uVar15 = *param_1;
          param_4 = pbVar9 + 1 + (int)uVar5;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *(int *)(uVar15 + 8));
        return param_4;
      }
      lVar12 = 0;
      do {
        pbVar9 = *(byte **)(*(long *)(uVar15 + 0x10) + lVar12 * 8 + 8);
        pbVar8 = param_4 + 1;
        uVar5 = uVar6;
        do {
          pbVar18 = pbVar8;
          uVar16 = uVar5 >> 7;
          pbVar18[-1] = (byte)uVar5 | 0x80;
          pbVar8 = pbVar18 + 1;
          uVar17 = uVar5 >> 0xe;
          uVar5 = uVar16;
        } while (uVar17 != 0);
        *pbVar18 = (byte)uVar16;
        uVar5 = (uint)(*pbVar9 >> 1);
        if ((*pbVar9 & 1) != 0) {
          uVar5 = *(uint *)(pbVar9 + 8);
        }
        if (0x7f < uVar5) {
          pbVar18 = pbVar8;
          uVar16 = uVar5;
          do {
            uVar5 = uVar16 >> 7;
            uVar17 = uVar16 >> 0xe;
            pbVar8 = pbVar18 + 1;
            *pbVar18 = (byte)uVar16 | 0x80;
            pbVar18 = pbVar8;
            uVar16 = uVar5;
          } while (uVar17 != 0);
        }
        *pbVar8 = (byte)uVar5;
        pbVar18 = *(byte **)(pbVar9 + 0x10);
        uVar5 = (uint)(*pbVar9 >> 1);
        if ((*pbVar9 & 1) == 0) {
          pbVar18 = pbVar9 + 1;
        }
        else {
          uVar5 = (uint)*(undefined8 *)(pbVar9 + 8);
        }
        memcpy(pbVar8 + 1,pbVar18,(long)(int)uVar5);
        uVar15 = *param_1;
        param_4 = pbVar8 + 1 + (int)uVar5;
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)(uVar15 + 8));
      return param_4;
    case '\r':
      piVar13 = (int *)*param_1;
      if (*piVar13 < 1) {
        return param_4;
      }
      uVar6 = iVar7 * 8;
      if (uVar6 < 0x80) {
        lVar12 = 0;
        do {
          uVar5 = *(uint *)(*(long *)(piVar13 + 2) + lVar12 * 4 + 8);
          pbVar8 = param_4 + 1;
          *param_4 = (byte)uVar6;
          if (0x7f < uVar5) {
            pbVar9 = pbVar8;
            uVar16 = uVar5;
            do {
              uVar5 = uVar16 >> 7;
              uVar17 = uVar16 >> 0xe;
              pbVar8 = pbVar9 + 1;
              *pbVar9 = (byte)uVar16 | 0x80;
              pbVar9 = pbVar8;
              uVar16 = uVar5;
            } while (uVar17 != 0);
          }
          param_4 = pbVar8 + 1;
          *pbVar8 = (byte)uVar5;
          piVar13 = (int *)*param_1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *piVar13);
        return param_4;
      }
      lVar12 = 0;
      do {
        uVar5 = *(uint *)(*(long *)(piVar13 + 2) + lVar12 * 4 + 8);
        pbVar8 = param_4 + 1;
        uVar16 = uVar6;
        do {
          pbVar9 = pbVar8;
          uVar17 = uVar16 >> 7;
          pbVar9[-1] = (byte)uVar16 | 0x80;
          pbVar8 = pbVar9 + 1;
          uVar3 = uVar16 >> 0xe;
          uVar16 = uVar17;
        } while (uVar3 != 0);
        *pbVar9 = (byte)uVar17;
        if (0x7f < uVar5) {
          pbVar9 = pbVar8;
          uVar16 = uVar5;
          do {
            uVar5 = uVar16 >> 7;
            uVar17 = uVar16 >> 0xe;
            pbVar8 = pbVar9 + 1;
            *pbVar9 = (byte)uVar16 | 0x80;
            pbVar9 = pbVar8;
            uVar16 = uVar5;
          } while (uVar17 != 0);
        }
        param_4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5;
        piVar13 = (int *)*param_1;
        lVar12 = lVar12 + 1;
      } while (lVar12 < *piVar13);
      return param_4;
    case '\x0e':
      piVar13 = (int *)*param_1;
      if (*piVar13 < 1) {
        return param_4;
      }
      uVar6 = iVar7 * 8;
      if (uVar6 < 0x80) {
        lVar12 = 0;
        do {
          uVar5 = *(uint *)(*(long *)(piVar13 + 2) + lVar12 * 4 + 8);
          pbVar8 = param_4 + 1;
          *param_4 = (byte)uVar6;
          if ((int)uVar5 < 0) {
            if ((ulong)(long)(int)uVar5 >> 0x38 == 0) {
              lVar14 = 8;
            }
            else {
              param_4[9] = (byte)((ulong)(long)(int)uVar5 >> 0x38) | 0x80;
              lVar14 = 10;
              param_4[10] = 0x81;
            }
            uVar16 = (int)uVar5 >> 0x1f;
            param_4[8] = (byte)(uVar16 >> 0x11) | 0x80;
            param_4[6] = (byte)(uVar16 >> 3) | 0x80;
            param_4[5] = (byte)((int)uVar5 >> 0x1c) | 0x80;
            param_4[4] = (byte)(uVar5 >> 0x15) | 0x80;
            param_4[3] = (byte)(uVar5 >> 0xe) | 0x80;
            param_4[7] = (byte)(uVar16 >> 10) | 0x80;
            param_4[1] = (byte)uVar5 | 0x80;
            uVar16 = (int)lVar14 - 1;
            param_4[2] = (byte)(uVar5 >> 7) | 0x80;
            pbVar8[uVar16] = pbVar8[uVar16] & 0x7f;
            param_4 = pbVar8 + lVar14;
          }
          else {
            if (0x7f < uVar5) {
              pbVar9 = pbVar8;
              uVar16 = uVar5;
              do {
                uVar5 = uVar16 >> 7;
                uVar17 = uVar16 >> 0xe;
                pbVar8 = pbVar9 + 1;
                *pbVar9 = (byte)uVar16 | 0x80;
                pbVar9 = pbVar8;
                uVar16 = uVar5;
              } while (uVar17 != 0);
            }
            param_4 = pbVar8 + 1;
            *pbVar8 = (byte)uVar5;
          }
          piVar13 = (int *)*param_1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *piVar13);
        return param_4;
      }
      lVar12 = 0;
      do {
        uVar5 = *(uint *)(*(long *)(piVar13 + 2) + lVar12 * 4 + 8);
        uVar16 = uVar6;
        do {
          pbVar8 = param_4;
          uVar17 = uVar16 >> 7;
          uVar3 = uVar16 >> 0xe;
          param_4 = pbVar8 + 1;
          *pbVar8 = (byte)uVar16 | 0x80;
          uVar16 = uVar17;
        } while (uVar3 != 0);
        pbVar9 = pbVar8 + 2;
        *param_4 = (byte)uVar17;
        if ((int)uVar5 < 0) {
          if ((ulong)(long)(int)uVar5 >> 0x38 == 0) {
            lVar14 = 8;
          }
          else {
            pbVar8[10] = (byte)((ulong)(long)(int)uVar5 >> 0x38) | 0x80;
            lVar14 = 10;
            pbVar8[0xb] = 0x81;
          }
          uVar16 = (int)uVar5 >> 0x1f;
          pbVar8[9] = (byte)(uVar16 >> 0x11) | 0x80;
          pbVar8[7] = (byte)(uVar16 >> 3) | 0x80;
          pbVar8[6] = (byte)((int)uVar5 >> 0x1c) | 0x80;
          pbVar8[5] = (byte)(uVar5 >> 0x15) | 0x80;
          pbVar8[4] = (byte)(uVar5 >> 0xe) | 0x80;
          pbVar8[8] = (byte)(uVar16 >> 10) | 0x80;
          pbVar8[2] = (byte)uVar5 | 0x80;
          uVar16 = (int)lVar14 - 1;
          pbVar8[3] = (byte)(uVar5 >> 7) | 0x80;
          param_4[(ulong)uVar16 + 1] = param_4[(ulong)uVar16 + 1] & 0x7f;
          pbVar9 = param_4 + lVar14;
        }
        else {
          if (0x7f < uVar5) {
            pbVar8 = pbVar9;
            uVar16 = uVar5;
            do {
              uVar5 = uVar16 >> 7;
              uVar17 = uVar16 >> 0xe;
              pbVar9 = pbVar8 + 1;
              *pbVar8 = (byte)uVar16 | 0x80;
              pbVar8 = pbVar9;
              uVar16 = uVar5;
            } while (uVar17 != 0);
          }
          *pbVar9 = (byte)uVar5;
        }
        param_4 = pbVar9 + 1;
        piVar13 = (int *)*param_1;
        lVar12 = lVar12 + 1;
      } while (lVar12 < *piVar13);
      return param_4;
    case '\x0f':
      piVar13 = (int *)*param_1;
      if (*piVar13 < 1) {
        return param_4;
      }
      uVar6 = iVar7 << 3 | 5;
      if (uVar6 < 0x80) {
        lVar12 = 0;
        do {
          lVar14 = lVar12 * 4;
          lVar12 = lVar12 + 1;
          uVar1 = *(undefined4 *)(*(long *)(piVar13 + 2) + lVar14 + 8);
          *param_4 = (byte)uVar6;
          *(undefined4 *)(param_4 + 1) = uVar1;
          piVar13 = (int *)*param_1;
          param_4 = param_4 + 5;
        } while (lVar12 < *piVar13);
        return param_4;
      }
      lVar12 = 0;
      do {
        uVar1 = *(undefined4 *)(*(long *)(piVar13 + 2) + lVar12 * 4 + 8);
        param_4 = param_4 + 5;
        uVar5 = uVar6;
        do {
          pbVar8 = param_4;
          uVar16 = uVar5 >> 7;
          pbVar8[-5] = (byte)uVar5 | 0x80;
          param_4 = pbVar8 + 1;
          uVar17 = uVar5 >> 0xe;
          uVar5 = uVar16;
        } while (uVar17 != 0);
        pbVar8[-4] = (byte)uVar16;
        lVar12 = lVar12 + 1;
        *(undefined4 *)(pbVar8 + -3) = uVar1;
        piVar13 = (int *)*param_1;
      } while (lVar12 < *piVar13);
      return param_4;
    case '\x10':
      piVar13 = (int *)*param_1;
      if (*piVar13 < 1) {
        return param_4;
      }
      uVar6 = iVar7 << 3 | 1;
      if (uVar6 < 0x80) {
        lVar12 = 0;
        do {
          lVar14 = lVar12 * 8;
          lVar12 = lVar12 + 1;
          uVar11 = *(undefined8 *)(*(long *)(piVar13 + 2) + lVar14 + 8);
          *param_4 = (byte)uVar6;
          *(undefined8 *)(param_4 + 1) = uVar11;
          piVar13 = (int *)*param_1;
          param_4 = param_4 + 9;
        } while (lVar12 < *piVar13);
        return param_4;
      }
      lVar12 = 0;
      do {
        uVar11 = *(undefined8 *)(*(long *)(piVar13 + 2) + lVar12 * 8 + 8);
        param_4 = param_4 + 9;
        uVar5 = uVar6;
        do {
          pbVar8 = param_4;
          uVar16 = uVar5 >> 7;
          pbVar8[-9] = (byte)uVar5 | 0x80;
          param_4 = pbVar8 + 1;
          uVar17 = uVar5 >> 0xe;
          uVar5 = uVar16;
        } while (uVar17 != 0);
        pbVar8[-8] = (byte)uVar16;
        lVar12 = lVar12 + 1;
        *(undefined8 *)(pbVar8 + -7) = uVar11;
        piVar13 = (int *)*param_1;
      } while (lVar12 < *piVar13);
      return param_4;
    case '\x11':
      piVar13 = (int *)*param_1;
      if (*piVar13 < 1) {
        return param_4;
      }
      uVar6 = iVar7 * 8;
      if (uVar6 < 0x80) {
        lVar12 = 0;
        do {
          iVar7 = *(int *)(*(long *)(piVar13 + 2) + lVar12 * 4 + 8);
          pbVar8 = param_4 + 1;
          *param_4 = (byte)uVar6;
          uVar5 = iVar7 << 1 ^ iVar7 >> 0x1f;
          if (0x7f < uVar5) {
            pbVar9 = pbVar8;
            uVar16 = uVar5;
            do {
              uVar5 = uVar16 >> 7;
              uVar17 = uVar16 >> 0xe;
              pbVar8 = pbVar9 + 1;
              *pbVar9 = (byte)uVar16 | 0x80;
              pbVar9 = pbVar8;
              uVar16 = uVar5;
            } while (uVar17 != 0);
          }
          param_4 = pbVar8 + 1;
          *pbVar8 = (byte)uVar5;
          piVar13 = (int *)*param_1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *piVar13);
        return param_4;
      }
      lVar12 = 0;
      do {
        iVar7 = *(int *)(*(long *)(piVar13 + 2) + lVar12 * 4 + 8);
        pbVar8 = param_4 + 1;
        uVar5 = uVar6;
        do {
          pbVar9 = pbVar8;
          uVar16 = uVar5 >> 7;
          pbVar9[-1] = (byte)uVar5 | 0x80;
          pbVar8 = pbVar9 + 1;
          uVar17 = uVar5 >> 0xe;
          uVar5 = uVar16;
        } while (uVar17 != 0);
        *pbVar9 = (byte)uVar16;
        uVar5 = iVar7 << 1 ^ iVar7 >> 0x1f;
        if (0x7f < uVar5) {
          pbVar9 = pbVar8;
          uVar16 = uVar5;
          do {
            uVar5 = uVar16 >> 7;
            uVar17 = uVar16 >> 0xe;
            pbVar8 = pbVar9 + 1;
            *pbVar9 = (byte)uVar16 | 0x80;
            pbVar9 = pbVar8;
            uVar16 = uVar5;
          } while (uVar17 != 0);
        }
        param_4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5;
        piVar13 = (int *)*param_1;
        lVar12 = lVar12 + 1;
      } while (lVar12 < *piVar13);
      return param_4;
    case '\x12':
      piVar13 = (int *)*param_1;
      if (*piVar13 < 1) {
        return param_4;
      }
      uVar6 = iVar7 * 8;
      if (uVar6 < 0x80) {
        lVar12 = 0;
        do {
          lVar14 = *(long *)(*(long *)(piVar13 + 2) + lVar12 * 8 + 8);
          uVar15 = lVar14 << 1 ^ lVar14 >> 0x3f;
          pbVar8 = param_4 + 1;
          *param_4 = (byte)uVar6;
          bVar2 = (byte)(uVar15 >> 0x38);
          uVar16 = (uint)uVar15;
          uVar17 = (uint)(uVar15 >> 0x1c);
          uVar5 = (uint)(uVar15 >> 0x20);
          if (bVar2 == 0) {
            if (uVar17 != 0) {
              if (uVar17 >> 0xe != 0) {
                if (0x1fffff < uVar17) {
                  lVar14 = 8;
                  goto LAB_00c1f548;
                }
                lVar14 = 7;
                goto LAB_00c1f554;
              }
              lVar14 = 5;
              if (0x7f < uVar17) {
                lVar14 = 6;
                goto LAB_00c1f560;
              }
              goto LAB_00c1f56c;
            }
            if ((uVar15 >> 0xe & 0x3ffff) != 0) {
              if (0x1fffff < uVar16) {
                lVar14 = 4;
                goto LAB_00c1f574;
              }
              lVar14 = 3;
              goto LAB_00c1f580;
            }
            if (0x7f < uVar16) {
              lVar14 = 2;
              goto LAB_00c1f588;
            }
            lVar14 = 1;
          }
          else {
            lVar14 = 9;
            if (0x7f < bVar2) {
              lVar14 = 10;
              param_4[10] = 0x81;
            }
            param_4[9] = bVar2 | 0x80;
LAB_00c1f548:
            param_4[8] = (byte)(uVar5 >> 0x11) | 0x80;
LAB_00c1f554:
            param_4[7] = (byte)(uVar5 >> 10) | 0x80;
LAB_00c1f560:
            param_4[6] = (byte)(uVar5 >> 3) | 0x80;
LAB_00c1f56c:
            param_4[5] = (byte)(uVar15 >> 0x1c) | 0x80;
LAB_00c1f574:
            param_4[4] = (byte)(uVar16 >> 0x15) | 0x80;
LAB_00c1f580:
            param_4[3] = (byte)(uVar15 >> 0xe) | 0x80;
LAB_00c1f588:
            param_4[2] = (byte)(uVar16 >> 7) | 0x80;
          }
          *pbVar8 = (byte)uVar15 | 0x80;
          uVar5 = (int)lVar14 - 1;
          pbVar8[uVar5] = pbVar8[uVar5] & 0x7f;
          piVar13 = (int *)*param_1;
          param_4 = pbVar8 + lVar14;
          lVar12 = lVar12 + 1;
          if (*piVar13 <= lVar12) {
            return param_4;
          }
        } while( true );
      }
      lVar12 = 0;
      do {
        lVar14 = *(long *)(*(long *)(piVar13 + 2) + lVar12 * 8 + 8);
        uVar5 = uVar6;
        do {
          pbVar8 = param_4;
          uVar16 = uVar5 >> 7;
          uVar17 = uVar5 >> 0xe;
          pbVar9 = pbVar8 + 1;
          *pbVar8 = (byte)uVar5 | 0x80;
          param_4 = pbVar9;
          uVar5 = uVar16;
        } while (uVar17 != 0);
        *pbVar9 = (byte)uVar16;
        uVar15 = lVar14 << 1 ^ lVar14 >> 0x3f;
        bVar2 = (byte)(uVar15 >> 0x38);
        uVar16 = (uint)uVar15;
        uVar17 = (uint)(uVar15 >> 0x1c);
        uVar5 = (uint)(uVar15 >> 0x20);
        if (bVar2 == 0) {
          if (uVar17 != 0) {
            if (uVar17 >> 0xe != 0) {
              if (0x1fffff < uVar17) {
                lVar14 = 8;
                goto LAB_00c1e464;
              }
              lVar14 = 7;
              goto LAB_00c1e470;
            }
            lVar14 = 5;
            if (0x7f < uVar17) {
              lVar14 = 6;
              goto LAB_00c1e47c;
            }
            goto LAB_00c1e488;
          }
          if ((uVar15 >> 0xe & 0x3ffff) != 0) {
            if (0x1fffff < uVar16) {
              lVar14 = 4;
              goto LAB_00c1e490;
            }
            lVar14 = 3;
            goto LAB_00c1e49c;
          }
          if (0x7f < uVar16) {
            lVar14 = 2;
            goto LAB_00c1e4a4;
          }
          lVar14 = 1;
        }
        else {
          lVar14 = 9;
          if (0x7f < bVar2) {
            lVar14 = 10;
            pbVar8[0xb] = 0x81;
          }
          pbVar8[10] = bVar2 | 0x80;
LAB_00c1e464:
          pbVar8[9] = (byte)(uVar5 >> 0x11) | 0x80;
LAB_00c1e470:
          pbVar8[8] = (byte)(uVar5 >> 10) | 0x80;
LAB_00c1e47c:
          pbVar8[7] = (byte)(uVar5 >> 3) | 0x80;
LAB_00c1e488:
          pbVar8[6] = (byte)(uVar15 >> 0x1c) | 0x80;
LAB_00c1e490:
          pbVar8[5] = (byte)(uVar16 >> 0x15) | 0x80;
LAB_00c1e49c:
          pbVar8[4] = (byte)(uVar15 >> 0xe) | 0x80;
LAB_00c1e4a4:
          pbVar8[3] = (byte)(uVar16 >> 7) | 0x80;
        }
        pbVar8[2] = (byte)uVar15 | 0x80;
        uVar5 = (int)lVar14 - 1;
        pbVar9[(ulong)uVar5 + 1] = pbVar9[(ulong)uVar5 + 1] & 0x7f;
        param_4 = pbVar9 + lVar14 + 1;
        piVar13 = (int *)*param_1;
        lVar12 = lVar12 + 1;
      } while (lVar12 < *piVar13);
      break;
    default:
      return param_4;
    }
    return pbVar9 + lVar14 + 1;
  }
  if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
    return param_4;
  }
  switch((char)param_1[1]) {
  case '\x01':
    uVar15 = *param_1;
    uVar6 = iVar7 << 3 | 1;
    if (0x7f < uVar6) {
      pbVar8 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar16 = uVar5 >> 0xe;
        param_4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5 | 0x80;
        pbVar8 = param_4;
        uVar5 = uVar6;
      } while (uVar16 != 0);
    }
    goto LAB_00c1ea7c;
  case '\x02':
    uVar5 = (uint)*param_1;
    uVar6 = iVar7 << 3 | 5;
    if (0x7f < uVar6) {
      pbVar8 = param_4;
      uVar16 = uVar6;
      do {
        uVar6 = uVar16 >> 7;
        uVar17 = uVar16 >> 0xe;
        param_4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar16 | 0x80;
        pbVar8 = param_4;
        uVar16 = uVar6;
      } while (uVar17 != 0);
    }
    goto LAB_00c1ea3c;
  case '\x03':
    uVar15 = *param_1;
    uVar6 = iVar7 << 3;
    if (0x7f < uVar6) {
      pbVar8 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar16 = uVar5 >> 0xe;
        param_4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5 | 0x80;
        pbVar8 = param_4;
        uVar5 = uVar6;
      } while (uVar16 != 0);
    }
    goto LAB_00c1e5f4;
  case '\x04':
    uVar15 = *param_1;
    uVar6 = iVar7 << 3;
    if (0x7f < uVar6) {
      pbVar8 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar16 = uVar5 >> 0xe;
        param_4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5 | 0x80;
        pbVar8 = param_4;
        uVar5 = uVar6;
      } while (uVar16 != 0);
    }
LAB_00c1e5f4:
    pbVar8 = param_4 + 1;
    *param_4 = (byte)uVar6;
    bVar2 = (byte)(uVar15 >> 0x38);
    uVar5 = (uint)uVar15;
    uVar16 = (uint)(uVar15 >> 0x1c);
    uVar6 = (uint)(uVar15 >> 0x20);
    if (bVar2 == 0) {
      if (uVar16 != 0) {
        if (uVar16 >> 0xe != 0) {
          if (0x1fffff < uVar16) {
            lVar12 = 8;
            goto LAB_00c1eba0;
          }
          lVar12 = 7;
          goto LAB_00c1ebac;
        }
        if (0x7f < uVar16) {
          lVar12 = 6;
          goto LAB_00c1ebb8;
        }
        lVar12 = 5;
        goto LAB_00c1ebc4;
      }
      if ((uVar15 >> 0xe & 0x3ffff) != 0) {
        if (0x1fffff < uVar5) {
          lVar12 = 4;
          goto LAB_00c1ebcc;
        }
        lVar12 = 3;
        goto LAB_00c1ebd8;
      }
      if (0x7f < uVar5) {
        lVar12 = 2;
        goto LAB_00c1ebe0;
      }
      lVar12 = 1;
    }
    else {
      if (bVar2 < 0x80) {
        lVar12 = 9;
      }
      else {
        param_4[10] = 0x81;
        lVar12 = 10;
      }
      param_4[9] = bVar2 | 0x80;
LAB_00c1eba0:
      param_4[8] = (byte)(uVar6 >> 0x11) | 0x80;
LAB_00c1ebac:
      param_4[7] = (byte)(uVar6 >> 10) | 0x80;
LAB_00c1ebb8:
      param_4[6] = (byte)(uVar6 >> 3) | 0x80;
LAB_00c1ebc4:
      param_4[5] = (byte)(uVar15 >> 0x1c) | 0x80;
LAB_00c1ebcc:
      param_4[4] = (byte)(uVar5 >> 0x15) | 0x80;
LAB_00c1ebd8:
      param_4[3] = (byte)(uVar15 >> 0xe) | 0x80;
LAB_00c1ebe0:
      param_4[2] = (byte)(uVar5 >> 7) | 0x80;
    }
    *pbVar8 = (byte)uVar15 | 0x80;
    uVar6 = (int)lVar12 - 1;
    pbVar8[uVar6] = pbVar8[uVar6] & 0x7f;
    param_4 = pbVar8 + lVar12;
    break;
  case '\x05':
    uVar6 = (uint)*param_1;
    uVar5 = iVar7 << 3;
    if (0x7f < uVar5) {
      pbVar8 = param_4;
      uVar16 = uVar5;
      do {
        uVar5 = uVar16 >> 7;
        uVar17 = uVar16 >> 0xe;
        param_4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar16 | 0x80;
        pbVar8 = param_4;
        uVar16 = uVar5;
      } while (uVar17 != 0);
    }
    pbVar8 = param_4 + 1;
    *param_4 = (byte)uVar5;
    if ((int)uVar6 < 0) {
LAB_00c1eb68:
      if ((ulong)(long)(int)uVar6 >> 0x38 == 0) {
        lVar12 = 8;
      }
      else {
        param_4[9] = (byte)((ulong)(long)(int)uVar6 >> 0x38) | 0x80;
        lVar12 = 10;
        param_4[10] = 0x81;
      }
      uVar5 = (int)uVar6 >> 0x1f;
      param_4[8] = (byte)(uVar5 >> 0x11) | 0x80;
      param_4[6] = (byte)(uVar5 >> 3) | 0x80;
      param_4[5] = (byte)((int)uVar6 >> 0x1c) | 0x80;
      param_4[4] = (byte)(uVar6 >> 0x15) | 0x80;
      param_4[3] = (byte)(uVar6 >> 0xe) | 0x80;
      param_4[7] = (byte)(uVar5 >> 10) | 0x80;
      param_4[1] = (byte)uVar6 | 0x80;
      uVar5 = (int)lVar12 - 1;
      param_4[2] = (byte)(uVar6 >> 7) | 0x80;
      pbVar8[uVar5] = pbVar8[uVar5] & 0x7f;
      return pbVar8 + lVar12;
    }
    if (0x7f < uVar6) {
      pbVar9 = pbVar8;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar16 = uVar5 >> 0xe;
        pbVar8 = pbVar9 + 1;
        *pbVar9 = (byte)uVar5 | 0x80;
        pbVar9 = pbVar8;
        uVar5 = uVar6;
      } while (uVar16 != 0);
    }
    goto LAB_00c1ea00;
  case '\x06':
    uVar15 = *param_1;
    uVar6 = iVar7 << 3 | 1;
    if (0x7f < uVar6) {
      pbVar8 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar16 = uVar5 >> 0xe;
        param_4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5 | 0x80;
        pbVar8 = param_4;
        uVar5 = uVar6;
      } while (uVar16 != 0);
    }
    goto LAB_00c1ea7c;
  case '\a':
    uVar5 = (uint)*param_1;
    uVar6 = iVar7 << 3 | 5;
    if (0x7f < uVar6) {
      pbVar8 = param_4;
      uVar16 = uVar6;
      do {
        uVar6 = uVar16 >> 7;
        uVar17 = uVar16 >> 0xe;
        param_4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar16 | 0x80;
        pbVar8 = param_4;
        uVar16 = uVar6;
      } while (uVar17 != 0);
    }
    goto LAB_00c1ea3c;
  case '\b':
    uVar15 = *param_1;
    uVar6 = iVar7 << 3;
    if (0x7f < uVar6) {
      pbVar8 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar16 = uVar5 >> 0xe;
        param_4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5 | 0x80;
        pbVar8 = param_4;
        uVar5 = uVar6;
      } while (uVar16 != 0);
    }
    *param_4 = (byte)uVar6;
    param_4[1] = (byte)uVar15;
    param_4 = param_4 + 2;
    break;
  case '\t':
    pbVar8 = (byte *)*param_1;
    uVar6 = iVar7 << 3 | 2;
    if (0x7f < uVar6) {
      pbVar9 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar16 = uVar5 >> 0xe;
        param_4 = pbVar9 + 1;
        *pbVar9 = (byte)uVar5 | 0x80;
        pbVar9 = param_4;
        uVar5 = uVar6;
      } while (uVar16 != 0);
    }
    pbVar9 = param_4 + 1;
    *param_4 = (byte)uVar6;
    uVar6 = (uint)(*pbVar8 >> 1);
    if ((*pbVar8 & 1) != 0) {
      uVar6 = *(uint *)(pbVar8 + 8);
    }
    if (0x7f < uVar6) {
      pbVar18 = pbVar9;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar16 = uVar5 >> 0xe;
        pbVar9 = pbVar18 + 1;
        *pbVar18 = (byte)uVar5 | 0x80;
        pbVar18 = pbVar9;
        uVar5 = uVar6;
      } while (uVar16 != 0);
    }
    goto LAB_00c1e914;
  case '\n':
    plVar19 = (long *)*param_1;
    uVar6 = iVar7 << 3 | 3;
    if (0x7f < uVar6) {
      pbVar8 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar16 = uVar5 >> 0xe;
        param_4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5 | 0x80;
        pbVar8 = param_4;
        uVar5 = uVar6;
      } while (uVar16 != 0);
    }
    *param_4 = (byte)uVar6;
    pbVar8 = (byte *)(**(code **)(*plVar19 + 0x80))(plVar19,0,param_4 + 1);
    uVar6 = iVar7 << 3 | 4;
    if (0x7f < uVar6) {
      pbVar9 = pbVar8;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar16 = uVar5 >> 0xe;
        pbVar8 = pbVar9 + 1;
        *pbVar9 = (byte)uVar5 | 0x80;
        pbVar9 = pbVar8;
        uVar5 = uVar6;
      } while (uVar16 != 0);
    }
    goto LAB_00c1eae8;
  case '\v':
    if ((*(byte *)((long)param_1 + 10) >> 4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00c1ec34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pbVar8 = (byte *)(**(code **)(*(long *)*param_1 + 0x88))
                                 ((long *)*param_1,param_2,param_3 & 1,param_4);
      return pbVar8;
    }
    plVar19 = (long *)*param_1;
    uVar6 = iVar7 << 3 | 2;
    if (0x7f < uVar6) {
      pbVar8 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar16 = uVar5 >> 0xe;
        param_4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5 | 0x80;
        pbVar8 = param_4;
        uVar5 = uVar6;
      } while (uVar16 != 0);
    }
    pbVar8 = param_4 + 1;
    *param_4 = (byte)uVar6;
    uVar15 = (**(code **)(*plVar19 + 0x78))(plVar19);
    uVar6 = (uint)uVar15;
    if (0x7f < uVar6) {
      uVar10 = uVar15 & 0xffffffff;
      pbVar9 = pbVar8;
      do {
        bVar2 = (byte)uVar15;
        uVar15 = uVar10 >> 7;
        uVar6 = (uint)uVar15;
        uVar4 = uVar10 >> 0xe;
        pbVar8 = pbVar9 + 1;
        *pbVar9 = bVar2 | 0x80;
        uVar10 = uVar15;
        pbVar9 = pbVar8;
      } while (uVar4 != 0);
    }
    *pbVar8 = (byte)uVar6;
                    /* WARNING: Could not recover jumptable at 0x00c1e8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar8 = (byte *)(**(code **)(*plVar19 + 0x80))(plVar19,param_3 & 1,pbVar8 + 1);
    return pbVar8;
  case '\f':
    pbVar8 = (byte *)*param_1;
    uVar6 = iVar7 << 3 | 2;
    if (0x7f < uVar6) {
      pbVar9 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar16 = uVar5 >> 0xe;
        param_4 = pbVar9 + 1;
        *pbVar9 = (byte)uVar5 | 0x80;
        pbVar9 = param_4;
        uVar5 = uVar6;
      } while (uVar16 != 0);
    }
    pbVar9 = param_4 + 1;
    *param_4 = (byte)uVar6;
    uVar6 = (uint)(*pbVar8 >> 1);
    if ((*pbVar8 & 1) != 0) {
      uVar6 = *(uint *)(pbVar8 + 8);
    }
    if (0x7f < uVar6) {
      pbVar18 = pbVar9;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar16 = uVar5 >> 0xe;
        pbVar9 = pbVar18 + 1;
        *pbVar18 = (byte)uVar5 | 0x80;
        pbVar18 = pbVar9;
        uVar5 = uVar6;
      } while (uVar16 != 0);
    }
LAB_00c1e914:
    *pbVar9 = (byte)uVar6;
    pbVar18 = *(byte **)(pbVar8 + 0x10);
    uVar6 = (uint)(*pbVar8 >> 1);
    if ((*pbVar8 & 1) == 0) {
      pbVar18 = pbVar8 + 1;
    }
    else {
      uVar6 = (uint)*(undefined8 *)(pbVar8 + 8);
    }
    memcpy(pbVar9 + 1,pbVar18,(long)(int)uVar6);
    param_4 = pbVar9 + 1 + (int)uVar6;
    break;
  case '\r':
    uVar6 = (uint)*param_1;
    uVar5 = iVar7 << 3;
    if (0x7f < uVar5) {
      pbVar8 = param_4;
      uVar16 = uVar5;
      do {
        uVar5 = uVar16 >> 7;
        uVar17 = uVar16 >> 0xe;
        param_4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar16 | 0x80;
        pbVar8 = param_4;
        uVar16 = uVar5;
      } while (uVar17 != 0);
    }
    pbVar8 = param_4 + 1;
    *param_4 = (byte)uVar5;
    if (0x7f < uVar6) {
      pbVar9 = pbVar8;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar16 = uVar5 >> 0xe;
        pbVar8 = pbVar9 + 1;
        *pbVar9 = (byte)uVar5 | 0x80;
        pbVar9 = pbVar8;
        uVar5 = uVar6;
      } while (uVar16 != 0);
    }
    goto LAB_00c1eae8;
  case '\x0e':
    uVar6 = (uint)*param_1;
    uVar5 = iVar7 << 3;
    if (0x7f < uVar5) {
      pbVar8 = param_4;
      uVar16 = uVar5;
      do {
        uVar5 = uVar16 >> 7;
        uVar17 = uVar16 >> 0xe;
        param_4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar16 | 0x80;
        pbVar8 = param_4;
        uVar16 = uVar5;
      } while (uVar17 != 0);
    }
    pbVar8 = param_4 + 1;
    *param_4 = (byte)uVar5;
    if ((int)uVar6 < 0) goto LAB_00c1eb68;
    if (0x7f < uVar6) {
      pbVar9 = pbVar8;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar16 = uVar5 >> 0xe;
        pbVar8 = pbVar9 + 1;
        *pbVar9 = (byte)uVar5 | 0x80;
        pbVar9 = pbVar8;
        uVar5 = uVar6;
      } while (uVar16 != 0);
    }
LAB_00c1ea00:
    param_4 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
    break;
  case '\x0f':
    uVar5 = (uint)*param_1;
    uVar6 = iVar7 << 3 | 5;
    if (0x7f < uVar6) {
      pbVar8 = param_4;
      uVar16 = uVar6;
      do {
        uVar6 = uVar16 >> 7;
        uVar17 = uVar16 >> 0xe;
        param_4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar16 | 0x80;
        pbVar8 = param_4;
        uVar16 = uVar6;
      } while (uVar17 != 0);
    }
LAB_00c1ea3c:
    *param_4 = (byte)uVar6;
    *(uint *)(param_4 + 1) = uVar5;
    param_4 = param_4 + 5;
    break;
  case '\x10':
    uVar15 = *param_1;
    uVar6 = iVar7 << 3 | 1;
    if (0x7f < uVar6) {
      pbVar8 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar16 = uVar5 >> 0xe;
        param_4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5 | 0x80;
        pbVar8 = param_4;
        uVar5 = uVar6;
      } while (uVar16 != 0);
    }
LAB_00c1ea7c:
    *param_4 = (byte)uVar6;
    *(ulong *)(param_4 + 1) = uVar15;
    param_4 = param_4 + 9;
    break;
  case '\x11':
    uVar15 = *param_1;
    uVar6 = iVar7 << 3;
    if (0x7f < uVar6) {
      pbVar8 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar16 = uVar5 >> 0xe;
        param_4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5 | 0x80;
        pbVar8 = param_4;
        uVar5 = uVar6;
      } while (uVar16 != 0);
    }
    pbVar8 = param_4 + 1;
    *param_4 = (byte)uVar6;
    uVar6 = (uint)uVar15 << 1 ^ (int)(uint)uVar15 >> 0x1f;
    if (0x7f < uVar6) {
      pbVar9 = pbVar8;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar16 = uVar5 >> 0xe;
        pbVar8 = pbVar9 + 1;
        *pbVar9 = (byte)uVar5 | 0x80;
        pbVar9 = pbVar8;
        uVar5 = uVar6;
      } while (uVar16 != 0);
    }
LAB_00c1eae8:
    param_4 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
    break;
  case '\x12':
    uVar15 = *param_1;
    uVar6 = iVar7 << 3;
    if (0x7f < uVar6) {
      pbVar8 = param_4;
      uVar5 = uVar6;
      do {
        uVar6 = uVar5 >> 7;
        uVar16 = uVar5 >> 0xe;
        param_4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5 | 0x80;
        pbVar8 = param_4;
        uVar5 = uVar6;
      } while (uVar16 != 0);
    }
    pbVar8 = param_4 + 1;
    *param_4 = (byte)uVar6;
    uVar15 = uVar15 << 1 ^ (long)uVar15 >> 0x3f;
    bVar2 = (byte)(uVar15 >> 0x38);
    uVar5 = (uint)uVar15;
    uVar16 = (uint)(uVar15 >> 0x1c);
    uVar6 = (uint)(uVar15 >> 0x20);
    if (bVar2 == 0) {
      if (uVar16 != 0) {
        if (uVar16 >> 0xe != 0) {
          if (0x1fffff < uVar16) {
            lVar12 = 8;
            goto LAB_00c1f664;
          }
          lVar12 = 7;
          goto LAB_00c1f670;
        }
        if (0x7f < uVar16) {
          lVar12 = 6;
          goto LAB_00c1f67c;
        }
        lVar12 = 5;
        goto LAB_00c1f688;
      }
      if ((uVar15 >> 0xe & 0x3ffff) != 0) {
        if (0x1fffff < uVar5) {
          lVar12 = 4;
          goto LAB_00c1f690;
        }
        lVar12 = 3;
        goto LAB_00c1f69c;
      }
      if (0x7f < uVar5) {
        lVar12 = 2;
        goto LAB_00c1f6a4;
      }
      lVar12 = 1;
    }
    else {
      if (bVar2 < 0x80) {
        lVar12 = 9;
      }
      else {
        param_4[10] = 0x81;
        lVar12 = 10;
      }
      param_4[9] = bVar2 | 0x80;
LAB_00c1f664:
      param_4[8] = (byte)(uVar6 >> 0x11) | 0x80;
LAB_00c1f670:
      param_4[7] = (byte)(uVar6 >> 10) | 0x80;
LAB_00c1f67c:
      param_4[6] = (byte)(uVar6 >> 3) | 0x80;
LAB_00c1f688:
      param_4[5] = (byte)(uVar15 >> 0x1c) | 0x80;
LAB_00c1f690:
      param_4[4] = (byte)(uVar5 >> 0x15) | 0x80;
LAB_00c1f69c:
      param_4[3] = (byte)(uVar15 >> 0xe) | 0x80;
LAB_00c1f6a4:
      param_4[2] = (byte)(uVar5 >> 7) | 0x80;
    }
    *pbVar8 = (byte)uVar15 | 0x80;
    uVar6 = (int)lVar12 - 1;
    pbVar8[uVar6] = pbVar8[uVar6] & 0x7f;
    param_4 = pbVar8 + lVar12;
  }
  return param_4;
}


