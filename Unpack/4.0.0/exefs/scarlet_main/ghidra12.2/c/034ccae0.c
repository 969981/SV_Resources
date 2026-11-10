/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ccae0; name: FUN_034ccae0
 */


uint * FUN_034ccae0(long *param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar10;
  undefined8 *puVar9;
  ulong uVar11;
  
  uVar8 = *(uint *)(param_1 + 1);
  if (uVar8 == 0) {
    uVar11 = 0;
  }
  else {
    uVar6 = 0;
    do {
      uVar1 = uVar6 + (uVar8 >> 1);
      uVar3 = *(uint *)(*param_1 +
                       (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3));
      if (uVar3 == param_2) {
        *param_3 = 1;
        return (uint *)(*param_1 + (long)(int)uVar1 * 8);
      }
      if (uVar3 < param_2) {
        uVar6 = uVar1 + 1;
      }
      uVar8 = uVar8 - (uVar3 < param_2) >> 1;
    } while (uVar8 != 0);
    uVar11 = (ulong)uVar6;
  }
  *param_3 = 0;
  uVar6 = *(uint *)(param_1 + 1);
  uVar8 = *(uint *)((long)param_1 + 0xc);
  lVar5 = *param_1;
  if (lVar5 == 0) {
    if (uVar8 <= uVar6) {
      iVar2 = uVar8 + (uVar8 >> 1);
      if (uVar8 == 0) {
        iVar2 = 1;
      }
      uVar8 = iVar2 + uVar8;
      lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,(ulong)uVar8 << 3);
      if (lVar5 == 0) {
        return (uint *)0x0;
      }
      *param_1 = lVar5;
      *(uint *)((long)param_1 + 0xc) = uVar8;
    }
    else {
      lVar5 = 0;
    }
    if (uVar8 <= uVar6) {
      return (uint *)0x0;
    }
    puVar4 = (uint *)(lVar5 + (ulong)*(uint *)(param_1 + 1) * 8);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    if (lVar5 != 0) {
      puVar4[0] = 0;
      puVar4[1] = 0;
      goto LAB_034ccc70;
    }
  }
  else {
    if (uVar8 <= uVar6) {
      iVar2 = uVar8 + (uVar8 >> 1);
      if (uVar8 == 0) {
        iVar2 = 1;
      }
      uVar8 = iVar2 + uVar8;
      lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,lVar5,(ulong)uVar8 << 3);
      if (lVar5 == 0) {
        return (uint *)0x0;
      }
      *param_1 = lVar5;
      *(uint *)((long)param_1 + 0xc) = uVar8;
    }
    if (uVar8 <= uVar6) {
      return (uint *)0x0;
    }
    uVar8 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar8 + 1;
    puVar9 = (undefined8 *)(lVar5 + (ulong)uVar8 * 8);
    *puVar9 = 0;
    lVar5 = *param_1;
    if ((undefined8 *)(lVar5 + uVar11 * 8) < puVar9) {
      do {
        puVar10 = puVar9 + -1;
        *puVar9 = *puVar10;
        lVar5 = *param_1;
        puVar9 = puVar10;
      } while ((undefined8 *)(lVar5 + uVar11 * 8) < puVar10);
    }
    lVar7 = 0;
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + uVar11 * 8) = 0;
      lVar7 = *param_1;
    }
    puVar4 = (uint *)(lVar7 + uVar11 * 8);
  }
  if (puVar4 == (uint *)0x0) {
    return (uint *)0x0;
  }
LAB_034ccc70:
  *puVar4 = param_2;
  return puVar4;
}


