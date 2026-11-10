/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a3d5e0; name: FUN_00a3d5e0
 */


undefined8 FUN_00a3d5e0(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  int *piVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  float fVar20;
  float local_44;
  float local_28;
  float local_24;
  
  if (0xb < *(int *)(param_1 + 0x28) - 3U) {
    return 1;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x38);
  switch(*(int *)(param_1 + 0x28)) {
  case 3:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    uVar6 = FUN_00a4af84(uVar18,"conv1.conv2d.weight");
    uVar4 = FUN_00a4af84(uVar18,"conv1.conv2d.bias");
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uVar18 = *(undefined8 *)(param_1 + 0x10);
    uVar9 = 1;
    goto LAB_00a3d764;
  default:
    goto switchD_00a3d624_caseD_4;
  case 5:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar7 = FUN_00a4af84(uVar18,"in1.weight");
    lVar8 = FUN_00a4af84(uVar18,"in1.bias");
    lVar19 = *(long *)(param_1 + 0x40);
    if (((*(char *)(lVar19 + 8) == '\0') || (*(char *)(lVar7 + 8) == '\0')) ||
       ((*(char *)(lVar8 + 8) == '\0' ||
        (FUN_00a46afc(lVar19,lVar7,lVar8), *(char *)(lVar19 + 8) == '\0')))) {
LAB_00a3d904:
      *(undefined1 *)(lVar19 + 8) = 0;
    }
    else {
      lVar7 = *(long *)(lVar19 + 0x10);
      uVar11 = *(long *)(lVar19 + 0x18) - lVar7;
      if ((int)(uVar11 >> 2) < 1) {
        uVar10 = 1;
      }
      else {
        uVar17 = uVar11 >> 2 & 0xffffffff;
        uVar11 = uVar11 >> 2 & 3;
        if (uVar17 - 1 < 3) {
          lVar8 = 0;
          uVar10 = 1;
        }
        else {
          lVar8 = 0;
          uVar10 = 1;
          piVar16 = (int *)(lVar7 + 8);
          do {
            lVar8 = lVar8 + 4;
            uVar10 = piVar16[1] * *piVar16 * piVar16[-1] * piVar16[-2] * uVar10;
            piVar16 = piVar16 + 4;
          } while (uVar17 - uVar11 != lVar8);
        }
        if (uVar11 != 0) {
          piVar16 = (int *)(lVar7 + lVar8 * 4);
          do {
            uVar10 = *piVar16 * uVar10;
            uVar11 = uVar11 - 1;
            piVar16 = piVar16 + 1;
          } while (uVar11 != 0);
        }
        if ((int)uVar10 < 1) break;
      }
      pfVar14 = *(float **)(lVar19 + 0x80);
      if (uVar10 != 1) {
        iVar15 = -(uVar10 & 0xfffffffe);
        do {
          local_44 = 0.0;
          pfVar12 = pfVar14;
          if (*pfVar14 <= 0.0) {
            pfVar12 = &local_44;
          }
          *pfVar14 = *pfVar12;
          local_44 = 0.0;
          pfVar13 = pfVar14 + 1;
          pfVar12 = pfVar13;
          if (*pfVar13 <= 0.0) {
            pfVar12 = &local_44;
          }
          iVar15 = iVar15 + 2;
          pfVar14 = pfVar14 + 2;
          *pfVar13 = *pfVar12;
        } while (iVar15 != 0);
      }
      if ((uVar10 & 1) != 0) {
        local_44 = 0.0;
        fVar20 = *pfVar14;
        bVar3 = NAN(fVar20);
        bVar2 = fVar20 == 0.0;
        bVar1 = fVar20 < 0.0;
        pfVar12 = &local_44;
LAB_00a3db80:
        pfVar13 = pfVar14;
        if (bVar2 || bVar1 != bVar3) {
          pfVar13 = pfVar12;
        }
        *pfVar14 = *pfVar13;
      }
    }
    break;
  case 6:
  case 10:
  case 0xe:
    goto switchD_00a3d624_caseD_6;
  case 7:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    uVar6 = FUN_00a4af84(uVar18,"conv2.conv2d.weight");
    uVar4 = FUN_00a4af84(uVar18,"conv2.conv2d.bias");
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uVar9 = 2;
    uVar18 = uVar5;
LAB_00a3d764:
    FUN_00a46ef4(uVar5,uVar18,uVar6,uVar4,uVar9);
    *(undefined1 *)(param_1 + 0x30) = 1;
    nn::oe::SetCpuBoostMode(0);
    DAT_0485a120 = 0;
    return 1;
  case 9:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar7 = FUN_00a4af84(uVar18,"in2.weight");
    lVar8 = FUN_00a4af84(uVar18,"in2.bias");
    lVar19 = *(long *)(param_1 + 0x40);
    if (((*(char *)(lVar19 + 8) == '\0') || (*(char *)(lVar7 + 8) == '\0')) ||
       ((*(char *)(lVar8 + 8) == '\0' ||
        (FUN_00a46afc(lVar19,lVar7,lVar8), *(char *)(lVar19 + 8) == '\0')))) goto LAB_00a3d904;
    lVar7 = *(long *)(lVar19 + 0x10);
    uVar11 = *(long *)(lVar19 + 0x18) - lVar7;
    if ((int)(uVar11 >> 2) < 1) {
      uVar10 = 1;
    }
    else {
      uVar17 = uVar11 >> 2 & 0xffffffff;
      uVar11 = uVar11 >> 2 & 3;
      if (uVar17 - 1 < 3) {
        lVar8 = 0;
        uVar10 = 1;
      }
      else {
        lVar8 = 0;
        uVar10 = 1;
        piVar16 = (int *)(lVar7 + 8);
        do {
          lVar8 = lVar8 + 4;
          uVar10 = piVar16[1] * *piVar16 * piVar16[-1] * piVar16[-2] * uVar10;
          piVar16 = piVar16 + 4;
        } while (uVar17 - uVar11 != lVar8);
      }
      if (uVar11 != 0) {
        piVar16 = (int *)(lVar7 + lVar8 * 4);
        do {
          uVar10 = *piVar16 * uVar10;
          uVar11 = uVar11 - 1;
          piVar16 = piVar16 + 1;
        } while (uVar11 != 0);
      }
      if ((int)uVar10 < 1) break;
    }
    pfVar14 = *(float **)(lVar19 + 0x80);
    if (uVar10 != 1) {
      iVar15 = -(uVar10 & 0xfffffffe);
      do {
        local_28 = 0.0;
        pfVar12 = pfVar14;
        if (*pfVar14 <= 0.0) {
          pfVar12 = &local_28;
        }
        *pfVar14 = *pfVar12;
        local_28 = 0.0;
        pfVar13 = pfVar14 + 1;
        pfVar12 = pfVar13;
        if (*pfVar13 <= 0.0) {
          pfVar12 = &local_28;
        }
        iVar15 = iVar15 + 2;
        pfVar14 = pfVar14 + 2;
        *pfVar13 = *pfVar12;
      } while (iVar15 != 0);
    }
    if ((uVar10 & 1) != 0) {
      local_28 = 0.0;
      fVar20 = *pfVar14;
      bVar3 = NAN(fVar20);
      bVar2 = fVar20 == 0.0;
      bVar1 = fVar20 < 0.0;
      pfVar12 = &local_28;
      goto LAB_00a3db80;
    }
    break;
  case 0xb:
    uVar6 = FUN_00a4af84(uVar18,"conv3.conv2d.weight");
    uVar18 = FUN_00a4af84(uVar18,"conv3.conv2d.bias");
    FUN_00a46ef4(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x40),uVar6,uVar18,2);
    goto switchD_00a3d624_caseD_6;
  case 0xd:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar7 = FUN_00a4af84(uVar18,"in3.weight");
    lVar8 = FUN_00a4af84(uVar18,"in3.bias");
    lVar19 = *(long *)(param_1 + 0x40);
    if ((((*(char *)(lVar19 + 8) == '\0') || (*(char *)(lVar7 + 8) == '\0')) ||
        (*(char *)(lVar8 + 8) == '\0')) ||
       (FUN_00a46afc(lVar19,lVar7,lVar8), *(char *)(lVar19 + 8) == '\0')) goto LAB_00a3d904;
    lVar7 = *(long *)(lVar19 + 0x10);
    uVar11 = *(long *)(lVar19 + 0x18) - lVar7;
    if ((int)(uVar11 >> 2) < 1) {
      uVar10 = 1;
    }
    else {
      uVar17 = uVar11 >> 2 & 0xffffffff;
      uVar11 = uVar11 >> 2 & 3;
      if (uVar17 - 1 < 3) {
        lVar8 = 0;
        uVar10 = 1;
      }
      else {
        lVar8 = 0;
        uVar10 = 1;
        piVar16 = (int *)(lVar7 + 8);
        do {
          lVar8 = lVar8 + 4;
          uVar10 = piVar16[1] * *piVar16 * piVar16[-1] * piVar16[-2] * uVar10;
          piVar16 = piVar16 + 4;
        } while (uVar17 - uVar11 != lVar8);
      }
      if (uVar11 != 0) {
        piVar16 = (int *)(lVar7 + lVar8 * 4);
        do {
          uVar10 = *piVar16 * uVar10;
          uVar11 = uVar11 - 1;
          piVar16 = piVar16 + 1;
        } while (uVar11 != 0);
      }
      if ((int)uVar10 < 1) break;
    }
    pfVar14 = *(float **)(lVar19 + 0x80);
    if (uVar10 != 1) {
      iVar15 = -(uVar10 & 0xfffffffe);
      do {
        local_24 = 0.0;
        pfVar12 = pfVar14;
        if (*pfVar14 <= 0.0) {
          pfVar12 = &local_24;
        }
        *pfVar14 = *pfVar12;
        local_24 = 0.0;
        pfVar13 = pfVar14 + 1;
        pfVar12 = pfVar13;
        if (*pfVar13 <= 0.0) {
          pfVar12 = &local_24;
        }
        iVar15 = iVar15 + 2;
        pfVar14 = pfVar14 + 2;
        *pfVar13 = *pfVar12;
      } while (iVar15 != 0);
    }
    if ((uVar10 & 1) != 0) {
      local_24 = 0.0;
      fVar20 = *pfVar14;
      bVar3 = NAN(fVar20);
      bVar2 = fVar20 == 0.0;
      bVar1 = fVar20 < 0.0;
      pfVar12 = &local_24;
      goto LAB_00a3db80;
    }
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  nn::oe::SetCpuBoostMode(0);
  DAT_0485a120 = 0;
switchD_00a3d624_caseD_4:
  return 1;
switchD_00a3d624_caseD_6:
  *(undefined1 *)(param_1 + 0x30) = 1;
  return 1;
}


