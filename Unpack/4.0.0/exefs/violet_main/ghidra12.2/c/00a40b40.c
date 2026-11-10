/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a40b40; name: FUN_00a40b40
 */


undefined8 FUN_00a40b40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar9;
  int *piVar8;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  float fVar20;
  float local_38;
  float local_34;
  
  if (9 < *(int *)(param_1 + 0x28) - 0x37U) {
    return 1;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x38);
  switch(*(int *)(param_1 + 0x28)) {
  case 0x37:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    uVar1 = FUN_00a4af84(uVar16,"deconv1.conv2d.depthwise.weight");
    uVar2 = FUN_00a4af84(uVar16,"deconv1.conv2d.depthwise.bias");
    uVar3 = FUN_00a4af84(uVar16,"deconv1.conv2d.pointwise.weight");
    pcVar6 = "deconv1.conv2d.pointwise.bias";
    goto LAB_00a40ce8;
  case 0x38:
  case 0x3c:
    break;
  case 0x39:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar17 = FUN_00a4af84(uVar16,"in4.weight");
    lVar19 = FUN_00a4af84(uVar16,"in4.bias");
    lVar14 = *(long *)(param_1 + 0x40);
    if (((*(char *)(lVar14 + 8) == '\0') || (*(char *)(lVar17 + 8) == '\0')) ||
       ((*(char *)(lVar19 + 8) == '\0' ||
        (FUN_00a46afc(lVar14,lVar17,lVar19), *(char *)(lVar14 + 8) == '\0')))) {
LAB_00a40dc8:
      *(undefined1 *)(lVar14 + 8) = 0;
    }
    else {
      lVar17 = *(long *)(lVar14 + 0x10);
      uVar4 = *(long *)(lVar14 + 0x18) - lVar17;
      if ((int)(uVar4 >> 2) < 1) {
        uVar7 = 1;
      }
      else {
        uVar15 = uVar4 >> 2 & 0xffffffff;
        uVar4 = uVar4 >> 2 & 3;
        if (uVar15 - 1 < 3) {
          lVar19 = 0;
          uVar7 = 1;
        }
        else {
          lVar19 = 0;
          uVar7 = 1;
          piVar8 = (int *)(lVar17 + 8);
          do {
            lVar19 = lVar19 + 4;
            uVar7 = piVar8[1] * *piVar8 * piVar8[-1] * piVar8[-2] * uVar7;
            piVar8 = piVar8 + 4;
          } while (uVar15 - uVar4 != lVar19);
        }
        if (uVar4 != 0) {
          piVar8 = (int *)(lVar17 + lVar19 * 4);
          do {
            uVar7 = *piVar8 * uVar7;
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 1;
          } while (uVar4 != 0);
        }
        if ((int)uVar7 < 1) goto LAB_00a40dcc;
      }
      pfVar12 = *(float **)(lVar14 + 0x80);
      if (uVar7 != 1) {
        iVar13 = -(uVar7 & 0xfffffffe);
        do {
          local_38 = 0.0;
          pfVar10 = pfVar12;
          if (*pfVar12 <= 0.0) {
            pfVar10 = &local_38;
          }
          *pfVar12 = *pfVar10;
          local_38 = 0.0;
          pfVar11 = pfVar12 + 1;
          pfVar10 = pfVar11;
          if (*pfVar11 <= 0.0) {
            pfVar10 = &local_38;
          }
          iVar13 = iVar13 + 2;
          pfVar12 = pfVar12 + 2;
          *pfVar11 = *pfVar10;
        } while (iVar13 != 0);
      }
      if ((uVar7 & 1) != 0) {
        local_38 = 0.0;
        fVar20 = *pfVar12;
        pfVar10 = &local_38;
LAB_00a410a4:
        pfVar11 = pfVar12;
        if (fVar20 <= 0.0) {
          pfVar11 = pfVar10;
        }
        *pfVar12 = *pfVar11;
      }
    }
    goto LAB_00a40dcc;
  default:
    *(undefined1 *)(param_1 + 0x30) = 1;
    break;
  case 0x3b:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    uVar1 = FUN_00a4af84(uVar16,"deconv2.conv2d.depthwise.weight");
    uVar2 = FUN_00a4af84(uVar16,"deconv2.conv2d.depthwise.bias");
    uVar3 = FUN_00a4af84(uVar16,"deconv2.conv2d.pointwise.weight");
    pcVar6 = "deconv2.conv2d.pointwise.bias";
LAB_00a40ce8:
    uVar16 = FUN_00a4af84(uVar16,pcVar6);
    FUN_00a4a020(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x40),2,uVar1,uVar2,uVar3
                 ,uVar16,1);
    *(undefined1 *)(param_1 + 0x30) = 1;
    nn::oe::SetCpuBoostMode(0);
    DAT_0485a120 = 0;
    break;
  case 0x3d:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar17 = FUN_00a4af84(uVar16,"in5.weight");
    lVar19 = FUN_00a4af84(uVar16,"in5.bias");
    lVar14 = *(long *)(param_1 + 0x40);
    if ((((*(char *)(lVar14 + 8) == '\0') || (*(char *)(lVar17 + 8) == '\0')) ||
        (*(char *)(lVar19 + 8) == '\0')) ||
       (FUN_00a46afc(lVar14,lVar17,lVar19), *(char *)(lVar14 + 8) == '\0')) goto LAB_00a40dc8;
    lVar17 = *(long *)(lVar14 + 0x10);
    uVar4 = *(long *)(lVar14 + 0x18) - lVar17;
    if ((int)(uVar4 >> 2) < 1) {
      uVar7 = 1;
    }
    else {
      uVar15 = uVar4 >> 2 & 0xffffffff;
      uVar4 = uVar4 >> 2 & 3;
      if (uVar15 - 1 < 3) {
        lVar19 = 0;
        uVar7 = 1;
      }
      else {
        lVar19 = 0;
        uVar7 = 1;
        piVar8 = (int *)(lVar17 + 8);
        do {
          lVar19 = lVar19 + 4;
          uVar7 = piVar8[1] * *piVar8 * piVar8[-1] * piVar8[-2] * uVar7;
          piVar8 = piVar8 + 4;
        } while (uVar15 - uVar4 != lVar19);
      }
      if (uVar4 != 0) {
        piVar8 = (int *)(lVar17 + lVar19 * 4);
        do {
          uVar7 = *piVar8 * uVar7;
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 1;
        } while (uVar4 != 0);
      }
      if ((int)uVar7 < 1) goto LAB_00a40dcc;
    }
    pfVar12 = *(float **)(lVar14 + 0x80);
    if (uVar7 != 1) {
      iVar13 = -(uVar7 & 0xfffffffe);
      do {
        local_34 = 0.0;
        pfVar10 = pfVar12;
        if (*pfVar12 <= 0.0) {
          pfVar10 = &local_34;
        }
        *pfVar12 = *pfVar10;
        local_34 = 0.0;
        pfVar11 = pfVar12 + 1;
        pfVar10 = pfVar11;
        if (*pfVar11 <= 0.0) {
          pfVar10 = &local_34;
        }
        iVar13 = iVar13 + 2;
        pfVar12 = pfVar12 + 2;
        *pfVar11 = *pfVar10;
      } while (iVar13 != 0);
    }
    if ((uVar7 & 1) != 0) {
      local_34 = 0.0;
      fVar20 = *pfVar12;
      pfVar10 = &local_34;
      goto LAB_00a410a4;
    }
