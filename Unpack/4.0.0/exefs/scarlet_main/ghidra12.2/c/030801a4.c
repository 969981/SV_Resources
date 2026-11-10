/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030801a4; name: FUN_030801a4
 */


void FUN_030801a4(long *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar8 = (long)(int)param_1[1] + -1;
  uVar6 = param_2[1];
  if (uVar6 == (uint)lVar8) {
    *(uint *)(param_1 + 1) = uVar6;
  }
  else {
    lVar8 = FUN_03080134(param_1,*param_1 + lVar8 * 8);
    *(uint *)(lVar8 + 4) = uVar6;
    lVar8 = (long)(int)param_1[1] + -1;
    uVar7 = (uint)lVar8;
    *(uint *)(param_1 + 1) = uVar7;
    if (uVar7 != uVar6) {
      puVar1 = (undefined4 *)(*param_1 + lVar8 * 8);
      uVar5 = puVar1[1];
      puVar2 = (undefined4 *)(*param_1 + (long)(int)uVar6 * 8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
    }
  }
  lVar8 = param_1[2];
  uVar9 = (ulong)(int)param_1[3];
  uVar10 = ((long)param_2 - lVar8 >> 3) + 1U & uVar9;
  while (puVar3 = (uint *)(lVar8 + uVar10 * 8), -1 < (int)puVar3[1]) {
    lVar4 = lVar8 + ((ulong)*puVar3 & uVar9 & 0xffffffff) * 8;
    uVar10 = (ulong)(int)uVar9;
    if ((uVar10 & (long)param_2 - lVar4 >> 3) < (uVar10 & (long)puVar3 - lVar4 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar3;
      uVar9 = (ulong)*(uint *)(param_1 + 3);
      lVar8 = param_1[2];
      uVar10 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar3;
    }
    uVar10 = ((ulong)((long)puVar3 - lVar8) >> 3) + 1 & uVar10;
  }
  param_2[1] = 0xffffffff;
  return;
}


