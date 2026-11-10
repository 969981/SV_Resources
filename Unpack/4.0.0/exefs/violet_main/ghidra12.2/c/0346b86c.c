/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0346b86c; name: FUN_0346b86c
 */


undefined8 * FUN_0346b86c(void *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  void *__src;
  long *plVar12;
  
  uVar3 = *(uint *)((long)param_1 + 0x10);
  __src = *(void **)((long)param_1 + 8);
  if (uVar3 == 0) {
    lVar7 = 0;
  }
  else {
    iVar6 = 0;
    uVar8 = uVar3;
    do {
      iVar1 = iVar6 + (uVar8 >> 1);
      plVar12 = (long *)((long)__src + (long)iVar1 * 8);
      uVar4 = *(uint *)(*plVar12 + 0x18);
      if (uVar4 == param_2) goto LAB_0346b8d4;
      if (uVar4 < param_2) {
        iVar6 = iVar1 + 1;
      }
      uVar8 = uVar8 - (uVar4 < param_2) >> 1;
    } while (uVar8 != 0);
    lVar7 = (long)iVar6;
  }
  plVar12 = (long *)((long)__src + lVar7 * 8);
LAB_0346b8d4:
  if (plVar12 == (long *)0x0) {
    uVar8 = *(uint *)((long)param_1 + 0x14);
    if (uVar3 < uVar8) goto LAB_0346ba5c;
    iVar6 = uVar8 + (uVar8 >> 1);
    if (uVar8 == 0) {
      iVar6 = 1;
    }
    uVar8 = iVar6 + uVar8;
    pvVar5 = param_1;
    if (uVar8 < 2) {
LAB_0346b940:
      __src = pvVar5;
      if (pvVar5 == (void *)0x0) {
        return (undefined8 *)0x0;
      }
    }
    else {
      if (param_1 != __src) {
        pvVar5 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(0,__src,(ulong)uVar8 << 3,1);
        goto LAB_0346b940;
      }
      pvVar5 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,(ulong)uVar8 << 3,1);
      if (pvVar5 == (void *)0x0) {
        return (undefined8 *)0x0;
      }
      memcpy(pvVar5,__src,((ulong)uVar3 & 0x1fffffff) << 3);
      __src = pvVar5;
    }
    *(void **)((long)param_1 + 8) = __src;
    *(uint *)((long)param_1 + 0x14) = uVar8;
LAB_0346ba5c:
    if (uVar3 < uVar8) {
      uVar3 = *(uint *)((long)param_1 + 0x10);
      *(uint *)((long)param_1 + 0x10) = uVar3 + 1;
      return (undefined8 *)((long)__src + (ulong)uVar3 * 8);
    }
    return (undefined8 *)0x0;
  }
  uVar8 = *(uint *)((long)param_1 + 0x14);
  if (uVar3 < uVar8) {
    pvVar5 = __src;
    goto LAB_0346b99c;
  }
  iVar6 = uVar8 + (uVar8 >> 1);
  if (uVar8 == 0) {
    iVar6 = 1;
  }
  uVar8 = iVar6 + uVar8;
  pvVar5 = param_1;
  if (uVar8 < 2) {
LAB_0346b990:
    if (pvVar5 == (void *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  else {
    if (param_1 != __src) {
      pvVar5 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(0,__src,(ulong)uVar8 << 3,1);
      goto LAB_0346b990;
    }
    pvVar5 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,(ulong)uVar8 << 3,1);
    if (pvVar5 == (void *)0x0) {
      return (undefined8 *)0x0;
    }
    memcpy(pvVar5,__src,((ulong)uVar3 & 0x1fffffff) << 3);
  }
  *(void **)((long)param_1 + 8) = pvVar5;
  *(uint *)((long)param_1 + 0x14) = uVar8;
LAB_0346b99c:
  if (uVar8 <= uVar3) {
    return (undefined8 *)0x0;
  }
  uVar3 = *(uint *)((long)param_1 + 0x10);
  uVar9 = (ulong)((long)plVar12 - (long)__src) >> 3;
  *(uint *)((long)param_1 + 0x10) = uVar3 + 1;
  if (uVar3 <= (uint)uVar9) {
    return (undefined8 *)((long)pvVar5 + (uVar9 & 0xffffffff) * 8);
  }
  puVar11 = (undefined8 *)((long)pvVar5 + (ulong)uVar3 * 8);
  do {
    puVar10 = puVar11 + -1;
    *puVar11 = *puVar10;
    puVar2 = (undefined8 *)
             (*(long *)((long)param_1 + 8) +
             ((ulong)((long)plVar12 - (long)__src) >> 3 & 0xffffffff) * 8);
    puVar11 = puVar10;
  } while (puVar2 < puVar10);
  return puVar2;
}


