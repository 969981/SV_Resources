/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028aa9d0; name: FUN_028aa9d0
 */


void FUN_028aa9d0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  lVar5 = *(long *)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  uVar1 = 0;
  if (lVar7 - lVar5 != 0) {
    uVar1 = (lVar7 - lVar5 >> 3) * 0x2a - 1;
  }
  uVar9 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  if (uVar1 == uVar9) {
    FUN_028aaaec(param_1);
    uVar9 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    lVar5 = *(long *)(param_1 + 8);
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if (lVar7 == lVar5) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)(*(long *)(lVar5 + (uVar9 / 0x2a) * 8) + (uVar9 % 0x2a) * 0x60);
  }
  uVar8 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  puVar6[6] = 0;
  puVar6[2] = uVar2;
  puVar6[3] = uVar4;
  *puVar6 = uVar8;
  puVar6[1] = uVar3;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[4] = param_2[4];
  puVar6[5] = param_2[5];
  puVar6[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[7] = param_2[7];
  puVar6[8] = param_2[8];
  puVar6[9] = param_2[9];
  uVar8 = param_2[10];
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[7] = 0;
  *(undefined8 *)((long)puVar6 + 0x55) = *(undefined8 *)((long)param_2 + 0x55);
  puVar6[10] = uVar8;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}


