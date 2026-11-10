/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028ab27c; name: FUN_028ab27c
 */


void FUN_028ab27c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar5 = *(ulong *)(param_1 + 0x20);
  if (uVar5 == 0) {
    FUN_028ab380(param_1);
    uVar5 = *(ulong *)(param_1 + 0x20);
  }
  plVar1 = (long *)(*(long *)(param_1 + 8) + (uVar5 / 0x2a) * 8);
  lVar8 = *plVar1;
  lVar6 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar6 = lVar8 + (uVar5 % 0x2a) * 0x60;
  }
  if (lVar6 == lVar8) {
    lVar6 = plVar1[-1] + 0xfc0;
  }
  uVar7 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  *(undefined8 *)(lVar6 + -0x30) = 0;
  *(undefined8 *)(lVar6 + -0x50) = uVar2;
  *(undefined8 *)(lVar6 + -0x48) = uVar4;
  *(undefined8 *)(lVar6 + -0x60) = uVar7;
  *(undefined8 *)(lVar6 + -0x58) = uVar3;
  *(undefined8 *)(lVar6 + -0x40) = 0;
  *(undefined8 *)(lVar6 + -0x38) = 0;
  *(undefined8 *)(lVar6 + -0x40) = param_2[4];
  *(undefined8 *)(lVar6 + -0x38) = param_2[5];
  *(undefined8 *)(lVar6 + -0x30) = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined8 *)(lVar6 + -0x28) = 0;
  *(undefined8 *)(lVar6 + -0x20) = 0;
  *(undefined8 *)(lVar6 + -0x18) = 0;
  *(undefined8 *)(lVar6 + -0x28) = param_2[7];
  *(undefined8 *)(lVar6 + -0x20) = param_2[8];
  *(undefined8 *)(lVar6 + -0x18) = param_2[9];
  uVar7 = param_2[10];
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[7] = 0;
  *(undefined8 *)(lVar6 + -0xb) = *(undefined8 *)((long)param_2 + 0x55);
  *(undefined8 *)(lVar6 + -0x10) = uVar7;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}


