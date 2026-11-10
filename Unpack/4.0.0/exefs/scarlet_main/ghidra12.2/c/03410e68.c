/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03410e68; name: FUN_03410e68
 */


void FUN_03410e68(long *param_1,long param_2,undefined8 param_3,long *param_4,long *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float local_7c;
  float local_78;
  float local_74;
  long local_70;
  long local_68;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar4 = 0;
    uVar8 = (uint)*(long *)(param_2 + 0x50);
    if (uVar1 != 0) {
      uVar4 = uVar8 / uVar1;
    }
    for (lVar7 = *(long *)(*param_1 + (ulong)(uVar8 - uVar4 * uVar1) * 8); lVar7 != 0;
        lVar7 = *(long *)(lVar7 + 0x78)) {
      if (*(long *)(lVar7 + 0x70) == *(long *)(param_2 + 0x50)) goto LAB_03410f10;
    }
  }
  *param_4 = 0;
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0) {
    lVar7 = 0;
  }
  else {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = 0xffffffff / uVar1;
    }
    for (lVar7 = *(long *)(*param_1 + (ulong)~(uVar4 * uVar1) * 8);
        (lVar7 != 0 && (*(long *)(lVar7 + 0x70) != -1)); lVar7 = *(long *)(lVar7 + 0x78)) {
    }
  }
LAB_03410f10:
  *param_4 = lVar7;
  *param_5 = 0;
  local_7c = 1.0;
  lVar7 = *(long *)(param_2 + 0x58);
  if ((lVar7 != -1) && (uVar1 = *(uint *)(param_1 + 4), uVar1 != 0)) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = (uint)lVar7 / uVar1;
    }
    for (lVar5 = *(long *)(param_1[3] + (ulong)((uint)lVar7 - uVar4 * uVar1) * 8); lVar5 != 0;
        lVar5 = *(long *)(lVar5 + 0x70)) {
      if (*(long *)(lVar5 + 0x68) == lVar7) {
        if (*(char *)(lVar5 + 0x660) != '\0') {
          if (*(uint *)(lVar5 + 0x58) == 0) goto LAB_03410f9c;
          lVar13 = (ulong)*(uint *)(lVar5 + 0x58) << 3;
          plVar14 = *(long **)(lVar5 + 0x50);
          goto LAB_03410f7c;
        }
        break;
      }
    }
  }
  goto LAB_03411004;
  while (lVar13 = lVar13 + -8, plVar14 = plVar14 + 1, lVar13 != 0) {
LAB_03410f7c:
    if (*(long *)(*plVar14 + 0x70) == *(long *)(param_2 + 0x50)) {
      if (*plVar14 != 0) goto LAB_03411004;
      break;
    }
  }
LAB_03410f9c:
  uVar6 = FUN_03423cb8(lVar5,param_3,param_4,param_5,&local_7c,&local_68);
  if ((uVar6 & 1) != 0) {
    lVar13 = *param_4;
    fVar15 = *(float *)(lVar13 + 0x94);
    lVar9 = *param_5;
    lVar5 = *(long *)(lVar13 + 0x70);
    uVar2 = *(undefined4 *)(lVar13 + 0x90);
    uVar3 = *(undefined4 *)(lVar13 + 0x9c);
    if (lVar9 == 0) {
      uVar10 = 0;
      uVar11 = 0x3f800000;
      fVar16 = 0.0;
      uVar12 = 0xffffffffffffffff;
    }
    else {
      fVar16 = *(float *)(lVar9 + 0x94) - *(float *)(lVar9 + 0x94) * local_7c * local_7c;
      uVar12 = *(undefined8 *)(lVar9 + 0x70);
      uVar10 = *(undefined4 *)(lVar9 + 0x90);
      uVar11 = *(undefined4 *)(lVar9 + 0x9c);
    }
    lVar9 = *(long *)(param_2 + 0x68);
    *(long *)(param_2 + 0x68) = lVar5;
    lVar13 = *(long *)(param_2 + 0x58);
    *(long *)(param_2 + 0x58) = lVar7;
    *(undefined4 *)(param_2 + 0x70) = uVar2;
    *(float *)(param_2 + 0x74) = fVar15 - fVar15 * (1.0 - local_7c) * (1.0 - local_7c);
    *(undefined4 *)(param_2 + 0x78) = uVar3;
    *(undefined4 *)(param_2 + 0x7c) = 0;
    *(undefined8 *)(param_2 + 0x80) = uVar12;
    *(undefined4 *)(param_2 + 0x88) = uVar10;
    *(float *)(param_2 + 0x8c) = fVar16;
    *(undefined4 *)(param_2 + 0x90) = uVar11;
    *(undefined4 *)(param_2 + 0x94) = 0;
    *(float *)(param_2 + 0x98) = local_7c;
    if (lVar9 != lVar5) {
      *(undefined2 *)(param_2 + 0xc4) = 0x101;
    }
    if (lVar13 == lVar7) {
      return;
    }
    goto LAB_034111a8;
  }
