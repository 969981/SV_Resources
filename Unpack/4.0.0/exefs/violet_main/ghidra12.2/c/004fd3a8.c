/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004fd3a8; name: FUN_004fd3a8
 */


void FUN_004fd3a8(byte *param_1,ulong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_e0 [128];
  
  bVar2 = *param_1;
  bVar3 = bVar2 & 1;
  uVar14 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar14 = *(ulong *)(param_1 + 8);
  }
  if (uVar14 == 0) {
    return;
  }
  if (((byte)*param_2 & 1) == 0) {
    if ((byte)((byte)*param_2 >> 1) + uVar14 < 0x17) goto LAB_004fd42c;
  }
  else if (param_2[1] + uVar14 <= (*param_2 & 0xfffffffffffffffe) - 1) goto LAB_004fd42c;
  FUN_002cdbb0(param_2);
  bVar3 = *param_1 & 1;
LAB_004fd42c:
  pbVar5 = *(byte **)(param_1 + 0x10);
  if (bVar3 == 0) {
    pbVar5 = param_1 + 1;
  }
LAB_004fd470:
  while( true ) {
    pbVar11 = pbVar5 + 1;
    bVar3 = *pbVar11;
    if (bVar3 == 0x5c) break;
    if (bVar3 == 0) {
      return;
    }
LAB_004fd4d4:
    pbVar12 = param_1 + 1;
    if ((*param_1 & 1) != 0) {
      pbVar12 = *(byte **)(param_1 + 0x10);
    }
    if ((bVar3 != *pbVar12) || (pbVar12 = pbVar5 + 2, pbVar5 = pbVar11, *pbVar12 != 0)) {
      FUN_002cdcec(param_2,bVar3);
      pbVar5 = pbVar11;
    }
  }
  pbVar12 = pbVar5 + 2;
  bVar2 = *pbVar12;
  if (bVar2 == 0) goto LAB_004fd4d4;
  uVar4 = (uint)bVar2;
  if ((bVar2 & 0xf8) == 0x30) {
    uVar7 = uVar4 - 0x30;
    if (uVar7 < 10) {
LAB_004fd4c0:
      bVar3 = pbVar5[3];
    }
    else {
      if (uVar4 - 0x61 < 0x1a) {
        uVar7 = uVar4 - 0x57;
        goto LAB_004fd4c0;
      }
      uVar7 = uVar4 - 0x37;
      if (0x19 < uVar4 - 0x41) {
        uVar7 = 0xffffffff;
      }
      bVar3 = pbVar5[3];
    }
    if ((bVar3 & 0xf8) == 0x30) {
      uVar6 = (uint)bVar3;
      pbVar12 = pbVar5 + 3;
      uVar4 = uVar6 - 0x30;
      if (9 < uVar4) {
        if (uVar6 - 0x61 < 0x1a) {
          uVar4 = uVar6 - 0x57;
        }
        else {
          uVar4 = uVar6 - 0x37;
          if (0x19 < uVar6 - 0x41) {
            uVar4 = 0xffffffff;
          }
        }
      }
      uVar7 = uVar4 + uVar7 * 8;
    }
    bVar3 = pbVar12[1];
    if ((bVar3 & 0xf8) == 0x30) {
      uVar4 = bVar3 - 0x30;
      if (9 < uVar4) {
        uVar6 = (uint)bVar3;
        if (uVar6 - 0x61 < 0x1a) {
          uVar4 = uVar6 - 0x57;
        }
        else {
          uVar4 = uVar6 - 0x37;
          if (0x19 < uVar6 - 0x41) {
            uVar4 = 0xffffffff;
          }
        }
      }
      pbVar12 = pbVar12 + 1;
      uVar7 = uVar4 + uVar7 * 8;
    }
    goto switchD_004fd51c_caseD_61;
  }
  uVar7 = 7;
  switch(uVar4) {
  case 0x22:
  case 0x27:
  case 0x3f:
  case 0x5c:
    uVar7 = (uint)bVar2;
    break;
  default:
    uVar7 = 0x3f;
    break;
  case 0x55:
  case 0x75:
    uVar7 = 4;
    if (uVar4 != 0x75) {
      uVar7 = (uint)(uVar4 == 0x55) << 3;
    }
    if (uVar7 == 0) {
LAB_004fd6a0:
      FUN_002cdcec(param_2);
      pbVar5 = pbVar12;
    }
    else {
      uVar14 = (ulong)(uVar7 | 3);
      uVar4 = 0;
      pbVar11 = pbVar5 + 3;
      pbVar1 = pbVar5 + uVar14;
      do {
        bVar3 = *pbVar11;
        if (bVar3 == 0) goto LAB_004fd6a0;
        uVar6 = (uint)bVar3;
        uVar7 = uVar6 - 0x37;
        if (0x19 < bVar3 - 0x41) {
          uVar7 = 0xffffffff;
        }
        if (uVar6 - 0x61 < 0x1a) {
          uVar7 = uVar6 - 0x57;
        }
        pbVar11 = pbVar11 + 1;
        if (uVar6 - 0x30 < 10) {
          uVar7 = uVar6 - 0x30;
        }
        uVar4 = uVar7 + uVar4 * 0x10;
      } while (pbVar11 < pbVar1);
      if (((uVar4 >> 10 == 0x36) && (*pbVar1 == 0x5c)) && (pbVar1[1] == 0x75)) {
        bVar3 = pbVar1[2];
        if (bVar3 != 0) {
          uVar7 = bVar3 - 0x30;
          if (9 < uVar7) {
            uVar6 = (uint)bVar3;
            if (uVar6 - 0x61 < 0x1a) {
              uVar7 = uVar6 - 0x57;
            }
            else {
              uVar7 = uVar6 - 0x37;
              if (0x19 < uVar6 - 0x41) {
                uVar7 = 0xffffffff;
              }
            }
          }
          bVar3 = pbVar1[3];
          if (bVar3 != 0) {
            uVar6 = bVar3 - 0x30;
            if (9 < uVar6) {
              uVar8 = (uint)bVar3;
              if (uVar8 - 0x61 < 0x1a) {
                uVar6 = uVar8 - 0x57;
              }
              else {
                uVar6 = uVar8 - 0x37;
                if (0x19 < uVar8 - 0x41) {
                  uVar6 = 0xffffffff;
                }
              }
            }
            bVar3 = pbVar1[4];
            if (bVar3 != 0) {
              uVar8 = bVar3 - 0x30;
              if (9 < uVar8) {
                uVar9 = (uint)bVar3;
                if (uVar9 - 0x61 < 0x1a) {
                  uVar8 = uVar9 - 0x57;
                }
                else {
                  uVar8 = uVar9 - 0x37;
                  if (0x19 < uVar9 - 0x41) {
                    uVar8 = 0xffffffff;
                  }
                }
              }
              bVar3 = pbVar1[5];
              if (bVar3 != 0) {
                uVar9 = bVar3 - 0x30;
                if (9 < uVar9) {
                  uVar10 = (uint)bVar3;
                  if (uVar10 - 0x61 < 0x1a) {
                    uVar9 = uVar10 - 0x57;
                  }
                  else {
                    uVar9 = uVar10 - 0x37;
                    if (0x19 < uVar10 - 0x41) {
                      uVar9 = 0xffffffff;
                    }
                  }
                }
                uVar9 = uVar9 + (uVar8 + (uVar6 + uVar7 * 0x10) * 0x10) * 0x10;
                if (uVar9 >> 10 == 0x37) {
                  uVar4 = (uVar9 - 0xdc00 | uVar4 * 0x400 + 0xfca00000) + 0x10000;
                  uVar14 = uVar14 + 6;
                }
              }
            }
          }
        }
      }
      if (uVar4 < 0x80) {
        lVar13 = 1;
LAB_004fd954:
        FUN_00532460(uVar4);
        FUN_0021d540(param_2,auStack_e0 + (0x80 - lVar13),lVar13);
      }
      else {
        if (uVar4 < 0x800) {
          uVar4 = (uVar4 & 0x7c0) << 2 | uVar4 & 0x3f | 0xc080;
          lVar13 = 2;
          goto LAB_004fd954;
        }
        if (uVar4 >> 0x10 == 0) {
          uVar4 = (uVar4 & 0xfc0) << 2 | uVar4 & 0x3f | (uVar4 >> 0xc & 0xf) << 0x10 | 0xe08080;
          lVar13 = 3;
          goto LAB_004fd954;
        }
        if (uVar4 >> 0x15 == 0) {
          uVar4 = (uVar4 & 0x3f000) << 4 | (uVar4 >> 0x12 & 7) << 0x18 |
                  uVar4 & 0x3f | (uVar4 >> 6 & 0x3f) << 8 | 0xf0808080;
          lVar13 = 4;
          goto LAB_004fd954;
        }
        FUN_005326f0(param_2,"\\U%08x");
      }
      pbVar5 = pbVar5 + (uVar14 - 1);
    }
    goto LAB_004fd470;
  case 0x61:
    break;
  case 0x62:
    uVar7 = 8;
    break;
  case 0x66:
    uVar7 = 0xc;
    break;
  case 0x6e:
    uVar7 = 10;
    break;
  case 0x72:
    uVar7 = 0xd;
    break;
  case 0x74:
    uVar7 = 9;
    break;
  case 0x76:
    uVar7 = 0xb;
    break;
  case 0x78:
    bVar3 = pbVar5[3];
    uVar4 = bVar3 - 0x30;
    if (uVar4 < 10) {
LAB_004fd738:
      pbVar12 = pbVar5 + 3;
    }
    else {
      uVar7 = bVar3 - 0x41;
      uVar4 = 0;
      if ((uVar7 < 0x26) && ((1L << ((ulong)uVar7 & 0x3f) & 0x3f0000003fU) != 0)) {
        uVar4 = (uint)bVar3;
        if ((uVar4 - 0x61 & 0xff) < 0x1a) {
          uVar4 = uVar4 - 0x57;
        }
        else {
          uVar4 = uVar4 - 0x37;
          if (0x19 < uVar7) {
            uVar4 = 0xffffffff;
          }
        }
        goto LAB_004fd738;
      }
    }
    bVar3 = pbVar12[1];
    uVar7 = bVar3 - 0x30;
    if (uVar7 < 10) {
LAB_004fd798:
      uVar4 = uVar7 + uVar4 * 0x10;
      pbVar12 = pbVar12 + 1;
    }
    else {
      uVar6 = bVar3 - 0x41;
      if ((uVar6 < 0x26) && ((1L << ((ulong)uVar6 & 0x3f) & 0x3f0000003fU) != 0)) {
        uVar7 = (uint)bVar3;
        if ((uVar7 - 0x61 & 0xff) < 0x1a) {
          uVar7 = uVar7 - 0x57;
        }
        else {
          uVar7 = uVar7 - 0x37;
          if (0x19 < uVar6) {
            uVar7 = 0xffffffff;
          }
        }
        goto LAB_004fd798;
      }
    }
    FUN_002cdcec(param_2,uVar4);
    pbVar5 = pbVar12;
    goto LAB_004fd470;
  }
switchD_004fd51c_caseD_61:
  FUN_002cdcec(param_2,uVar7);
  pbVar5 = pbVar12;
  goto LAB_004fd470;
}


