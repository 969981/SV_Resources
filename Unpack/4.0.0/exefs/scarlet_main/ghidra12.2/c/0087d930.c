/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0087d930; name: FUN_0087d930
 */


undefined8 FUN_0087d930(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 auStack_b0 [80];
  
  if (param_1 == 0) {
    return 0x80260201;
  }
  uVar2 = param_2 & 1;
  if ((*(uint *)(param_1 + 0x4c) & 1) == uVar2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x58) == 1) {
    local_dc = *(undefined4 *)(param_1 + 0x98);
    iVar9 = *(int *)(param_1 + 0xa0);
joined_r0x0087d9b0:
    local_d8 = 0;
    if (iVar9 != 0) goto LAB_0087d9b4;
LAB_0087da08:
    local_d8 = *(undefined4 *)(param_1 + 0xe0);
    iVar9 = *(int *)(param_1 + 0xe8);
    if (iVar9 == 0) goto LAB_0087da14;
LAB_0087d9c8:
    if (iVar9 == 1) {
      local_dc = *(undefined4 *)(param_1 + 0x128);
    }
    iVar9 = *(int *)(param_1 + 0x130);
    if (iVar9 != 0) goto LAB_0087d9e0;
LAB_0087da24:
    local_d8 = *(undefined4 *)(param_1 + 0x170);
  }
  else {
    if (*(int *)(param_1 + 0x58) != 0) {
      local_dc = 0;
      iVar9 = *(int *)(param_1 + 0xa0);
      goto joined_r0x0087d9b0;
    }
    local_d8 = *(undefined4 *)(param_1 + 0x98);
    local_dc = 0;
    iVar9 = *(int *)(param_1 + 0xa0);
    if (iVar9 == 0) goto LAB_0087da08;
LAB_0087d9b4:
    if (iVar9 == 1) {
      local_dc = *(undefined4 *)(param_1 + 0xe0);
    }
    iVar9 = *(int *)(param_1 + 0xe8);
    if (iVar9 != 0) goto LAB_0087d9c8;
LAB_0087da14:
    local_d8 = *(undefined4 *)(param_1 + 0x128);
    iVar9 = *(int *)(param_1 + 0x130);
    if (iVar9 == 0) goto LAB_0087da24;
LAB_0087d9e0:
    if (iVar9 == 1) {
      local_dc = *(undefined4 *)(param_1 + 0x170);
    }
  }
  lVar10 = 0;
  uVar3 = *(uint *)(&DAT_044ea9b0 + (ulong)uVar2 * 0x10);
  lVar11 = 0;
  uVar12 = 0;
  do {
    if (uVar12 < uVar3) {
      puVar8 = (&PTR_DAT_044ea9b8)[(ulong)uVar2 * 2];
      lVar1 = param_1 + lVar11;
      uVar6 = *(undefined4 *)(puVar8 + lVar10);
      *(undefined4 *)(lVar1 + 0x58) = uVar6;
      switch(uVar6) {
      case 0:
        *(undefined **)(lVar1 + 0x68) = PTR_FUN_047d1db8;
        *(undefined **)(lVar1 + 0x70) = PTR_LAB_047d1dc0;
        *(undefined **)(lVar1 + 0x80) = PTR_FUN_047d1dc8;
        *(undefined **)(lVar1 + 0x78) = PTR_LAB_047d1dd0;
        *(undefined8 *)(lVar1 + 0x88) = 0;
        *(undefined **)(lVar1 + 0x90) = PTR_FUN_047d1dd8;
        iVar9 = *(int *)(lVar1 + 0x9c);
        *(long *)(lVar1 + 0x60) = param_1 + 0x5d8;
        lVar4 = param_1 + 0x5d8;
        break;
      case 1:
        *(undefined **)(lVar1 + 0x68) = PTR_FUN_047d1de0;
        *(undefined **)(lVar1 + 0x70) = PTR_FUN_047d1de8;
        *(undefined **)(lVar1 + 0x80) = PTR_FUN_047d1df0;
        *(undefined **)(lVar1 + 0x78) = PTR_LAB_047d1df8;
        *(undefined **)(lVar1 + 0x88) = PTR_LAB_047d1e00;
        *(undefined **)(lVar1 + 0x90) = PTR_FUN_047d1e08;
        iVar9 = *(int *)(lVar1 + 0x9c);
        *(long *)(lVar1 + 0x60) = param_1 + 0xb38;
        lVar4 = param_1 + 0xb38;
        break;
      case 2:
        *(undefined **)(lVar1 + 0x68) = PTR_FUN_047d1e10;
        *(undefined **)(lVar1 + 0x70) = PTR_LAB_047d1e18;
        *(undefined **)(lVar1 + 0x80) = PTR_LAB_047d1e20;
        *(undefined **)(lVar1 + 0x78) = PTR_LAB_047d1e28;
        *(undefined8 *)(lVar1 + 0x88) = 0;
        *(undefined **)(lVar1 + 0x90) = PTR_FUN_047d1e30;
        iVar9 = *(int *)(lVar1 + 0x9c);
        *(long *)(lVar1 + 0x60) = param_1 + 0x178;
        lVar4 = param_1 + 0x178;
        break;
      case 3:
        *(undefined **)(lVar1 + 0x68) = PTR_FUN_047d1e38;
        *(undefined **)(lVar1 + 0x70) = PTR_LAB_047d1e40;
        *(undefined **)(lVar1 + 0x80) = PTR_FUN_047d1e48;
        *(undefined **)(lVar1 + 0x78) = PTR_LAB_047d1e50;
        *(undefined **)(lVar1 + 0x88) = PTR_LAB_047d1e58;
        *(undefined **)(lVar1 + 0x90) = PTR_FUN_047d1e60;
        iVar9 = *(int *)(lVar1 + 0x9c);
        *(long *)(lVar1 + 0x60) = param_1 + 0x1f0;
        lVar4 = param_1 + 0x1f0;
        break;
      case 0xffffffff:
        *(undefined8 *)(lVar1 + 0x88) = 0;
        *(undefined8 *)(lVar1 + 0x90) = 0;
        *(undefined8 *)(lVar1 + 0x60) = 0;
        *(undefined8 *)(lVar1 + 0x78) = 0;
        *(undefined8 *)(lVar1 + 0x80) = 0;
        *(undefined8 *)(lVar1 + 0x68) = 0;
        *(undefined8 *)(lVar1 + 0x70) = 0;
        iVar9 = *(int *)(lVar1 + 0x9c);
        *(undefined8 *)(lVar1 + 0x60) = 0;
        lVar4 = 0;
        break;
      default:
        *(undefined4 *)(lVar1 + 0x58) = 0xffffffff;
        *(undefined8 *)(lVar1 + 0x60) = 0;
        *(undefined8 *)(lVar1 + 0x68) = 0;
        *(undefined8 *)(lVar1 + 0x90) = 0;
        *(undefined8 *)(lVar1 + 0x70) = 0;
        *(undefined8 *)(lVar1 + 0x78) = 0;
        *(undefined8 *)(lVar1 + 0x80) = 0;
        *(undefined8 *)(lVar1 + 0x88) = 0;
        return 0x80260201;
      }
      if (iVar9 == 0) {
        *(undefined4 *)(lVar1 + 0x98) = *(undefined4 *)(puVar8 + lVar10 + 4);
        uVar5 = (**(code **)(lVar1 + 0x68))(lVar4,auStack_b0,param_3);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        *(undefined4 *)(lVar1 + 0x9c) = 1;
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      lVar1 = param_1 + lVar11;
      uVar5 = 0;
      *(undefined4 *)(lVar1 + 0x58) = 0xffffffff;
      *(undefined8 *)(lVar1 + 0x60) = 0;
      *(undefined8 *)(lVar1 + 0x68) = 0;
      *(undefined8 *)(lVar1 + 0x90) = 0;
      *(undefined8 *)(lVar1 + 0x70) = 0;
      *(undefined8 *)(lVar1 + 0x78) = 0;
      *(undefined8 *)(lVar1 + 0x80) = 0;
      *(undefined8 *)(lVar1 + 0x88) = 0;
    }
    lVar11 = lVar11 + 0x48;
    uVar12 = uVar12 + 1;
    lVar10 = lVar10 + 0x10;
  } while (lVar11 != 0x120);
  uVar6 = local_d8;
  if (*(int *)(param_1 + 0x58) == 0) {
LAB_0087dcac:
    *(undefined4 *)(param_1 + 0x98) = uVar6;
  }
  else if (*(int *)(param_1 + 0x58) == 1) {
    uVar6 = local_dc;
    goto LAB_0087dcac;
  }
  uVar6 = local_dc;
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar7 = local_d8;
LAB_0087dcfc:
    *(undefined4 *)(param_1 + 0xe0) = uVar7;
    iVar9 = *(int *)(param_1 + 0xe8);
    if (iVar9 == 1) goto LAB_0087dd18;
LAB_0087dd10:
    if (iVar9 == 0) {
      uVar6 = local_d8;
      goto LAB_0087dd18;
    }
  }
  else {
    uVar7 = local_dc;
    if (*(int *)(param_1 + 0xa0) == 1) goto LAB_0087dcfc;
    iVar9 = *(int *)(param_1 + 0xe8);
    if (iVar9 != 1) goto LAB_0087dd10;
LAB_0087dd18:
    *(undefined4 *)(param_1 + 0x128) = uVar6;
  }
  if (*(int *)(param_1 + 0x130) != 1) {
    if (*(int *)(param_1 + 0x130) != 0) goto LAB_0087dd34;
    local_dc = local_d8;
  }
  *(undefined4 *)(param_1 + 0x170) = local_dc;
LAB_0087dd34:
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(uint *)(param_1 + 0x4c) = param_2;
  return uVar5;
}


