/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031fe0b8; name: FUN_031fe0b8
 */


void FUN_031fe0b8(long *param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar6 = (long)(int)param_1[1] + -1;
  uVar4 = param_2[1];
  if (uVar4 == (uint)lVar6) {
    *(uint *)(param_1 + 1) = uVar4;
  }
  else {
    lVar6 = FUN_031fdaac(param_1,*param_1 + lVar6 * 0x18);
    *(uint *)(lVar6 + 4) = uVar4;
    lVar6 = (long)(int)param_1[1] + -1;
    uVar5 = (uint)lVar6;
    *(uint *)(param_1 + 1) = uVar5;
    if (uVar5 != uVar4) {
      puVar7 = (undefined8 *)(*param_1 + lVar6 * 0x18);
      puVar9 = (undefined8 *)(*param_1 + (long)(int)uVar4 * 0x18);
      uVar3 = *puVar7;
      uVar8 = puVar7[2];
      puVar9[1] = puVar7[1];
      puVar9[2] = uVar8;
      *puVar9 = uVar3;
    }
  }
  lVar6 = param_1[2];
  uVar10 = (ulong)(int)param_1[3];
  uVar11 = ((long)param_2 - lVar6 >> 3) + 1U & uVar10;
  while (puVar1 = (uint *)(lVar6 + uVar11 * 8), -1 < (int)puVar1[1]) {
    lVar2 = lVar6 + ((ulong)*puVar1 & uVar10 & 0xffffffff) * 8;
    uVar11 = (ulong)(int)uVar10;
    if ((uVar11 & (long)param_2 - lVar2 >> 3) < (uVar11 & (long)puVar1 - lVar2 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      uVar10 = (ulong)*(uint *)(param_1 + 3);
      lVar6 = param_1[2];
      uVar11 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar1;
    }
    uVar11 = ((ulong)((long)puVar1 - lVar6) >> 3) + 1 & uVar11;
  }
  param_2[1] = 0xffffffff;
  return;
}


