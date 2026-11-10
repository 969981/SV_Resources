/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015bd5a0; name: FUN_015bd5a0
 */


void FUN_015bd5a0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  param_1[4] = uVar2;
  param_1[5] = uVar5;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[10] = uVar2;
  param_1[0xb] = uVar5;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar6;
  uVar12 = *(ulong *)(param_2 + 0x40);
  lVar4 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) == lVar4) {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = *(long *)(param_2 + 0x48) + uVar12;
    auVar8._8_8_ = 1;
    auVar8._0_8_ = 0x6058160581605817;
    lVar9 = 0;
    lVar11 = 0;
    plVar10 = (long *)(lVar4 + (SUB168(auVar7 * auVar8,8) >> 4 & 0x1ffffffffffffff8));
  }
  else {
    lVar9 = *(long *)(lVar4 + (uVar12 / 0x5d) * 8) + (uVar12 % 0x5d) * 0x2c;
    uVar1 = *(long *)(param_2 + 0x48) + uVar12;
    plVar10 = (long *)(lVar4 + (uVar1 / 0x5d) * 8);
    lVar11 = *plVar10 + (uVar1 % 0x5d) * 0x2c;
  }
  FUN_015bda24(param_1,lVar4 + (uVar12 / 0x5d) * 8,lVar9,plVar10,lVar11);
  return;
}


