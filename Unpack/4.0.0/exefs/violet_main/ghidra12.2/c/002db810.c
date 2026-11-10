/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002db810; name: FUN_002db810
 */


void FUN_002db810(long param_1,ulong param_2,uint param_3,uint param_4)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  char *pcVar16;
  char *pcVar17;
  byte abStack_41 [9];
  uint local_38;
  uint auStack_34 [13];
  
  while( true ) {
    auStack_34[0] = (uint)param_2;
    if ((int)param_3 < (int)auStack_34[0]) {
      return;
    }
    local_38 = param_3;
    if ((auStack_34[0] == 0x80) && (param_3 == 0x10ffff)) break;
    if (((int)auStack_34[0] < 0x80) && (0x7f < (int)param_3)) {
      uVar5 = 0x7f;
LAB_002db8b8:
      FUN_002db810(param_1,param_2,uVar5,param_4 & 1);
      uVar5 = uVar5 + 1;
    }
    else {
      if (((int)auStack_34[0] < 0x800) && (0x7ff < (int)param_3)) {
        uVar5 = 0x7ff;
        goto LAB_002db8b8;
      }
      if (((int)auStack_34[0] < 0x10000) && (0xffff < (int)param_3)) {
        uVar5 = 0xffff;
        goto LAB_002db8b8;
      }
      if ((int)param_3 < 0x80) {
        uVar8 = FUN_002da6c4(param_1,auStack_34[0] & 0xff,param_3 & 0xff,param_4 & 1);
        uVar5 = *(uint *)(param_1 + 0xa4);
        uVar12 = (uint)((ulong)uVar8 >> 0x20);
        uVar11 = uVar12;
        if ((uVar5 != 0) && (uVar11 = uVar5, uVar12 != 0)) {
          lVar13 = *(long *)(param_1 + 0x58);
          do {
            uVar15 = uVar5;
            if ((uVar15 & 1) == 0) {
              uVar5 = *(uint *)(lVar13 + (ulong)(uVar15 >> 1) * 8) >> 4;
            }
            else {
              uVar5 = *(uint *)(lVar13 + (ulong)(uVar15 >> 1) * 8 + 4);
            }
          } while (uVar5 != 0);
          if ((uVar15 & 1) == 0) {
            lVar14 = (ulong)(uVar15 >> 1) * 8;
            uVar5 = *(uint *)(lVar13 + lVar14);
            *(uint *)(lVar13 + lVar14) = uVar5 & 8 | uVar12 << 4 | uVar5 & 7;
          }
          else {
            *(uint *)(lVar13 + (ulong)(uVar15 >> 1) * 8 + 4) = uVar12;
          }
        }
        *(uint *)(param_1 + 0xa4) = uVar11;
        FUN_002db13c(param_1,uVar8);
        return;
      }
      uVar5 = param_3 & 0xffffffc0;
      if ((auStack_34[0] & 0xffffffc0) == uVar5) {
LAB_002db98c:
        uVar5 = param_3 & 0xfffff000;
        if ((auStack_34[0] & 0xfffff000) != uVar5) {
          if ((param_2 & 0xfff) != 0) {
            uVar5 = auStack_34[0] | 0xfff;
            goto LAB_002db8b8;
          }
          if ((~param_3 & 0xfff) != 0) goto LAB_002dbb8c;
        }
        uVar5 = param_3 & 0xfffc0000;
        if ((auStack_34[0] & 0xfffc0000) != uVar5) {
          if ((param_2 & 0x3ffff) != 0) {
            uVar5 = auStack_34[0] | 0x3ffff;
            goto LAB_002db8b8;
          }
          if ((~param_3 & 0x3ffff) != 0) goto LAB_002dbb8c;
        }
        uVar5 = FUN_002ea9e0(abStack_41 + 5,auStack_34);
        FUN_002ea9e0(abStack_41 + 1,&local_38);
        if (*(char *)(param_1 + 0x50) == '\0') {
          uVar9 = (ulong)(uVar5 - 1);
          if (0 < (int)uVar5) {
            uVar6 = FUN_002dac90(param_1,abStack_41[uVar9 + 5],abStack_41[uVar9 + 1],0,0);
            if (uVar5 - 1 != 0) {
              do {
                bVar3 = abStack_41[uVar9 + 4];
                bVar4 = abStack_41[uVar9];
                if ((uVar9 - 1 == 0) || (bVar4 <= bVar3)) {
                  uVar6 = FUN_002dab74(param_1,bVar3,bVar4,0);
                }
                else {
                  uVar6 = FUN_002dac90(param_1,bVar3,bVar4,0);
                }
                bVar1 = 1 < (long)uVar9;
                uVar9 = uVar9 - 1;
              } while (bVar1);
            }
LAB_002dbb70:
            FUN_002db13c(param_1,uVar6);
            return;
          }
        }
        else if (0 < (int)uVar5) {
          uVar6 = FUN_002dac90(param_1,abStack_41[5],abStack_41[1],0,0);
          uVar9 = (ulong)(uVar5 - 1);
          if (uVar5 - 1 != 0) {
            pcVar16 = (char *)((ulong)(abStack_41 + 1) | 1);
            pcVar17 = (char *)((ulong)(abStack_41 + 5) | 1);
            lVar13 = (ulong)uVar5 - 1;
            do {
              uVar9 = uVar9 - 1;
              cVar2 = *pcVar17;
              if ((uVar9 == 0) || (cVar2 != *pcVar16)) {
                uVar6 = FUN_002dab74(param_1,cVar2,*pcVar16,0);
              }
              else {
                uVar6 = FUN_002dac90(param_1,cVar2,cVar2,0);
              }
              pcVar16 = pcVar16 + 1;
              pcVar17 = pcVar17 + 1;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
          goto LAB_002dbb70;
        }
        uVar6 = 0;
        goto LAB_002dbb70;
      }
      if ((param_2 & 0x3f) != 0) {
        uVar5 = auStack_34[0] | 0x3f;
        goto LAB_002db8b8;
      }
      if ((~param_3 & 0x3f) == 0) goto LAB_002db98c;
LAB_002dbb8c:
      FUN_002db810(param_1,param_2,uVar5 - 1,param_4 & 1);
    }
    param_4 = param_4 & 1;
    param_2 = (ulong)uVar5;
  }
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar9 = FUN_002da6c4(param_1,0x80,0xbf,0);
    uVar5 = *(uint *)(param_1 + 0xa4);
    uVar12 = (uint)(uVar9 >> 0x20);
    uVar11 = uVar12;
    if ((uVar5 == 0) || (uVar11 = uVar5, uVar12 == 0)) goto LAB_002dbebc;
    lVar13 = *(long *)(param_1 + 0x58);
    do {
      while (uVar15 = uVar5, (uVar15 & 1) == 0) {
        uVar5 = *(uint *)(lVar13 + (ulong)(uVar15 >> 1) * 8) >> 4;
        if (uVar5 == 0) goto LAB_002dbca4;
      }
      uVar5 = *(uint *)(lVar13 + (ulong)(uVar15 >> 1) * 8 + 4);
    } while (uVar5 != 0);
LAB_002dbca4:
    if ((uVar15 & 1) == 0) {
      lVar14 = (ulong)(uVar15 >> 1) * 8;
      uVar5 = *(uint *)(lVar13 + lVar14);
      *(uint *)(lVar13 + lVar14) = uVar5 & 8 | uVar12 << 4 | uVar5 & 7;
    }
    else {
      *(uint *)(lVar13 + (ulong)(uVar15 >> 1) * 8 + 4) = uVar12;
    }
LAB_002dbebc:
    *(uint *)(param_1 + 0xa4) = uVar11;
    uVar6 = FUN_002dab74(param_1,0xc2,0xdf,0,uVar9 & 0xffffffff);
    FUN_002db13c(param_1,uVar6);
    uVar6 = FUN_002dab74(param_1,0x80,0xbf,0,uVar9 & 0xffffffff);
    uVar7 = FUN_002dab74(param_1,0xe0,0xef,0,uVar6);
    FUN_002db13c(param_1,uVar7);
    uVar6 = FUN_002dab74(param_1,0x80,0xbf,0,uVar6);
    uVar10 = 0xf4;
    uVar8 = 0xf0;
  }
  else {
    uVar8 = FUN_002da6c4(param_1,0xc2,0xdf,0);
    uVar5 = *(uint *)(param_1 + 0xa4);
    uVar12 = (uint)((ulong)uVar8 >> 0x20);
    uVar11 = uVar12;
    if ((uVar5 == 0) || (uVar11 = uVar5, uVar12 == 0)) goto LAB_002dbce0;
    lVar13 = *(long *)(param_1 + 0x58);
    do {
      while (uVar15 = uVar5, (uVar15 & 1) == 0) {
        uVar5 = *(uint *)(lVar13 + (ulong)(uVar15 >> 1) * 8) >> 4;
        if (uVar5 == 0) goto LAB_002dbc20;
      }
      uVar5 = *(uint *)(lVar13 + (ulong)(uVar15 >> 1) * 8 + 4);
    } while (uVar5 != 0);
LAB_002dbc20:
    if ((uVar15 & 1) == 0) {
      lVar14 = (ulong)(uVar15 >> 1) * 8;
      uVar5 = *(uint *)(lVar13 + lVar14);
      *(uint *)(lVar13 + lVar14) = uVar5 & 8 | uVar12 << 4 | uVar5 & 7;
    }
    else {
      *(uint *)(lVar13 + (ulong)(uVar15 >> 1) * 8 + 4) = uVar12;
    }
LAB_002dbce0:
    *(uint *)(param_1 + 0xa4) = uVar11;
    uVar6 = FUN_002dab74(param_1,0x80,0xbf,0,uVar8);
    FUN_002db13c(param_1,uVar6);
    uVar8 = FUN_002da6c4(param_1,0xe0,0xef,0);
    uVar5 = *(uint *)(param_1 + 0xa4);
    uVar12 = (uint)((ulong)uVar8 >> 0x20);
    uVar11 = uVar12;
    if ((uVar5 != 0) && (uVar11 = uVar5, uVar12 != 0)) {
      lVar13 = *(long *)(param_1 + 0x58);
      do {
        while (uVar15 = uVar5, (uVar15 & 1) == 0) {
          uVar5 = *(uint *)(lVar13 + (ulong)(uVar15 >> 1) * 8) >> 4;
          if (uVar5 == 0) goto LAB_002dbd64;
        }
        uVar5 = *(uint *)(lVar13 + (ulong)(uVar15 >> 1) * 8 + 4);
      } while (uVar5 != 0);
LAB_002dbd64:
      if ((uVar15 & 1) == 0) {
        lVar14 = (ulong)(uVar15 >> 1) * 8;
        uVar5 = *(uint *)(lVar13 + lVar14);
        *(uint *)(lVar13 + lVar14) = uVar5 & 8 | uVar12 << 4 | uVar5 & 7;
      }
      else {
        *(uint *)(lVar13 + (ulong)(uVar15 >> 1) * 8 + 4) = uVar12;
      }
    }
    *(uint *)(param_1 + 0xa4) = uVar11;
    uVar6 = FUN_002dab74(param_1,0x80,0xbf,0,uVar8);
    uVar6 = FUN_002dab74(param_1,0x80,0xbf,0,uVar6);
    FUN_002db13c(param_1,uVar6);
    uVar8 = FUN_002da6c4(param_1,0xf0,0xf4,0);
    uVar5 = *(uint *)(param_1 + 0xa4);
    uVar12 = (uint)((ulong)uVar8 >> 0x20);
    uVar11 = uVar12;
    if ((uVar5 != 0) && (uVar11 = uVar5, uVar12 != 0)) {
      lVar13 = *(long *)(param_1 + 0x58);
      do {
        while (uVar15 = uVar5, (uVar15 & 1) == 0) {
          uVar5 = *(uint *)(lVar13 + (ulong)(uVar15 >> 1) * 8) >> 4;
          if (uVar5 == 0) goto LAB_002dbe38;
        }
        uVar5 = *(uint *)(lVar13 + (ulong)(uVar15 >> 1) * 8 + 4);
      } while (uVar5 != 0);
LAB_002dbe38:
      if ((uVar15 & 1) == 0) {
        lVar14 = (ulong)(uVar15 >> 1) * 8;
        uVar5 = *(uint *)(lVar13 + lVar14);
        *(uint *)(lVar13 + lVar14) = uVar5 & 8 | uVar12 << 4 | uVar5 & 7;
      }
      else {
        *(uint *)(lVar13 + (ulong)(uVar15 >> 1) * 8 + 4) = uVar12;
      }
    }
    *(uint *)(param_1 + 0xa4) = uVar11;
    uVar6 = FUN_002dab74(param_1,0x80,0xbf,0,uVar8);
    uVar6 = FUN_002dab74(param_1,0x80,0xbf,0,uVar6);
    uVar8 = 0x80;
    uVar10 = 0xbf;
  }
  uVar6 = FUN_002dab74(param_1,uVar8,uVar10,0,uVar6);
  FUN_002db13c(param_1,uVar6);
  return;
}


