/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034bc688; name: FUN_034bc688
 */


long FUN_034bc688(long *param_1,ulong param_2)

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
    uVar4 = FUN_034bc830(param_1,iVar1);
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
    *puVar9 = &PTR_LAB_047c44e8;
    lVar8 = *param_1;
  }
  puVar3 = PTR_DAT_047e2fd0;
  puVar5 = (undefined8 *)(lVar8 + param_2 * 0x28);
  if (puVar5 < puVar9) {
    do {
      puVar10 = puVar9 + -5;
      *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar9 + -1);
      puVar5 = (undefined8 *)puVar9[2];
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar9 + -4);
      *(undefined1 *)((long)puVar9 + 0xc) = *(undefined1 *)((long)puVar9 + -0x1c);
      if (puVar5 != (undefined8 *)0x0) {
        if (*(uint *)(puVar9 + 3) != 0) {
          lVar8 = (ulong)*(uint *)(puVar9 + 3) * 0x28;
          do {
            (**(code **)*puVar5)(puVar5);
            lVar8 = lVar8 + -0x28;
            puVar5 = puVar5 + 5;
          } while (lVar8 != 0);
          puVar5 = (undefined8 *)puVar9[2];
        }
        *(undefined4 *)(puVar9 + 3) = 0;
        (**(code **)(puVar3 + 0x30))(0,puVar5);
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
    *puVar9 = &PTR_LAB_047c44e8;
    lVar8 = *param_1;
  }
  return lVar8 + param_2 * 0x28;
}


