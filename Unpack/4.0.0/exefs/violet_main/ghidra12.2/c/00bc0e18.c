/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bc0e18; name: FUN_00bc0e18
 */


undefined8 FUN_00bc0e18(long param_1,ulong *param_2)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  char *pcVar14;
  int *piVar15;
  long *plVar16;
  int iVar17;
  byte *pbVar18;
  char *pcVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  long lVar22;
  
  puVar1 = param_2 + 7;
LAB_00bc0e88:
  pbVar4 = (byte *)*param_2;
  if ((byte *)param_2[1] <= pbVar4) {
    uVar11 = 0;
LAB_00bc0ec0:
    iVar8 = FUN_00c096d0(param_2,uVar11);
    bVar7 = iVar8 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar8;
    uVar11 = (ulong)CONCAT14(bVar7,iVar8);
    if (bVar7) goto LAB_00bc0f14;
    goto switchD_00bc0f30_default;
  }
  bVar6 = *pbVar4;
  uVar11 = (ulong)(uint)bVar6;
  if ((char)bVar6 < '\x01') goto LAB_00bc0ec0;
  *(uint *)(param_2 + 4) = (uint)bVar6;
  *param_2 = (ulong)(pbVar4 + 1);
LAB_00bc0f14:
  iVar8 = (int)uVar11;
  switch((uint)(uVar11 >> 3) & 0x1fffffff) {
  case 1:
    if (iVar8 == 10) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      lVar22 = *(long *)(param_1 + 0x18);
      if (lVar22 == *(long *)PTR_DAT_047dabb0) {
        FUN_00b6eb88((long *)(param_1 + 0x18),*(long *)PTR_DAT_047dabb0);
        lVar22 = *(long *)(param_1 + 0x18);
      }
      uVar11 = FUN_00c0d824(param_2,lVar22);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      pcVar19 = (char *)*param_2;
      if ((pcVar19 < (char *)param_2[1]) && (*pcVar19 == '\x12')) {
        *param_2 = (ulong)(pcVar19 + 1);
LAB_00bc1028:
        uVar11 = *puVar1;
        *(int *)puVar1 = (int)uVar11 + -1;
        if ((int)uVar11 < 1) {
          return 0;
        }
        do {
          piVar15 = *(int **)(param_1 + 0x30);
          if (piVar15 == (int *)0x0) {
            iVar8 = *(int *)(param_1 + 0x28);
            iVar17 = *(int *)(param_1 + 0x2c);
LAB_00bc107c:
            if (iVar8 <= iVar17) {
              FUN_00c11f04(param_1 + 0x20,(iVar17 - iVar8) + 1);
              piVar15 = *(int **)(param_1 + 0x30);
            }
            iVar17 = *piVar15;
LAB_00bc1098:
            *piVar15 = iVar17 + 1;
            uVar20 = FUN_00ba8a8c(0,*(undefined8 *)(param_1 + 0x20));
            iVar8 = *(int *)(param_1 + 0x28);
            *(int *)(param_1 + 0x28) = iVar8 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)iVar8 * 8 + 8) = uVar20;
          }
          else {
            iVar8 = *(int *)(param_1 + 0x28);
            iVar17 = *piVar15;
            if (iVar17 <= iVar8) {
              if (iVar17 == *(int *)(param_1 + 0x2c)) goto LAB_00bc107c;
              goto LAB_00bc1098;
            }
            *(int *)(param_1 + 0x28) = iVar8 + 1;
            uVar20 = *(undefined8 *)(piVar15 + (long)iVar8 * 2 + 2);
          }
          pbVar4 = (byte *)*param_2;
          if (pbVar4 < (byte *)param_2[1]) {
            uVar11 = (ulong)*pbVar4;
            if ((char)*pbVar4 < '\0') goto LAB_00bc10f0;
            *param_2 = (ulong)(pbVar4 + 1);
          }
          else {
            uVar11 = 0;
LAB_00bc10f0:
            uVar11 = FUN_00c0944c(param_2,uVar11);
            if ((long)uVar11 < 0) {
              uVar11 = 0;
            }
          }
          iVar3 = (int)param_2[3];
          iVar2 = (int)param_2[5];
          iVar8 = (iVar3 - *(int *)((long)param_2 + 0x2c)) + ((int)*param_2 - (int)param_2[1]);
          iVar10 = (int)uVar11;
          uVar11 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
          param_2[1] = uVar11;
          iVar17 = 0x7fffffff;
          if (iVar10 <= 0x7fffffff - iVar8 && -1 < iVar10) {
            iVar17 = iVar8 + iVar10;
          }
          iVar8 = iVar2;
          if (iVar17 <= iVar2) {
            iVar8 = iVar17;
          }
          *(int *)(param_2 + 5) = iVar8;
          iVar17 = (int)param_2[6];
          if (iVar8 <= (int)param_2[6]) {
            iVar17 = iVar8;
          }
          iVar8 = iVar3 - iVar17;
          if (iVar8 == 0 || iVar3 < iVar17) {
            *(undefined4 *)((long)param_2 + 0x2c) = 0;
          }
          else {
            *(int *)((long)param_2 + 0x2c) = iVar8;
            param_2[1] = uVar11 - (long)iVar8;
          }
          uVar11 = FUN_00bc4c38(uVar20,param_2);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
          pcVar19 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
          iVar8 = (int)param_2[6];
          if (iVar2 <= (int)param_2[6]) {
            iVar8 = iVar2;
          }
          cVar5 = *(char *)((long)param_2 + 0x24);
          *(int *)(param_2 + 5) = iVar2;
          param_2[1] = (ulong)pcVar19;
          iVar17 = (int)param_2[3] - iVar8;
          if (iVar17 == 0 || (int)param_2[3] < iVar8) {
            *(undefined4 *)((long)param_2 + 0x2c) = 0;
          }
          else {
            pcVar19 = pcVar19 + -(long)iVar17;
            *(int *)((long)param_2 + 0x2c) = iVar17;
            param_2[1] = (ulong)pcVar19;
          }
          *(undefined1 *)((long)param_2 + 0x24) = 0;
          if (cVar5 == '\0') {
            return 0;
          }
          pcVar14 = (char *)*param_2;
          if (pcVar19 <= pcVar14) goto LAB_00bc125c;
          if (*pcVar14 != '\x12') goto LAB_00bc1240;
          *param_2 = (ulong)(pcVar14 + 1);
        } while( true );
      }
      goto LAB_00bc0e88;
    }
    break;
  case 2:
    if (iVar8 == 0x12) goto LAB_00bc1028;
    break;
  case 3:
    if (iVar8 == 0x1a) {
      uVar11 = *puVar1;
      *(int *)puVar1 = (int)uVar11 + -1;
      if (0 < (int)uVar11) goto LAB_00bc1274;
      return 0;
    }
    break;
  case 4:
    if (iVar8 == 0x22) {
      uVar11 = *puVar1;
      *(int *)puVar1 = (int)uVar11 + -1;
      if (0 < (int)uVar11) goto LAB_00bc1434;
      return 0;
    }
    break;
  case 5:
    if (iVar8 == 0x2a) {
      uVar11 = *puVar1;
      *(int *)puVar1 = (int)uVar11 + -1;
      if (0 < (int)uVar11) goto LAB_00bc15f4;
      return 0;
    }
    break;
  case 6:
    if (iVar8 == 0x32) {
      uVar11 = *puVar1;
      *(int *)puVar1 = (int)uVar11 + -1;
      if (0 < (int)uVar11) goto LAB_00bc17b4;
      return 0;
    }
    break;
  case 7:
    if (iVar8 != 0x3a) break;
    goto LAB_00bc1984;
  case 8:
    if (iVar8 == 0x42) {
      iVar8 = (int)*puVar1;
      goto LAB_00bc1b2c;
    }
    break;
  case 9:
    if (iVar8 == 0x4a) {
      uVar11 = *puVar1;
      *(int *)puVar1 = (int)uVar11 + -1;
      if (0 < (int)uVar11) goto LAB_00bc1d68;
      return 0;
    }
    break;
  case 10:
    if (iVar8 == 0x52) goto LAB_00bc1f38;
  }
