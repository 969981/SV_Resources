/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c3070c; name: FUN_00c3070c
 */


void FUN_00c3070c(byte *param_1,ulong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbVar19;
  ulong local_a8 [3];
  uint local_90;
  undefined1 auStack_8c [4];
  char *local_88;
  undefined4 local_80;
  char local_78 [24];
  
  bVar3 = *param_1;
  uVar18 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar18 = *(ulong *)(param_1 + 8);
  }
  if (uVar18 == 0) {
    local_78[0x10] = '\0';
    local_78[0x11] = '\0';
    local_78[0x12] = '\0';
    local_78[0x13] = '\0';
    local_78[0x14] = '\0';
    local_78[0x15] = '\0';
    local_78[0x16] = '\0';
    local_78[0x17] = '\0';
    local_90 = 2;
    local_80 = 0x415;
    local_88 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/io/tokenizer.cc"
    ;
    local_78[0] = '\0';
    local_78[1] = '\0';
    local_78[2] = '\0';
    local_78[3] = '\0';
    local_78[4] = '\0';
    local_78[5] = '\0';
    local_78[6] = '\0';
    local_78[7] = '\0';
    local_78[8] = '\0';
    local_78[9] = '\0';
    local_78[10] = '\0';
    local_78[0xb] = '\0';
    local_78[0xc] = '\0';
    local_78[0xd] = '\0';
    local_78[0xe] = '\0';
    local_78[0xf] = '\0';
    std::string::append(local_78);
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_a8[0] = 0;
    uVar18 = *(ulong *)(param_1 + 8);
    pbVar7 = *(byte **)(param_1 + 0x10);
    if ((*param_1 & 1) == 0) {
      pbVar7 = param_1 + 1;
      uVar18 = (ulong)(*param_1 >> 1);
    }
    FUN_00c0fad0(pbVar7,uVar18,local_a8);
    uVar18 = (ulong)local_a8 | 1;
    if ((local_a8[0] & 1) != 0) {
      uVar18 = local_a8[2];
    }
    std::string::append(local_78,uVar18);
    FUN_00bb0e90(&local_90);
    uVar18 = local_a8[2];
    if (((local_a8[0] & 1) != 0) && (local_a8[2] != 0)) {
      lVar8 = tpidr_el0;
      plVar16 = *(long **)(lVar8 + 0x30);
      if (plVar16 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar16 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar10 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,uVar18,0,8);
      }
      else {
        FUN_00c48fe8(plVar16,uVar18,0,8);
      }
    }
    FUN_00bb0d74(&local_90);
    return;
  }
  if (((byte)*param_2 & 1) == 0) {
    uVar10 = (ulong)(byte)((byte)*param_2 >> 1);
    uVar12 = 0x16;
  }
  else {
    uVar10 = param_2[1];
    uVar12 = (*param_2 & 0xfffffffffffffffe) - 1;
  }
  if (uVar12 < uVar10 + uVar18) {
    std::string::reserve((ulong)param_2);
    bVar3 = *param_1;
  }
  pbVar7 = *(byte **)(param_1 + 0x10);
  if ((bVar3 & 1) == 0) {
    pbVar7 = param_1 + 1;
  }
