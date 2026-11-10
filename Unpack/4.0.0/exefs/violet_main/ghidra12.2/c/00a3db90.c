/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a3db90; name: FUN_00a3db90
 */


undefined8 FUN_00a3db90(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  int *piVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  float fVar19;
  float local_54;
  float local_38;
  float local_34;
  
  if (0xb < *(int *)(param_1 + 0x28) - 3U) {
    return 1;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x38);
  switch(*(int *)(param_1 + 0x28)) {
  case 3:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    uVar4 = FUN_00a4af84(uVar17,"conv1.conv2d.depthwise.weight");
    uVar5 = FUN_00a4af84(uVar17,"conv1.conv2d.depthwise.bias");
    uVar6 = FUN_00a4af84(uVar17,"conv1.conv2d.pointwise.weight");
    uVar17 = FUN_00a4af84(uVar17,"conv1.conv2d.pointwise.bias");
    FUN_00a46fec(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x10),uVar4,uVar5,uVar6,
                 uVar17,1);
    goto LAB_00a3dd80;
  default:
    goto switchD_00a3dbd8_caseD_4;
  case 5:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar7 = FUN_00a4af84(uVar17,"in1.weight");
    lVar8 = FUN_00a4af84(uVar17,"in1.bias");
    lVar18 = *(long *)(param_1 + 0x40);
    if (((*(char *)(lVar18 + 8) == '\0') || (*(char *)(lVar7 + 8) == '\0')) ||
       ((*(char *)(lVar8 + 8) == '\0' ||
        (FUN_00a46afc(lVar18,lVar7,lVar8), *(char *)(lVar18 + 8) == '\0')))) {
LAB_00a3df4c:
      *(undefined1 *)(lVar18 + 8) = 0;
    }
    else {
      lVar7 = *(long *)(lVar18 + 0x10);
      uVar10 = *(long *)(lVar18 + 0x18) - lVar7;
      if ((int)(uVar10 >> 2) < 1) {
        uVar9 = 1;
      }
      else {
        uVar16 = uVar10 >> 2 & 0xffffffff;
        uVar10 = uVar10 >> 2 & 3;
        if (uVar16 - 1 < 3) {
          lVar8 = 0;
          uVar9 = 1;
        }
        else {
          lVar8 = 0;
          uVar9 = 1;
          piVar15 = (int *)(lVar7 + 8);
          do {
            lVar8 = lVar8 + 4;
            uVar9 = piVar15[1] * *piVar15 * piVar15[-1] * piVar15[-2] * uVar9;
            piVar15 = piVar15 + 4;
          } while (uVar16 - uVar10 != lVar8);
        }
        if (uVar10 != 0) {
          piVar15 = (int *)(lVar7 + lVar8 * 4);
          do {
            uVar9 = *piVar15 * uVar9;
            uVar10 = uVar10 - 1;
            piVar15 = piVar15 + 1;
          } while (uVar10 != 0);
        }
        if ((int)uVar9 < 1) break;
      }
      pfVar13 = *(float **)(lVar18 + 0x80);
      if (uVar9 != 1) {
        iVar14 = -(uVar9 & 0xfffffffe);
        do {
          local_54 = 0.0;
          pfVar11 = pfVar13;
          if (*pfVar13 <= 0.0) {
            pfVar11 = &local_54;
          }
          *pfVar13 = *pfVar11;
          local_54 = 0.0;
          pfVar12 = pfVar13 + 1;
          pfVar11 = pfVar12;
          if (*pfVar12 <= 0.0) {
            pfVar11 = &local_54;
          }
          iVar14 = iVar14 + 2;
          pfVar13 = pfVar13 + 2;
          *pfVar12 = *pfVar11;
        } while (iVar14 != 0);
      }
      if ((uVar9 & 1) != 0) {
        local_54 = 0.0;
        fVar19 = *pfVar13;
        bVar3 = NAN(fVar19);
        bVar2 = fVar19 == 0.0;
        bVar1 = fVar19 < 0.0;
        pfVar11 = &local_54;
LAB_00a3e1cc:
        pfVar12 = pfVar13;
        if (bVar2 || bVar1 != bVar3) {
          pfVar12 = pfVar11;
        }
        *pfVar13 = *pfVar12;
      }
    }
    break;
  case 6:
  case 10:
  case 0xe:
    goto switchD_00a3dbd8_caseD_6;
  case 7:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    uVar4 = FUN_00a4af84(uVar17,"conv2.conv2d.depthwise.weight");
    uVar5 = FUN_00a4af84(uVar17,"conv2.conv2d.depthwise.bias");
    uVar6 = FUN_00a4af84(uVar17,"conv2.conv2d.pointwise.weight");
    uVar17 = FUN_00a4af84(uVar17,"conv2.conv2d.pointwise.bias");
    FUN_00a49034(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x40),uVar4,uVar5,uVar6,
                 uVar17,2);
