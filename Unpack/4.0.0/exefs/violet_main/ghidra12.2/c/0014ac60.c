/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0014ac60; name: FUN_0014ac60
 */


byte * FUN_0014ac60(undefined8 *param_1,byte *param_2,byte *param_3)

{
  bool bVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  size_t __n;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  
  iVar8 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar8 + -1;
  if (iVar8 == 0) {
    FUN_00123a70(param_1[3],"pattern too complex");
  }
LAB_0014ac9c:
  pbVar14 = param_3;
LAB_0014acb8:
  pbVar11 = (byte *)param_1[2];
  if (pbVar14 == pbVar11) {
    pbVar11 = param_2;
    goto LAB_0014b5bc;
  }
  switch(*pbVar14) {
  case 0x24:
    param_3 = pbVar14 + 1;
    if (param_3 == pbVar11) {
      if (param_2 != (byte *)param_1[1]) {
        param_2 = (byte *)0x0;
      }
      pbVar11 = param_2;
      goto LAB_0014b5bc;
    }
    pbVar11 = (byte *)param_1[1];
    break;
  case 0x25:
    bVar10 = pbVar14[1];
    if (bVar10 == 0x66) {
      if (pbVar14[2] == 0x5b) {
LAB_0014ae40:
        pbVar15 = pbVar14 + 4;
        if (pbVar14[3] != 0x5e) {
          pbVar15 = pbVar14 + 3;
        }
        do {
          if (pbVar15 == (byte *)param_1[2]) {
            FUN_00123a70(param_1[3],"malformed pattern (missing \']\')");
            bVar10 = *pbVar15;
          }
          else {
            bVar10 = *pbVar15;
          }
          pbVar11 = pbVar15 + 1;
          if (bVar10 == 0x25) {
            pbVar11 = pbVar15 + 2;
            if ((byte *)param_1[2] <= pbVar15 + 1) {
              pbVar11 = pbVar15 + 1;
            }
          }
          pbVar15 = pbVar11;
        } while (*pbVar11 != 0x5d);
        pbVar11 = pbVar11 + 1;
      }
      else {
        FUN_00123a70(param_1[3],"missing \'[\' after \'%%f\' in pattern");
        pbVar11 = pbVar14 + 3;
        if (pbVar14[2] == 0x5b) goto LAB_0014ae40;
        if (pbVar14[2] == 0x25) {
          if (pbVar11 == (byte *)param_1[2]) {
            FUN_00123a70(param_1[3],"malformed pattern (ends with \'%%\')");
          }
          pbVar11 = pbVar14 + 4;
        }
      }
      if (param_2 == (byte *)*param_1) {
        bVar10 = 0;
      }
      else {
        bVar10 = param_2[-1];
      }
      bVar6 = pbVar14[3] == 0x5e;
      pbVar15 = pbVar14 + 3;
      if (!bVar6) {
        pbVar15 = pbVar14 + 2;
      }
      pbVar13 = pbVar11 + -1;
      bVar1 = !bVar6;
      pbVar14 = pbVar15 + 1;
      if (pbVar14 < pbVar13) {
        pbVar17 = pbVar14;
        pbVar18 = pbVar15;
        do {
          while( true ) {
            pbVar12 = pbVar18 + 2;
            bVar3 = pbVar18[1];
            if (bVar3 != 0x25) break;
            iVar8 = FUN_0014b720(bVar10);
            if (iVar8 != 0) {
LAB_0014b0b8:
              bVar5 = bVar1;
              goto LAB_0014b0c4;
            }
LAB_0014b044:
            pbVar17 = pbVar12 + 1;
            pbVar18 = pbVar12;
            if (pbVar13 <= pbVar17) goto LAB_0014b0c0;
          }
          if ((*pbVar12 != 0x2d) || (pbVar12 = pbVar18 + 3, pbVar13 <= pbVar12)) {
            pbVar12 = pbVar17;
            if (bVar3 == bVar10) goto LAB_0014b0b8;
            goto LAB_0014b044;
          }
          if (bVar3 <= bVar10) {
            if (bVar10 <= *pbVar12) goto LAB_0014b0b8;
            goto LAB_0014b044;
          }
          pbVar17 = pbVar18 + 4;
          pbVar18 = pbVar12;
        } while (pbVar17 < pbVar13);
LAB_0014b0c0:
        bVar5 = bVar6;
LAB_0014b0c4:
        if (!bVar5) goto code_r0x0014b0c8;
      }
      goto LAB_0014b334;
    }
    if (9 < bVar10 - 0x30) {
      if (bVar10 != 0x62) {
        if (pbVar14 + 1 == pbVar11) {
          FUN_00123a70(param_1[3],"malformed pattern (ends with \'%%\')");
          param_3 = pbVar14 + 2;
          pbVar11 = (byte *)param_1[1];
        }
        else {
          param_3 = pbVar14 + 2;
          pbVar11 = (byte *)param_1[1];
        }
        break;
      }
      pbVar15 = pbVar14 + 2;
      if (pbVar15 < pbVar11 + -1) {
        bVar10 = *param_2;
        if (bVar10 != *pbVar15) goto LAB_0014b334;
      }
      else {
        FUN_00123a70(param_1[3],"malformed pattern (missing arguments to \'%%b\')");
        bVar10 = *param_2;
        if (bVar10 != *pbVar15) goto LAB_0014b334;
      }
      param_2 = param_2 + 1;
      if ((byte *)param_1[1] <= param_2) goto LAB_0014b334;
      iVar8 = 1;
      goto LAB_0014b2c4;
    }
    if (((bVar10 < 0x31) ||
        (lVar19 = (ulong)bVar10 - 0x31, (int)(uint)*(byte *)((long)param_1 + 0x24) <= (int)lVar19))
       || (__n = param_1[lVar19 * 2 + 6], __n == 0xffffffffffffffff)) {
      iVar8 = FUN_00123a70(param_1[3],"invalid capture index %%%d");
      __n = param_1[(long)iVar8 * 2 + 6];
      lVar19 = (long)iVar8;
      if ((ulong)(param_1[1] - (long)param_2) < __n) goto LAB_0014b334;
    }
    else if ((ulong)(param_1[1] - (long)param_2) < __n) goto LAB_0014b334;
    iVar8 = memcmp((void *)param_1[lVar19 * 2 + 5],param_2,__n);
    pbVar11 = (byte *)0x0;
    if ((param_2 == (byte *)0x0) || (iVar8 != 0)) goto LAB_0014b5bc;
    param_2 = param_2 + __n;
    param_3 = pbVar14 + 2;
    goto LAB_0014ac9c;
  default:
    param_3 = pbVar14 + 1;
    if (*pbVar14 == 0x5b) {
      pbVar15 = pbVar14 + 2;
      if (pbVar14[1] != 0x5e) {
        pbVar15 = param_3;
      }
      if (pbVar15 == pbVar11) goto LAB_0014add4;
LAB_0014ad98:
      pbVar11 = pbVar15 + 1;
      if (*pbVar15 != 0x25) goto LAB_0014adf4;
      do {
        pbVar15 = pbVar15 + 2;
        if ((byte *)param_1[2] <= pbVar11) {
          pbVar15 = pbVar11;
        }
        bVar10 = *pbVar15;
        while( true ) {
          if (bVar10 == 0x5d) {
            param_3 = pbVar15 + 1;
            pbVar11 = (byte *)param_1[1];
            goto joined_r0x0014ad6c;
          }
          if (pbVar15 != (byte *)param_1[2]) goto LAB_0014ad98;
LAB_0014add4:
          FUN_00123a70(param_1[3],"malformed pattern (missing \']\')");
          pbVar11 = pbVar15 + 1;
          if (*pbVar15 == 0x25) break;
LAB_0014adf4:
          bVar10 = *pbVar11;
          pbVar15 = pbVar11;
        }
      } while( true );
    }
    pbVar11 = (byte *)param_1[1];
    break;
  case 0x28:
    if (pbVar14[1] == 0x29) {
      bVar10 = *(byte *)((long)param_1 + 0x24);
      uVar16 = (ulong)bVar10;
      if (0x1f < uVar16) {
        FUN_00123a70(param_1[3],"too many captures");
      }
      param_1[uVar16 * 2 + 5] = param_2;
      param_1[uVar16 * 2 + 6] = 0xfffffffffffffffe;
      *(byte *)((long)param_1 + 0x24) = bVar10 + 1;
      pbVar11 = (byte *)FUN_0014ac60(param_1,param_2,pbVar14 + 2);
    }
    else {
      bVar10 = *(byte *)((long)param_1 + 0x24);
      uVar16 = (ulong)bVar10;
      if (0x1f < uVar16) {
        FUN_00123a70(param_1[3],"too many captures");
      }
      param_1[uVar16 * 2 + 5] = param_2;
      param_1[uVar16 * 2 + 6] = 0xffffffffffffffff;
      *(byte *)((long)param_1 + 0x24) = bVar10 + 1;
      pbVar11 = (byte *)FUN_0014ac60(param_1,param_2,pbVar14 + 1);
    }
    if (pbVar11 == (byte *)0x0) {
      *(char *)((long)param_1 + 0x24) = *(char *)((long)param_1 + 0x24) + -1;
    }
    goto LAB_0014b5bc;
  case 0x29:
    lVar19 = (ulong)*(byte *)((long)param_1 + 0x24) * 0x10 + 0x20;
    uVar16 = (ulong)*(byte *)((long)param_1 + 0x24);
    goto LAB_0014b3b0;
  }
joined_r0x0014ad6c:
  if (pbVar11 <= param_2) {
    bVar10 = *param_3;
LAB_0014afd4:
    pbVar11 = (byte *)0x0;
    if ((0x3f < bVar10) || ((1L << ((ulong)bVar10 & 0x3f) & 0x8000240000000000U) == 0))
    goto LAB_0014b5bc;
    pbVar14 = param_3 + 1;
    goto LAB_0014acb8;
  }
  pbVar15 = pbVar14 + 1;
  bVar3 = *pbVar14;
  bVar10 = *param_2;
  if (bVar3 == 0x25) {
    uVar7 = FUN_0014b720(bVar10,*pbVar15);
LAB_0014afa4:
    bVar10 = *param_3;
    if (uVar7 == 0) goto LAB_0014afd4;
  }
  else {
    if (bVar3 == 0x5b) {
      bVar6 = pbVar14[1] == 0x5e;
      pbVar13 = pbVar15;
      if (!bVar6) {
        pbVar13 = pbVar14;
      }
      pbVar18 = param_3 + -1;
      uVar7 = (uint)bVar6;
      pbVar17 = pbVar13 + 1;
      if (pbVar17 < pbVar18) {
        do {
          while( true ) {
            pbVar12 = pbVar13 + 2;
            bVar4 = pbVar13[1];
            if (bVar4 != 0x25) break;
            iVar8 = FUN_0014b720(bVar10);
            if (iVar8 != 0) {
LAB_0014af94:
              uVar7 = (uint)!bVar6;
              goto LAB_0014afa4;
            }
LAB_0014af20:
            pbVar17 = pbVar12 + 1;
            pbVar13 = pbVar12;
            if (pbVar18 <= pbVar17) goto LAB_0014afa4;
          }
          if ((*pbVar12 != 0x2d) || (pbVar12 = pbVar13 + 3, pbVar18 <= pbVar12)) {
            pbVar12 = pbVar17;
            if (bVar4 == bVar10) goto LAB_0014af94;
            goto LAB_0014af20;
          }
          if (bVar4 <= bVar10) {
            if (bVar10 <= *pbVar12) goto LAB_0014af94;
            goto LAB_0014af20;
          }
          pbVar17 = pbVar13 + 4;
          pbVar13 = pbVar12;
        } while (pbVar17 < pbVar18);
      }
      goto LAB_0014afa4;
    }
    if (bVar3 != 0x2e) {
      uVar7 = (uint)(bVar3 == bVar10);
      goto LAB_0014afa4;
    }
    bVar10 = *param_3;
  }
  if (bVar10 == 0x3f) {
    pbVar11 = (byte *)FUN_0014ac60(param_1,param_2 + 1,param_3 + 1);
    pbVar14 = param_3 + 1;
    if (pbVar11 != (byte *)0x0) goto LAB_0014b5bc;
    goto LAB_0014acb8;
  }
  if (bVar10 != 0x2a) {
    if (bVar10 != 0x2b) {
      if (bVar10 == 0x2d) {
        goto LAB_0014b60c;
      }
      param_2 = param_2 + 1;
      goto LAB_0014ac9c;
    }
    param_2 = param_2 + 1;
  }
  lVar19 = 0;
  if (pbVar11 <= param_2) goto LAB_0014b598;
  pbVar17 = param_3 + -1;
  pbVar13 = param_2;
  goto LAB_0014b4ac;
  while( true ) {
    plVar2 = (long *)((long)param_1 + lVar19);
    lVar19 = lVar19 + -0x10;
    uVar16 = uVar9;
    if (*plVar2 == -1) break;
LAB_0014b3b0:
    uVar9 = uVar16 - 1;
    if ((long)uVar16 < 1) {
      uVar9 = FUN_00123a70(param_1[3],"invalid pattern capture");
      break;
    }
  }
  param_1[(long)(int)uVar9 * 2 + 6] = (long)param_2 - param_1[(long)(int)uVar9 * 2 + 5];
  pbVar11 = (byte *)FUN_0014ac60(param_1,param_2,pbVar14 + 1);
  if (pbVar11 == (byte *)0x0) {
    param_1[(long)(int)uVar9 * 2 + 6] = -1;
  }
  goto LAB_0014b5bc;
code_r0x0014b0c8:
  bVar10 = *param_2;
  do {
    while( true ) {
      pbVar17 = pbVar15 + 2;
      bVar3 = pbVar15[1];
      bVar5 = bVar1;
      if (bVar3 != 0x25) break;
      iVar8 = FUN_0014b720(bVar10);
      if (iVar8 != 0) goto joined_r0x0014acb4;
LAB_0014b0e4:
      pbVar14 = pbVar17 + 1;
      pbVar15 = pbVar17;
      bVar5 = bVar6;
      if (pbVar13 <= pbVar14) goto joined_r0x0014acb4;
    }
    if ((*pbVar17 != 0x2d) || (pbVar17 = pbVar15 + 3, pbVar13 <= pbVar17)) {
      pbVar17 = pbVar14;
      if (bVar3 != bVar10) goto LAB_0014b0e4;
      break;
    }
    if (bVar3 <= bVar10) {
      if (*pbVar17 < bVar10) goto LAB_0014b0e4;
      break;
    }
    pbVar14 = pbVar15 + 4;
    pbVar15 = pbVar17;
    bVar5 = bVar6;
  } while (pbVar14 < pbVar13);
joined_r0x0014acb4:
  pbVar14 = pbVar11;
  if (!bVar5) goto LAB_0014b334;
  goto LAB_0014acb8;
LAB_0014b2c4:
  if (*param_2 == pbVar14[3]) {
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) goto code_r0x0014b2d8;
  }
  else if (*param_2 == bVar10) {
    iVar8 = iVar8 + 1;
  }
  param_2 = param_2 + 1;
  pbVar11 = (byte *)0x0;
  if ((byte *)param_1[1] == param_2) goto LAB_0014b5bc;
  goto LAB_0014b2c4;
