/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0348b100; name: FUN_0348b100
 */


/* WARNING: Removing unreachable block (ram,0x0348b278) */
/* WARNING: Removing unreachable block (ram,0x0348b28c) */
/* WARNING: Removing unreachable block (ram,0x0348b2ac) */
/* WARNING: Removing unreachable block (ram,0x0348b2c4) */

undefined8 * FUN_0348b100(void *param_1,ulong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  void *pvVar9;
  uint uVar10;
  int iVar11;
  
  uVar2 = *(uint *)((long)param_1 + 0x18);
  pvVar9 = *(void **)((long)param_1 + 0x10);
  if (uVar2 == 0) {
    if (pvVar9 == (void *)0x0) {
      iVar11 = *(int *)((long)param_1 + 0x1c);
      if (iVar11 == 0) {
        iVar11 = 1;
        if (param_1 == (void *)0x0) {
          return (undefined8 *)0x0;
        }
        *(void **)((long)param_1 + 0x10) = param_1;
        *(undefined4 *)((long)param_1 + 0x1c) = 1;
        pvVar9 = param_1;
      }
      else {
        pvVar9 = (void *)0x0;
      }
      if (iVar11 == 0) {
        return (undefined8 *)0x0;
      }
      uVar2 = *(uint *)((long)param_1 + 0x18);
      *(uint *)((long)param_1 + 0x18) = uVar2 + 1;
      return (undefined8 *)((long)pvVar9 + (ulong)uVar2 * 8);
    }
    uVar10 = 0;
  }
  else {
    uVar4 = 0;
    uVar5 = uVar2;
    do {
      uVar10 = uVar4 + (uVar5 >> 1);
      uVar7 = *(ulong *)((long)pvVar9 + (long)(int)uVar10 * 8);
      if (uVar7 == param_2) goto LAB_0348b164;
      if (uVar7 < param_2) {
        uVar4 = uVar10 + 1;
      }
      uVar5 = uVar5 - (uVar7 < param_2) >> 1;
    } while (uVar5 != 0);
    uVar10 = uVar4;
  }
LAB_0348b164:
  uVar4 = *(uint *)((long)param_1 + 0x1c);
  if (uVar2 < uVar4) goto LAB_0348b1c8;
  iVar11 = uVar4 + (uVar4 >> 1);
  if (uVar4 == 0) {
    iVar11 = 1;
  }
  uVar4 = iVar11 + uVar4;
  pvVar3 = param_1;
  if (uVar4 < 2) {
LAB_0348b1b8:
    pvVar9 = pvVar3;
    if (pvVar3 == (void *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  else {
    if (param_1 != pvVar9) {
      pvVar3 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(4,pvVar9,(ulong)uVar4 << 3,0x10);
      goto LAB_0348b1b8;
    }
    pvVar3 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(4,(ulong)uVar4 << 3,0x10);
    if (pvVar3 == (void *)0x0) {
      return (undefined8 *)0x0;
    }
    memcpy(pvVar3,pvVar9,((ulong)uVar2 & 0x1fffffff) << 3);
    pvVar9 = pvVar3;
  }
  *(void **)((long)param_1 + 0x10) = pvVar9;
  *(uint *)((long)param_1 + 0x1c) = uVar4;
LAB_0348b1c8:
  if (uVar4 <= uVar2) {
    return (undefined8 *)0x0;
  }
  uVar2 = *(uint *)((long)param_1 + 0x18);
  *(uint *)((long)param_1 + 0x18) = uVar2 + 1;
  if (uVar2 <= uVar10) {
    return (undefined8 *)((long)pvVar9 + (ulong)uVar10 * 8);
  }
  puVar8 = (undefined8 *)((long)pvVar9 + (ulong)uVar2 * 8);
  do {
    puVar6 = puVar8 + -1;
    *puVar8 = *puVar6;
    puVar1 = (undefined8 *)(*(long *)((long)param_1 + 0x10) + (ulong)uVar10 * 8);
    puVar8 = puVar6;
  } while (puVar1 < puVar6);
  return puVar1;
}