LAB_03411004:
  lVar7 = *param_4;
  if (lVar7 == 0) {
    lVar5 = *(long *)(param_2 + 0x68);
    lVar7 = *(long *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x58) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x68) = 0xffffffffffffffff;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x74) = 0x3f80000000000000;
    *(undefined4 *)(param_2 + 0x7c) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0xffffffffffffffff;
    *(undefined4 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x8c) = 0x3f80000000000000;
    *(undefined8 *)(param_2 + 0x94) = 0x3f80000000000000;
    if (lVar5 != -1) {
      *(undefined2 *)(param_2 + 0xc4) = 0x101;
    }
    if (lVar7 == -1) {
      return;
    }
  }
  else {
    *param_5 = 0;
    local_7c = 1.0;
    if (*(int *)(lVar7 + 0x58) == 0) {
      lVar7 = 0;
      lVar5 = -1;
      local_7c = 1.0;
    }
    else {
      fVar15 = 3.4028235e+38;
      plVar14 = *(long **)(lVar7 + 0x50);
      lVar5 = -1;
      do {
        lVar13 = *plVar14;
        local_70 = 0;
        if (((*(char *)(lVar13 + 0x660) != '\0') &&
            (local_68 = lVar7,
            uVar6 = FUN_03423cb8(lVar13,param_3,&local_68,&local_70,&local_74,&local_78),
            (uVar6 & 1) != 0)) && (local_78 < fVar15)) {
          *param_4 = local_68;
          *param_5 = local_70;
          local_7c = local_74;
          lVar5 = *(long *)(lVar13 + 0x68);
          fVar15 = local_78;
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != (long *)(*(long *)(lVar7 + 0x50) + (ulong)*(uint *)(lVar7 + 0x58) * 8));
      lVar7 = *param_5;
    }
    lVar9 = *param_4;
    fVar15 = *(float *)(lVar9 + 0x94);
    lVar13 = *(long *)(lVar9 + 0x70);
    uVar2 = *(undefined4 *)(lVar9 + 0x90);
    uVar3 = *(undefined4 *)(lVar9 + 0x9c);
    if (lVar7 == 0) {
      uVar10 = 0;
      uVar11 = 0x3f800000;
      fVar16 = 0.0;
      uVar12 = 0xffffffffffffffff;
    }
    else {
      fVar16 = *(float *)(lVar7 + 0x94) - *(float *)(lVar7 + 0x94) * local_7c * local_7c;
      uVar12 = *(undefined8 *)(lVar7 + 0x70);
      uVar10 = *(undefined4 *)(lVar7 + 0x90);
      uVar11 = *(undefined4 *)(lVar7 + 0x9c);
    }
    lVar9 = *(long *)(param_2 + 0x68);
    *(long *)(param_2 + 0x68) = lVar13;
    lVar7 = *(long *)(param_2 + 0x58);
    *(long *)(param_2 + 0x58) = lVar5;
    *(undefined4 *)(param_2 + 0x70) = uVar2;
    *(float *)(param_2 + 0x74) = fVar15 - fVar15 * (1.0 - local_7c) * (1.0 - local_7c);
    *(undefined4 *)(param_2 + 0x78) = uVar3;
    *(undefined4 *)(param_2 + 0x7c) = 0;
    *(undefined8 *)(param_2 + 0x80) = uVar12;
    *(undefined4 *)(param_2 + 0x88) = uVar10;
    *(float *)(param_2 + 0x8c) = fVar16;
    *(undefined4 *)(param_2 + 0x90) = uVar11;
    *(undefined4 *)(param_2 + 0x94) = 0;
    *(float *)(param_2 + 0x98) = local_7c;
    if (lVar9 != lVar13) {
      *(undefined2 *)(param_2 + 0xc4) = 0x101;
    }
    if (lVar7 == lVar5) {
      return;
    }
  }
LAB_034111a8:
  *(undefined1 *)(param_2 + 0xc4) = 1;
  return;
}


