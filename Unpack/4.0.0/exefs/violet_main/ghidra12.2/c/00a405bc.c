/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a405bc; name: FUN_00a405bc
 */


undefined8 FUN_00a405bc(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar8;
  int *piVar7;
  undefined **ppuVar9;
  undefined **ppuVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined *local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  
  if (9 < *(int *)(param_1 + 0x28) - 0x37U) {
    return 1;
  }
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  switch(*(int *)(param_1 + 0x28)) {
  case 0x37:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar15 = FUN_00a4af84(uVar14,"deconv1.conv2d.weight");
    pcVar5 = "deconv1.conv2d.bias";
    break;
  case 0x38:
  case 0x3c:
    goto switchD_00a40604_caseD_38;
  case 0x39:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar15 = FUN_00a4af84(uVar14,"in4.weight");
    lVar17 = FUN_00a4af84(uVar14,"in4.bias");
    lVar12 = *(long *)(param_1 + 0x40);
    if (((*(char *)(lVar12 + 8) != '\0') && (*(char *)(lVar15 + 8) != '\0')) &&
       ((*(char *)(lVar17 + 8) != '\0' &&
        (FUN_00a46afc(lVar12,lVar15,lVar17), *(char *)(lVar12 + 8) != '\0')))) {
      lVar15 = *(long *)(lVar12 + 0x10);
      uVar3 = *(long *)(lVar12 + 0x18) - lVar15;
      if ((int)(uVar3 >> 2) < 1) {
        uVar6 = 1;
      }
      else {
        uVar13 = uVar3 >> 2 & 0xffffffff;
        uVar3 = uVar3 >> 2 & 3;
        if (uVar13 - 1 < 3) {
          lVar17 = 0;
          uVar6 = 1;
        }
        else {
          lVar17 = 0;
          uVar6 = 1;
          piVar7 = (int *)(lVar15 + 8);
          do {
            lVar17 = lVar17 + 4;
            uVar6 = piVar7[1] * *piVar7 * piVar7[-1] * piVar7[-2] * uVar6;
            piVar7 = piVar7 + 4;
          } while (uVar13 - uVar3 != lVar17);
        }
        if (uVar3 != 0) {
          piVar7 = (int *)(lVar15 + lVar17 * 4);
          do {
            uVar6 = *piVar7 * uVar6;
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 1;
          } while (uVar3 != 0);
        }
        if ((int)uVar6 < 1) goto LAB_00a40870;
      }
      ppuVar10 = *(undefined ***)(lVar12 + 0x80);
      if (uVar6 != 1) {
        iVar11 = -(uVar6 & 0xfffffffe);
        do {
          uVar3 = (ulong)local_d8 >> 0x20;
          local_d8 = (undefined *)(uVar3 << 0x20);
          ppuVar1 = ppuVar10;
          if (*(float *)ppuVar10 <= 0.0) {
            ppuVar1 = &local_d8;
          }
          *(undefined4 *)ppuVar10 = *(undefined4 *)ppuVar1;
          local_d8 = (undefined *)(uVar3 << 0x20);
          ppuVar9 = (undefined **)((long)ppuVar10 + 4);
          ppuVar1 = ppuVar9;
          if (*(float *)ppuVar9 <= 0.0) {
            ppuVar1 = &local_d8;
          }
          iVar11 = iVar11 + 2;
          ppuVar10 = ppuVar10 + 1;
          *(undefined4 *)ppuVar9 = *(undefined4 *)ppuVar1;
        } while (iVar11 != 0);
      }
LAB_00a40af4:
      if ((uVar6 & 1) != 0) {
        local_d8 = (undefined *)((ulong)local_d8 & 0xffffffff00000000);
        ppuVar1 = ppuVar10;
        if (*(float *)ppuVar10 <= 0.0) {
          ppuVar1 = &local_d8;
        }
        *(undefined4 *)ppuVar10 = *(undefined4 *)ppuVar1;
      }
      goto LAB_00a40870;
    }
    goto LAB_00a4086c;
  default:
    *(undefined1 *)(param_1 + 0x30) = 1;
    return 1;
  case 0x3b:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar15 = FUN_00a4af84(uVar14,"deconv2.conv2d.weight");
    pcVar5 = "deconv2.conv2d.bias";
    break;
  case 0x3d:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    lVar15 = FUN_00a4af84(uVar14,"in5.weight");
    lVar17 = FUN_00a4af84(uVar14,"in5.bias");
    lVar12 = *(long *)(param_1 + 0x40);
    if ((((*(char *)(lVar12 + 8) != '\0') && (*(char *)(lVar15 + 8) != '\0')) &&
        (*(char *)(lVar17 + 8) != '\0')) &&
       (FUN_00a46afc(lVar12,lVar15,lVar17), *(char *)(lVar12 + 8) != '\0')) {
      lVar15 = *(long *)(lVar12 + 0x10);
      uVar3 = *(long *)(lVar12 + 0x18) - lVar15;
      if ((int)(uVar3 >> 2) < 1) {
        uVar6 = 1;
      }
      else {
        uVar13 = uVar3 >> 2 & 0xffffffff;
        uVar3 = uVar3 >> 2 & 3;
        if (uVar13 - 1 < 3) {
          lVar17 = 0;
          uVar6 = 1;
        }
        else {
          lVar17 = 0;
          uVar6 = 1;
          piVar7 = (int *)(lVar15 + 8);
          do {
            lVar17 = lVar17 + 4;
            uVar6 = piVar7[1] * *piVar7 * piVar7[-1] * piVar7[-2] * uVar6;
            piVar7 = piVar7 + 4;
          } while (uVar13 - uVar3 != lVar17);
        }
        if (uVar3 != 0) {
          piVar7 = (int *)(lVar15 + lVar17 * 4);
          do {
            uVar6 = *piVar7 * uVar6;
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 1;
          } while (uVar3 != 0);
        }
        if ((int)uVar6 < 1) goto LAB_00a40870;
      }
      ppuVar10 = *(undefined ***)(lVar12 + 0x80);
      if (uVar6 != 1) {
        iVar11 = -(uVar6 & 0xfffffffe);
        do {
          uVar3 = (ulong)local_d8 >> 0x20;
          local_d8 = (undefined *)(uVar3 << 0x20);
          ppuVar1 = ppuVar10;
          if (*(float *)ppuVar10 <= 0.0) {
            ppuVar1 = &local_d8;
          }
          *(undefined4 *)ppuVar10 = *(undefined4 *)ppuVar1;
          local_d8 = (undefined *)(uVar3 << 0x20);
          ppuVar9 = (undefined **)((long)ppuVar10 + 4);
          ppuVar1 = ppuVar9;
          if (*(float *)ppuVar9 <= 0.0) {
            ppuVar1 = &local_d8;
          }
          iVar11 = iVar11 + 2;
          ppuVar10 = ppuVar10 + 1;
          *(undefined4 *)ppuVar9 = *(undefined4 *)ppuVar1;
        } while (iVar11 != 0);
      }
      goto LAB_00a40af4;
    }
LAB_00a4086c:
    *(undefined1 *)(lVar12 + 8) = 0;
LAB_00a40870:
    *(undefined1 *)(param_1 + 0x30) = 1;
    nn::oe::SetCpuBoostMode(0);
    DAT_0485a120 = 0;
    return 1;
  case 0x3f:
    nn::oe::SetCpuBoostMode(1);
    DAT_0485a120 = 1;
    uVar2 = FUN_00a4af84(uVar14,"deconv3.conv2d.weight");
    uVar14 = FUN_00a4af84(uVar14,"deconv3.conv2d.bias");
    FUN_00a46ef4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x40),uVar2,uVar14,1);
    lVar17 = *(long *)(param_1 + 0x40);
    lVar15 = *(long *)(lVar17 + 0x80);
    if (lVar15 != 0) {
      if (*(int **)(lVar17 + 0x10) == *(int **)(lVar17 + 0x18)) {
        lVar12 = 0;
      }
      else {
        lVar12 = 1;
        piVar7 = *(int **)(lVar17 + 0x10);
        do {
          piVar8 = piVar7 + 1;
          lVar12 = (long)*piVar7 * (long)(int)lVar12;
          piVar7 = piVar8;
        } while (*(int **)(lVar17 + 0x18) != piVar8);
        lVar12 = lVar12 * 0x88;
      }
      plVar16 = *(long **)PTR_DAT_047d8e68;
      uVar3 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,lVar15,lVar12,0x40);
      }
      else {
        FUN_00c48fe8(plVar16,lVar15,lVar12,0x40);
      }
      *(undefined8 *)(lVar17 + 0x80) = 0;
    }
    *(undefined8 *)(lVar17 + 0x18) = *(undefined8 *)(lVar17 + 0x10);
    *(undefined8 *)(lVar17 + 0x50) = *(undefined8 *)(lVar17 + 0x48);
    *(undefined1 *)(param_1 + 0x30) = 1;
    goto LAB_00a4096c;
  }
  lVar17 = FUN_00a4af84(uVar14,pcVar5);
  lVar12 = *(long *)(param_1 + 0x40);
  if (((*(char *)(lVar12 + 8) == '\0') || (*(char *)(lVar15 + 8) == '\0')) ||
     (*(char *)(lVar17 + 8) == '\0')) {
    *(undefined1 *)(lVar12 + 8) = 0;
  }
  else {
    local_d0 = 1;
    uStack_b0 = *(undefined8 *)PTR_DAT_047d8e68;
    local_d8 = PTR_DAT_047d8e78 + 0x10;
    local_98 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_60 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_58 = 0;
    local_a8 = 0x3fffffffffffffff;
    uStack_a0 = 0;
    local_80 = 0;
    local_b8 = 0;
    local_70 = 0x3fffffffffffffff;
    uStack_68 = 0;
    uStack_78 = uStack_b0;
    FUN_00a43554(&local_d8,lVar12);
    FUN_00a49868(lVar12,&local_d8,2,lVar15,lVar17);
    FUN_00a43810(&local_d8);
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
LAB_00a4096c:
  nn::oe::SetCpuBoostMode(0);
  DAT_0485a120 = 0;
switchD_00a40604_caseD_38:
  return 1;
}


