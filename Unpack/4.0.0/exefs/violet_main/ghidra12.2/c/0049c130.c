/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049c130; name: FUN_0049c130
 */


undefined4 FUN_0049c130(byte *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  byte *pbVar14;
  byte bVar15;
  
  if (param_4 < (byte *)0x2) {
    if (param_2 != (byte *)0x0) goto LAB_0049c17c;
  }
  else if ((param_2 != (byte *)0x0) && (*param_3 != 0x2e)) {
LAB_0049c17c:
    pbVar14 = (byte *)0x0;
    iVar6 = 0;
    bVar15 = 1;
    bVar3 = false;
    pbVar11 = param_2;
    pbVar9 = param_1;
    do {
      bVar1 = *pbVar9;
      if (bVar1 == 0x2a) {
        if (pbVar11 == (byte *)0x1) {
          bVar4 = true;
        }
        else {
          bVar4 = pbVar9[1] == 0x2e;
        }
        if ((pbVar14 != (byte *)0x0) || (bVar3 || iVar6 != 0)) goto LAB_0049c2dc;
        if (((bVar15 & 1 | bVar4) != 1) || ((param_5 & 4) != 0 && (bVar15 & 1 & bVar4) == 0))
        goto LAB_0049c2dc;
        bVar15 = bVar15 & 0xfe;
        pbVar14 = pbVar9;
      }
      else {
        bVar2 = (bVar1 & 0xdf) + 0xbf;
        uVar7 = (uint)bVar1;
        bVar4 = uVar7 - 0x30 < 10;
        if ((!bVar4 && 0x18 < bVar2) && (bVar4 || bVar2 != 0x19)) {
          if (uVar7 == 0x2d) {
            if ((bVar15 & 1) != 0) goto LAB_0049c2dc;
            bVar15 = bVar15 | 4;
          }
          else {
            if ((uVar7 != 0x2e) || (bVar15 != 0)) goto LAB_0049c2dc;
            iVar6 = iVar6 + 1;
            bVar15 = 1;
            bVar3 = false;
          }
        }
        else {
          bVar4 = bVar3;
          if (((bVar15 & 1) != 0) && ((byte *)0x3 < pbVar11)) {
            iVar5 = strncasecmp((char *)pbVar9,"xn--",4);
            bVar4 = true;
            if (iVar5 != 0) {
              bVar4 = bVar3;
            }
          }
          bVar15 = 0;
          bVar3 = bVar4;
        }
      }
      pbVar9 = pbVar9 + 1;
      pbVar11 = pbVar11 + -1;
    } while (pbVar11 != (byte *)0x0);
    if (((bVar15 == 0) && (1 < iVar6)) && (pbVar14 != (byte *)0x0)) {
      param_2 = param_1 + (long)param_2;
      lVar13 = (long)pbVar14 - (long)param_1;
      pbVar9 = param_2 + ~(ulong)pbVar14;
      if (param_4 < pbVar9 + lVar13) {
        return 0;
      }
      if (lVar13 != 0) {
        lVar8 = (long)param_1 - (long)pbVar14;
        pbVar12 = param_3;
        pbVar11 = param_1;
        do {
          bVar15 = *pbVar11;
          if (bVar15 == 0) {
            return 0;
          }
          bVar1 = *pbVar12;
          if ((uint)bVar15 != (uint)bVar1) {
            uVar10 = (uint)bVar15;
            uVar7 = uVar10 + 0x20;
            if (0x19 < uVar10 - 0x41) {
              uVar7 = uVar10;
            }
            uVar10 = bVar1 + 0x20;
            if (0x19 < bVar1 - 0x41) {
              uVar10 = (uint)bVar1;
            }
            if ((uVar7 & 0xff) != (uVar10 & 0xff)) {
              return 0;
            }
          }
          pbVar11 = pbVar11 + 1;
          pbVar12 = pbVar12 + 1;
          bVar3 = lVar8 != -1;
          lVar8 = lVar8 + 1;
        } while (bVar3);
      }
      if (pbVar9 != (byte *)0x0) {
        lVar8 = (long)pbVar14 - (long)param_2;
        pbVar11 = pbVar14 + 1;
        do {
          lVar8 = lVar8 + 1;
          bVar15 = (param_3 + (long)param_4)[lVar8];
          if (bVar15 == 0) {
            return 0;
          }
          bVar1 = *pbVar11;
          if ((uint)bVar15 != (uint)bVar1) {
            uVar10 = (uint)bVar15;
            uVar7 = uVar10 + 0x20;
            if (0x19 < uVar10 - 0x41) {
              uVar7 = uVar10;
            }
            uVar10 = bVar1 + 0x20;
            if (0x19 < bVar1 - 0x41) {
              uVar10 = (uint)bVar1;
            }
            if ((uVar7 & 0xff) != (uVar10 & 0xff)) {
              return 0;
            }
          }
          pbVar11 = pbVar11 + 1;
        } while (lVar8 != -1);
      }
      lVar8 = (long)param_4 - (long)pbVar9;
      if ((lVar13 == 0) && (pbVar14[1] == 0x2e)) {
        if (lVar8 == 0) {
          return 0;
        }
        uVar7 = param_5 >> 3 & 1;
      }
      else if (param_4 < (byte *)0x4) {
        uVar7 = 0;
      }
      else {
        iVar6 = strncasecmp((char *)param_3,"xn--",4);
        uVar7 = 0;
        if (iVar6 == 0) {
          return 0;
        }
      }
      pbVar9 = param_3 + lVar13;
      if (param_3 + lVar8 == pbVar9 + 1) {
        if (lVar8 == lVar13) {
          return 1;
        }
        if (*pbVar9 == 0x2a) {
          return 1;
        }
      }
      else if (lVar8 == lVar13) {
        return 1;
      }
      pbVar11 = param_1 + (long)param_4 + (1 - (long)param_2);
      while (((bVar15 = *pbVar9, bVar15 - 0x30 < 10 || (bVar15 - 0x41 & 0xff) < 0x1a ||
              ((uVar7 & bVar15 == 0x2e) != 0)) ||
             ((bVar15 == 0x2d || ((byte)(bVar15 + 0x9f) < 0x1a))))) {
        pbVar9 = pbVar9 + 1;
        pbVar11 = pbVar11 + -1;
        if (pbVar11 == (byte *)0x0) {
          return 1;
        }
      }
      return 0;
    }
  }
LAB_0049c2dc:
  if ((param_5 >> 0xf & 1) != 0) {
    pbVar9 = param_1;
    pbVar11 = param_2;
    if (param_4 <= param_2 && (long)param_2 - (long)param_4 != 0) {
      pbVar14 = param_1 + ((long)param_2 - (long)param_4);
      if ((param_5 >> 4 & 1) == 0) {
        do {
          if (*pbVar9 == 0) goto LAB_0049c340;
          pbVar11 = pbVar11 + -1;
          pbVar9 = pbVar9 + 1;
        } while (param_4 < pbVar11);
      }
      else {
        do {
          if ((*pbVar9 == 0) || (*pbVar9 == 0x2e)) goto LAB_0049c340;
          pbVar11 = pbVar11 + -1;
          pbVar9 = pbVar9 + 1;
        } while (param_4 < pbVar11);
      }
      goto joined_r0x0049c358;
    }
LAB_0049c340:
    pbVar14 = pbVar9;
    if (pbVar11 == param_4) goto joined_r0x0049c358;
  }
  pbVar14 = param_1;
  if (param_2 != param_4) {
    return 0;
  }
joined_r0x0049c358:
  while( true ) {
    if (param_4 == (byte *)0x0) {
      return 1;
    }
    bVar15 = *pbVar14;
    if (bVar15 == 0) break;
    bVar1 = *param_3;
    if ((uint)bVar15 != (uint)bVar1) {
      uVar10 = (uint)bVar15;
      uVar7 = uVar10 + 0x20;
      if (0x19 < uVar10 - 0x41) {
        uVar7 = uVar10;
      }
      uVar10 = bVar1 + 0x20;
      if (0x19 < bVar1 - 0x41) {
        uVar10 = (uint)bVar1;
      }
      if ((uVar7 & 0xff) != (uVar10 & 0xff)) {
        return 0;
      }
    }
    param_3 = param_3 + 1;
    param_4 = param_4 + -1;
    pbVar14 = pbVar14 + 1;
  }
  return 0;
}


