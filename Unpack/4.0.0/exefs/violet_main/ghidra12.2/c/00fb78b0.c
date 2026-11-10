/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fb78b0; name: FUN_00fb78b0
 */


undefined8
FUN_00fb78b0(ulong *param_1,ulong *param_2,int *param_3,long *param_4,char *param_5,
            undefined4 param_6)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  char *pcVar17;
  int iVar18;
  int iVar19;
  int local_64;
  
  *param_3 = -1;
  pcVar17 = (char *)*param_1;
  lVar2 = (long)*param_2 - (long)pcVar17;
  pcVar1 = param_5 + lVar2;
  if ((char *)*param_2 < pcVar17 || lVar2 == 0) goto LAB_00fb7cbc;
  cVar9 = *pcVar17;
  cVar6 = (**(code **)(*param_4 + 0x38))(param_4,0x7c);
  pcVar13 = (char *)*param_1;
  if (cVar9 == cVar6) {
    pcVar13 = pcVar13 + 1;
    *param_1 = (ulong)pcVar13;
    if (pcVar13 < (char *)*param_2) {
      bVar3 = true;
      goto LAB_00fb792c;
    }
LAB_00fb7e30:
    param_5 = pcVar13 + ((long)param_5 - (long)pcVar17);
LAB_00fb7cbc:
    FUN_00fb81f0(param_6,param_5,pcVar1);
    return 0;
  }
  bVar3 = false;
LAB_00fb792c:
  cVar9 = *pcVar13;
  cVar6 = (**(code **)(*param_4 + 0x38))(param_4,0x30);
  pbVar14 = (byte *)*param_1;
  if (((cVar9 != cVar6) && (-1 < (char)*pbVar14)) &&
     ((*(ushort *)(param_4[2] + (ulong)*pbVar14 * 2) >> 0xb & 1) != 0)) {
    pcVar13 = (char *)FUN_00fc26b0(param_1,param_2,&local_64,param_4);
    *param_1 = (ulong)pcVar13;
    if ((char *)*param_2 <= pcVar13) {
      uVar16 = 0;
LAB_00fb7dfc:
      FUN_00fb81f0(param_6,pcVar13 + ((long)param_5 - (long)pcVar17),pcVar1);
      return uVar16;
    }
    cVar9 = *pcVar13;
    cVar6 = (**(code **)(*param_4 + 0x38))(param_4,0x25);
    if (cVar9 == cVar6) {
      *param_3 = local_64 + -1;
      pcVar13 = (char *)(*param_1 + 1);
      *param_1 = (ulong)pcVar13;
      if (!bVar3) {
        return 1;
      }
      uVar16 = 1;
      goto LAB_00fb7dfc;
    }
    cVar9 = *(char *)*param_1;
    cVar6 = (**(code **)(*param_4 + 0x38))(param_4,0x24);
    if (cVar9 != cVar6) {
      *(long *)(param_3 + 0xe) = (long)local_64;
      *param_3 = -1;
      pbVar14 = (byte *)*param_1;
      goto LAB_00fb7a2c;
    }
    *param_3 = local_64 + -1;
    pbVar14 = (byte *)(*param_1 + 1);
    *param_1 = (ulong)pbVar14;
  }
  if (pbVar14 != (byte *)*param_2) {
    do {
      bVar7 = (**(code **)(*param_4 + 0x48))(param_4,*pbVar14,0);
      if (bVar7 < 0x27) {
        if (bVar7 == 0x20) {
          uVar12 = param_3[0x1c] | 2;
          goto LAB_00fb7b64;
        }
        if (bVar7 == 0x23) {
          uVar12 = param_3[0x13] | 0x600;
          goto LAB_00fb7d00;
        }
        goto switchD_00fb79b8_caseD_28;
      }
      switch(bVar7) {
      case 0x27:
        break;
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2c:
      case 0x2e:
      case 0x2f:
        goto switchD_00fb79b8_caseD_28;
      case 0x2b:
        uVar12 = param_3[0x13] | 0x800;
        goto LAB_00fb7d00;
      case 0x2d:
        uVar12 = param_3[0x13] | 0x20;
LAB_00fb7d00:
        param_3[0x13] = uVar12;
        break;
      case 0x30:
        uVar12 = param_3[0x1c] | 1;
LAB_00fb7b64:
        param_3[0x1c] = uVar12;
        break;
      default:
        if (bVar7 == 0x3d) {
          uVar12 = param_3[0x1c] | 4;
          goto LAB_00fb7b64;
        }
        if (bVar7 == 0x5f) {
          uVar12 = param_3[0x13] | 0x10;
          goto LAB_00fb7d00;
        }
switchD_00fb79b8_caseD_28:
        cVar9 = *(char *)*param_1;
        cVar6 = (**(code **)(*param_4 + 0x38))(param_4,0x2a);
        pbVar14 = (byte *)*param_1;
        if (cVar9 == cVar6) {
          pbVar14 = pbVar14 + 1;
          goto LAB_00fb7bc0;
        }
        if (((pbVar14 == (byte *)*param_2) || ((char)*pbVar14 < '\0')) ||
           ((*(ushort *)(param_4[2] + (ulong)*pbVar14 * 2) >> 0xb & 1) == 0)) goto LAB_00fb7a2c;
        param_3[0xe] = 0;
        param_3[0xf] = 0;
        pbVar14 = (byte *)*param_1;
        if ((((byte *)*param_2 == pbVar14) || (bVar7 = *pbVar14, (char)bVar7 < '\0')) ||
           ((*(ushort *)(param_4[2] + (ulong)bVar7 * 2) >> 0xb & 1) == 0)) goto LAB_00fb7bc0;
        goto LAB_00fb7bd0;
      }
      pbVar14 = (byte *)(*param_1 + 1);
      *param_1 = (ulong)pbVar14;
    } while (pbVar14 != (byte *)*param_2);
  }
  goto LAB_00fb7b84;