code_r0x0014b2d8:
  param_2 = param_2 + 1;
  param_3 = pbVar14 + 4;
  goto LAB_0014ac9c;
LAB_0014b60c:
  do {
    pbVar11 = (byte *)FUN_0014ac60(param_1,param_2,param_3 + 1);
    if (pbVar11 != (byte *)0x0) break;
    if ((byte *)param_1[1] <= param_2) goto LAB_0014b334;
    bVar10 = *pbVar14;
    bVar3 = *param_2;
    if (bVar10 == 0x5b) {
      bVar6 = pbVar14[1] == 0x5e;
      pbVar11 = pbVar15;
      if (!bVar6) {
        pbVar11 = pbVar14;
      }
      uVar7 = (uint)bVar6;
      while (pbVar11 + 1 < param_3 + -1) {
        pbVar13 = pbVar11 + 2;
        bVar10 = pbVar11[1];
        if (bVar10 == 0x25) {
          iVar8 = FUN_0014b720(bVar3);
          if (iVar8 != 0) {
LAB_0014b6f4:
            uVar7 = (uint)!bVar6;
            break;
          }
        }
        else if ((*pbVar13 == 0x2d) && (pbVar13 = pbVar11 + 3, pbVar13 < param_3 + -1)) {
          if (bVar3 < bVar10) {
          }
          else if (bVar3 <= *pbVar13) goto LAB_0014b6f4;
        }
        else {
          pbVar13 = pbVar11 + 1;
          if (bVar10 == bVar3) goto LAB_0014b6f4;
        }
        pbVar11 = pbVar13;
      }
    }
    else if (bVar10 == 0x2e) {
      uVar7 = 1;
    }
    else if (bVar10 == 0x25) {
      uVar7 = FUN_0014b720(bVar3,*pbVar15);
    }
    else {
      uVar7 = (uint)(bVar10 == bVar3);
    }
    param_2 = param_2 + 1;
    pbVar11 = (byte *)0x0;
  } while (uVar7 != 0);
  goto LAB_0014b5bc;
