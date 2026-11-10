/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a3f2e8; name: FUN_00a3f2e8
 */


undefined8 FUN_00a3f2e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  float local_34;
  
  if (0x27 < *(int *)(param_1 + 0x28) - 0xfU) {
    return 1;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x38);
  switch(*(int *)(param_1 + 0x28)) {
  case 0xf:
    uVar5 = FUN_00a4af84(uVar20,"res1.conv1.conv2d.depthwise.weight");
    uVar1 = FUN_00a4af84(uVar20,"res1.conv1.conv2d.depthwise.bias");
    uVar2 = FUN_00a4af84(uVar20,"res1.conv1.conv2d.pointwise.weight");
    pcVar7 = "res1.conv1.conv2d.pointwise.bias";
    break;
  default:
    goto switchD_00a3f32c_caseD_10;
  case 0x11:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar12 = FUN_00a4af84(uVar20,"res1.in1.weight");
    lVar22 = FUN_00a4af84(uVar20,"res1.in1.bias");
    lVar18 = *(long *)(param_1 + 0x48);
    if (((*(char *)(lVar18 + 8) != '\0') && (*(char *)(lVar12 + 8) != '\0')) &&
       ((*(char *)(lVar22 + 8) != '\0' &&
        (FUN_00a46afc(lVar18,lVar12,lVar22), *(char *)(lVar18 + 8) != '\0')))) {
      lVar12 = *(long *)(lVar18 + 0x10);
      uVar9 = *(long *)(lVar18 + 0x18) - lVar12;
      if ((int)(uVar9 >> 2) < 1) {
        uVar8 = 1;
      }
      else {
        uVar19 = uVar9 >> 2 & 0xffffffff;
        uVar9 = uVar9 >> 2 & 3;
        if (uVar19 - 1 < 3) {
          lVar22 = 0;
          uVar8 = 1;
        }
        else {
          lVar22 = 0;
          uVar8 = 1;
          piVar11 = (int *)(lVar12 + 8);
          do {
            lVar22 = lVar22 + 4;
            uVar8 = piVar11[1] * *piVar11 * piVar11[-1] * piVar11[-2] * uVar8;
            piVar11 = piVar11 + 4;
          } while (uVar19 - uVar9 != lVar22);
        }
        if (uVar9 != 0) {
          piVar11 = (int *)(lVar12 + lVar22 * 4);
          do {
            uVar8 = *piVar11 * uVar8;
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 1;
          } while (uVar9 != 0);
        }
        if ((int)uVar8 < 1) goto LAB_00a3fb3c;
      }
      pfVar15 = *(float **)(lVar18 + 0x80);
      if (uVar8 != 1) {
        iVar17 = -(uVar8 & 0xfffffffe);
        do {
          local_34 = 0.0;
          pfVar13 = pfVar15;
          if (*pfVar15 <= 0.0) {
            pfVar13 = &local_34;
          }
          *pfVar15 = *pfVar13;
          local_34 = 0.0;
          pfVar14 = pfVar15 + 1;
          pfVar13 = pfVar14;
          if (*pfVar14 <= 0.0) {
            pfVar13 = &local_34;
          }
          iVar17 = iVar17 + 2;
          pfVar15 = pfVar15 + 2;
          *pfVar14 = *pfVar13;
        } while (iVar17 != 0);
      }
LAB_00a40570:
      if ((uVar8 & 1) != 0) {
        local_34 = 0.0;
        pfVar13 = pfVar15;
        if (*pfVar15 <= 0.0) {
          pfVar13 = &local_34;
        }
        *pfVar15 = *pfVar13;
      }
      goto LAB_00a3fb3c;
    }
    goto LAB_00a3fb38;
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
    uVar5 = FUN_00a4af84(uVar20,"res1.conv2.conv2d.depthwise.weight");
    uVar1 = FUN_00a4af84(uVar20,"res1.conv2.conv2d.depthwise.bias");
    uVar2 = FUN_00a4af84(uVar20,"res1.conv2.conv2d.pointwise.weight");
    pcVar7 = "res1.conv2.conv2d.pointwise.bias";
    goto LAB_00a3fb98;
  case 0x15:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    uVar5 = FUN_00a4af84(uVar20,"res1.in2.weight");
    uVar20 = FUN_00a4af84(uVar20,"res1.in2.bias");
    FUN_00a46afc(*(undefined8 *)(param_1 + 0x48),uVar5,uVar20);
    lVar12 = *(long *)(param_1 + 0x40);
    if (*(char *)(lVar12 + 8) == '\0') {
      *(undefined1 *)(lVar12 + 8) = 0;
    }
    else {
      lVar22 = *(long *)(lVar12 + 0x10);
      uVar9 = *(long *)(lVar12 + 0x18) - lVar22;
      if ((int)(uVar9 >> 2) < 1) {
        uVar8 = 1;
      }
      else {
        uVar19 = uVar9 >> 2 & 0xffffffff;
        uVar9 = uVar9 >> 2 & 3;
        if (uVar19 - 1 < 3) {
          lVar18 = 0;
          uVar8 = 1;
        }
        else {
          lVar18 = 0;
          uVar8 = 1;
          piVar11 = (int *)(lVar22 + 8);
          do {
            lVar18 = lVar18 + 4;
            uVar8 = piVar11[1] * *piVar11 * piVar11[-1] * piVar11[-2] * uVar8;
            piVar11 = piVar11 + 4;
          } while (uVar19 - uVar9 != lVar18);
        }
        if (uVar9 != 0) {
          piVar11 = (int *)(lVar22 + lVar18 * 4);
          do {
            uVar8 = *piVar11 * uVar8;
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 1;
          } while (uVar9 != 0);
        }
        if ((int)uVar8 < 1) goto LAB_00a3fd84;
      }
      pfVar15 = *(float **)(*(long *)(param_1 + 0x48) + 0x80);
      pfVar13 = *(float **)(lVar12 + 0x80);
      if (uVar8 != 1) {
        iVar17 = -(uVar8 & 0xfffffffe);
        pfVar14 = pfVar13;
        pfVar16 = pfVar15;
        do {
          pfVar15 = pfVar16 + 2;
          pfVar13 = pfVar14 + 2;
          *pfVar14 = *pfVar16 + *pfVar14;
          iVar17 = iVar17 + 2;
          pfVar14[1] = pfVar16[1] + pfVar14[1];
          pfVar14 = pfVar13;
          pfVar16 = pfVar15;
        } while (iVar17 != 0);
      }
      if ((uVar8 & 1) != 0) {
        *pfVar13 = *pfVar15 + *pfVar13;
      }
    }
LAB_00a3fd84:
    lVar22 = *(long *)(param_1 + 0x48);
    lVar12 = *(long *)(lVar22 + 0x80);
    if (lVar12 != 0) {
      if (*(int **)(lVar22 + 0x10) == *(int **)(lVar22 + 0x18)) goto LAB_00a40180;
      lVar18 = 1;
      piVar11 = *(int **)(lVar22 + 0x10);
      do {
        piVar10 = piVar11 + 1;
        lVar18 = (long)*piVar11 * (long)(int)lVar18;
        piVar11 = piVar10;
      } while (*(int **)(lVar22 + 0x18) != piVar10);
LAB_00a40174:
      lVar18 = lVar18 * 0x88;
LAB_00a40184:
      plVar21 = *(long **)PTR_DAT_047d8e68;
      uVar9 = (**(code **)(*plVar21 + 0xf8))(plVar21);
      if (((uVar9 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar21 + 0x18))(plVar21,lVar12,lVar18,0x40);
      }
      else {
        FUN_00c48fe8(plVar21,lVar12,lVar18,0x40);
      }
      *(undefined8 *)(lVar22 + 0x80) = 0;
    }
    goto LAB_00a401c4;
  case 0x17:
    uVar5 = FUN_00a4af84(uVar20,"res2.conv1.conv2d.depthwise.weight");
    uVar1 = FUN_00a4af84(uVar20,"res2.conv1.conv2d.depthwise.bias");
    uVar2 = FUN_00a4af84(uVar20,"res2.conv1.conv2d.pointwise.weight");
    pcVar7 = "res2.conv1.conv2d.pointwise.bias";
    break;
  case 0x19:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar12 = FUN_00a4af84(uVar20,"res2.in1.weight");
    lVar22 = FUN_00a4af84(uVar20,"res2.in1.bias");
    lVar18 = *(long *)(param_1 + 0x48);
    if ((((*(char *)(lVar18 + 8) != '\0') && (*(char *)(lVar12 + 8) != '\0')) &&
        (*(char *)(lVar22 + 8) != '\0')) &&
       (FUN_00a46afc(lVar18,lVar12,lVar22), *(char *)(lVar18 + 8) != '\0')) {
      lVar12 = *(long *)(lVar18 + 0x10);
      uVar9 = *(long *)(lVar18 + 0x18) - lVar12;
      if ((int)(uVar9 >> 2) < 1) {
        uVar8 = 1;
      }
      else {
        uVar19 = uVar9 >> 2 & 0xffffffff;
        uVar9 = uVar9 >> 2 & 3;
        if (uVar19 - 1 < 3) {
          lVar22 = 0;
          uVar8 = 1;
        }
        else {
          lVar22 = 0;
          uVar8 = 1;
          piVar11 = (int *)(lVar12 + 8);
          do {
            lVar22 = lVar22 + 4;
            uVar8 = piVar11[1] * *piVar11 * piVar11[-1] * piVar11[-2] * uVar8;
            piVar11 = piVar11 + 4;
          } while (uVar19 - uVar9 != lVar22);
        }
        if (uVar9 != 0) {
          piVar11 = (int *)(lVar12 + lVar22 * 4);
          do {
            uVar8 = *piVar11 * uVar8;
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 1;
          } while (uVar9 != 0);
        }
        if ((int)uVar8 < 1) goto LAB_00a3fb3c;
      }
      pfVar15 = *(float **)(lVar18 + 0x80);
      if (uVar8 != 1) {
        iVar17 = -(uVar8 & 0xfffffffe);
        do {
          local_34 = 0.0;
          pfVar13 = pfVar15;
          if (*pfVar15 <= 0.0) {
            pfVar13 = &local_34;
          }
          *pfVar15 = *pfVar13;
          local_34 = 0.0;
          pfVar14 = pfVar15 + 1;
          pfVar13 = pfVar14;
          if (*pfVar14 <= 0.0) {
            pfVar13 = &local_34;
          }
          iVar17 = iVar17 + 2;
          pfVar15 = pfVar15 + 2;
          *pfVar14 = *pfVar13;
        } while (iVar17 != 0);
      }
      goto LAB_00a40570;
    }
    goto LAB_00a3fb38;
  case 0x1b:
    uVar5 = FUN_00a4af84(uVar20,"res2.conv2.conv2d.depthwise.weight");
    uVar1 = FUN_00a4af84(uVar20,"res2.conv2.conv2d.depthwise.bias");
    uVar2 = FUN_00a4af84(uVar20,"res2.conv2.conv2d.pointwise.weight");
    pcVar7 = "res2.conv2.conv2d.pointwise.bias";
    goto LAB_00a3fb98;
  case 0x1d:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    uVar5 = FUN_00a4af84(uVar20,"res2.in2.weight");
    uVar20 = FUN_00a4af84(uVar20,"res2.in2.bias");
    FUN_00a46afc(*(undefined8 *)(param_1 + 0x48),uVar5,uVar20);
    lVar12 = *(long *)(param_1 + 0x40);
    if (*(char *)(lVar12 + 8) == '\0') {
      *(undefined1 *)(lVar12 + 8) = 0;
    }
    else {
      lVar22 = *(long *)(lVar12 + 0x10);
      uVar9 = *(long *)(lVar12 + 0x18) - lVar22;
      if ((int)(uVar9 >> 2) < 1) {
        uVar8 = 1;
      }
      else {
        uVar19 = uVar9 >> 2 & 0xffffffff;
        uVar9 = uVar9 >> 2 & 3;
        if (uVar19 - 1 < 3) {
          lVar18 = 0;
          uVar8 = 1;
        }
        else {
          lVar18 = 0;
          uVar8 = 1;
          piVar11 = (int *)(lVar22 + 8);
          do {
            lVar18 = lVar18 + 4;
            uVar8 = piVar11[1] * *piVar11 * piVar11[-1] * piVar11[-2] * uVar8;
            piVar11 = piVar11 + 4;
          } while (uVar19 - uVar9 != lVar18);
        }
        if (uVar9 != 0) {
          piVar11 = (int *)(lVar22 + lVar18 * 4);
          do {
            uVar8 = *piVar11 * uVar8;
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 1;
          } while (uVar9 != 0);
        }
        if ((int)uVar8 < 1) goto LAB_00a3fe74;
      }
      pfVar15 = *(float **)(*(long *)(param_1 + 0x48) + 0x80);
      pfVar13 = *(float **)(lVar12 + 0x80);
      if (uVar8 != 1) {
        iVar17 = -(uVar8 & 0xfffffffe);
        pfVar14 = pfVar13;
        pfVar16 = pfVar15;
        do {
          pfVar15 = pfVar16 + 2;
          pfVar13 = pfVar14 + 2;
          *pfVar14 = *pfVar16 + *pfVar14;
          iVar17 = iVar17 + 2;
          pfVar14[1] = pfVar16[1] + pfVar14[1];
          pfVar14 = pfVar13;
          pfVar16 = pfVar15;
        } while (iVar17 != 0);
      }
      if ((uVar8 & 1) != 0) {
        *pfVar13 = *pfVar15 + *pfVar13;
      }
    }
LAB_00a3fe74:
    lVar22 = *(long *)(param_1 + 0x48);
    lVar12 = *(long *)(lVar22 + 0x80);
    if (lVar12 != 0) {
      if (*(int **)(lVar22 + 0x10) == *(int **)(lVar22 + 0x18)) goto LAB_00a40180;
      lVar18 = 1;
      piVar11 = *(int **)(lVar22 + 0x10);
      do {
        piVar10 = piVar11 + 1;
        lVar18 = (long)*piVar11 * (long)(int)lVar18;
        piVar11 = piVar10;
      } while (*(int **)(lVar22 + 0x18) != piVar10);
      goto LAB_00a40174;
    }
    goto LAB_00a401c4;
  case 0x1f:
    uVar5 = FUN_00a4af84(uVar20,"res3.conv1.conv2d.depthwise.weight");
    uVar1 = FUN_00a4af84(uVar20,"res3.conv1.conv2d.depthwise.bias");
    uVar2 = FUN_00a4af84(uVar20,"res3.conv1.conv2d.pointwise.weight");
    pcVar7 = "res3.conv1.conv2d.pointwise.bias";
    break;
  case 0x21:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar12 = FUN_00a4af84(uVar20,"res3.in1.weight");
    lVar22 = FUN_00a4af84(uVar20,"res3.in1.bias");
    lVar18 = *(long *)(param_1 + 0x48);
    if (((*(char *)(lVar18 + 8) != '\0') && (*(char *)(lVar12 + 8) != '\0')) &&
       ((*(char *)(lVar22 + 8) != '\0' &&
        (FUN_00a46afc(lVar18,lVar12,lVar22), *(char *)(lVar18 + 8) != '\0')))) {
      lVar12 = *(long *)(lVar18 + 0x10);
      uVar9 = *(long *)(lVar18 + 0x18) - lVar12;
      if ((int)(uVar9 >> 2) < 1) {
        uVar8 = 1;
      }
      else {
        uVar19 = uVar9 >> 2 & 0xffffffff;
        uVar9 = uVar9 >> 2 & 3;
        if (uVar19 - 1 < 3) {
          lVar22 = 0;
          uVar8 = 1;
        }
        else {
          lVar22 = 0;
          uVar8 = 1;
          piVar11 = (int *)(lVar12 + 8);
          do {
            lVar22 = lVar22 + 4;
            uVar8 = piVar11[1] * *piVar11 * piVar11[-1] * piVar11[-2] * uVar8;
            piVar11 = piVar11 + 4;
          } while (uVar19 - uVar9 != lVar22);
        }
        if (uVar9 != 0) {
          piVar11 = (int *)(lVar12 + lVar22 * 4);
          do {
            uVar8 = *piVar11 * uVar8;
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 1;
          } while (uVar9 != 0);
        }
        if ((int)uVar8 < 1) goto LAB_00a3fb3c;
      }
      pfVar15 = *(float **)(lVar18 + 0x80);
      if (uVar8 != 1) {
        iVar17 = -(uVar8 & 0xfffffffe);
        do {
          local_34 = 0.0;
          pfVar13 = pfVar15;
          if (*pfVar15 <= 0.0) {
            pfVar13 = &local_34;
          }
          *pfVar15 = *pfVar13;
          local_34 = 0.0;
          pfVar14 = pfVar15 + 1;
          pfVar13 = pfVar14;
          if (*pfVar14 <= 0.0) {
            pfVar13 = &local_34;
          }
          iVar17 = iVar17 + 2;
          pfVar15 = pfVar15 + 2;
          *pfVar14 = *pfVar13;
        } while (iVar17 != 0);
      }
      goto LAB_00a40570;
    }
    goto LAB_00a3fb38;
  case 0x23:
    uVar5 = FUN_00a4af84(uVar20,"res3.conv2.conv2d.depthwise.weight");
    uVar1 = FUN_00a4af84(uVar20,"res3.conv2.conv2d.depthwise.bias");
    uVar2 = FUN_00a4af84(uVar20,"res3.conv2.conv2d.pointwise.weight");
    pcVar7 = "res3.conv2.conv2d.pointwise.bias";
    goto LAB_00a3fb98;
  case 0x25:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    uVar5 = FUN_00a4af84(uVar20,"res3.in2.weight");
    uVar20 = FUN_00a4af84(uVar20,"res3.in2.bias");
    FUN_00a46afc(*(undefined8 *)(param_1 + 0x48),uVar5,uVar20);
    lVar12 = *(long *)(param_1 + 0x40);
    if (*(char *)(lVar12 + 8) == '\0') {
      *(undefined1 *)(lVar12 + 8) = 0;
    }
    else {
      lVar22 = *(long *)(lVar12 + 0x10);
      uVar9 = *(long *)(lVar12 + 0x18) - lVar22;
      if ((int)(uVar9 >> 2) < 1) {
        uVar8 = 1;
      }
      else {
        uVar19 = uVar9 >> 2 & 0xffffffff;
        uVar9 = uVar9 >> 2 & 3;
        if (uVar19 - 1 < 3) {
          lVar18 = 0;
          uVar8 = 1;
        }
        else {
          lVar18 = 0;
          uVar8 = 1;
          piVar11 = (int *)(lVar22 + 8);
          do {
            lVar18 = lVar18 + 4;
            uVar8 = piVar11[1] * *piVar11 * piVar11[-1] * piVar11[-2] * uVar8;
            piVar11 = piVar11 + 4;
          } while (uVar19 - uVar9 != lVar18);
        }
        if (uVar9 != 0) {
          piVar11 = (int *)(lVar22 + lVar18 * 4);
          do {
            uVar8 = *piVar11 * uVar8;
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 1;
          } while (uVar9 != 0);
        }
        if ((int)uVar8 < 1) goto LAB_00a3ff64;
      }
      pfVar15 = *(float **)(*(long *)(param_1 + 0x48) + 0x80);
      pfVar13 = *(float **)(lVar12 + 0x80);
      if (uVar8 != 1) {
        iVar17 = -(uVar8 & 0xfffffffe);
        pfVar14 = pfVar13;
        pfVar16 = pfVar15;
        do {
          pfVar15 = pfVar16 + 2;
          pfVar13 = pfVar14 + 2;
          *pfVar14 = *pfVar16 + *pfVar14;
          iVar17 = iVar17 + 2;
          pfVar14[1] = pfVar16[1] + pfVar14[1];
          pfVar14 = pfVar13;
          pfVar16 = pfVar15;
        } while (iVar17 != 0);
      }
      if ((uVar8 & 1) != 0) {
        *pfVar13 = *pfVar15 + *pfVar13;
      }
    }
LAB_00a3ff64:
    lVar22 = *(long *)(param_1 + 0x48);
    lVar12 = *(long *)(lVar22 + 0x80);
    if (lVar12 != 0) {
      if (*(int **)(lVar22 + 0x10) == *(int **)(lVar22 + 0x18)) goto LAB_00a40180;
      lVar18 = 1;
      piVar11 = *(int **)(lVar22 + 0x10);
      do {
        piVar10 = piVar11 + 1;
        lVar18 = (long)*piVar11 * (long)(int)lVar18;
        piVar11 = piVar10;
      } while (*(int **)(lVar22 + 0x18) != piVar10);
      goto LAB_00a40174;
    }
    goto LAB_00a401c4;
  case 0x27:
    uVar5 = FUN_00a4af84(uVar20,"res4.conv1.conv2d.depthwise.weight");
    uVar1 = FUN_00a4af84(uVar20,"res4.conv1.conv2d.depthwise.bias");
    uVar2 = FUN_00a4af84(uVar20,"res4.conv1.conv2d.pointwise.weight");
    pcVar7 = "res4.conv1.conv2d.pointwise.bias";
    break;
  case 0x29:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar12 = FUN_00a4af84(uVar20,"res4.in1.weight");
    lVar22 = FUN_00a4af84(uVar20,"res4.in1.bias");
    lVar18 = *(long *)(param_1 + 0x48);
    if (((*(char *)(lVar18 + 8) != '\0') && (*(char *)(lVar12 + 8) != '\0')) &&
       ((*(char *)(lVar22 + 8) != '\0' &&
        (FUN_00a46afc(lVar18,lVar12,lVar22), *(char *)(lVar18 + 8) != '\0')))) {
      lVar12 = *(long *)(lVar18 + 0x10);
      uVar9 = *(long *)(lVar18 + 0x18) - lVar12;
      if ((int)(uVar9 >> 2) < 1) {
        uVar8 = 1;
      }
      else {
        uVar19 = uVar9 >> 2 & 0xffffffff;
        uVar9 = uVar9 >> 2 & 3;
        if (uVar19 - 1 < 3) {
          lVar22 = 0;
          uVar8 = 1;
        }
        else {
          lVar22 = 0;
          uVar8 = 1;
          piVar11 = (int *)(lVar12 + 8);
          do {
            lVar22 = lVar22 + 4;
            uVar8 = piVar11[1] * *piVar11 * piVar11[-1] * piVar11[-2] * uVar8;
            piVar11 = piVar11 + 4;
          } while (uVar19 - uVar9 != lVar22);
        }
        if (uVar9 != 0) {
          piVar11 = (int *)(lVar12 + lVar22 * 4);
          do {
            uVar8 = *piVar11 * uVar8;
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 1;
          } while (uVar9 != 0);
        }
        if ((int)uVar8 < 1) goto LAB_00a3fb3c;
      }
      pfVar15 = *(float **)(lVar18 + 0x80);
      if (uVar8 != 1) {
        iVar17 = -(uVar8 & 0xfffffffe);
        do {
          local_34 = 0.0;
          pfVar13 = pfVar15;
          if (*pfVar15 <= 0.0) {
            pfVar13 = &local_34;
          }
          *pfVar15 = *pfVar13;
          local_34 = 0.0;
          pfVar14 = pfVar15 + 1;
          pfVar13 = pfVar14;
          if (*pfVar14 <= 0.0) {
            pfVar13 = &local_34;
          }
          iVar17 = iVar17 + 2;
          pfVar15 = pfVar15 + 2;
          *pfVar14 = *pfVar13;
        } while (iVar17 != 0);
      }
      goto LAB_00a40570;
    }
    goto LAB_00a3fb38;
  case 0x2b:
    uVar5 = FUN_00a4af84(uVar20,"res4.conv2.conv2d.depthwise.weight");
    uVar1 = FUN_00a4af84(uVar20,"res4.conv2.conv2d.depthwise.bias");
    uVar2 = FUN_00a4af84(uVar20,"res4.conv2.conv2d.pointwise.weight");
    pcVar7 = "res4.conv2.conv2d.pointwise.bias";
    goto LAB_00a3fb98;
  case 0x2d:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    uVar5 = FUN_00a4af84(uVar20,"res4.in2.weight");
    uVar20 = FUN_00a4af84(uVar20,"res4.in2.bias");
    FUN_00a46afc(*(undefined8 *)(param_1 + 0x48),uVar5,uVar20);
    lVar12 = *(long *)(param_1 + 0x40);
    if (*(char *)(lVar12 + 8) == '\0') {
      *(undefined1 *)(lVar12 + 8) = 0;
    }
    else {
      lVar22 = *(long *)(lVar12 + 0x10);
      uVar9 = *(long *)(lVar12 + 0x18) - lVar22;
      if ((int)(uVar9 >> 2) < 1) {
        uVar8 = 1;
      }
      else {
        uVar19 = uVar9 >> 2 & 0xffffffff;
        uVar9 = uVar9 >> 2 & 3;
        if (uVar19 - 1 < 3) {
          lVar18 = 0;
          uVar8 = 1;
        }
        else {
          lVar18 = 0;
          uVar8 = 1;
          piVar11 = (int *)(lVar22 + 8);
          do {
            lVar18 = lVar18 + 4;
            uVar8 = piVar11[1] * *piVar11 * piVar11[-1] * piVar11[-2] * uVar8;
            piVar11 = piVar11 + 4;
          } while (uVar19 - uVar9 != lVar18);
        }
        if (uVar9 != 0) {
          piVar11 = (int *)(lVar22 + lVar18 * 4);
          do {
            uVar8 = *piVar11 * uVar8;
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 1;
          } while (uVar9 != 0);
        }
        if ((int)uVar8 < 1) goto LAB_00a40054;
      }
      pfVar15 = *(float **)(*(long *)(param_1 + 0x48) + 0x80);
      pfVar13 = *(float **)(lVar12 + 0x80);
      if (uVar8 != 1) {
        iVar17 = -(uVar8 & 0xfffffffe);
        pfVar14 = pfVar13;
        pfVar16 = pfVar15;
        do {
          pfVar15 = pfVar16 + 2;
          pfVar13 = pfVar14 + 2;
          *pfVar14 = *pfVar16 + *pfVar14;
          iVar17 = iVar17 + 2;
          pfVar14[1] = pfVar16[1] + pfVar14[1];
          pfVar14 = pfVar13;
          pfVar16 = pfVar15;
        } while (iVar17 != 0);
      }
      if ((uVar8 & 1) != 0) {
        *pfVar13 = *pfVar15 + *pfVar13;
      }
    }
LAB_00a40054:
    lVar22 = *(long *)(param_1 + 0x48);
    lVar12 = *(long *)(lVar22 + 0x80);
    if (lVar12 != 0) {
      if (*(int **)(lVar22 + 0x10) != *(int **)(lVar22 + 0x18)) {
        lVar18 = 1;
        piVar11 = *(int **)(lVar22 + 0x10);
        do {
          piVar10 = piVar11 + 1;
          lVar18 = (long)*piVar11 * (long)(int)lVar18;
          piVar11 = piVar10;
        } while (*(int **)(lVar22 + 0x18) != piVar10);
        goto LAB_00a40174;
      }
LAB_00a40180:
      lVar18 = 0;
      goto LAB_00a40184;
    }
    goto LAB_00a401c4;
  case 0x2f:
    uVar5 = FUN_00a4af84(uVar20,"res5.conv1.conv2d.depthwise.weight");
    uVar1 = FUN_00a4af84(uVar20,"res5.conv1.conv2d.depthwise.bias");
    uVar2 = FUN_00a4af84(uVar20,"res5.conv1.conv2d.pointwise.weight");
    pcVar7 = "res5.conv1.conv2d.pointwise.bias";
    break;
  case 0x31:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar12 = FUN_00a4af84(uVar20,"res5.in1.weight");
    lVar22 = FUN_00a4af84(uVar20,"res5.in1.bias");
    lVar18 = *(long *)(param_1 + 0x48);
    if ((((*(char *)(lVar18 + 8) != '\0') && (*(char *)(lVar12 + 8) != '\0')) &&
        (*(char *)(lVar22 + 8) != '\0')) &&
       (FUN_00a46afc(lVar18,lVar12,lVar22), *(char *)(lVar18 + 8) != '\0')) {
      lVar12 = *(long *)(lVar18 + 0x10);
      uVar9 = *(long *)(lVar18 + 0x18) - lVar12;
      if ((int)(uVar9 >> 2) < 1) {
        uVar8 = 1;
      }
      else {
        uVar19 = uVar9 >> 2 & 0xffffffff;
        uVar9 = uVar9 >> 2 & 3;
        if (uVar19 - 1 < 3) {
          lVar22 = 0;
          uVar8 = 1;
        }
        else {
          lVar22 = 0;
          uVar8 = 1;
          piVar11 = (int *)(lVar12 + 8);
          do {
            lVar22 = lVar22 + 4;
            uVar8 = piVar11[1] * *piVar11 * piVar11[-1] * piVar11[-2] * uVar8;
            piVar11 = piVar11 + 4;
          } while (uVar19 - uVar9 != lVar22);
        }
        if (uVar9 != 0) {
          piVar11 = (int *)(lVar12 + lVar22 * 4);
          do {
            uVar8 = *piVar11 * uVar8;
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 1;
          } while (uVar9 != 0);
        }
        if ((int)uVar8 < 1) goto LAB_00a3fb3c;
      }
      pfVar15 = *(float **)(lVar18 + 0x80);
      if (uVar8 != 1) {
        iVar17 = -(uVar8 & 0xfffffffe);
        do {
          local_34 = 0.0;
          pfVar13 = pfVar15;
          if (*pfVar15 <= 0.0) {
            pfVar13 = &local_34;
          }
          *pfVar15 = *pfVar13;
          local_34 = 0.0;
          pfVar14 = pfVar15 + 1;
          pfVar13 = pfVar14;
          if (*pfVar14 <= 0.0) {
            pfVar13 = &local_34;
          }
          iVar17 = iVar17 + 2;
          pfVar15 = pfVar15 + 2;
          *pfVar14 = *pfVar13;
        } while (iVar17 != 0);
      }
      goto LAB_00a40570;
    }
LAB_00a3fb38:
    *(undefined1 *)(lVar18 + 8) = 0;
LAB_00a3fb3c:
    *(undefined1 *)(param_1 + 0x30) = 1;
    nn::oe::SetCpuBoostMode(0);
    DAT_0485a120 = 0;
    return 1;
  case 0x33:
    uVar5 = FUN_00a4af84(uVar20,"res5.conv2.conv2d.depthwise.weight");
    uVar1 = FUN_00a4af84(uVar20,"res5.conv2.conv2d.depthwise.bias");
    uVar2 = FUN_00a4af84(uVar20,"res5.conv2.conv2d.pointwise.weight");
    pcVar7 = "res5.conv2.conv2d.pointwise.bias";
LAB_00a3fb98:
    uVar3 = FUN_00a4af84(uVar20,pcVar7);
    nn::oe::SetCpuBoostMode(1);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    uVar20 = uVar4;
    goto LAB_00a3fbc0;
  case 0x35:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    uVar5 = FUN_00a4af84(uVar20,"res5.in2.weight");
    uVar20 = FUN_00a4af84(uVar20,"res5.in2.bias");
    FUN_00a46afc(*(undefined8 *)(param_1 + 0x48),uVar5,uVar20);
    lVar12 = *(long *)(param_1 + 0x40);
    if (*(char *)(lVar12 + 8) == '\0') {
      *(undefined1 *)(lVar12 + 8) = 0;
    }
    else {
      lVar22 = *(long *)(lVar12 + 0x10);
      uVar9 = *(long *)(lVar12 + 0x18) - lVar22;
      if ((int)(uVar9 >> 2) < 1) {
        uVar8 = 1;
      }
      else {
        uVar19 = uVar9 >> 2 & 0xffffffff;
        uVar9 = uVar9 >> 2 & 3;
        if (uVar19 - 1 < 3) {
          lVar18 = 0;
          uVar8 = 1;
        }
        else {
          lVar18 = 0;
          uVar8 = 1;
          piVar11 = (int *)(lVar22 + 8);
          do {
            lVar18 = lVar18 + 4;
            uVar8 = piVar11[1] * *piVar11 * piVar11[-1] * piVar11[-2] * uVar8;
            piVar11 = piVar11 + 4;
          } while (uVar19 - uVar9 != lVar18);
        }
        if (uVar9 != 0) {
          piVar11 = (int *)(lVar22 + lVar18 * 4);
          do {
            uVar8 = *piVar11 * uVar8;
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 1;
          } while (uVar9 != 0);
        }
        if ((int)uVar8 < 1) goto LAB_00a40144;
      }
      pfVar15 = *(float **)(*(long *)(param_1 + 0x48) + 0x80);
      pfVar13 = *(float **)(lVar12 + 0x80);
      if (uVar8 != 1) {
        iVar17 = -(uVar8 & 0xfffffffe);
        pfVar14 = pfVar13;
        pfVar16 = pfVar15;
        do {
          pfVar15 = pfVar16 + 2;
          pfVar13 = pfVar14 + 2;
          *pfVar14 = *pfVar16 + *pfVar14;
          iVar17 = iVar17 + 2;
          pfVar14[1] = pfVar16[1] + pfVar14[1];
          pfVar14 = pfVar13;
          pfVar16 = pfVar15;
        } while (iVar17 != 0);
      }
      if ((uVar8 & 1) != 0) {
        *pfVar13 = *pfVar15 + *pfVar13;
      }
    }
LAB_00a40144:
    lVar22 = *(long *)(param_1 + 0x48);
    lVar12 = *(long *)(lVar22 + 0x80);
    if (lVar12 != 0) {
      if (*(int **)(lVar22 + 0x10) == *(int **)(lVar22 + 0x18)) goto LAB_00a40180;
      lVar18 = 1;
      piVar11 = *(int **)(lVar22 + 0x10);
      do {
        piVar10 = piVar11 + 1;
        lVar18 = (long)*piVar11 * (long)(int)lVar18;
        piVar11 = piVar10;
      } while (*(int **)(lVar22 + 0x18) != piVar10);
      goto LAB_00a40174;
    }
LAB_00a401c4:
    *(undefined8 *)(lVar22 + 0x18) = *(undefined8 *)(lVar22 + 0x10);
    *(undefined8 *)(lVar22 + 0x50) = *(undefined8 *)(lVar22 + 0x48);
    *(undefined1 *)(param_1 + 0x30) = 1;
    nn::oe::SetCpuBoostMode(0);
    DAT_0485a120 = 0;
    goto switchD_00a3f32c_caseD_10;
  }
  uVar3 = FUN_00a4af84(uVar20,pcVar7);
  nn::oe::SetCpuBoostMode(1);
  uVar20 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
LAB_00a3fbc0:
  DAT_0485a120 = 1;
  FUN_00a485cc(uVar4,uVar20,uVar5,uVar1,uVar2,uVar3,1);
  *(undefined1 *)(param_1 + 0x30) = 1;
  nn::oe::SetCpuBoostMode(0);
  DAT_0485a120 = 0;
switchD_00a3f32c_caseD_10:
  return 1;
}