switchD_00fb8000_caseD_42:
  FUN_00fb81f0(param_6,param_5 + (*param_1 - (long)pcVar17),pcVar1);
  goto switchD_00fb8000_caseD_64;
  while ((*(ushort *)(param_4[2] + (ulong)bVar7 * 2) >> 0xb & 1) != 0) {
LAB_00fb7bd0:
    pbVar14 = pbVar14 + 1;
    bVar7 = (**(code **)(*param_4 + 0x48))(param_4,(long)(char)bVar7,0);
    *(ulong *)(param_3 + 0xe) = *(long *)(param_3 + 0xe) * 10 + (ulong)bVar7 + -0x30;
    if ((pbVar14 == (byte *)*param_2) || (bVar7 = *pbVar14, (char)bVar7 < '\0')) break;
  }
LAB_00fb7bc0:
  *param_1 = (ulong)pbVar14;
LAB_00fb7a2c:
  if ((byte *)*param_2 <= pbVar14) {
    pbVar14 = pbVar14 + ((long)param_5 - (long)pcVar17);
    goto LAB_00fb7b30;
  }
  bVar7 = *pbVar14;
  bVar8 = (**(code **)(*param_4 + 0x38))(param_4,0x2e);
  if (bVar7 == bVar8) {
    pcVar13 = (char *)(*param_1 + 1);
    *param_1 = (ulong)pcVar13;
    if (pcVar13 == (char *)*param_2) {
LAB_00fb7e60:
      bVar4 = false;
      param_3[0x10] = 0;
      param_3[0x11] = 0;
    }
    else {
      cVar9 = *pcVar13;
      cVar6 = (**(code **)(*param_4 + 0x38))(param_4,0x2a);
      pbVar14 = (byte *)*param_1;
      if (cVar9 == cVar6) {
        bVar4 = false;
        *param_1 = (ulong)(pbVar14 + 1);
      }
      else {
        if (((pbVar14 == (byte *)*param_2) || ((char)*pbVar14 < '\0')) ||
           ((*(ushort *)(param_4[2] + (ulong)*pbVar14 * 2) >> 0xb & 1) == 0)) goto LAB_00fb7e60;
        param_3[0x10] = 0;
        param_3[0x11] = 0;
        pbVar14 = (byte *)*param_1;
        if ((((byte *)*param_2 != pbVar14) && (bVar7 = *pbVar14, -1 < (char)bVar7)) &&
           ((*(ushort *)(param_4[2] + (ulong)bVar7 * 2) >> 0xb & 1) != 0)) {
          do {
            pbVar14 = pbVar14 + 1;
            bVar7 = (**(code **)(*param_4 + 0x48))(param_4,(long)(char)bVar7,0);
            *(ulong *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) * 10 + (ulong)bVar7 + -0x30;
            if ((pbVar14 == (byte *)*param_2) || (bVar7 = *pbVar14, (char)bVar7 < '\0')) break;
          } while ((*(ushort *)(param_4[2] + (ulong)bVar7 * 2) >> 0xb & 1) != 0);
        }
        *param_1 = (ulong)pbVar14;
        bVar4 = true;
      }
    }
  }
  else {
    bVar4 = false;
  }
  puVar15 = (undefined1 *)*param_1;
  if (puVar15 == (undefined1 *)*param_2) {
    iVar19 = 0;
  }
  else {
    iVar18 = 0;
    do {
      uVar11 = (**(code **)(*param_4 + 0x48))(param_4,*puVar15,0);
      uVar12 = (uVar11 & 0xff) - 0x49;
      if (uVar12 < 0x32) {
        if ((1L << ((ulong)uVar12 & 0x3f) & 0x2400a80000008U) == 0) {
          if ((ulong)uVar12 != 0) goto code_r0x00fb7adc;
          iVar18 = 0x49;
        }
        goto LAB_00fb7dc4;
      }
code_r0x00fb7adc:
      switch(uVar11 & 0xff) {
      case 0x32:
        if (iVar18 != 0x33) goto LAB_00fb7da4;
        break;
      case 0x33:
        iVar19 = 0x33;
        goto LAB_00fb7d9c;
      case 0x34:
        if (iVar18 != 0x36) goto LAB_00fb7da4;
        break;
      default:
        iVar19 = 0;
        if ((iVar18 != 0) && (iVar18 != 0x49)) {
          pcVar13 = (char *)*param_1;
          goto LAB_00fb7b1c;
        }
        goto LAB_00fb7af8;
      case 0x36:
        iVar19 = 0x36;
LAB_00fb7d9c:
        bVar5 = iVar18 == 0x49;
        iVar18 = iVar19;
        if (bVar5) goto LAB_00fb7dc4;
        goto LAB_00fb7da4;
      }
      iVar18 = 0;
LAB_00fb7dc4:
      puVar15 = (undefined1 *)(*param_1 + 1);
      *param_1 = (ulong)puVar15;
      iVar19 = iVar18;
    } while (puVar15 != (undefined1 *)*param_2);
  }
