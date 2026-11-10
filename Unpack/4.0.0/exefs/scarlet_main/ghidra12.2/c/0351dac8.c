/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351dac8; name: FUN_0351dac8
 */


void FUN_0351dac8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                 byte param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  param_1[6] = 0;
  *param_1 = &PTR_LAB_047c7a08;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[8] = 0;
  param_1[9] = 0x3f80000000000000;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = PTR_DAT_047e7508 + 0x10;
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_3 + 0x14);
  param_1[4] = param_3[1];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 2);
  piVar3 = (int *)*param_3;
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  param_1[3] = piVar3;
  param_1[6] = param_4;
  *(byte *)(param_1 + 7) = param_5 & 1;
  uVar1 = *(uint *)(param_4 + 0x80);
  if (uVar1 < 2) {
    *(uint *)(param_4 + 0x80) = uVar1 + 1;
    if ((uVar1 != 0) && (*(char *)(param_4 + 0x84) != '\0')) {
      FUN_034c60b0(*(undefined8 *)PTR_DAT_047e6cc0,param_4);
    }
  }
  else {
    *(uint *)(param_4 + 0x80) = uVar1 + 1;
  }
  lVar6 = *(long *)PTR_DAT_047e7050;
  uVar5 = param_1[6];
  puVar7 = (undefined8 *)(lVar6 + 0x50);
  puVar2 = (undefined8 *)*puVar7;
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x20);
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    *puVar2 = *puVar7;
    *puVar7 = puVar2;
  }
  if (*(undefined8 **)(lVar6 + 0x48) == (undefined8 *)0x0) {
    *(undefined8 **)(lVar6 + 0x40) = puVar2;
  }
  else {
    **(undefined8 **)(lVar6 + 0x48) = puVar2;
    puVar2 = (undefined8 *)*puVar7;
  }
  *(undefined8 **)(lVar6 + 0x48) = puVar2;
  *(undefined8 *)(lVar6 + 0x50) = *puVar2;
  *puVar2 = 0;
  lVar4 = *(long *)(lVar6 + 0x48);
  *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
  *(undefined8 **)(lVar4 + 8) = param_1;
  *(undefined4 *)(lVar4 + 0x10) = 0;
  *(undefined8 *)(lVar4 + 0x18) = uVar5;
  return;
}


