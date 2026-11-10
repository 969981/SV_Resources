/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03486f58; name: FUN_03486f58
 */


void FUN_03486f58(void *param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  void *__dest;
  long lVar10;
  undefined8 uVar11;
  void *__src;
  ulong uVar12;
  
  *(undefined8 *)((long)param_1 + 0x1c8) = *(undefined8 *)((long)param_2 + 0x1c8);
  *(undefined8 *)((long)param_1 + 0x1d0) = *(undefined8 *)((long)param_2 + 0x1d0);
  memcpy(param_1,param_2,0x90);
  uVar6 = *(undefined8 *)((long)param_2 + 0xa0);
  uVar11 = *(undefined8 *)((long)param_2 + 0xa8);
  *(undefined4 *)((long)param_1 + 0xb0) = *(undefined4 *)((long)param_2 + 0xb0);
  *(undefined8 *)((long)param_1 + 0xa0) = uVar6;
  *(undefined8 *)((long)param_1 + 0xa8) = uVar11;
  uVar8 = *(uint *)((long)param_2 + 0x98);
  if (uVar8 != 0) {
    if ((*(uint *)((long)param_1 + 0x98) <= uVar8) && (*(uint *)((long)param_1 + 0x9c) < uVar8)) {
      uVar1 = *(uint *)((long)param_1 + 0x9c) + (uVar8 - *(uint *)((long)param_1 + 0x98));
      lVar9 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                        (0,*(undefined8 *)((long)param_1 + 0x90),(ulong)uVar1 * 0x18);
      if (lVar9 == 0) goto LAB_03487034;
      *(long *)((long)param_1 + 0x90) = lVar9;
      *(uint *)((long)param_1 + 0x9c) = uVar1;
    }
    uVar1 = uVar8;
    if (uVar8 < 2) {
      uVar1 = 1;
    }
    lVar9 = 0;
    *(uint *)((long)param_1 + 0x98) = uVar8;
    do {
      puVar3 = (undefined8 *)(*(long *)((long)param_2 + 0x90) + lVar9);
      uVar6 = *puVar3;
      uVar11 = puVar3[2];
      puVar4 = (undefined8 *)(*(long *)((long)param_1 + 0x90) + lVar9);
      lVar9 = lVar9 + 0x18;
      puVar4[1] = puVar3[1];
      puVar4[2] = uVar11;
      *puVar4 = uVar6;
    } while ((ulong)uVar1 * 0x18 != lVar9);
  }
LAB_03487034:
  uVar8 = *(uint *)((long)param_2 + 0x1c0);
  if (uVar8 == 0) {
    return;
  }
  uVar1 = *(uint *)((long)param_1 + 0x1c0);
  uVar12 = (ulong)uVar1;
  if (uVar1 <= uVar8) {
    if (*(uint *)((long)param_1 + 0x1c4) < uVar8) {
      uVar2 = *(uint *)((long)param_1 + 0x1c4) + (uVar8 - uVar1);
      __dest = (void *)((long)param_1 + 0xb8);
      if (8 < uVar2) {
        __src = *(void **)((long)param_1 + 0x1b8);
        if (__dest == __src) {
          __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,(ulong)uVar2 << 5,1);
          if (__dest == (void *)0x0) {
            return;
          }
          memcpy(__dest,__src,(uVar12 & 0x7ffffff) << 5);
        }
        else {
          __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(0,__src,(ulong)uVar2 << 5,1);
          if (__dest == (void *)0x0) {
            return;
          }
        }
      }
      *(void **)((long)param_1 + 0x1b8) = __dest;
      *(uint *)((long)param_1 + 0x1c4) = uVar2;
    }
    if (uVar1 < uVar8) {
      lVar10 = uVar8 - uVar12;
      lVar9 = uVar12 << 5;
      do {
        if (*(long *)((long)param_1 + 0x1b8) != 0) {
          puVar3 = (undefined8 *)(*(long *)((long)param_1 + 0x1b8) + lVar9);
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 1;
          puVar3[3] = 0;
        }
        lVar10 = lVar10 + -1;
        lVar9 = lVar9 + 0x20;
      } while (lVar10 != 0);
    }
  }
  uVar1 = uVar8;
  if (uVar8 < 2) {
    uVar1 = 1;
  }
  *(uint *)((long)param_1 + 0x1c0) = uVar8;
  if (uVar8 < 2) {
    uVar12 = 0;
  }
  else {
    lVar9 = 0;
    uVar12 = 0;
    do {
      puVar3 = (undefined8 *)(*(long *)((long)param_2 + 0x1b8) + lVar9);
      uVar6 = *puVar3;
      uVar11 = puVar3[1];
      puVar4 = (undefined8 *)(*(long *)((long)param_1 + 0x1b8) + lVar9);
      uVar7 = puVar3[3];
      uVar12 = uVar12 + 2;
      puVar4[2] = puVar3[2];
      puVar4[3] = uVar7;
      *puVar4 = uVar6;
      puVar4[1] = uVar11;
      lVar10 = *(long *)((long)param_2 + 0x1b8) + lVar9;
      lVar5 = *(long *)((long)param_1 + 0x1b8) + lVar9;
      uVar6 = *(undefined8 *)(lVar10 + 0x20);
      uVar11 = *(undefined8 *)(lVar10 + 0x28);
      lVar9 = lVar9 + 0x40;
      uVar7 = *(undefined8 *)(lVar10 + 0x38);
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar10 + 0x30);
      *(undefined8 *)(lVar5 + 0x38) = uVar7;
      *(undefined8 *)(lVar5 + 0x20) = uVar6;
      *(undefined8 *)(lVar5 + 0x28) = uVar11;
    } while (((ulong)uVar1 & 0xfffffffe) != uVar12);
  }
  if ((uVar1 & 1) != 0) {
    puVar3 = (undefined8 *)(*(long *)((long)param_2 + 0x1b8) + uVar12 * 0x20);
    uVar6 = *puVar3;
    uVar11 = puVar3[1];
    puVar4 = (undefined8 *)(*(long *)((long)param_1 + 0x1b8) + uVar12 * 0x20);
    uVar7 = puVar3[3];
    puVar4[2] = puVar3[2];
    puVar4[3] = uVar7;
    *puVar4 = uVar6;
    puVar4[1] = uVar11;
  }
  return;
}