LAB_00a40dcc:
    *(undefined1 *)(param_1 + 0x30) = 1;
    nn::oe::SetCpuBoostMode(0);
    DAT_0485a120 = 0;
    break;
  case 0x3f:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    uVar1 = FUN_00a4af84(uVar16,"deconv3.conv2d.depthwise.weight");
    uVar2 = FUN_00a4af84(uVar16,"deconv3.conv2d.depthwise.bias");
    uVar3 = FUN_00a4af84(uVar16,"deconv3.conv2d.pointwise.weight");
    uVar16 = FUN_00a4af84(uVar16,"deconv3.conv2d.pointwise.bias");
    FUN_00a47a74(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x40),uVar1,uVar2,uVar3,
                 uVar16,1);
    lVar19 = *(long *)(param_1 + 0x40);
    lVar17 = *(long *)(lVar19 + 0x80);
    if (lVar17 != 0) {
      if (*(int **)(lVar19 + 0x10) == *(int **)(lVar19 + 0x18)) {
        lVar14 = 0;
      }
      else {
        lVar14 = 1;
        piVar8 = *(int **)(lVar19 + 0x10);
        do {
          piVar9 = piVar8 + 1;
          lVar14 = (long)*piVar8 * (long)(int)lVar14;
          piVar8 = piVar9;
        } while (*(int **)(lVar19 + 0x18) != piVar9);
        lVar14 = lVar14 * 0x88;
      }
      plVar18 = *(long **)PTR_DAT_047d8e68;
      uVar4 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar17,lVar14,0x40);
      }
      else {
        FUN_00c48fe8(plVar18,lVar17,lVar14,0x40);
      }
      *(undefined8 *)(lVar19 + 0x80) = 0;
    }
    *(undefined8 *)(lVar19 + 0x18) = *(undefined8 *)(lVar19 + 0x10);
    *(undefined8 *)(lVar19 + 0x50) = *(undefined8 *)(lVar19 + 0x48);
    *(undefined1 *)(param_1 + 0x30) = 1;
    nn::oe::SetCpuBoostMode(0);
    DAT_0485a120 = 0;
  }
  return 1;
}


