/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00394140; name: FUN_00394140
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_00394140(byte *param_1,byte *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  undefined *puVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  if (*param_4 < 0) {
LAB_00394410:
    if (param_1 == param_2) {
      return (byte *)0x0;
    }
    if (8 < *param_1 - 0x31) {
      return (byte *)0x0;
    }
    iVar6 = *param_1 - 0x30;
    if (param_1 + 1 != param_2) {
      pbVar3 = param_1 + 10;
      iVar9 = -8;
      pbVar10 = param_1 + 1;
      do {
        pbVar11 = pbVar10 + 1;
        bVar8 = *pbVar10;
        uVar5 = bVar8 - 0x30;
        if (9 < uVar5) {
          pbVar3 = pbVar10 + 1;
          *param_3 = iVar6;
          if (pbVar3 == param_2) {
            return (byte *)0x0;
          }
LAB_00394494:
          if (bVar8 != 0x24) {
            return (byte *)0x0;
          }
          bVar8 = *pbVar3;
          uVar4 = (ulong)bVar8;
          pbVar3 = pbVar10 + 2;
          if (0x40 < bVar8) goto LAB_00394748;
          bVar7 = *(byte *)(param_3 + 3) & 0xfe;
          *(byte *)(param_3 + 3) = bVar7;
          if (0x30 < bVar8) goto LAB_00394530;
          goto LAB_003944cc;
        }
        if (iVar9 == 0) {
          *param_3 = iVar6;
          pbVar10 = param_1 + 9;
          if (pbVar3 == param_2) {
            return (byte *)0x0;
          }
          goto LAB_00394494;
        }
        iVar6 = uVar5 + iVar6 * 10;
        iVar9 = iVar9 + 1;
        pbVar10 = pbVar11;
      } while (param_2 != pbVar11);
    }
    *param_3 = iVar6;
    return (byte *)0x0;
  }
  if (param_1 == param_2) {
    return (byte *)0x0;
  }
  bVar8 = *param_1;
  uVar4 = (ulong)bVar8;
  pbVar3 = param_1 + 1;
  if (bVar8 < 0x41) {
    bVar7 = *(byte *)(param_3 + 3) & 0xfe;
    *(byte *)(param_3 + 3) = bVar7;
    pbVar10 = param_1 + 1;
    while (uVar5 = (uint)uVar4, bVar8 < 0x31) {
      bVar8 = 2;
      switch(uVar5) {
      case 0x20:
        bVar8 = 8;
        break;
      default:
        goto switchD_0039419c_caseD_21;
      case 0x23:
        bVar8 = 0x10;
        break;
      case 0x2a:
        if (param_2 == pbVar10) {
          return (byte *)0x0;
        }
        uVar4 = (ulong)*pbVar10;
        iVar6 = -2 - *param_4;
        *param_4 = *param_4 + 1;
        pbVar10 = pbVar10 + 1;
        goto LAB_0039427c;
      case 0x2b:
        bVar8 = 4;
        break;
      case 0x2d:
        break;
      case 0x30:
        bVar8 = 0x20;
      }
      bVar7 = bVar7 | bVar8;
      *(byte *)(param_3 + 3) = bVar7;
      if (param_2 == pbVar10) {
        return (byte *)0x0;
      }
      bVar8 = *pbVar10;
      uVar4 = (ulong)bVar8;
      pbVar10 = pbVar10 + 1;
    }
    pbVar3 = pbVar10;
    if (uVar5 < 0x3a) {
      iVar6 = uVar5 - 0x30;
      if (pbVar10 == param_2) {
        pbVar10 = param_2;
      }
      else {
        iVar9 = -8;
        do {
          pbVar11 = pbVar3 + 1;
          bVar8 = *pbVar3;
          uVar4 = (ulong)bVar8;
          uVar5 = bVar8 - 0x30;
          if (9 < uVar5) {
            pbVar3 = pbVar3 + 1;
            goto LAB_00394234;
          }
          pbVar3 = pbVar10 + 9;
          if (iVar9 == 0) goto LAB_00394234;
          iVar6 = uVar5 + iVar6 * 10;
          iVar9 = iVar9 + 1;
          pbVar3 = pbVar11;
        } while (param_2 != pbVar11);
        pbVar3 = param_2;
LAB_00394234:
        pbVar10 = pbVar3;
        if (bVar8 == 0x24) {
          if (*param_4 != 0) {
            return (byte *)0x0;
          }
          *param_4 = -1;
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00394410;
        }
      }
LAB_0039427c:
      param_3[1] = iVar6;
switchD_0039419c_caseD_21:
      pbVar3 = pbVar10;
      if ((int)uVar4 == 0x2e) {
        if (pbVar10 == param_2) {
          return (byte *)0x0;
        }
        pbVar3 = pbVar10 + 1;
        bVar8 = *pbVar10;
        uVar4 = (ulong)bVar8;
        uVar5 = bVar8 - 0x30;
        if (uVar5 < 10) {
          if (pbVar3 != param_2) {
            iVar6 = -8;
            do {
              pbVar11 = pbVar3 + 1;
              uVar4 = (ulong)*pbVar3;
              uVar1 = *pbVar3 - 0x30;
              if (9 < uVar1) {
                pbVar3 = pbVar3 + 1;
                goto LAB_0039435c;
              }
              pbVar3 = pbVar10 + 10;
              if (iVar6 == 0) goto LAB_0039435c;
              uVar5 = uVar1 + uVar5 * 10;
              iVar6 = iVar6 + 1;
              pbVar3 = pbVar11;
            } while (param_2 != pbVar11);
          }
          pbVar3 = param_2;
LAB_0039435c:
          param_3[2] = uVar5;
        }
        else if (bVar8 == 0x2a) {
          if (pbVar3 == param_2) {
            return (byte *)0x0;
          }
          iVar6 = *param_4;
          pbVar3 = pbVar10 + 2;
          uVar4 = (ulong)pbVar10[1];
          *param_4 = iVar6 + 1;
          param_3[2] = -2 - iVar6;
        }
        else {
          param_3[2] = 0;
        }
      }
    }
  }
  puVar2 = PTR_DAT_047cd010;
  bVar8 = PTR_DAT_047cd010[uVar4];
  pbVar10 = pbVar3;
  if (-1 < (char)bVar8) goto LAB_0039430c;
  if (bVar8 == 0x80) {
    return (byte *)0x0;
  }
  if (pbVar3 == param_2) {
    return (byte *)0x0;
  }
  pbVar10 = pbVar3 + 1;
  bVar7 = *pbVar3;
  if (((int)uVar4 == 0x68) && (bVar7 == 0x68)) {
    *(undefined1 *)((long)param_3 + 0xd) = 1;
    if (pbVar10 == param_2) {
      return (byte *)0x0;
    }
LAB_003943d4:
    bVar7 = pbVar3[1];
    pbVar10 = pbVar3 + 2;
  }
  else {
    if (((int)uVar4 == 0x6c) && (bVar7 == 0x6c)) {
      *(undefined1 *)((long)param_3 + 0xd) = 3;
      if (pbVar10 == param_2) {
        return (byte *)0x0;
      }
      goto LAB_003943d4;
    }
    *(byte *)((long)param_3 + 0xd) = ~bVar8;
  }
  bVar8 = puVar2[bVar7];
  if ((char)bVar8 < '\0') {
    return (byte *)0x0;
  }
LAB_0039430c:
  *(byte *)((long)param_3 + 0xe) = bVar8;
  iVar6 = *param_4;
  *param_4 = iVar6 + 1;
  *param_3 = iVar6 + 1;
  return pbVar10;
LAB_003945f8:
  pbVar12 = pbVar11 + 1;
  bVar8 = *pbVar11;
  uVar1 = bVar8 - 0x30;
  if (9 < uVar1) {
    pbVar10 = pbVar11 + 1;
LAB_00394634:
    param_3[1] = ~uVar5;
    if (pbVar10 == param_2) {
      return (byte *)0x0;
    }
    if (bVar8 != 0x24) {
      return (byte *)0x0;
    }
    uVar4 = (ulong)*pbVar10;
    pbVar11 = pbVar11 + 2;
    pbVar3 = pbVar11;
    if (*pbVar10 != 0x2e) goto LAB_00394748;
    goto LAB_00394664;
  }
  if (iVar6 == 0) {
    pbVar11 = pbVar3 + 0xb;
    goto LAB_00394634;
  }
  uVar5 = uVar1 + uVar5 * 10;
  iVar6 = iVar6 + 1;
  pbVar11 = pbVar12;
  if (param_2 == pbVar12) {
    param_3[1] = ~uVar5;
    return (byte *)0x0;
  }
  goto LAB_003945f8;
LAB_003944cc:
  do {
    pbVar3 = pbVar10;
    uVar5 = (uint)uVar4;
    bVar8 = 2;
    switch(uVar5) {
    case 0x20:
      bVar8 = 8;
      break;
    default:
      pbVar11 = pbVar3 + 2;
      goto joined_r0x003945b4;
    case 0x23:
      bVar8 = 0x10;
      break;
    case 0x2a:
      if (param_2 + -2 == pbVar3) {
        return (byte *)0x0;
      }
      bVar8 = pbVar3[2];
      if (8 < bVar8 - 0x31) {
        return (byte *)0x0;
      }
      if (param_2 + -3 == pbVar3) {
        param_3[1] = 0x2f - (uint)bVar8;
        return (byte *)0x0;
      }
      uVar5 = bVar8 - 0x30;
      pbVar10 = pbVar3 + 0xc;
      iVar6 = -8;
      pbVar11 = pbVar3 + 3;
      goto LAB_003945f8;
    case 0x2b:
      bVar8 = 4;
      break;
    case 0x2d:
      break;
    case 0x30:
      bVar8 = 0x20;
    }
    bVar7 = bVar7 | bVar8;
    *(byte *)(param_3 + 3) = bVar7;
    if (param_2 + -2 == pbVar3) {
      return (byte *)0x0;
    }
    uVar4 = (ulong)pbVar3[2];
    pbVar10 = pbVar3 + 1;
  } while (pbVar3[2] < 0x31);
  pbVar3 = pbVar3 + 3;
LAB_00394530:
  if ((uint)uVar4 < 0x3a) {
    iVar6 = (uint)uVar4 - 0x30;
    if (pbVar3 != param_2) {
      pbVar11 = pbVar3 + 9;
      iVar9 = -8;
      do {
        pbVar10 = pbVar3 + 1;
        uVar4 = (ulong)*pbVar3;
        uVar5 = (uint)*pbVar3;
        if (9 < uVar5 - 0x30) {
          pbVar11 = pbVar3 + 1;
LAB_00394594:
          param_3[1] = iVar6;
          goto joined_r0x003945b4;
        }
        if (iVar9 == 0) goto LAB_00394594;
        iVar6 = (uVar5 - 0x30) + iVar6 * 10;
        iVar9 = iVar9 + 1;
        pbVar3 = pbVar10;
      } while (param_2 != pbVar10);
    }
    param_3[1] = iVar6;
    uVar5 = (uint)uVar4;
    pbVar11 = param_2;
joined_r0x003945b4:
    pbVar3 = pbVar11;
    if (uVar5 == 0x2e) {
LAB_00394664:
      if (pbVar11 == param_2) {
        return (byte *)0x0;
      }
      pbVar3 = pbVar11 + 1;
      bVar8 = *pbVar11;
      uVar4 = (ulong)bVar8;
      uVar5 = bVar8 - 0x30;
      if (uVar5 < 10) {
        if (pbVar3 != param_2) {
          iVar6 = -8;
          do {
            pbVar10 = pbVar3 + 1;
            uVar4 = (ulong)*pbVar3;
            uVar1 = *pbVar3 - 0x30;
            if (9 < uVar1) {
              pbVar3 = pbVar3 + 1;
              goto LAB_00394740;
            }
            pbVar3 = pbVar11 + 10;
            if (iVar6 == 0) goto LAB_00394740;
            uVar5 = uVar1 + uVar5 * 10;
            iVar6 = iVar6 + 1;
            pbVar3 = pbVar10;
          } while (param_2 != pbVar10);
        }
        pbVar3 = param_2;
LAB_00394740:
        param_3[2] = uVar5;
      }
      else if (bVar8 == 0x2a) {
        if (pbVar3 == param_2) {
          return (byte *)0x0;
        }
        bVar8 = pbVar11[1];
        if (8 < bVar8 - 0x31) {
          return (byte *)0x0;
        }
        if (pbVar11 + 2 == param_2) {
          param_3[2] = 0x2f - (uint)bVar8;
          return (byte *)0x0;
        }
        uVar5 = bVar8 - 0x30;
        pbVar10 = pbVar11 + 0xb;
        iVar6 = -8;
        pbVar3 = pbVar11 + 2;
        while( true ) {
          pbVar12 = pbVar3 + 1;
          bVar8 = *pbVar3;
          uVar1 = bVar8 - 0x30;
          if (9 < uVar1) break;
          if (iVar6 == 0) {
            pbVar3 = pbVar11 + 10;
            goto LAB_00394770;
          }
          uVar5 = uVar1 + uVar5 * 10;
          iVar6 = iVar6 + 1;
          pbVar3 = pbVar12;
          if (param_2 == pbVar12) {
            param_3[2] = ~uVar5;
            return (byte *)0x0;
          }
        }
        pbVar10 = pbVar3 + 1;
LAB_00394770:
        param_3[2] = ~uVar5;
        if (pbVar10 == param_2) {
          return (byte *)0x0;
        }
        if (bVar8 != 0x24) {
          return (byte *)0x0;
        }
        uVar4 = (ulong)*pbVar10;
        pbVar3 = pbVar3 + 2;
      }
      else {
        param_3[2] = 0;
      }
    }
  }
LAB_00394748:
  puVar2 = PTR_DAT_047cd010;
  bVar8 = PTR_DAT_047cd010[uVar4];
  pbVar10 = pbVar3;
  if (-1 < (char)bVar8) goto LAB_0039475c;
  if (bVar8 == 0x80) {
    return (byte *)0x0;
  }
  if (pbVar3 == param_2) {
    return (byte *)0x0;
  }
  pbVar10 = pbVar3 + 1;
  bVar7 = *pbVar3;
  if (((int)uVar4 == 0x68) && (bVar7 == 0x68)) {
    *(undefined1 *)((long)param_3 + 0xd) = 1;
joined_r0x0039481c:
    if (pbVar10 == param_2) {
      return (byte *)0x0;
    }
    bVar7 = pbVar3[1];
    pbVar10 = pbVar3 + 2;
  }
  else {
    if (((int)uVar4 == 0x6c) && (bVar7 == 0x6c)) {
      *(undefined1 *)((long)param_3 + 0xd) = 3;
      goto joined_r0x0039481c;
    }
    *(byte *)((long)param_3 + 0xd) = ~bVar8;
  }
  bVar8 = puVar2[bVar7];
  if ((char)bVar8 < '\0') {
    return (byte *)0x0;
  }
LAB_0039475c:
  *(byte *)((long)param_3 + 0xe) = bVar8;
  return pbVar10;
}


