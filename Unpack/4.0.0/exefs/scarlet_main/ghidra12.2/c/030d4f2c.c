/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030d4f2c; name: FUN_030d4f2c
 */


void FUN_030d4f2c(long *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar7 = (long)(int)param_1[1] + -1;
  uVar5 = param_2[1];
  if (uVar5 == (uint)lVar7) {
    *(uint *)(param_1 + 1) = uVar5;
  }
  else {
    lVar7 = FUN_030b04f4(param_1,*param_1 + lVar7 * 8);
    *(uint *)(lVar7 + 4) = uVar5;
    lVar7 = (long)(int)param_1[1] + -1;
    uVar6 = (uint)lVar7;
    *(uint *)(param_1 + 1) = uVar6;
    if (uVar6 != uVar5) {
      puVar1 = (undefined4 *)(*param_1 + lVar7 * 8);
      puVar2 = (undefined4 *)(*param_1 + (long)(int)uVar5 * 8);
      *puVar2 = *puVar1;
      *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar1 + 1);
    }
  }
  lVar7 = param_1[2];
  uVar8 = (ulong)(int)param_1[3];
  uVar9 = ((long)param_2 - lVar7 >> 3) + 1U & uVar8;
  while (puVar3 = (uint *)(lVar7 + uVar9 * 8), -1 < (int)puVar3[1]) {
    lVar4 = lVar7 + ((ulong)*puVar3 & uVar8 & 0xffffffff) * 8;
    uVar9 = (ulong)(int)uVar8;
    if ((uVar9 & (long)param_2 - lVar4 >> 3) < (uVar9 & (long)puVar3 - lVar4 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar3;
      uVar8 = (ulong)*(uint *)(param_1 + 3);
      lVar7 = param_1[2];
      uVar9 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar3;
    }
    uVar9 = ((ulong)((long)puVar3 - lVar7) >> 3) + 1 & uVar9;
  }
  param_2[1] = 0xffffffff;
  return;
}