switchD_00bc0f30_default:
  if (((uint)uVar11 == 0) || (((uint)uVar11 & 7) == 4)) {
    return 1;
  }
  uVar12 = *(ulong *)(param_1 + 8);
  if ((uVar12 & 1) == 0) {
    uVar12 = FUN_00b7714c((ulong *)(param_1 + 8));
  }
  else {
    uVar12 = uVar12 & 0xfffffffffffffffe;
  }
  uVar11 = FUN_00c01b50(param_2,uVar11 & 0xffffffff,uVar12);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  goto LAB_00bc0e88;
LAB_00bc1240:
  if (*pcVar14 == '\x1a') {
    do {
      *param_2 = (ulong)(pcVar14 + 1);
LAB_00bc1274:
      piVar15 = *(int **)(param_1 + 0x60);
      if (piVar15 == (int *)0x0) {
        iVar8 = *(int *)(param_1 + 0x58);
        iVar17 = *(int *)(param_1 + 0x5c);
LAB_00bc12b8:
        if (iVar8 <= iVar17) {
          FUN_00c11f04(param_1 + 0x50,(iVar17 - iVar8) + 1);
          piVar15 = *(int **)(param_1 + 0x60);
        }
        iVar17 = *piVar15;
LAB_00bc12d4:
        *piVar15 = iVar17 + 1;
        uVar20 = FUN_00ba8784(0,*(undefined8 *)(param_1 + 0x50));
        iVar8 = *(int *)(param_1 + 0x58);
        *(int *)(param_1 + 0x58) = iVar8 + 1;
        *(undefined8 *)(*(long *)(param_1 + 0x60) + (long)iVar8 * 8 + 8) = uVar20;
      }
      else {
        iVar8 = *(int *)(param_1 + 0x58);
        iVar17 = *piVar15;
        if (iVar17 <= iVar8) {
          if (iVar17 == *(int *)(param_1 + 0x5c)) goto LAB_00bc12b8;
          goto LAB_00bc12d4;
        }
        *(int *)(param_1 + 0x58) = iVar8 + 1;
        uVar20 = *(undefined8 *)(piVar15 + (long)iVar8 * 2 + 2);
      }
      pbVar4 = (byte *)*param_2;
      if (pbVar4 < (byte *)param_2[1]) {
        uVar11 = (ulong)*pbVar4;
        if ((char)*pbVar4 < '\0') goto LAB_00bc132c;
        *param_2 = (ulong)(pbVar4 + 1);
      }
      else {
        uVar11 = 0;
LAB_00bc132c:
        uVar11 = FUN_00c0944c(param_2,uVar11);
        if ((long)uVar11 < 0) {
          uVar11 = 0;
        }
      }
      iVar3 = (int)param_2[3];
      iVar2 = (int)param_2[5];
      iVar8 = (iVar3 - *(int *)((long)param_2 + 0x2c)) + ((int)*param_2 - (int)param_2[1]);
      iVar10 = (int)uVar11;
      uVar11 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
      param_2[1] = uVar11;
      iVar17 = 0x7fffffff;
      if (iVar10 <= 0x7fffffff - iVar8 && -1 < iVar10) {
        iVar17 = iVar8 + iVar10;
      }
      iVar8 = iVar2;
      if (iVar17 <= iVar2) {
        iVar8 = iVar17;
      }
      *(int *)(param_2 + 5) = iVar8;
      iVar17 = (int)param_2[6];
      if (iVar8 <= (int)param_2[6]) {
        iVar17 = iVar8;
      }
      iVar8 = iVar3 - iVar17;
      if (iVar8 == 0 || iVar3 < iVar17) {
        *(undefined4 *)((long)param_2 + 0x2c) = 0;
      }
      else {
        *(int *)((long)param_2 + 0x2c) = iVar8;
        param_2[1] = uVar11 - (long)iVar8;
      }
      uVar11 = FUN_00bc0e18(uVar20,param_2);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      pcVar19 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
      iVar8 = (int)param_2[6];
      if (iVar2 <= (int)param_2[6]) {
        iVar8 = iVar2;
      }
      cVar5 = *(char *)((long)param_2 + 0x24);
      *(int *)(param_2 + 5) = iVar2;
      param_2[1] = (ulong)pcVar19;
      iVar17 = (int)param_2[3] - iVar8;
      if (iVar17 == 0 || (int)param_2[3] < iVar8) {
        *(undefined4 *)((long)param_2 + 0x2c) = 0;
      }
      else {
        pcVar19 = pcVar19 + -(long)iVar17;
        *(int *)((long)param_2 + 0x2c) = iVar17;
        param_2[1] = (ulong)pcVar19;
      }
      *(undefined1 *)((long)param_2 + 0x24) = 0;
      if (cVar5 == '\0') {
        return 0;
      }
      pcVar14 = (char *)*param_2;
      if (pcVar19 <= pcVar14) goto LAB_00bc125c;
    } while (*pcVar14 == '\x1a');
    if (*pcVar14 == '\"') {
      do {
        *param_2 = (ulong)(pcVar14 + 1);
LAB_00bc1434:
        piVar15 = *(int **)(param_1 + 0x78);
        if (piVar15 == (int *)0x0) {
          iVar8 = *(int *)(param_1 + 0x70);
          iVar17 = *(int *)(param_1 + 0x74);
LAB_00bc1478:
          if (iVar8 <= iVar17) {
            FUN_00c11f04(param_1 + 0x68,(iVar17 - iVar8) + 1);
            piVar15 = *(int **)(param_1 + 0x78);
          }
          iVar17 = *piVar15;
LAB_00bc1494:
          *piVar15 = iVar17 + 1;
          uVar20 = FUN_00ba888c(0,*(undefined8 *)(param_1 + 0x68));
          iVar8 = *(int *)(param_1 + 0x70);
          *(int *)(param_1 + 0x70) = iVar8 + 1;
          *(undefined8 *)(*(long *)(param_1 + 0x78) + (long)iVar8 * 8 + 8) = uVar20;
        }
        else {
          iVar8 = *(int *)(param_1 + 0x70);
          iVar17 = *piVar15;
          if (iVar17 <= iVar8) {
            if (iVar17 == *(int *)(param_1 + 0x74)) goto LAB_00bc1478;
            goto LAB_00bc1494;
          }
          *(int *)(param_1 + 0x70) = iVar8 + 1;
          uVar20 = *(undefined8 *)(piVar15 + (long)iVar8 * 2 + 2);
        }
        pbVar4 = (byte *)*param_2;
        if (pbVar4 < (byte *)param_2[1]) {
          uVar11 = (ulong)*pbVar4;
          if ((char)*pbVar4 < '\0') goto LAB_00bc14ec;
          *param_2 = (ulong)(pbVar4 + 1);
        }
        else {
          uVar11 = 0;
LAB_00bc14ec:
          uVar11 = FUN_00c0944c(param_2,uVar11);
          if ((long)uVar11 < 0) {
            uVar11 = 0;
          }
        }
        iVar3 = (int)param_2[3];
        iVar2 = (int)param_2[5];
        iVar8 = (iVar3 - *(int *)((long)param_2 + 0x2c)) + ((int)*param_2 - (int)param_2[1]);
        iVar10 = (int)uVar11;
        uVar11 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
        param_2[1] = uVar11;
        iVar17 = 0x7fffffff;
        if (iVar10 <= 0x7fffffff - iVar8 && -1 < iVar10) {
          iVar17 = iVar8 + iVar10;
        }
        iVar8 = iVar2;
        if (iVar17 <= iVar2) {
          iVar8 = iVar17;
        }
        *(int *)(param_2 + 5) = iVar8;
        iVar17 = (int)param_2[6];
        if (iVar8 <= (int)param_2[6]) {
          iVar17 = iVar8;
        }
        iVar8 = iVar3 - iVar17;
        if (iVar8 == 0 || iVar3 < iVar17) {
          *(undefined4 *)((long)param_2 + 0x2c) = 0;
        }
        else {
          *(int *)((long)param_2 + 0x2c) = iVar8;
          param_2[1] = uVar11 - (long)iVar8;
        }
        uVar11 = FUN_00bc8a0c(uVar20,param_2);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
        pcVar19 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
        iVar8 = (int)param_2[6];
        if (iVar2 <= (int)param_2[6]) {
          iVar8 = iVar2;
        }
        cVar5 = *(char *)((long)param_2 + 0x24);
        *(int *)(param_2 + 5) = iVar2;
        param_2[1] = (ulong)pcVar19;
        iVar17 = (int)param_2[3] - iVar8;
        if (iVar17 == 0 || (int)param_2[3] < iVar8) {
          *(undefined4 *)((long)param_2 + 0x2c) = 0;
        }
        else {
          pcVar19 = pcVar19 + -(long)iVar17;
          *(int *)((long)param_2 + 0x2c) = iVar17;
          param_2[1] = (ulong)pcVar19;
        }
        *(undefined1 *)((long)param_2 + 0x24) = 0;
        if (cVar5 == '\0') {
          return 0;
        }
        pcVar14 = (char *)*param_2;
        if (pcVar19 <= pcVar14) goto LAB_00bc125c;
      } while (*pcVar14 == '\"');
      if (*pcVar14 == '*') {
        do {
          *param_2 = (ulong)(pcVar14 + 1);
LAB_00bc15f4:
          piVar15 = *(int **)(param_1 + 0x90);
          if (piVar15 == (int *)0x0) {
            iVar8 = *(int *)(param_1 + 0x88);
            iVar17 = *(int *)(param_1 + 0x8c);
LAB_00bc1638:
            if (iVar8 <= iVar17) {
              FUN_00c11f04(param_1 + 0x80,(iVar17 - iVar8) + 1);
              piVar15 = *(int **)(param_1 + 0x90);
            }
            iVar17 = *piVar15;
LAB_00bc1654:
            *piVar15 = iVar17 + 1;
            uVar20 = FUN_00ba8e2c(0,*(undefined8 *)(param_1 + 0x80));
            iVar8 = *(int *)(param_1 + 0x88);
            *(int *)(param_1 + 0x88) = iVar8 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x90) + (long)iVar8 * 8 + 8) = uVar20;
          }
          else {
            iVar8 = *(int *)(param_1 + 0x88);
            iVar17 = *piVar15;
            if (iVar17 <= iVar8) {
              if (iVar17 == *(int *)(param_1 + 0x8c)) goto LAB_00bc1638;
              goto LAB_00bc1654;
            }
            *(int *)(param_1 + 0x88) = iVar8 + 1;
            uVar20 = *(undefined8 *)(piVar15 + (long)iVar8 * 2 + 2);
          }
          pbVar4 = (byte *)*param_2;
          if (pbVar4 < (byte *)param_2[1]) {
            uVar11 = (ulong)*pbVar4;
            if ((char)*pbVar4 < '\0') goto LAB_00bc16ac;
            *param_2 = (ulong)(pbVar4 + 1);
          }
          else {
            uVar11 = 0;
LAB_00bc16ac:
            uVar11 = FUN_00c0944c(param_2,uVar11);
            if ((long)uVar11 < 0) {
              uVar11 = 0;
            }
          }
          iVar3 = (int)param_2[3];
          iVar2 = (int)param_2[5];
          iVar8 = (iVar3 - *(int *)((long)param_2 + 0x2c)) + ((int)*param_2 - (int)param_2[1]);
          iVar10 = (int)uVar11;
          uVar11 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
          param_2[1] = uVar11;
          iVar17 = 0x7fffffff;
          if (iVar10 <= 0x7fffffff - iVar8 && -1 < iVar10) {
            iVar17 = iVar8 + iVar10;
          }
          iVar8 = iVar2;
          if (iVar17 <= iVar2) {
            iVar8 = iVar17;
          }
          *(int *)(param_2 + 5) = iVar8;
          iVar17 = (int)param_2[6];
          if (iVar8 <= (int)param_2[6]) {
            iVar17 = iVar8;
          }
          iVar8 = iVar3 - iVar17;
          if (iVar8 == 0 || iVar3 < iVar17) {
            *(undefined4 *)((long)param_2 + 0x2c) = 0;
          }
          else {
            *(int *)((long)param_2 + 0x2c) = iVar8;
            param_2[1] = uVar11 - (long)iVar8;
          }
          uVar11 = FUN_00bbe1dc(uVar20,param_2);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
          pcVar19 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
          iVar8 = (int)param_2[6];
          if (iVar2 <= (int)param_2[6]) {
            iVar8 = iVar2;
          }
          cVar5 = *(char *)((long)param_2 + 0x24);
          *(int *)(param_2 + 5) = iVar2;
          param_2[1] = (ulong)pcVar19;
          iVar17 = (int)param_2[3] - iVar8;
          if (iVar17 == 0 || (int)param_2[3] < iVar8) {
            *(undefined4 *)((long)param_2 + 0x2c) = 0;
          }
          else {
            pcVar19 = pcVar19 + -(long)iVar17;
            *(int *)((long)param_2 + 0x2c) = iVar17;
            param_2[1] = (ulong)pcVar19;
          }
          *(undefined1 *)((long)param_2 + 0x24) = 0;
          if (cVar5 == '\0') {
            return 0;
          }
          pcVar14 = (char *)*param_2;
          if (pcVar19 <= pcVar14) goto LAB_00bc125c;
        } while (*pcVar14 == '*');
        if (*pcVar14 == '2') {
          do {
            *param_2 = (ulong)(pcVar14 + 1);
LAB_00bc17b4:
            piVar15 = *(int **)(param_1 + 0x48);
            if (piVar15 == (int *)0x0) {
              iVar8 = *(int *)(param_1 + 0x40);
              iVar17 = *(int *)(param_1 + 0x44);
LAB_00bc17f8:
              if (iVar8 <= iVar17) {
                FUN_00c11f04(param_1 + 0x38,(iVar17 - iVar8) + 1);
                piVar15 = *(int **)(param_1 + 0x48);
              }
              iVar17 = *piVar15;
LAB_00bc1814:
              *piVar15 = iVar17 + 1;
              uVar20 = FUN_00ba8a8c(0,*(undefined8 *)(param_1 + 0x38));
              iVar8 = *(int *)(param_1 + 0x40);
              *(int *)(param_1 + 0x40) = iVar8 + 1;
              *(undefined8 *)(*(long *)(param_1 + 0x48) + (long)iVar8 * 8 + 8) = uVar20;
            }
            else {
              iVar8 = *(int *)(param_1 + 0x40);
              iVar17 = *piVar15;
              if (iVar17 <= iVar8) {
                if (iVar17 == *(int *)(param_1 + 0x44)) goto LAB_00bc17f8;
                goto LAB_00bc1814;
              }
              *(int *)(param_1 + 0x40) = iVar8 + 1;
              uVar20 = *(undefined8 *)(piVar15 + (long)iVar8 * 2 + 2);
            }
            pbVar4 = (byte *)*param_2;
            if (pbVar4 < (byte *)param_2[1]) {
              uVar11 = (ulong)*pbVar4;
              if ((char)*pbVar4 < '\0') goto LAB_00bc186c;
              *param_2 = (ulong)(pbVar4 + 1);
            }
            else {
              uVar11 = 0;
LAB_00bc186c:
              uVar11 = FUN_00c0944c(param_2,uVar11);
              if ((long)uVar11 < 0) {
                uVar11 = 0;
              }
            }
            iVar3 = (int)param_2[3];
            iVar2 = (int)param_2[5];
            iVar8 = (iVar3 - *(int *)((long)param_2 + 0x2c)) + ((int)*param_2 - (int)param_2[1]);
            iVar10 = (int)uVar11;
            uVar11 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
            param_2[1] = uVar11;
            iVar17 = 0x7fffffff;
            if (iVar10 <= 0x7fffffff - iVar8 && -1 < iVar10) {
              iVar17 = iVar8 + iVar10;
            }
            iVar8 = iVar2;
            if (iVar17 <= iVar2) {
              iVar8 = iVar17;
            }
            *(int *)(param_2 + 5) = iVar8;
            iVar17 = (int)param_2[6];
            if (iVar8 <= (int)param_2[6]) {
              iVar17 = iVar8;
            }
            iVar8 = iVar3 - iVar17;
            if (iVar8 == 0 || iVar3 < iVar17) {
              *(undefined4 *)((long)param_2 + 0x2c) = 0;
            }
            else {
              *(int *)((long)param_2 + 0x2c) = iVar8;
              param_2[1] = uVar11 - (long)iVar8;
            }
            uVar11 = FUN_00bc4c38(uVar20,param_2);
            if ((uVar11 & 1) == 0) {
              return 0;
            }
            pcVar19 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
            iVar8 = (int)param_2[6];
            if (iVar2 <= (int)param_2[6]) {
              iVar8 = iVar2;
            }
            cVar5 = *(char *)((long)param_2 + 0x24);
            *(int *)(param_2 + 5) = iVar2;
            param_2[1] = (ulong)pcVar19;
            iVar17 = (int)param_2[3] - iVar8;
            if (iVar17 == 0 || (int)param_2[3] < iVar8) {
              *(undefined4 *)((long)param_2 + 0x2c) = 0;
            }
            else {
              pcVar19 = pcVar19 + -(long)iVar17;
              *(int *)((long)param_2 + 0x2c) = iVar17;
              param_2[1] = (ulong)pcVar19;
            }
            *(undefined1 *)((long)param_2 + 0x24) = 0;
            if (cVar5 == '\0') {
              return 0;
            }
            pcVar14 = (char *)*param_2;
            if (pcVar19 <= pcVar14) goto LAB_00bc125c;
          } while (*pcVar14 == '2');
          *(int *)puVar1 = (int)*puVar1 + 1;
          if (*pcVar14 == ':') {
            *param_2 = (ulong)(pcVar14 + 1);
LAB_00bc1984:
            puVar21 = *(undefined8 **)(param_1 + 0xb0);
            *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80;
            if (puVar21 == (undefined8 *)0x0) {
              lVar22 = tpidr_el0;
              plVar16 = *(long **)(lVar22 + 0x30);
              if (plVar16 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar16 = DAT_04859430;
                *(long **)(lVar22 + 0x30) = DAT_04859430;
              }
              puVar21 = (undefined8 *)(**(code **)(*plVar16 + 0x10))(plVar16,0x58,8);
              puVar21[3] = 0;
              puVar21[4] = 0;
              puVar21[2] = 0;
              *puVar21 = &PTR_FUN_0455af80;
              puVar21[1] = puVar21 + 2;
              puVar21[9] = 0;
              *(undefined4 *)(puVar21 + 10) = 0;
              puVar21[5] = 0;
              puVar21[6] = 0;
              puVar21[7] = 0;
              puVar21[8] = 0;
              *(undefined8 **)(param_1 + 0xb0) = puVar21;
            }
            pbVar4 = (byte *)*param_2;
            pbVar13 = (byte *)param_2[1];
            if ((pbVar4 < pbVar13) && (-1 < (char)*pbVar4)) {
              pbVar18 = pbVar4 + 1;
              uVar9 = (uint)*pbVar4;
              *param_2 = (ulong)pbVar18;
            }
            else {
              uVar9 = FUN_00c0954c(param_2);
              if ((int)uVar9 < 0) {
                return 0;
              }
              pbVar18 = (byte *)*param_2;
              pbVar13 = (byte *)param_2[1];
            }
            iVar10 = (int)param_2[3];
            iVar2 = (int)param_2[5];
            iVar3 = *(int *)((long)param_2 + 0x2c);
            param_2[1] = (ulong)(pbVar13 + iVar3);
            iVar8 = (iVar10 - iVar3) + ((int)pbVar18 - (int)pbVar13);
            iVar17 = 0x7fffffff;
            if ((int)uVar9 <= 0x7fffffff - iVar8) {
              iVar17 = iVar8 + uVar9;
            }
            iVar8 = iVar2;
            if (iVar17 <= iVar2) {
              iVar8 = iVar17;
            }
            *(int *)(param_2 + 5) = iVar8;
            iVar17 = (int)param_2[6];
            if (iVar8 <= (int)param_2[6]) {
              iVar17 = iVar8;
            }
            iVar8 = iVar10 - iVar17;
            if (iVar8 == 0 || iVar10 < iVar17) {
              *(undefined4 *)((long)param_2 + 0x2c) = 0;
            }
            else {
              *(int *)((long)param_2 + 0x2c) = iVar8;
              param_2[1] = (long)(pbVar13 + iVar3) - (long)iVar8;
            }
            uVar11 = *puVar1;
            *(int *)puVar1 = (int)uVar11 + -1;
            if ((int)uVar11 < 1) {
              return 0;
            }
            uVar11 = FUN_00bd204c(puVar21,param_2);
            if ((uVar11 & 1) == 0) {
              return 0;
            }
            pcVar19 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
            iVar8 = (int)param_2[6];
            if (iVar2 <= (int)param_2[6]) {
              iVar8 = iVar2;
            }
            cVar5 = *(char *)((long)param_2 + 0x24);
            *(int *)(param_2 + 5) = iVar2;
            param_2[1] = (ulong)pcVar19;
            iVar17 = (int)param_2[3] - iVar8;
            if (iVar17 == 0 || (int)param_2[3] < iVar8) {
              *(undefined4 *)((long)param_2 + 0x2c) = 0;
            }
            else {
              pcVar19 = pcVar19 + -(long)iVar17;
              *(int *)((long)param_2 + 0x2c) = iVar17;
              param_2[1] = (ulong)pcVar19;
            }
            iVar8 = (int)param_2[7] + 1;
            *(undefined1 *)((long)param_2 + 0x24) = 0;
            *(int *)(param_2 + 7) = iVar8;
            if (cVar5 == '\0') {
              return 0;
            }
            pcVar14 = (char *)*param_2;
            if ((pcVar14 < pcVar19) && (*pcVar14 == 'B')) {
              *param_2 = (ulong)(pcVar14 + 1);
LAB_00bc1b2c:
              *(int *)puVar1 = iVar8 + -1;
              if (iVar8 < 1) {
                return 0;
              }
              do {
                piVar15 = *(int **)(param_1 + 0xa8);
                if (piVar15 == (int *)0x0) {
                  iVar8 = *(int *)(param_1 + 0xa0);
                  iVar17 = *(int *)(param_1 + 0xa4);
LAB_00bc1b7c:
                  if (iVar8 <= iVar17) {
                    FUN_00c11f04(param_1 + 0x98,(iVar17 - iVar8) + 1);
                    piVar15 = *(int **)(param_1 + 0xa8);
                  }
                  iVar17 = *piVar15;
LAB_00bc1b98:
                  *piVar15 = iVar17 + 1;
                  uVar20 = FUN_00ba8b8c(0,*(undefined8 *)(param_1 + 0x98));
                  iVar8 = *(int *)(param_1 + 0xa0);
                  *(int *)(param_1 + 0xa0) = iVar8 + 1;
                  *(undefined8 *)(*(long *)(param_1 + 0xa8) + (long)iVar8 * 8 + 8) = uVar20;
                }
                else {
                  iVar8 = *(int *)(param_1 + 0xa0);
                  iVar17 = *piVar15;
                  if (iVar17 <= iVar8) {
                    if (iVar17 == *(int *)(param_1 + 0xa4)) goto LAB_00bc1b7c;
                    goto LAB_00bc1b98;
                  }
                  *(int *)(param_1 + 0xa0) = iVar8 + 1;
                  uVar20 = *(undefined8 *)(piVar15 + (long)iVar8 * 2 + 2);
                }
                pbVar4 = (byte *)*param_2;
                if (pbVar4 < (byte *)param_2[1]) {
                  uVar11 = (ulong)*pbVar4;
                  if ((char)*pbVar4 < '\0') goto LAB_00bc1bf0;
                  *param_2 = (ulong)(pbVar4 + 1);
                }
                else {
                  uVar11 = 0;
LAB_00bc1bf0:
                  uVar11 = FUN_00c0944c(param_2,uVar11);
                  if ((long)uVar11 < 0) {
                    uVar11 = 0;
                  }
                }
                iVar3 = (int)param_2[3];
                iVar2 = (int)param_2[5];
                iVar8 = (iVar3 - *(int *)((long)param_2 + 0x2c)) + ((int)*param_2 - (int)param_2[1])
                ;
                iVar10 = (int)uVar11;
                uVar11 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
                param_2[1] = uVar11;
                iVar17 = 0x7fffffff;
                if (iVar10 <= 0x7fffffff - iVar8 && -1 < iVar10) {
                  iVar17 = iVar8 + iVar10;
                }
                iVar8 = iVar2;
                if (iVar17 <= iVar2) {
                  iVar8 = iVar17;
                }
                *(int *)(param_2 + 5) = iVar8;
                iVar17 = (int)param_2[6];
                if (iVar8 <= (int)param_2[6]) {
                  iVar17 = iVar8;
                }
                iVar8 = iVar3 - iVar17;
                if (iVar8 == 0 || iVar3 < iVar17) {
                  *(undefined4 *)((long)param_2 + 0x2c) = 0;
                }
                else {
                  *(int *)((long)param_2 + 0x2c) = iVar8;
                  param_2[1] = uVar11 - (long)iVar8;
                }
                uVar11 = FUN_00bc7084(uVar20,param_2);
                if ((uVar11 & 1) == 0) {
                  return 0;
                }
                pcVar19 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
                iVar8 = (int)param_2[6];
                if (iVar2 <= (int)param_2[6]) {
                  iVar8 = iVar2;
                }
                cVar5 = *(char *)((long)param_2 + 0x24);
                *(int *)(param_2 + 5) = iVar2;
                param_2[1] = (ulong)pcVar19;
                iVar17 = (int)param_2[3] - iVar8;
                if (iVar17 == 0 || (int)param_2[3] < iVar8) {
                  *(undefined4 *)((long)param_2 + 0x2c) = 0;
                }
                else {
                  pcVar19 = pcVar19 + -(long)iVar17;
                  *(int *)((long)param_2 + 0x2c) = iVar17;
                  param_2[1] = (ulong)pcVar19;
                }
                *(undefined1 *)((long)param_2 + 0x24) = 0;
                if (cVar5 == '\0') {
                  return 0;
                }
                pcVar14 = (char *)*param_2;
                if (pcVar19 <= pcVar14) goto LAB_00bc125c;
                if (*pcVar14 != 'B') goto LAB_00bc1cf4;
                *param_2 = (ulong)(pcVar14 + 1);
              } while( true );
            }
          }
          goto LAB_00bc0e88;
        }
      }
    }
  }
