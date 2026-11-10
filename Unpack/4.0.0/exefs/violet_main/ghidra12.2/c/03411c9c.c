/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03411c9c; name: FUN_03411c9c
 */


ulong * FUN_03411c9c(void *param_1,ulong param_2,undefined1 *param_3)

{
  int iVar1;
  ulong *puVar2;
  void *pvVar3;
  uint uVar4;
  ulong *puVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  void *pvVar9;
  
  uVar6 = *(uint *)((long)param_1 + 0x18);
  if (uVar6 == 0) {
    uVar8 = 0;
  }
  else {
    uVar4 = 0;
    do {
      iVar1 = uVar4 + (uVar6 >> 1);
      uVar8 = *(ulong *)(*(long *)((long)param_1 + 0x10) + (long)iVar1 * 8);
      if (uVar8 == param_2) {
        *param_3 = 1;
        return (ulong *)(*(long *)((long)param_1 + 0x10) + (long)iVar1 * 8);
      }
      if (uVar8 < param_2) {
        uVar4 = iVar1 + 1;
      }
      uVar6 = uVar6 - (uVar8 < param_2) >> 1;
    } while (uVar6 != 0);
    uVar8 = (ulong)uVar4;
  }
  *param_3 = 0;
  pvVar9 = *(void **)((long)param_1 + 0x10);
  if (pvVar9 == (void *)0x0) {
    uVar4 = *(uint *)((long)param_1 + 0x18);
    uVar6 = *(uint *)((long)param_1 + 0x1c);
    if (uVar4 < uVar6) {
      pvVar9 = (void *)0x0;
    }
    else {
      iVar1 = uVar6 + (uVar6 >> 1);
      if (uVar6 == 0) {
        iVar1 = 1;
      }
      uVar6 = iVar1 + uVar6;
      pvVar9 = param_1;
      if (uVar6 < 2) {
LAB_03411e24:
        if (pvVar9 == (void *)0x0) {
          return (ulong *)0x0;
        }
      }
      else {
        if (param_1 != (void *)0x0) {
          pvVar9 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(4,0,(ulong)uVar6 << 3,0x10);
          goto LAB_03411e24;
        }
        pvVar9 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(4,(ulong)uVar6 << 3,0x10);
        if (pvVar9 == (void *)0x0) {
          return (ulong *)0x0;
        }
        memcpy(pvVar9,(void *)0x0,((ulong)uVar4 & 0x1fffffff) << 3);
      }
      *(void **)((long)param_1 + 0x10) = pvVar9;
      *(uint *)((long)param_1 + 0x1c) = uVar6;
    }
    if (uVar6 <= uVar4) {
      return (ulong *)0x0;
    }
    puVar2 = (ulong *)((long)pvVar9 + (ulong)*(uint *)((long)param_1 + 0x18) * 8);
    *(uint *)((long)param_1 + 0x18) = *(uint *)((long)param_1 + 0x18) + 1;
    goto joined_r0x03411e48;
  }
  uVar4 = *(uint *)((long)param_1 + 0x18);
  uVar6 = *(uint *)((long)param_1 + 0x1c);
  if (uVar6 <= uVar4) {
    iVar1 = uVar6 + (uVar6 >> 1);
    if (uVar6 == 0) {
      iVar1 = 1;
    }
    uVar6 = iVar1 + uVar6;
    pvVar3 = param_1;
    if (uVar6 < 2) {
LAB_03411d60:
      pvVar9 = pvVar3;
      if (pvVar3 == (void *)0x0) {
        return (ulong *)0x0;
      }
    }
    else {
      if (param_1 != pvVar9) {
        pvVar3 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(4,pvVar9,(ulong)uVar6 << 3,0x10);
        goto LAB_03411d60;
      }
      pvVar3 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(4,(ulong)uVar6 << 3,0x10);
      if (pvVar3 == (void *)0x0) {
        return (ulong *)0x0;
      }
      memcpy(pvVar3,pvVar9,((ulong)uVar4 & 0x1fffffff) << 3);
      pvVar9 = pvVar3;
    }
    *(void **)((long)param_1 + 0x10) = pvVar9;
    *(uint *)((long)param_1 + 0x1c) = uVar6;
  }
  if (uVar6 <= uVar4) {
    return (ulong *)0x0;
  }
  uVar6 = *(uint *)((long)param_1 + 0x18);
  *(uint *)((long)param_1 + 0x18) = uVar6 + 1;
  if ((uint)uVar8 < uVar6) {
    puVar7 = (ulong *)((long)pvVar9 + (ulong)uVar6 * 8);
    do {
      puVar5 = puVar7 + -1;
      *puVar7 = *puVar5;
      puVar2 = (ulong *)(*(long *)((long)param_1 + 0x10) + uVar8 * 8);
      puVar7 = puVar5;
    } while (puVar2 < puVar5);
  }
  else {
    puVar2 = (ulong *)((long)pvVar9 + uVar8 * 8);
  }
joined_r0x03411e48:
  if (puVar2 != (ulong *)0x0) {
    *puVar2 = param_2;
  }
  return puVar2;
}


