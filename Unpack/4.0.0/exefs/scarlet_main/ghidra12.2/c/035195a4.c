/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 035195a4; name: FUN_035195a4
 */


void FUN_035195a4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_047c71a0;
  param_1[1] = &PTR_LAB_047c7458;
  param_1[7] = &PTR_LAB_047c7530;
  uVar3 = *(uint *)(param_1 + 0x2d);
  param_1[4] = &PTR_LAB_047c7498;
  puVar1 = PTR_DAT_047e2fd0;
  if (uVar3 != 0) {
    puVar4 = (undefined8 *)param_1[0x2c];
    puVar2 = puVar4;
    do {
      puVar5 = (undefined8 *)*puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5);
        (**(code **)(puVar1 + 0x30))(2,puVar5);
        puVar4 = (undefined8 *)param_1[0x2c];
        uVar3 = *(uint *)(param_1 + 0x2d);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar4 + uVar3);
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  lVar6 = param_1[0x30];
  lVar7 = lVar6;
  if (*(int *)(param_1 + 0x31) != 0) {
    do {
      (**(code **)(**(long **)(lVar7 + 8) + 0x10))();
      lVar6 = param_1[0x30];
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != lVar6 + (ulong)*(uint *)(param_1 + 0x31) * 0x10);
  }
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (lVar6 != 0) {
    *(undefined4 *)(param_1 + 0x31) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar6);
    param_1[0x30] = 0;
    *(undefined4 *)((long)param_1 + 0x18c) = 0;
  }
  puVar2 = (undefined8 *)param_1[0x2c];
  param_1[0x28] = PTR_DAT_047e74e8 + 0x10;
  puVar1 = PTR_DAT_047e2fd0;
  uVar3 = *(uint *)(param_1 + 0x2d);
  if (uVar3 != 0) {
    puVar4 = puVar2;
    do {
      puVar5 = (undefined8 *)*puVar4;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5);
        (**(code **)(puVar1 + 0x30))(2,puVar5);
        puVar2 = (undefined8 *)param_1[0x2c];
        uVar3 = *(uint *)(param_1 + 0x2d);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar2 + uVar3);
  }
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x2d) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[0x2c] = 0;
    *(undefined4 *)((long)param_1 + 0x16c) = 0;
  }
  FUN_0352d2a0(param_1);
  return;
}


