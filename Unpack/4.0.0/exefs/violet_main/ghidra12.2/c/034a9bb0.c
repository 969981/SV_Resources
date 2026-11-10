/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a9bb0; name: FUN_034a9bb0
 */


void FUN_034a9bb0(long param_1,ulong param_2,ulong *param_3)

{
  int iVar1;
  ulong *puVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar12;
  undefined8 *puVar11;
  uint uVar13;
  ulong uVar14;
  ulong *puVar15;
  
  puVar15 = *(ulong **)(param_1 + 8);
  if (puVar15 == (ulong *)0x0) {
    return;
  }
  uVar5 = *param_3 & *puVar15;
  if (uVar5 == 0) {
    uVar5 = FUN_034be08c(puVar15 + 2,param_2);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if ((int)puVar15[3] == 0) {
      puVar15[1] = 0xffffffffffffffff;
      return;
    }
    return;
  }
  uVar3 = (uint)puVar15[3];
  puVar7 = puVar15 + 2;
  puVar4 = (ulong *)FUN_034bdf98(puVar7,param_2);
  uVar14 = puVar15[2];
  puVar2 = (ulong *)(uVar14 + (ulong)uVar3 * 0x10);
  if (puVar2 != puVar4) {
    puVar8 = puVar4;
    do {
      uVar9 = puVar8[1];
      if ((((*(long *)(uVar9 + 0x10) != *(long *)(param_2 + 0x10)) ||
           (*(int *)(uVar9 + 0x18) != *(int *)(param_2 + 0x18))) ||
          (*(int *)(uVar9 + 0x20) != *(int *)(param_2 + 0x20))) ||
         (((*(char *)(uVar9 + 0x28) != *(char *)(param_2 + 0x28) ||
           (*(char *)(uVar9 + 0x30) != *(char *)(param_2 + 0x30))) ||
          (*(long *)(uVar9 + 0x38) != *(long *)(param_2 + 0x38))))) break;
      if (uVar9 == param_2) {
        *puVar8 = uVar5;
        return;
      }
      puVar8 = puVar8 + 2;
    } while (puVar2 != puVar8);
    if (puVar2 != puVar4) {
      uVar13 = *(uint *)((long)puVar15 + 0x1c);
      if (uVar3 < uVar13) {
        uVar9 = uVar14;
      }
      else {
        iVar1 = uVar13 + (uVar13 >> 1);
        if (uVar13 == 0) {
          iVar1 = 1;
        }
        uVar13 = iVar1 + uVar13;
        uVar9 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,uVar14,(ulong)uVar13 << 4);
        if (uVar9 == 0) {
          return;
        }
        puVar15[2] = uVar9;
        *(uint *)((long)puVar15 + 0x1c) = uVar13;
      }
      if (uVar13 <= uVar3) {
        return;
      }
      puVar11 = (undefined8 *)(uVar9 + (ulong)(uint)puVar15[3] * 0x10);
      *(uint *)(puVar15 + 3) = (uint)puVar15[3] + 1;
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else {
        *puVar11 = 0;
        puVar11[1] = 0;
        uVar9 = *puVar7;
      }
      uVar6 = (long)puVar4 - uVar14 >> 4 & 0xffffffff;
      puVar10 = (undefined8 *)(uVar9 + ((long)puVar4 - uVar14 >> 4 & 0xffffffff) * 0x10);
      if (puVar10 < puVar11) {
        do {
          puVar12 = puVar11 + -2;
          *puVar11 = *puVar12;
          puVar11[1] = puVar11[-1];
          uVar9 = *puVar7;
          puVar10 = (undefined8 *)(uVar9 + uVar6 * 0x10);
          puVar11 = puVar12;
        } while (puVar10 < puVar12);
      }
      if (uVar9 == 0) {
        return;
      }
      *puVar10 = 0;
      puVar10[1] = 0;
      if (*puVar7 == 0) {
        return;
      }
      puVar7 = (ulong *)(*puVar7 + uVar6 * 0x10);
      goto LAB_034a9df4;
    }
  }
  uVar13 = *(uint *)((long)puVar15 + 0x1c);
  if (uVar13 <= uVar3) {
    iVar1 = uVar13 + (uVar13 >> 1);
    if (uVar13 == 0) {
      iVar1 = 1;
    }
    uVar13 = iVar1 + uVar13;
    uVar14 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,uVar14,(ulong)uVar13 << 4);
    if (uVar14 == 0) {
      return;
    }
    puVar15[2] = uVar14;
    *(uint *)((long)puVar15 + 0x1c) = uVar13;
  }
  if (uVar13 <= uVar3) {
    return;
  }
  uVar9 = puVar15[3];
  *(uint *)(puVar15 + 3) = (uint)uVar9 + 1;
  if (uVar14 == 0) {
    return;
  }
  puVar7 = (ulong *)(uVar14 + (ulong)(uint)uVar9 * 0x10);
LAB_034a9df4:
  *puVar7 = uVar5;
  puVar7[1] = param_2;
  puVar15[1] = puVar15[1] & uVar5;
  if (uVar3 == 0) {
    FUN_034b86cc(*(undefined8 *)PTR_DAT_047e6fd8,param_1,**(undefined8 **)(param_1 + 8));
    return;
  }
  return;
}


