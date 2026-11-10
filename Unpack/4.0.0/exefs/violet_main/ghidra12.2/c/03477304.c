/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03477304; name: FUN_03477304
 */


undefined8 FUN_03477304(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  if (*(char *)(param_1 + 0xe0) != '\0') {
    return 0;
  }
  plVar12 = DAT_048afd38;
  if (DAT_048afd38 == (long *)0x0) {
    plVar12 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
    *plVar12 = (long)(PTR_DAT_047e6e40 + 0x10);
    plVar12[1] = 0;
    puVar1 = PTR_DAT_047e6958;
    lVar14 = *(long *)(PTR_DAT_047e6958 + 8);
    plVar12[2] = 0;
    plVar12[3] = lVar14;
    plVar7 = (long *)(puVar1 + 0x10);
    if (*(long *)(puVar1 + 0x10) != 0) {
      plVar7 = (long *)(lVar14 + 0x10);
    }
    *plVar7 = (long)plVar12;
    *(long **)(puVar1 + 8) = plVar12;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    puVar1 = PTR_DAT_047e6e48 + 0x10;
    plVar12[8] = 0;
    plVar12[9] = 0;
    plVar12[0xc] = 0;
    plVar12[0xd] = 0;
    *plVar12 = (long)puVar1;
    plVar12[0x12] = 0;
    plVar12[0x13] = 0;
    plVar12[0x16] = 0;
    plVar12[0x17] = 0;
    plVar12[0x1a] = 0;
    plVar12[0x1b] = 0;
    DAT_048afd38 = plVar12;
    *(undefined2 *)(plVar12 + 0x1c) = 0x101;
  }
  puVar11 = PTR_DAT_047e6958;
  puVar1 = PTR_DAT_047e2fd0;
  if ((char)plVar12[0x1c] == '\0') {
    puVar2 = PTR_DAT_047e6e40 + 0x10;
    puVar3 = PTR_DAT_047e6e48 + 0x10;
    do {
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)(**(code **)(puVar1 + 0x10))(4,0xf0);
        *plVar12 = (long)puVar2;
        plVar12[1] = 0;
        lVar14 = *(long *)(puVar11 + 8);
        plVar12[2] = 0;
        plVar12[3] = lVar14;
        plVar7 = (long *)(puVar11 + 0x10);
        if (*(long *)(puVar11 + 0x10) != 0) {
          plVar7 = (long *)(lVar14 + 0x10);
        }
        *plVar7 = (long)plVar12;
        *(long **)(puVar11 + 8) = plVar12;
        *(int *)puVar11 = *(int *)puVar11 + 1;
        *plVar12 = (long)puVar3;
        plVar12[8] = 0;
        plVar12[9] = 0;
        plVar12[0xc] = 0;
        plVar12[0xd] = 0;
        plVar12[0x12] = 0;
        plVar12[0x13] = 0;
        plVar12[0x16] = 0;
        plVar12[0x17] = 0;
        plVar12[0x1a] = 0;
        plVar12[0x1b] = 0;
        DAT_048afd38 = plVar12;
        *(undefined2 *)(plVar12 + 0x1c) = 0x101;
      }
    } while ((char)plVar12[0x1c] == '\0');
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar10 = *(uint *)(plVar12 + 9);
  uVar15 = (ulong)uVar10;
  if (*(uint *)(param_1 + 0x4c) < uVar10) {
    uVar4 = *(uint *)(param_1 + 0x4c) + uVar10;
    uVar13 = (ulong)uVar4 * 0x18;
    lVar14 = param_1 + 0x20;
    if (0x18 < uVar13) {
      if (lVar14 == *(long *)(param_1 + 0x40)) {
        lVar14 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(4,uVar13,0x10);
        if (lVar14 == 0) {
          return 0;
        }
      }
      else {
        lVar14 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))(4,*(long *)(param_1 + 0x40),uVar13,0x10);
        if (lVar14 == 0) {
          return 0;
        }
      }
    }
    *(long *)(param_1 + 0x40) = lVar14;
    *(uint *)(param_1 + 0x4c) = uVar4;
  }
  else if (uVar10 == 0) goto LAB_0347752c;
  lVar14 = 0;
  do {
    if (*(long *)(param_1 + 0x40) != 0) {
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x40) + lVar14);
      *puVar5 = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)(puVar5 + 2) = 0x3f800000;
    }
    uVar15 = uVar15 - 1;
    lVar14 = lVar14 + 0x18;
  } while (uVar15 != 0);
LAB_0347752c:
  *(uint *)(param_1 + 0x48) = uVar10;
  if ((int)plVar12[9] != 0) {
    lVar14 = 0;
    uVar15 = 0;
    do {
      puVar5 = (undefined8 *)(plVar12[8] + lVar14);
      uVar8 = *puVar5;
      uVar9 = puVar5[1];
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x40) + lVar14);
      lVar14 = lVar14 + 0x18;
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar5 + 2);
      *puVar6 = uVar8;
      puVar6[1] = uVar9;
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(plVar12 + 9));
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  uVar10 = *(uint *)(plVar12 + 0xd);
  if (*(uint *)(param_1 + 0x6c) < uVar10) {
    uVar4 = *(uint *)(param_1 + 0x6c) + uVar10;
    lVar14 = param_1 + 0x50;
    if (1 < uVar4) {
      if (lVar14 == *(long *)(param_1 + 0x60)) {
        lVar14 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(4,(ulong)uVar4 << 3,0x10);
        if (lVar14 == 0) {
          return 0;
        }
      }
      else {
        lVar14 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))
                           (4,*(long *)(param_1 + 0x60),(ulong)uVar4 << 3,0x10);
        if (lVar14 == 0) {
          return 0;
        }
      }
    }
    *(long *)(param_1 + 0x60) = lVar14;
    *(uint *)(param_1 + 0x6c) = uVar4;
  }
  *(uint *)(param_1 + 0x68) = uVar10;
  if ((int)plVar12[0xd] != 0) {
    uVar15 = 0;
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x60) + uVar15 * 8) =
           *(undefined8 *)(plVar12[0xc] + uVar15 * 8);
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(plVar12 + 0xd));
  }
  *(undefined1 *)(param_1 + 0xe0) = 1;
  return 1;
}


