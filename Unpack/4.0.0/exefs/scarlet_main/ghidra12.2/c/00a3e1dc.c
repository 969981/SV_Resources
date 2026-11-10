/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a3e1dc; name: FUN_00a3e1dc
 */


undefined8 FUN_00a3e1dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  float local_44;
  
  if (0x27 < *(int *)(param_1 + 0x28) - 0xfU) {
    return 1;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x38);
  switch(*(int *)(param_1 + 0x28)) {
  case 0xf:
    uVar3 = FUN_00a4af84(uVar18,"res1.conv1.conv2d.weight");
    pcVar5 = "res1.conv1.conv2d.bias";
    break;
  default:
    goto switchD_00a3e220_caseD_10;
  case 0x11:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar10 = FUN_00a4af84(uVar18,"res1.in1.weight");
    lVar20 = FUN_00a4af84(uVar18,"res1.in1.bias");
    lVar16 = *(long *)(param_1 + 0x48);
    if (((*(char *)(lVar16 + 8) != '\0') && (*(char *)(lVar10 + 8) != '\0')) &&
       ((*(char *)(lVar20 + 8) != '\0' &&
        (FUN_00a46afc(lVar16,lVar10,lVar20), *(char *)(lVar16 + 8) != '\0')))) {
      lVar10 = *(long *)(lVar16 + 0x10);
      uVar7 = *(long *)(lVar16 + 0x18) - lVar10;
      if ((int)(uVar7 >> 2) < 1) {
        uVar6 = 1;
      }
      else {
        uVar17 = uVar7 >> 2 & 0xffffffff;
        uVar7 = uVar7 >> 2 & 3;
        if (uVar17 - 1 < 3) {
          lVar20 = 0;
          uVar6 = 1;
        }
        else {
          lVar20 = 0;
          uVar6 = 1;
          piVar9 = (int *)(lVar10 + 8);
          do {
            lVar20 = lVar20 + 4;
            uVar6 = piVar9[1] * *piVar9 * piVar9[-1] * piVar9[-2] * uVar6;
            piVar9 = piVar9 + 4;
          } while (uVar17 - uVar7 != lVar20);
        }
        if (uVar7 != 0) {
          piVar9 = (int *)(lVar10 + lVar20 * 4);
          do {
            uVar6 = *piVar9 * uVar6;
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 1;
          } while (uVar7 != 0);
        }
        if ((int)uVar6 < 1) goto LAB_00a3e8b8;
      }
      pfVar13 = *(float **)(lVar16 + 0x80);
      if (uVar6 != 1) {
        iVar15 = -(uVar6 & 0xfffffffe);
        do {
          local_44 = 0.0;
          pfVar11 = pfVar13;
          if (*pfVar13 <= 0.0) {
            pfVar11 = &local_44;
          }
          *pfVar13 = *pfVar11;
          local_44 = 0.0;
          pfVar12 = pfVar13 + 1;
          pfVar11 = pfVar12;
          if (*pfVar12 <= 0.0) {
            pfVar11 = &local_44;
          }
          iVar15 = iVar15 + 2;
          pfVar13 = pfVar13 + 2;
          *pfVar12 = *pfVar11;
        } while (iVar15 != 0);
      }
LAB_00a3f29c:
      if ((uVar6 & 1) != 0) {
        local_44 = 0.0;
        pfVar11 = pfVar13;
        if (*pfVar13 <= 0.0) {
          pfVar11 = &local_44;
        }
        *pfVar13 = *pfVar11;
      }
      goto LAB_00a3e8b8;
    }
    goto LAB_00a3e8b4;
  case 0x12:
  case 0x16:
  case 0x1a:
  case 0x1e:
  case 0x22:
  case 0x26:
  case 0x2a:
  case 0x2e:
  case 0x32:
  case 0x36:
    *(undefined1 *)(param_1 + 0x30) = 1;
    return 1;
  case 0x13:
    uVar3 = FUN_00a4af84(uVar18,"res1.conv2.conv2d.weight");
    pcVar5 = "res1.conv2.conv2d.bias";
    goto LAB_00a3e8ec;
  case 0x15:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    uVar3 = FUN_00a4af84(uVar18,"res1.in2.weight");
    uVar18 = FUN_00a4af84(uVar18,"res1.in2.bias");
    FUN_00a46afc(*(undefined8 *)(param_1 + 0x48),uVar3,uVar18);
    lVar10 = *(long *)(param_1 + 0x40);
    if (*(char *)(lVar10 + 8) == '\0') {
      *(undefined1 *)(lVar10 + 8) = 0;
    }
    else {
      lVar20 = *(long *)(lVar10 + 0x10);
      uVar7 = *(long *)(lVar10 + 0x18) - lVar20;
      if ((int)(uVar7 >> 2) < 1) {
        uVar6 = 1;
      }
      else {
        uVar17 = uVar7 >> 2 & 0xffffffff;
        uVar7 = uVar7 >> 2 & 3;
        if (uVar17 - 1 < 3) {
          lVar16 = 0;
          uVar6 = 1;
        }
        else {
          lVar16 = 0;
          uVar6 = 1;
          piVar9 = (int *)(lVar20 + 8);
          do {
            lVar16 = lVar16 + 4;
            uVar6 = piVar9[1] * *piVar9 * piVar9[-1] * piVar9[-2] * uVar6;
            piVar9 = piVar9 + 4;
          } while (uVar17 - uVar7 != lVar16);
        }
        if (uVar7 != 0) {
          piVar9 = (int *)(lVar20 + lVar16 * 4);
          do {
            uVar6 = *piVar9 * uVar6;
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 1;
          } while (uVar7 != 0);
        }
        if ((int)uVar6 < 1) goto LAB_00a3eab0;
      }
      pfVar13 = *(float **)(*(long *)(param_1 + 0x48) + 0x80);
      pfVar11 = *(float **)(lVar10 + 0x80);
      if (uVar6 != 1) {
        iVar15 = -(uVar6 & 0xfffffffe);
        pfVar12 = pfVar11;
        pfVar14 = pfVar13;
        do {
          pfVar13 = pfVar14 + 2;
          pfVar11 = pfVar12 + 2;
          *pfVar12 = *pfVar14 + *pfVar12;
          iVar15 = iVar15 + 2;
          pfVar12[1] = pfVar14[1] + pfVar12[1];
          pfVar12 = pfVar11;
          pfVar14 = pfVar13;
        } while (iVar15 != 0);
      }
      if ((uVar6 & 1) != 0) {
        *pfVar11 = *pfVar13 + *pfVar11;
      }
    }
LAB_00a3eab0:
    lVar20 = *(long *)(param_1 + 0x48);
    lVar10 = *(long *)(lVar20 + 0x80);
    if (lVar10 != 0) {
      if (*(int **)(lVar20 + 0x10) == *(int **)(lVar20 + 0x18)) goto LAB_00a3eeac;
      lVar16 = 1;
      piVar9 = *(int **)(lVar20 + 0x10);
      do {
        piVar8 = piVar9 + 1;
        lVar16 = (long)*piVar9 * (long)(int)lVar16;
        piVar9 = piVar8;
      } while (*(int **)(lVar20 + 0x18) != piVar8);
LAB_00a3eea0:
      lVar16 = lVar16 * 0x88;
LAB_00a3eeb0:
      plVar19 = *(long **)PTR_DAT_047d8e68;
      uVar7 = (**(code **)(*plVar19 + 0xf8))(plVar19);
      if (((uVar7 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar10,lVar16,0x40);
      }
      else {
        FUN_00c48fe8(plVar19,lVar10,lVar16,0x40);
      }
      *(undefined8 *)(lVar20 + 0x80) = 0;
    }
    goto LAB_00a3eef0;
  case 0x17:
    uVar3 = FUN_00a4af84(uVar18,"res2.conv1.conv2d.weight");
    pcVar5 = "res2.conv1.conv2d.bias";
    break;
  case 0x19:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar10 = FUN_00a4af84(uVar18,"res2.in1.weight");
    lVar20 = FUN_00a4af84(uVar18,"res2.in1.bias");
    lVar16 = *(long *)(param_1 + 0x48);
    if ((((*(char *)(lVar16 + 8) != '\0') && (*(char *)(lVar10 + 8) != '\0')) &&
        (*(char *)(lVar20 + 8) != '\0')) &&
       (FUN_00a46afc(lVar16,lVar10,lVar20), *(char *)(lVar16 + 8) != '\0')) {
      lVar10 = *(long *)(lVar16 + 0x10);
      uVar7 = *(long *)(lVar16 + 0x18) - lVar10;
      if ((int)(uVar7 >> 2) < 1) {
        uVar6 = 1;
      }
      else {
        uVar17 = uVar7 >> 2 & 0xffffffff;
        uVar7 = uVar7 >> 2 & 3;
        if (uVar17 - 1 < 3) {
          lVar20 = 0;
          uVar6 = 1;
        }
        else {
          lVar20 = 0;
          uVar6 = 1;
          piVar9 = (int *)(lVar10 + 8);
          do {
            lVar20 = lVar20 + 4;
            uVar6 = piVar9[1] * *piVar9 * piVar9[-1] * piVar9[-2] * uVar6;
            piVar9 = piVar9 + 4;
          } while (uVar17 - uVar7 != lVar20);
        }
        if (uVar7 != 0) {
          piVar9 = (int *)(lVar10 + lVar20 * 4);
          do {
            uVar6 = *piVar9 * uVar6;
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 1;
          } while (uVar7 != 0);
        }
        if ((int)uVar6 < 1) goto LAB_00a3e8b8;
      }
      pfVar13 = *(float **)(lVar16 + 0x80);
      if (uVar6 != 1) {
        iVar15 = -(uVar6 & 0xfffffffe);
        do {
          local_44 = 0.0;
          pfVar11 = pfVar13;
          if (*pfVar13 <= 0.0) {
            pfVar11 = &local_44;
          }
          *pfVar13 = *pfVar11;
          local_44 = 0.0;
          pfVar12 = pfVar13 + 1;
          pfVar11 = pfVar12;
          if (*pfVar12 <= 0.0) {
            pfVar11 = &local_44;
          }
          iVar15 = iVar15 + 2;
          pfVar13 = pfVar13 + 2;
          *pfVar12 = *pfVar11;
        } while (iVar15 != 0);
      }
      goto LAB_00a3f29c;
    }
    goto LAB_00a3e8b4;
  case 0x1b:
    uVar3 = FUN_00a4af84(uVar18,"res2.conv2.conv2d.weight");
    pcVar5 = "res2.conv2.conv2d.bias";
    goto LAB_00a3e8ec;
  case 0x1d:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    uVar3 = FUN_00a4af84(uVar18,"res2.in2.weight");
    uVar18 = FUN_00a4af84(uVar18,"res2.in2.bias");
    FUN_00a46afc(*(undefined8 *)(param_1 + 0x48),uVar3,uVar18);
    lVar10 = *(long *)(param_1 + 0x40);
    if (*(char *)(lVar10 + 8) == '\0') {
      *(undefined1 *)(lVar10 + 8) = 0;
    }
    else {
      lVar20 = *(long *)(lVar10 + 0x10);
      uVar7 = *(long *)(lVar10 + 0x18) - lVar20;
      if ((int)(uVar7 >> 2) < 1) {
        uVar6 = 1;
      }
      else {
        uVar17 = uVar7 >> 2 & 0xffffffff;
        uVar7 = uVar7 >> 2 & 3;
        if (uVar17 - 1 < 3) {
          lVar16 = 0;
          uVar6 = 1;
        }
        else {
          lVar16 = 0;
          uVar6 = 1;
          piVar9 = (int *)(lVar20 + 8);
          do {
            lVar16 = lVar16 + 4;
            uVar6 = piVar9[1] * *piVar9 * piVar9[-1] * piVar9[-2] * uVar6;
            piVar9 = piVar9 + 4;
          } while (uVar17 - uVar7 != lVar16);
        }
        if (uVar7 != 0) {
          piVar9 = (int *)(lVar20 + lVar16 * 4);
          do {
            uVar6 = *piVar9 * uVar6;
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 1;
          } while (uVar7 != 0);
        }
        if ((int)uVar6 < 1) goto LAB_00a3eba0;
      }
      pfVar13 = *(float **)(*(long *)(param_1 + 0x48) + 0x80);
      pfVar11 = *(float **)(lVar10 + 0x80);
      if (uVar6 != 1) {
        iVar15 = -(uVar6 & 0xfffffffe);
        pfVar12 = pfVar11;
        pfVar14 = pfVar13;
        do {
          pfVar13 = pfVar14 + 2;
          pfVar11 = pfVar12 + 2;
          *pfVar12 = *pfVar14 + *pfVar12;
          iVar15 = iVar15 + 2;
          pfVar12[1] = pfVar14[1] + pfVar12[1];
          pfVar12 = pfVar11;
          pfVar14 = pfVar13;
        } while (iVar15 != 0);
      }
      if ((uVar6 & 1) != 0) {
        *pfVar11 = *pfVar13 + *pfVar11;
      }
    }
LAB_00a3eba0:
    lVar20 = *(long *)(param_1 + 0x48);
    lVar10 = *(long *)(lVar20 + 0x80);
    if (lVar10 != 0) {
      if (*(int **)(lVar20 + 0x10) == *(int **)(lVar20 + 0x18)) goto LAB_00a3eeac;
      lVar16 = 1;
      piVar9 = *(int **)(lVar20 + 0x10);
      do {
        piVar8 = piVar9 + 1;
        lVar16 = (long)*piVar9 * (long)(int)lVar16;
        piVar9 = piVar8;
      } while (*(int **)(lVar20 + 0x18) != piVar8);
      goto LAB_00a3eea0;
    }
    goto LAB_00a3eef0;
  case 0x1f:
    uVar3 = FUN_00a4af84(uVar18,"res3.conv1.conv2d.weight");
    pcVar5 = "res3.conv1.conv2d.bias";
    break;
  case 0x21:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar10 = FUN_00a4af84(uVar18,"res3.in1.weight");
    lVar20 = FUN_00a4af84(uVar18,"res3.in1.bias");
    lVar16 = *(long *)(param_1 + 0x48);
    if (((*(char *)(lVar16 + 8) != '\0') && (*(char *)(lVar10 + 8) != '\0')) &&
       ((*(char *)(lVar20 + 8) != '\0' &&
        (FUN_00a46afc(lVar16,lVar10,lVar20), *(char *)(lVar16 + 8) != '\0')))) {
      lVar10 = *(long *)(lVar16 + 0x10);
      uVar7 = *(long *)(lVar16 + 0x18) - lVar10;
      if ((int)(uVar7 >> 2) < 1) {
        uVar6 = 1;
      }
      else {
        uVar17 = uVar7 >> 2 & 0xffffffff;
        uVar7 = uVar7 >> 2 & 3;
        if (uVar17 - 1 < 3) {
          lVar20 = 0;
          uVar6 = 1;
        }
        else {
          lVar20 = 0;
          uVar6 = 1;
          piVar9 = (int *)(lVar10 + 8);
          do {
            lVar20 = lVar20 + 4;
            uVar6 = piVar9[1] * *piVar9 * piVar9[-1] * piVar9[-2] * uVar6;
            piVar9 = piVar9 + 4;
          } while (uVar17 - uVar7 != lVar20);
        }
        if (uVar7 != 0) {
          piVar9 = (int *)(lVar10 + lVar20 * 4);
          do {
            uVar6 = *piVar9 * uVar6;
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 1;
          } while (uVar7 != 0);
        }
        if ((int)uVar6 < 1) goto LAB_00a3e8b8;
      }
      pfVar13 = *(float **)(lVar16 + 0x80);
      if (uVar6 != 1) {
        iVar15 = -(uVar6 & 0xfffffffe);
        do {
          local_44 = 0.0;
          pfVar11 = pfVar13;
          if (*pfVar13 <= 0.0) {
            pfVar11 = &local_44;
          }
          *pfVar13 = *pfVar11;
          local_44 = 0.0;
          pfVar12 = pfVar13 + 1;
          pfVar11 = pfVar12;
          if (*pfVar12 <= 0.0) {
            pfVar11 = &local_44;
          }
          iVar15 = iVar15 + 2;
          pfVar13 = pfVar13 + 2;
          *pfVar12 = *pfVar11;
        } while (iVar15 != 0);
      }
      goto LAB_00a3f29c;
    }
    goto LAB_00a3e8b4;
  case 0x23:
    uVar3 = FUN_00a4af84(uVar18,"res3.conv2.conv2d.weight");
    pcVar5 = "res3.conv2.conv2d.bias";
    goto LAB_00a3e8ec;
  case 0x25:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    uVar3 = FUN_00a4af84(uVar18,"res3.in2.weight");
    uVar18 = FUN_00a4af84(uVar18,"res3.in2.bias");
    FUN_00a46afc(*(undefined8 *)(param_1 + 0x48),uVar3,uVar18);
    lVar10 = *(long *)(param_1 + 0x40);
    if (*(char *)(lVar10 + 8) == '\0') {
      *(undefined1 *)(lVar10 + 8) = 0;
    }
    else {
      lVar20 = *(long *)(lVar10 + 0x10);
      uVar7 = *(long *)(lVar10 + 0x18) - lVar20;
      if ((int)(uVar7 >> 2) < 1) {
        uVar6 = 1;
      }
      else {
        uVar17 = uVar7 >> 2 & 0xffffffff;
        uVar7 = uVar7 >> 2 & 3;
        if (uVar17 - 1 < 3) {
          lVar16 = 0;
          uVar6 = 1;
        }
        else {
          lVar16 = 0;
          uVar6 = 1;
          piVar9 = (int *)(lVar20 + 8);
          do {
            lVar16 = lVar16 + 4;
            uVar6 = piVar9[1] * *piVar9 * piVar9[-1] * piVar9[-2] * uVar6;
            piVar9 = piVar9 + 4;
          } while (uVar17 - uVar7 != lVar16);
        }
        if (uVar7 != 0) {
          piVar9 = (int *)(lVar20 + lVar16 * 4);
          do {
            uVar6 = *piVar9 * uVar6;
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 1;
          } while (uVar7 != 0);
        }
        if ((int)uVar6 < 1) goto LAB_00a3ec90;
      }
      pfVar13 = *(float **)(*(long *)(param_1 + 0x48) + 0x80);
      pfVar11 = *(float **)(lVar10 + 0x80);
      if (uVar6 != 1) {
        iVar15 = -(uVar6 & 0xfffffffe);
        pfVar12 = pfVar11;
        pfVar14 = pfVar13;
        do {
          pfVar13 = pfVar14 + 2;
          pfVar11 = pfVar12 + 2;
          *pfVar12 = *pfVar14 + *pfVar12;
          iVar15 = iVar15 + 2;
          pfVar12[1] = pfVar14[1] + pfVar12[1];
          pfVar12 = pfVar11;
          pfVar14 = pfVar13;
        } while (iVar15 != 0);
      }
      if ((uVar6 & 1) != 0) {
        *pfVar11 = *pfVar13 + *pfVar11;
      }
    }
LAB_00a3ec90:
    lVar20 = *(long *)(param_1 + 0x48);
    lVar10 = *(long *)(lVar20 + 0x80);
    if (lVar10 != 0) {
      if (*(int **)(lVar20 + 0x10) == *(int **)(lVar20 + 0x18)) goto LAB_00a3eeac;
      lVar16 = 1;
      piVar9 = *(int **)(lVar20 + 0x10);
      do {
        piVar8 = piVar9 + 1;
        lVar16 = (long)*piVar9 * (long)(int)lVar16;
        piVar9 = piVar8;
      } while (*(int **)(lVar20 + 0x18) != piVar8);
      goto LAB_00a3eea0;
    }
    goto LAB_00a3eef0;
  case 0x27:
    uVar3 = FUN_00a4af84(uVar18,"res4.conv1.conv2d.weight");
    pcVar5 = "res4.conv1.conv2d.bias";
    break;
  case 0x29:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar10 = FUN_00a4af84(uVar18,"res4.in1.weight");
    lVar20 = FUN_00a4af84(uVar18,"res4.in1.bias");
    lVar16 = *(long *)(param_1 + 0x48);
    if (((*(char *)(lVar16 + 8) != '\0') && (*(char *)(lVar10 + 8) != '\0')) &&
       ((*(char *)(lVar20 + 8) != '\0' &&
        (FUN_00a46afc(lVar16,lVar10,lVar20), *(char *)(lVar16 + 8) != '\0')))) {
      lVar10 = *(long *)(lVar16 + 0x10);
      uVar7 = *(long *)(lVar16 + 0x18) - lVar10;
      if ((int)(uVar7 >> 2) < 1) {
        uVar6 = 1;
      }
      else {
        uVar17 = uVar7 >> 2 & 0xffffffff;
        uVar7 = uVar7 >> 2 & 3;
        if (uVar17 - 1 < 3) {
          lVar20 = 0;
          uVar6 = 1;
        }
        else {
          lVar20 = 0;
          uVar6 = 1;
          piVar9 = (int *)(lVar10 + 8);
          do {
            lVar20 = lVar20 + 4;
            uVar6 = piVar9[1] * *piVar9 * piVar9[-1] * piVar9[-2] * uVar6;
            piVar9 = piVar9 + 4;
          } while (uVar17 - uVar7 != lVar20);
        }
        if (uVar7 != 0) {
          piVar9 = (int *)(lVar10 + lVar20 * 4);
          do {
            uVar6 = *piVar9 * uVar6;
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 1;
          } while (uVar7 != 0);
        }
        if ((int)uVar6 < 1) goto LAB_00a3e8b8;
      }
      pfVar13 = *(float **)(lVar16 + 0x80);
      if (uVar6 != 1) {
        iVar15 = -(uVar6 & 0xfffffffe);
        do {
          local_44 = 0.0;
          pfVar11 = pfVar13;
          if (*pfVar13 <= 0.0) {
            pfVar11 = &local_44;
          }
          *pfVar13 = *pfVar11;
          local_44 = 0.0;
          pfVar12 = pfVar13 + 1;
          pfVar11 = pfVar12;
          if (*pfVar12 <= 0.0) {
            pfVar11 = &local_44;
          }
          iVar15 = iVar15 + 2;
          pfVar13 = pfVar13 + 2;
          *pfVar12 = *pfVar11;
        } while (iVar15 != 0);
      }
      goto LAB_00a3f29c;
    }
    goto LAB_00a3e8b4;
  case 0x2b:
    uVar3 = FUN_00a4af84(uVar18,"res4.conv2.conv2d.weight");
    pcVar5 = "res4.conv2.conv2d.bias";
    goto LAB_00a3e8ec;
  case 0x2d:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    uVar3 = FUN_00a4af84(uVar18,"res4.in2.weight");
    uVar18 = FUN_00a4af84(uVar18,"res4.in2.bias");
    FUN_00a46afc(*(undefined8 *)(param_1 + 0x48),uVar3,uVar18);
    lVar10 = *(long *)(param_1 + 0x40);
    if (*(char *)(lVar10 + 8) == '\0') {
      *(undefined1 *)(lVar10 + 8) = 0;
    }
    else {
      lVar20 = *(long *)(lVar10 + 0x10);
      uVar7 = *(long *)(lVar10 + 0x18) - lVar20;
      if ((int)(uVar7 >> 2) < 1) {
        uVar6 = 1;
      }
      else {
        uVar17 = uVar7 >> 2 & 0xffffffff;
        uVar7 = uVar7 >> 2 & 3;
        if (uVar17 - 1 < 3) {
          lVar16 = 0;
          uVar6 = 1;
        }
        else {
          lVar16 = 0;
          uVar6 = 1;
          piVar9 = (int *)(lVar20 + 8);
          do {
            lVar16 = lVar16 + 4;
            uVar6 = piVar9[1] * *piVar9 * piVar9[-1] * piVar9[-2] * uVar6;
            piVar9 = piVar9 + 4;
          } while (uVar17 - uVar7 != lVar16);
        }
        if (uVar7 != 0) {
          piVar9 = (int *)(lVar20 + lVar16 * 4);
          do {
            uVar6 = *piVar9 * uVar6;
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 1;
          } while (uVar7 != 0);
        }
        if ((int)uVar6 < 1) goto LAB_00a3ed80;
      }
      pfVar13 = *(float **)(*(long *)(param_1 + 0x48) + 0x80);
      pfVar11 = *(float **)(lVar10 + 0x80);
      if (uVar6 != 1) {
        iVar15 = -(uVar6 & 0xfffffffe);
        pfVar12 = pfVar11;
        pfVar14 = pfVar13;
        do {
          pfVar13 = pfVar14 + 2;
          pfVar11 = pfVar12 + 2;
          *pfVar12 = *pfVar14 + *pfVar12;
          iVar15 = iVar15 + 2;
          pfVar12[1] = pfVar14[1] + pfVar12[1];
          pfVar12 = pfVar11;
          pfVar14 = pfVar13;
        } while (iVar15 != 0);
      }
      if ((uVar6 & 1) != 0) {
        *pfVar11 = *pfVar13 + *pfVar11;
      }
    }
LAB_00a3ed80:
    lVar20 = *(long *)(param_1 + 0x48);
    lVar10 = *(long *)(lVar20 + 0x80);
    if (lVar10 != 0) {
      if (*(int **)(lVar20 + 0x10) != *(int **)(lVar20 + 0x18)) {
        lVar16 = 1;
        piVar9 = *(int **)(lVar20 + 0x10);
        do {
          piVar8 = piVar9 + 1;
          lVar16 = (long)*piVar9 * (long)(int)lVar16;
          piVar9 = piVar8;
        } while (*(int **)(lVar20 + 0x18) != piVar8);
        goto LAB_00a3eea0;
      }
LAB_00a3eeac:
      lVar16 = 0;
      goto LAB_00a3eeb0;
    }
    goto LAB_00a3eef0;
  case 0x2f:
    uVar3 = FUN_00a4af84(uVar18,"res5.conv1.conv2d.weight");
    pcVar5 = "res5.conv1.conv2d.bias";
    break;
  case 0x31:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar10 = FUN_00a4af84(uVar18,"res5.in1.weight");
    lVar20 = FUN_00a4af84(uVar18,"res5.in1.bias");
    lVar16 = *(long *)(param_1 + 0x48);
    if ((((*(char *)(lVar16 + 8) != '\0') && (*(char *)(lVar10 + 8) != '\0')) &&
        (*(char *)(lVar20 + 8) != '\0')) &&
       (FUN_00a46afc(lVar16,lVar10,lVar20), *(char *)(lVar16 + 8) != '\0')) {
      lVar10 = *(long *)(lVar16 + 0x10);
      uVar7 = *(long *)(lVar16 + 0x18) - lVar10;
      if ((int)(uVar7 >> 2) < 1) {
        uVar6 = 1;
      }
      else {
        uVar17 = uVar7 >> 2 & 0xffffffff;
        uVar7 = uVar7 >> 2 & 3;
        if (uVar17 - 1 < 3) {
          lVar20 = 0;
          uVar6 = 1;
        }
        else {
          lVar20 = 0;
          uVar6 = 1;
          piVar9 = (int *)(lVar10 + 8);
          do {
            lVar20 = lVar20 + 4;
            uVar6 = piVar9[1] * *piVar9 * piVar9[-1] * piVar9[-2] * uVar6;
            piVar9 = piVar9 + 4;
          } while (uVar17 - uVar7 != lVar20);
        }
        if (uVar7 != 0) {
          piVar9 = (int *)(lVar10 + lVar20 * 4);
          do {
            uVar6 = *piVar9 * uVar6;
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 1;
          } while (uVar7 != 0);
        }
        if ((int)uVar6 < 1) goto LAB_00a3e8b8;
      }
      pfVar13 = *(float **)(lVar16 + 0x80);
      if (uVar6 != 1) {
        iVar15 = -(uVar6 & 0xfffffffe);
        do {
          local_44 = 0.0;
          pfVar11 = pfVar13;
          if (*pfVar13 <= 0.0) {
            pfVar11 = &local_44;
          }
          *pfVar13 = *pfVar11;
          local_44 = 0.0;
          pfVar12 = pfVar13 + 1;
          pfVar11 = pfVar12;
          if (*pfVar12 <= 0.0) {
            pfVar11 = &local_44;
          }
          iVar15 = iVar15 + 2;
          pfVar13 = pfVar13 + 2;
          *pfVar12 = *pfVar11;
        } while (iVar15 != 0);
      }
      goto LAB_00a3f29c;
    }
LAB_00a3e8b4:
    *(undefined1 *)(lVar16 + 8) = 0;
LAB_00a3e8b8:
    *(undefined1 *)(param_1 + 0x30) = 1;
    nn::oe::SetCpuBoostMode(0);
    DAT_0485a120 = 0;
    return 1;
  case 0x33:
    uVar3 = FUN_00a4af84(uVar18,"res5.conv2.conv2d.weight");
    pcVar5 = "res5.conv2.conv2d.bias";
LAB_00a3e8ec:
    uVar1 = FUN_00a4af84(uVar18,pcVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar18 = uVar2;
    goto LAB_00a3e904;
  case 0x35:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    uVar3 = FUN_00a4af84(uVar18,"res5.in2.weight");
    uVar18 = FUN_00a4af84(uVar18,"res5.in2.bias");
    FUN_00a46afc(*(undefined8 *)(param_1 + 0x48),uVar3,uVar18);
    lVar10 = *(long *)(param_1 + 0x40);
    if (*(char *)(lVar10 + 8) == '\0') {
      *(undefined1 *)(lVar10 + 8) = 0;
    }
    else {
      lVar20 = *(long *)(lVar10 + 0x10);
      uVar7 = *(long *)(lVar10 + 0x18) - lVar20;
      if ((int)(uVar7 >> 2) < 1) {
        uVar6 = 1;
      }
      else {
        uVar17 = uVar7 >> 2 & 0xffffffff;
        uVar7 = uVar7 >> 2 & 3;
        if (uVar17 - 1 < 3) {
          lVar16 = 0;
          uVar6 = 1;
        }
        else {
          lVar16 = 0;
          uVar6 = 1;
          piVar9 = (int *)(lVar20 + 8);
          do {
            lVar16 = lVar16 + 4;
            uVar6 = piVar9[1] * *piVar9 * piVar9[-1] * piVar9[-2] * uVar6;
            piVar9 = piVar9 + 4;
          } while (uVar17 - uVar7 != lVar16);
        }
        if (uVar7 != 0) {
          piVar9 = (int *)(lVar20 + lVar16 * 4);
          do {
            uVar6 = *piVar9 * uVar6;
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 1;
          } while (uVar7 != 0);
        }
        if ((int)uVar6 < 1) goto LAB_00a3ee70;
      }
      pfVar13 = *(float **)(*(long *)(param_1 + 0x48) + 0x80);
      pfVar11 = *(float **)(lVar10 + 0x80);
      if (uVar6 != 1) {
        iVar15 = -(uVar6 & 0xfffffffe);
        pfVar12 = pfVar11;
        pfVar14 = pfVar13;
        do {
          pfVar13 = pfVar14 + 2;
          pfVar11 = pfVar12 + 2;
          *pfVar12 = *pfVar14 + *pfVar12;
          iVar15 = iVar15 + 2;
          pfVar12[1] = pfVar14[1] + pfVar12[1];
          pfVar12 = pfVar11;
          pfVar14 = pfVar13;
        } while (iVar15 != 0);
      }
      if ((uVar6 & 1) != 0) {
        *pfVar11 = *pfVar13 + *pfVar11;
      }
    }
LAB_00a3ee70:
    lVar20 = *(long *)(param_1 + 0x48);
    lVar10 = *(long *)(lVar20 + 0x80);
    if (lVar10 != 0) {
      if (*(int **)(lVar20 + 0x10) == *(int **)(lVar20 + 0x18)) goto LAB_00a3eeac;
      lVar16 = 1;
      piVar9 = *(int **)(lVar20 + 0x10);
      do {
        piVar8 = piVar9 + 1;
        lVar16 = (long)*piVar9 * (long)(int)lVar16;
        piVar9 = piVar8;
      } while (*(int **)(lVar20 + 0x18) != piVar8);
      goto LAB_00a3eea0;
    }
LAB_00a3eef0:
    *(undefined8 *)(lVar20 + 0x18) = *(undefined8 *)(lVar20 + 0x10);
    *(undefined8 *)(lVar20 + 0x50) = *(undefined8 *)(lVar20 + 0x48);
    *(undefined1 *)(param_1 + 0x30) = 1;
    nn::oe::SetCpuBoostMode(0);
    DAT_0485a120 = 0;
    goto switchD_00a3e220_caseD_10;
  }
  uVar1 = FUN_00a4af84(uVar18,pcVar5);
  uVar18 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
LAB_00a3e904:
  FUN_00a46ef4(uVar2,uVar18,uVar3,uVar1,1);
  *(undefined1 *)(param_1 + 0x30) = 1;
switchD_00a3e220_caseD_10:
  return 1;
}


