/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03478100; name: FUN_03478100
 */


ulong * FUN_03478100(void *param_1,ulong param_2,uint param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  void *pvVar10;
  uint uVar11;
  
  uVar4 = *(uint *)((long)param_1 + 0x28);
  if (uVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    do {
      iVar1 = uVar11 + (uVar4 >> 1);
      puVar7 = (ulong *)(*(long *)((long)param_1 + 0x20) + (long)iVar1 * 0x18);
      uVar9 = *puVar7;
      uVar2 = (uint)puVar7[1];
      if (uVar9 == param_2 && uVar2 == param_3) {
        *param_4 = 1;
        return (ulong *)(*(long *)((long)param_1 + 0x20) + (long)iVar1 * 0x18);
      }
      if ((uVar9 < param_2) || ((uVar9 == param_2 && (uVar2 < param_3)))) {
        uVar11 = iVar1 + 1;
        uVar4 = uVar4 - 1;
      }
      uVar4 = uVar4 >> 1;
    } while (uVar4 != 0);
  }
  *param_4 = 0;
  uVar2 = *(uint *)((long)param_1 + 0x28);
  uVar4 = *(uint *)((long)param_1 + 0x2c);
  pvVar10 = *(void **)((long)param_1 + 0x20);
  if (pvVar10 == (void *)0x0) {
    if (uVar4 <= uVar2) {
      iVar1 = uVar4 + (uVar4 >> 1);
      if (uVar4 == 0) {
        iVar1 = 1;
      }
      uVar4 = iVar1 + uVar4;
      uVar9 = (ulong)uVar4 * 0x18;
      pvVar10 = param_1;
      if (uVar9 < 0x19) {
LAB_034782ac:
        if (pvVar10 == (void *)0x0) {
          return (ulong *)0x0;
        }
      }
      else {
        if (param_1 != (void *)0x0) {
          pvVar10 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(4,0,uVar9,0x10);
          goto LAB_034782ac;
        }
        pvVar10 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(4,uVar9,0x10);
        if (pvVar10 == (void *)0x0) {
          return (ulong *)0x0;
        }
        memcpy(pvVar10,(void *)0x0,(ulong)(uVar2 * 0x18));
      }
      *(void **)((long)param_1 + 0x20) = pvVar10;
      *(uint *)((long)param_1 + 0x2c) = uVar4;
    }
    else {
      pvVar10 = (void *)0x0;
    }
    if (uVar4 <= uVar2) {
      return (ulong *)0x0;
    }
    uVar9 = (ulong)*(uint *)((long)param_1 + 0x28);
    *(uint *)((long)param_1 + 0x28) = *(uint *)((long)param_1 + 0x28) + 1;
    puVar7 = (ulong *)((long)pvVar10 + uVar9 * 0x18);
    if (pvVar10 != (void *)0x0) {
      *puVar7 = 0xffffffffffffffff;
      *(undefined4 *)((long)pvVar10 + uVar9 * 0x18 + 8) = 0;
      *(undefined4 *)((long)pvVar10 + uVar9 * 0x18 + 0x10) = 0x3f800000;
      goto LAB_0347837c;
    }
  }
  else {
    if (uVar4 <= uVar2) {
      iVar1 = uVar4 + (uVar4 >> 1);
      if (uVar4 == 0) {
        iVar1 = 1;
      }
      uVar4 = iVar1 + uVar4;
      uVar9 = (ulong)uVar4 * 0x18;
      pvVar3 = param_1;
      if (uVar9 < 0x19) {
LAB_034781e8:
        pvVar10 = pvVar3;
        if (pvVar3 == (void *)0x0) {
          return (ulong *)0x0;
        }
      }
      else {
        if (param_1 != pvVar10) {
          pvVar3 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(4,pvVar10,uVar9,0x10);
          goto LAB_034781e8;
        }
        pvVar3 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(4,uVar9,0x10);
        if (pvVar3 == (void *)0x0) {
          return (ulong *)0x0;
        }
        memcpy(pvVar3,pvVar10,(ulong)(uVar2 * 0x18));
        pvVar10 = pvVar3;
      }
      *(void **)((long)param_1 + 0x20) = pvVar10;
      *(uint *)((long)param_1 + 0x2c) = uVar4;
    }
    if (uVar4 <= uVar2) {
      return (ulong *)0x0;
    }
    uVar9 = (ulong)*(uint *)((long)param_1 + 0x28);
    *(uint *)((long)param_1 + 0x28) = *(uint *)((long)param_1 + 0x28) + 1;
    puVar5 = (undefined8 *)((long)pvVar10 + uVar9 * 0x18);
    if (pvVar10 == (void *)0x0) {
      lVar6 = 0;
    }
    else {
      *puVar5 = 0xffffffffffffffff;
      *(undefined4 *)((long)pvVar10 + uVar9 * 0x18 + 8) = 0;
      *(undefined4 *)((long)pvVar10 + uVar9 * 0x18 + 0x10) = 0x3f800000;
      lVar6 = *(long *)((long)param_1 + 0x20);
    }
    uVar9 = (ulong)uVar11;
    if ((undefined8 *)(lVar6 + (ulong)uVar11 * 0x18) < puVar5) {
      do {
        puVar8 = puVar5 + -3;
        *puVar5 = *puVar8;
        puVar5[1] = puVar5[-2];
        *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar5 + -1);
        lVar6 = *(long *)((long)param_1 + 0x20);
        puVar5 = puVar8;
      } while ((undefined8 *)(lVar6 + uVar9 * 0x18) < puVar8);
    }
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      puVar5 = (undefined8 *)(lVar6 + uVar9 * 0x18);
      *puVar5 = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)(puVar5 + 2) = 0x3f800000;
      lVar6 = *(long *)((long)param_1 + 0x20);
    }
    puVar7 = (ulong *)(lVar6 + uVar9 * 0x18);
  }
  if (puVar7 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
LAB_0347837c:
  *puVar7 = param_2;
  *(uint *)(puVar7 + 1) = param_3;
  return puVar7;
}