LAB_00bc125c:
  *(int *)puVar1 = (int)*puVar1 + 1;
  goto LAB_00bc0e88;
LAB_00bc1cf4:
  if (*pcVar14 == 'J') {
    do {
      *param_2 = (ulong)(pcVar14 + 1);
LAB_00bc1d68:
      piVar15 = *(int **)(param_1 + 200);
      if (piVar15 == (int *)0x0) {
        iVar8 = *(int *)(param_1 + 0xc0);
        iVar17 = *(int *)(param_1 + 0xc4);
LAB_00bc1dac:
        if (iVar8 <= iVar17) {
          FUN_00c11f04(param_1 + 0xb8,(iVar17 - iVar8) + 1);
          piVar15 = *(int **)(param_1 + 200);
        }
        iVar17 = *piVar15;
LAB_00bc1dc8:
        *piVar15 = iVar17 + 1;
        uVar20 = FUN_00ba8f4c(0,*(undefined8 *)(param_1 + 0xb8));
        iVar8 = *(int *)(param_1 + 0xc0);
        *(int *)(param_1 + 0xc0) = iVar8 + 1;
        *(undefined8 *)(*(long *)(param_1 + 200) + (long)iVar8 * 8 + 8) = uVar20;
      }
      else {
        iVar8 = *(int *)(param_1 + 0xc0);
        iVar17 = *piVar15;
        if (iVar17 <= iVar8) {
          if (iVar17 == *(int *)(param_1 + 0xc4)) goto LAB_00bc1dac;
          goto LAB_00bc1dc8;
        }
        *(int *)(param_1 + 0xc0) = iVar8 + 1;
        uVar20 = *(undefined8 *)(piVar15 + (long)iVar8 * 2 + 2);
      }
      pbVar4 = (byte *)*param_2;
      if (pbVar4 < (byte *)param_2[1]) {
        uVar11 = (ulong)*pbVar4;
        if ((char)*pbVar4 < '\0') goto LAB_00bc1e20;
        *param_2 = (ulong)(pbVar4 + 1);
      }
      else {
        uVar11 = 0;
LAB_00bc1e20:
        uVar11 = FUN_00c0944c(param_2,uVar11);
        if ((long)uVar11 < 0) {
          uVar11 = 0;
        }
      }
      iVar3 = (int)param_2[3];
      iVar2 = (int)param_2[5];
      iVar8 = (iVar3 - *(int *)((long)param_2 + 0x2c)) + ((int)*param_2 - (int)param_2[1]);
      iVar10 = (int)uVar11;
      uVar11 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
      param_2[1] = uVar11;
      iVar17 = 0x7fffffff;
      if (iVar10 <= 0x7fffffff - iVar8 && -1 < iVar10) {
        iVar17 = iVar8 + iVar10;
      }
      iVar8 = iVar2;
      if (iVar17 <= iVar2) {
        iVar8 = iVar17;
      }
      *(int *)(param_2 + 5) = iVar8;
      iVar17 = (int)param_2[6];
      if (iVar8 <= (int)param_2[6]) {
        iVar17 = iVar8;
      }
      iVar8 = iVar3 - iVar17;
      if (iVar8 == 0 || iVar3 < iVar17) {
        *(undefined4 *)((long)param_2 + 0x2c) = 0;
      }
      else {
        *(int *)((long)param_2 + 0x2c) = iVar8;
        param_2[1] = uVar11 - (long)iVar8;
      }
      uVar11 = FUN_00bbeeb4(uVar20,param_2);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      pcVar19 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
      iVar8 = (int)param_2[6];
      if (iVar2 <= (int)param_2[6]) {
        iVar8 = iVar2;
      }
      cVar5 = *(char *)((long)param_2 + 0x24);
      *(int *)(param_2 + 5) = iVar2;
      param_2[1] = (ulong)pcVar19;
      iVar17 = (int)param_2[3] - iVar8;
      if (iVar17 == 0 || (int)param_2[3] < iVar8) {
        *(undefined4 *)((long)param_2 + 0x2c) = 0;
      }
      else {
        pcVar19 = pcVar19 + -(long)iVar17;
        *(int *)((long)param_2 + 0x2c) = iVar17;
        param_2[1] = (ulong)pcVar19;
      }
      *(undefined1 *)((long)param_2 + 0x24) = 0;
      if (cVar5 == '\0') {
        return 0;
      }
      pcVar14 = (char *)*param_2;
      if (pcVar19 <= pcVar14) goto LAB_00bc125c;
    } while (*pcVar14 == 'J');
    *(int *)puVar1 = (int)*puVar1 + 1;
    if (*pcVar14 == 'R') {
      do {
        *param_2 = (ulong)(pcVar14 + 1);
LAB_00bc1f38:
        piVar15 = *(int **)(param_1 + 0xe0);
        if (piVar15 == (int *)0x0) {
          iVar8 = *(int *)(param_1 + 0xd8);
          iVar17 = *(int *)(param_1 + 0xdc);
LAB_00bc1f7c:
          if (iVar8 <= iVar17) {
            FUN_00c11f04((long *)(param_1 + 0xd0),(iVar17 - iVar8) + 1);
            piVar15 = *(int **)(param_1 + 0xe0);
          }
          iVar17 = *piVar15;
LAB_00bc1f98:
          *piVar15 = iVar17 + 1;
          lVar22 = *(long *)(param_1 + 0xd0);
          if (lVar22 == 0) {
            lVar22 = tpidr_el0;
            plVar16 = *(long **)(lVar22 + 0x30);
            if (plVar16 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar16 = DAT_04859430;
              *(long **)(lVar22 + 0x30) = DAT_04859430;
            }
            puVar21 = (undefined8 *)(**(code **)(*plVar16 + 0x10))(plVar16,0x18,8);
            *puVar21 = 0;
            puVar21[1] = 0;
            puVar21[2] = 0;
          }
          else {
            puVar21 = (undefined8 *)FUN_00c0e238(lVar22,0,0x18);
            *puVar21 = 0;
            puVar21[1] = 0;
            puVar21[2] = 0;
            FUN_00c0e13c(lVar22,puVar21,PTR_LAB_047dabf0);
          }
          iVar8 = *(int *)(param_1 + 0xd8);
          *(int *)(param_1 + 0xd8) = iVar8 + 1;
          *(undefined8 **)(*(long *)(param_1 + 0xe0) + (long)iVar8 * 8 + 8) = puVar21;
        }
        else {
          iVar8 = *(int *)(param_1 + 0xd8);
          iVar17 = *piVar15;
          if (iVar17 <= iVar8) {
            if (iVar17 == *(int *)(param_1 + 0xdc)) goto LAB_00bc1f7c;
            goto LAB_00bc1f98;
          }
          *(int *)(param_1 + 0xd8) = iVar8 + 1;
          puVar21 = *(undefined8 **)(piVar15 + (long)iVar8 * 2 + 2);
        }
        uVar11 = FUN_00c0d824(param_2,puVar21);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
        pcVar14 = (char *)*param_2;
      } while ((pcVar14 < (char *)param_2[1]) && (*pcVar14 == 'R'));
      if ((pcVar14 == (char *)param_2[1]) &&
         ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
        *(undefined4 *)(param_2 + 4) = 0;
        *(undefined1 *)((long)param_2 + 0x24) = 1;
        return 1;
      }
    }
    goto LAB_00bc0e88;
  }
  goto LAB_00bc125c;
}