LAB_0014b334:
  pbVar11 = (byte *)0x0;
  goto LAB_0014b5bc;
LAB_0014b4ac:
  do {
    bVar10 = *pbVar13;
    if (bVar3 == 0x5b) {
      bVar6 = pbVar14[1] == 0x5e;
      pbVar13 = pbVar15;
      if (!bVar6) {
        pbVar13 = pbVar14;
      }
      pbVar18 = pbVar13 + 1;
      if (pbVar18 < pbVar17) {
        uVar7 = (uint)!bVar6;
        do {
          while( true ) {
            pbVar12 = pbVar13 + 2;
            bVar4 = pbVar13[1];
            if (bVar4 != 0x25) break;
            iVar8 = FUN_0014b720(bVar10);
            if (iVar8 != 0) goto LAB_0014b494;
LAB_0014b514:
            pbVar18 = pbVar12 + 1;
            pbVar13 = pbVar12;
            if (pbVar17 <= pbVar18) goto LAB_0014b590;
          }
          if ((*pbVar12 != 0x2d) || (pbVar12 = pbVar13 + 3, pbVar17 <= pbVar12)) {
            pbVar12 = pbVar18;
            if (bVar4 != bVar10) goto LAB_0014b514;
            goto LAB_0014b494;
          }
          if (bVar4 <= bVar10) {
            if (*pbVar12 < bVar10) goto LAB_0014b514;
            goto LAB_0014b494;
          }
          pbVar18 = pbVar13 + 4;
          pbVar13 = pbVar12;
        } while (pbVar18 < pbVar17);
      }
LAB_0014b590:
      uVar7 = (uint)bVar6;
LAB_0014b494:
      if (uVar7 == 0) break;
    }
    else if (bVar3 != 0x2e) {
      if (bVar3 == 0x25) {
        uVar7 = FUN_0014b720(bVar10,*pbVar15);
      }
      else {
        uVar7 = (uint)(bVar3 == bVar10);
      }
      goto LAB_0014b494;
    }
    lVar19 = lVar19 + 1;
    pbVar13 = param_2 + lVar19;
  } while (pbVar13 < pbVar11);
LAB_0014b598:
  do {
    if (lVar19 < 0) goto LAB_0014b334;
    pbVar11 = (byte *)FUN_0014ac60(param_1,param_2 + lVar19,param_3 + 1);
    lVar19 = lVar19 + -1;
  } while (pbVar11 == (byte *)0x0);
LAB_0014b5bc:
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return pbVar11;
}