LAB_00a3dd80:
    *(undefined1 *)(param_1 + 0x30) = 1;
    nn::oe::SetCpuBoostMode(0);
    DAT_0485a120 = 0;
    return 1;
  case 9:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar7 = FUN_00a4af84(uVar17,"in2.weight");
    lVar8 = FUN_00a4af84(uVar17,"in2.bias");
    lVar18 = *(long *)(param_1 + 0x40);
    if (((*(char *)(lVar18 + 8) == '\0') || (*(char *)(lVar7 + 8) == '\0')) ||
       ((*(char *)(lVar8 + 8) == '\0' ||
        (FUN_00a46afc(lVar18,lVar7,lVar8), *(char *)(lVar18 + 8) == '\0')))) goto LAB_00a3df4c;
    lVar7 = *(long *)(lVar18 + 0x10);
    uVar10 = *(long *)(lVar18 + 0x18) - lVar7;
    if ((int)(uVar10 >> 2) < 1) {
      uVar9 = 1;
    }
    else {
      uVar16 = uVar10 >> 2 & 0xffffffff;
      uVar10 = uVar10 >> 2 & 3;
      if (uVar16 - 1 < 3) {
        lVar8 = 0;
        uVar9 = 1;
      }
      else {
        lVar8 = 0;
        uVar9 = 1;
        piVar15 = (int *)(lVar7 + 8);
        do {
          lVar8 = lVar8 + 4;
          uVar9 = piVar15[1] * *piVar15 * piVar15[-1] * piVar15[-2] * uVar9;
          piVar15 = piVar15 + 4;
        } while (uVar16 - uVar10 != lVar8);
      }
      if (uVar10 != 0) {
        piVar15 = (int *)(lVar7 + lVar8 * 4);
        do {
          uVar9 = *piVar15 * uVar9;
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 1;
        } while (uVar10 != 0);
      }
      if ((int)uVar9 < 1) break;
    }
    pfVar13 = *(float **)(lVar18 + 0x80);
    if (uVar9 != 1) {
      iVar14 = -(uVar9 & 0xfffffffe);
      do {
        local_38 = 0.0;
        pfVar11 = pfVar13;
        if (*pfVar13 <= 0.0) {
          pfVar11 = &local_38;
        }
        *pfVar13 = *pfVar11;
        local_38 = 0.0;
        pfVar12 = pfVar13 + 1;
        pfVar11 = pfVar12;
        if (*pfVar12 <= 0.0) {
          pfVar11 = &local_38;
        }
        iVar14 = iVar14 + 2;
        pfVar13 = pfVar13 + 2;
        *pfVar12 = *pfVar11;
      } while (iVar14 != 0);
    }
    if ((uVar9 & 1) != 0) {
      local_38 = 0.0;
      fVar19 = *pfVar13;
      bVar3 = NAN(fVar19);
      bVar2 = fVar19 == 0.0;
      bVar1 = fVar19 < 0.0;
      pfVar11 = &local_38;
      goto LAB_00a3e1cc;
    }
    break;
  case 0xb:
    uVar4 = FUN_00a4af84(uVar17,"conv3.conv2d.depthwise.weight");
    uVar5 = FUN_00a4af84(uVar17,"conv3.conv2d.depthwise.bias");
    uVar6 = FUN_00a4af84(uVar17,"conv3.conv2d.pointwise.weight");
    uVar17 = FUN_00a4af84(uVar17,"conv3.conv2d.pointwise.bias");
    FUN_00a49034(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x40),uVar4,uVar5,uVar6,
                 uVar17,2);
    goto switchD_00a3dbd8_caseD_6;
  case 0xd:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar7 = FUN_00a4af84(uVar17,"in3.weight");
    lVar8 = FUN_00a4af84(uVar17,"in3.bias");
    lVar18 = *(long *)(param_1 + 0x40);
    if ((((*(char *)(lVar18 + 8) == '\0') || (*(char *)(lVar7 + 8) == '\0')) ||
        (*(char *)(lVar8 + 8) == '\0')) ||
       (FUN_00a46afc(lVar18,lVar7,lVar8), *(char *)(lVar18 + 8) == '\0')) goto LAB_00a3df4c;
    lVar7 = *(long *)(lVar18 + 0x10);
    uVar10 = *(long *)(lVar18 + 0x18) - lVar7;
    if ((int)(uVar10 >> 2) < 1) {
      uVar9 = 1;
    }
    else {
      uVar16 = uVar10 >> 2 & 0xffffffff;
      uVar10 = uVar10 >> 2 & 3;
      if (uVar16 - 1 < 3) {
        lVar8 = 0;
        uVar9 = 1;
      }
      else {
        lVar8 = 0;
        uVar9 = 1;
        piVar15 = (int *)(lVar7 + 8);
        do {
          lVar8 = lVar8 + 4;
          uVar9 = piVar15[1] * *piVar15 * piVar15[-1] * piVar15[-2] * uVar9;
          piVar15 = piVar15 + 4;
        } while (uVar16 - uVar10 != lVar8);
      }
      if (uVar10 != 0) {
        piVar15 = (int *)(lVar7 + lVar8 * 4);
        do {
          uVar9 = *piVar15 * uVar9;
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 1;
        } while (uVar10 != 0);
      }
      if ((int)uVar9 < 1) break;
    }
    pfVar13 = *(float **)(lVar18 + 0x80);
    if (uVar9 != 1) {
      iVar14 = -(uVar9 & 0xfffffffe);
      do {
        local_34 = 0.0;
        pfVar11 = pfVar13;
        if (*pfVar13 <= 0.0) {
          pfVar11 = &local_34;
        }
        *pfVar13 = *pfVar11;
        local_34 = 0.0;
        pfVar12 = pfVar13 + 1;
        pfVar11 = pfVar12;
        if (*pfVar12 <= 0.0) {
          pfVar11 = &local_34;
        }
        iVar14 = iVar14 + 2;
        pfVar13 = pfVar13 + 2;
        *pfVar12 = *pfVar11;
      } while (iVar14 != 0);
    }
    if ((uVar9 & 1) != 0) {
      local_34 = 0.0;
      fVar19 = *pfVar13;
      bVar3 = NAN(fVar19);
      bVar2 = fVar19 == 0.0;
      bVar1 = fVar19 < 0.0;
      pfVar11 = &local_34;
      goto LAB_00a3e1cc;
    }
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  nn::oe::SetCpuBoostMode(0);
  DAT_0485a120 = 0;
switchD_00a3dbd8_caseD_4:
  return 1;
switchD_00a3dbd8_caseD_6:
  *(undefined1 *)(param_1 + 0x30) = 1;
  return 1;
}