LAB_00c30878:
  while( true ) {
    pbVar17 = pbVar7 + 1;
    bVar3 = *pbVar17;
    cVar4 = (char)param_2;
    if (bVar3 == 0x5c) break;
    if (bVar3 == 0) {
      return;
    }
LAB_00c308cc:
    pbVar19 = param_1 + 1;
    if ((*param_1 & 1) != 0) {
      pbVar19 = *(byte **)(param_1 + 0x10);
    }
    if ((bVar3 != *pbVar19) || (pbVar19 = pbVar7 + 2, pbVar7 = pbVar17, *pbVar19 != 0)) {
      std::string::push_back(cVar4);
      pbVar7 = pbVar17;
    }
  }
  pbVar19 = pbVar7 + 2;
  bVar2 = *pbVar19;
  if (bVar2 == 0) goto LAB_00c308cc;
  if ((bVar2 & 0xf8) == 0x30) {
    if ((pbVar7[3] & 0xf8) == 0x30) {
      pbVar19 = pbVar7 + 3;
    }
    pbVar7 = pbVar19;
    if ((pbVar19[1] & 0xf8) == 0x30) {
      pbVar7 = pbVar19 + 1;
    }
    std::string::push_back(cVar4);
    goto LAB_00c30878;
  }
  if (bVar2 < 0x62) {
    if (bVar2 < 0x55) {
      if (((bVar2 != 0x22) && (bVar2 != 0x27)) && (bVar2 != 0x3f)) goto switchD_00c3094c_caseD_6f;
    }
    else {
      if (bVar2 == 0x55) goto switchD_00c3094c_caseD_75;
      if ((bVar2 != 0x5c) && (bVar2 != 0x61)) goto switchD_00c3094c_caseD_6f;
    }
    goto LAB_00c30bf0;
  }
  switch(bVar2) {
  case 0x6e:
    break;
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x73:
  case 0x77:
switchD_00c3094c_caseD_6f:
    break;
  case 0x72:
    break;
  case 0x74:
    break;
  case 0x75:
switchD_00c3094c_caseD_75:
    uVar6 = 4;
    if (bVar2 != 0x75) {
      uVar6 = (uint)(bVar2 == 0x55) << 3;
    }
    if (uVar6 == 0) break;
    uVar18 = (ulong)(uVar6 | 3);
    uVar6 = 0;
    pbVar17 = pbVar7 + 3;
    pbVar1 = pbVar7 + uVar18;
    do {
      bVar3 = *pbVar17;
      if (bVar3 == 0) goto LAB_00c30bf0;
      uVar11 = (uint)bVar3;
      uVar9 = uVar11 - 0x37;
      if (0x19 < bVar3 - 0x41) {
        uVar9 = 0xffffffff;
      }
      if (uVar11 - 0x61 < 0x1a) {
        uVar9 = uVar11 - 0x57;
      }
      pbVar17 = pbVar17 + 1;
      if (uVar11 - 0x30 < 10) {
        uVar9 = uVar11 - 0x30;
      }
      uVar6 = uVar9 + uVar6 * 0x10;
    } while (pbVar17 < pbVar1);
    if (((uVar6 >> 10 == 0x36) && (*pbVar1 == 0x5c)) && (pbVar1[1] == 0x75)) {
      bVar3 = pbVar1[2];
      if (bVar3 != 0) {
        uVar9 = bVar3 - 0x30;
        if (9 < uVar9) {
          uVar11 = (uint)bVar3;
          if (uVar11 - 0x61 < 0x1a) {
            uVar9 = uVar11 - 0x57;
          }
          else {
            uVar9 = uVar11 - 0x37;
            if (0x19 < uVar11 - 0x41) {
              uVar9 = 0xffffffff;
            }
          }
        }
        bVar3 = pbVar1[3];
        if (bVar3 != 0) {
          uVar11 = bVar3 - 0x30;
          if (9 < uVar11) {
            uVar13 = (uint)bVar3;
            if (uVar13 - 0x61 < 0x1a) {
              uVar11 = uVar13 - 0x57;
            }
            else {
              uVar11 = uVar13 - 0x37;
              if (0x19 < uVar13 - 0x41) {
                uVar11 = 0xffffffff;
              }
            }
          }
          bVar3 = pbVar1[4];
          if (bVar3 != 0) {
            uVar13 = bVar3 - 0x30;
            if (9 < uVar13) {
              uVar14 = (uint)bVar3;
              if (uVar14 - 0x61 < 0x1a) {
                uVar13 = uVar14 - 0x57;
              }
              else {
                uVar13 = uVar14 - 0x37;
                if (0x19 < uVar14 - 0x41) {
                  uVar13 = 0xffffffff;
                }
              }
            }
            bVar3 = pbVar1[5];
            if (bVar3 != 0) {
              uVar14 = bVar3 - 0x30;
              if (9 < uVar14) {
                uVar15 = (uint)bVar3;
                if (uVar15 - 0x61 < 0x1a) {
                  uVar14 = uVar15 - 0x57;
                }
                else {
                  uVar14 = uVar15 - 0x37;
                  if (0x19 < uVar15 - 0x41) {
                    uVar14 = 0xffffffff;
                  }
                }
              }
              uVar14 = uVar14 + (uVar13 + (uVar11 + uVar9 * 0x10) * 0x10) * 0x10;
              if (uVar14 >> 10 == 0x37) {
                uVar6 = (uVar14 - 0xdc00 | uVar6 * 0x400 + 0xfca00000) + 0x10000;
                uVar18 = uVar18 + 6;
              }
            }
          }
        }
      }
    }
    local_90 = 0;
    if (uVar6 < 0x80) {
      lVar8 = 1;
LAB_00c30d9c:
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      local_90 = uVar6 >> 0x10 | uVar6 << 0x10;
      std::string::append((char *)param_2,(ulong)(auStack_8c + -lVar8));
    }
    else {
      if (uVar6 < 0x800) {
        uVar6 = (uVar6 & 0x7c0) << 2 | uVar6 & 0x3f | 0xc080;
        lVar8 = 2;
        goto LAB_00c30d9c;
      }
      if (uVar6 >> 0x10 == 0) {
        uVar6 = (uVar6 & 0xfc0) << 2 | uVar6 & 0x3f | (uVar6 >> 0xc & 0xf) << 0x10 | 0xe08080;
        lVar8 = 3;
        goto LAB_00c30d9c;
      }
      if (uVar6 >> 0x15 == 0) {
        uVar6 = (uVar6 & 0x3f000) << 4 | (uVar6 >> 0x12 & 7) << 0x18 |
                uVar6 & 0x3f | (uVar6 >> 6 & 0x3f) << 8 | 0xf0808080;
        lVar8 = 4;
        goto LAB_00c30d9c;
      }
      FUN_00c0e0d0(param_2,"\\U%08x");
    }
    pbVar7 = pbVar7 + (uVar18 - 1);
    goto LAB_00c30878;
  case 0x76:
    break;
  case 0x78:
    uVar6 = (uint)pbVar7[3];
    if (uVar6 - 0x30 < 10) {
LAB_00c30b84:
      pbVar19 = pbVar7 + 3;
    }
    else {
      uVar6 = uVar6 - 0x41;
      if ((uVar6 < 0x26) && ((1L << ((ulong)uVar6 & 0x3f) & 0x3f0000003fU) != 0)) goto LAB_00c30b84;
    }
    uVar6 = (uint)pbVar19[1];
    if (9 < uVar6 - 0x30) {
      uVar6 = uVar6 - 0x41;
      if ((0x25 < uVar6) || ((1L << ((ulong)uVar6 & 0x3f) & 0x3f0000003fU) == 0)) break;
    }
    pbVar19 = pbVar19 + 1;
    break;
  default:
    if ((bVar2 != 0x62) && (bVar2 != 0x66)) goto switchD_00c3094c_caseD_6f;
  }
LAB_00c30bf0:
  pbVar7 = pbVar19;
  std::string::push_back(cVar4);
  goto LAB_00c30878;
}


