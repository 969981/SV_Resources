/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034bd3f8; name: FUN_034bd3f8
 */


long FUN_034bd3f8(long *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar6 = *(uint *)((long)param_1 + 0xc);
  param_2 = param_2 & 0xffffffff;
  if (uVar6 <= uVar2) {
    iVar1 = uVar6 + (uVar6 >> 1);
    if (uVar6 == 0) {
      iVar1 = 1;
    }
    uVar4 = FUN_034bd560(param_1,iVar1);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    uVar6 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar6 <= uVar2) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 1);
  lVar7 = *param_1;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  puVar9 = (undefined8 *)(lVar7 + (ulong)uVar2 * 0x28);
  lVar8 = 0;
  if (lVar7 != 0) {
    lVar7 = lVar7 + (ulong)uVar2 * 0x28;
    *(undefined4 *)(lVar7 + 8) = 0;
    *(undefined1 *)(lVar7 + 0xc) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *puVar9 = &PTR_LAB_047c4568;
    lVar8 = *param_1;
  }
  puVar3 = PTR_DAT_047e2fd0;
  puVar5 = (undefined8 *)(lVar8 + param_2 * 0x28);
  if (puVar5 < puVar9) {
    do {
      *(undefined1 *)(puVar9 + 4) = *(undefined1 *)(puVar9 + -1);
      puVar10 = puVar9 + -5;
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar9 + -4);
      *(undefined1 *)((long)puVar9 + 0xc) = *(undefined1 *)((long)puVar9 + -0x1c);
      if (puVar9[2] != 0) {
        *(undefined4 *)(puVar9 + 3) = 0;
        (**(code **)(puVar3 + 0x30))(0);
        puVar9[2] = 0;
        *(undefined4 *)((long)puVar9 + 0x1c) = 0;
      }
      puVar9[2] = puVar9[-3];
      *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(puVar9 + -2);
      *(undefined4 *)((long)puVar9 + 0x1c) = *(undefined4 *)((long)puVar9 + -0xc);
      puVar9[-3] = 0;
      puVar9[-2] = 0;
      puVar5 = (undefined8 *)(*param_1 + param_2 * 0x28);
      puVar9 = puVar10;
    } while (puVar5 < puVar10);
  }
  (**(code **)*puVar5)();
  lVar8 = 0;
  if (*param_1 != 0) {
    puVar9 = (undefined8 *)(*param_1 + param_2 * 0x28);
    *(undefined4 *)(puVar9 + 1) = 0;
    *(undefined1 *)((long)puVar9 + 0xc) = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    *puVar9 = &PTR_LAB_047c4568;
    lVar8 = *param_1;
  }
  return lVar8 + param_2 * 0x28;
}