LAB_00fb7af8:
  pcVar13 = (char *)*param_1;
  if ((iVar19 != 0) || ((char *)*param_2 <= pcVar13)) {
LAB_00fb7b1c:
    pbVar14 = (byte *)(pcVar13 + ((long)param_5 - (long)pcVar17));
    goto LAB_00fb7b30;
  }
  if (bVar3) {
    cVar9 = *pcVar13;
    cVar6 = (**(code **)(*param_4 + 0x38))(param_4,0x7c);
    pcVar13 = (char *)*param_1;
    if (cVar9 == cVar6) goto LAB_00fb8078;
  }
  cVar9 = (**(code **)(*param_4 + 0x48))(param_4,*pcVar13,0);
  if (cVar9 == 'u') goto switchD_00fb8000_caseD_64;
  switch(cVar9) {
  case 'A':
    uVar12 = param_3[0x13] | 0x4000;
    param_3[0x13] = uVar12;
    goto LAB_00fb812c;
  case 'B':
  case 'D':
  case 'H':
  case 'I':
  case 'J':
  case 'K':
  case 'L':
  case 'M':
  case 'N':
  case 'O':
  case 'P':
  case 'Q':
  case 'R':
  case 'U':
  case 'V':
  case 'W':
  case 'Y':
  case 'Z':
  case '[':
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'h':
  case 'j':
  case 'k':
  case 'l':
  case 'm':
  case 'q':
  case 'r':
    goto switchD_00fb8000_caseD_42;
  case 'C':
  case 'c':
    param_3[0x1a] = 1;
    param_3[0x1b] = 0;
    break;
  case 'E':
    uVar12 = param_3[0x13] | 0x4000;
    param_3[0x13] = uVar12;
    goto LAB_00fb8158;
  case 'F':
    uVar12 = param_3[0x13] | 0x4000;
    param_3[0x13] = uVar12;
    goto LAB_00fb8168;
  case 'G':
    uVar12 = param_3[0x13] | 0x4000;
    goto LAB_00fb8170;
  case 'S':
  case 's':
    if (bVar4) {
      *(undefined8 *)(param_3 + 0x1a) = *(undefined8 *)(param_3 + 0x10);
    }
    param_3[0x10] = 6;
    param_3[0x11] = 0;
    break;
  case 'T':
    pcVar13 = (char *)(*param_1 + 1);
    *param_1 = (ulong)pcVar13;
    if ((char *)*param_2 <= pcVar13) goto LAB_00fb7e30;
    *(char *)(param_3 + 0x12) = *pcVar13;
    goto LAB_00fb81b8;
  case 'X':
    param_3[0x13] = param_3[0x13] | 0x4000;
  case 'p':
switchD_00fb8000_caseD_70:
    uVar12 = param_3[0x13] & 0xffffffb5U | 8;
LAB_00fb811c:
    param_3[0x13] = uVar12;
    break;
  case 'a':
    uVar12 = param_3[0x13];
LAB_00fb812c:
    uVar12 = uVar12 & 0xfffffeb1 | 0x104;
    goto LAB_00fb8170;
  case 'b':
    uVar12 = param_3[0x13] | 1;
    goto LAB_00fb8170;
  case 'd':
  case 'g':
  case 'i':
    break;
  case 'e':
    uVar12 = param_3[0x13];
LAB_00fb8158:
    uVar12 = uVar12 | 0x100;
    goto LAB_00fb8170;
  case 'f':
    uVar12 = param_3[0x13];
LAB_00fb8168:
    uVar12 = uVar12 | 4;
LAB_00fb8170:
    param_3[0x13] = uVar12;
    break;
  case 'n':
    iVar19 = -3;
    goto LAB_00fb81c8;
  case 'o':
    uVar12 = param_3[0x13] & 0xffffffb5U | 0x40;
    goto LAB_00fb811c;
  case 't':
    uVar10 = (**(code **)(*param_4 + 0x38))(param_4,0x20);
    *(undefined1 *)(param_3 + 0x12) = uVar10;
LAB_00fb81b8:
    param_3[0x1c] = param_3[0x1c] | 8;
    iVar19 = -2;
LAB_00fb81c8:
    *param_3 = iVar19;
    break;
  default:
    if (cVar9 == 'x') goto switchD_00fb8000_caseD_70;
    goto switchD_00fb8000_caseD_42;
  }
switchD_00fb8000_caseD_64:
  pbVar14 = (byte *)(*param_1 + 1);
  *param_1 = (ulong)pbVar14;
  if (bVar3) {
    if (pbVar14 != (byte *)*param_2) {
      bVar7 = *pbVar14;
      bVar8 = (**(code **)(*param_4 + 0x38))(param_4,0x7c);
      if (bVar7 == bVar8) {
        pcVar13 = (char *)*param_1;
LAB_00fb8078:
        *param_1 = (ulong)(pcVar13 + 1);
        return 1;
      }
LAB_00fb7da4:
      pbVar14 = (byte *)*param_1;
    }
LAB_00fb7b84:
    pbVar14 = pbVar14 + ((long)param_5 - (long)pcVar17);
LAB_00fb7b30:
    FUN_00fb81f0(param_6,pbVar14,pcVar1);
  }
  return 1;
}


