/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0336f7f0; name: FUN_0336f7f0
 */


void FUN_0336f7f0(long *param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  lVar5 = (long)(int)param_1[1] + -1;
  uVar3 = param_2[1];
  if (uVar3 == (uint)lVar5) {
    *(uint *)(param_1 + 1) = uVar3;
  }
  else {
    lVar5 = FUN_0336f75c(param_1,*param_1 + lVar5 * 0xc);
    *(uint *)(lVar5 + 4) = uVar3;
    lVar5 = (long)(int)param_1[1] + -1;
    uVar4 = (uint)lVar5;
    *(uint *)(param_1 + 1) = uVar4;
    if (uVar4 != uVar3) {
      puVar6 = (undefined8 *)(*param_1 + lVar5 * 0xc);
      puVar7 = (undefined8 *)(*param_1 + (long)(int)uVar3 * 0xc);
      uVar9 = *puVar6;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar6 + 1);
      *puVar7 = uVar9;
    }
  }
  lVar5 = param_1[2];
  uVar8 = (ulong)(int)param_1[3];
  uVar10 = ((long)param_2 - lVar5 >> 3) + 1U & uVar8;
  while (puVar1 = (uint *)(lVar5 + uVar10 * 8), -1 < (int)puVar1[1]) {
    lVar2 = lVar5 + ((ulong)*puVar1 & uVar8 & 0xffffffff) * 8;
    uVar10 = (ulong)(int)uVar8;
    if ((uVar10 & (long)param_2 - lVar2 >> 3) < (uVar10 & (long)puVar1 - lVar2 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      uVar8 = (ulong)*(uint *)(param_1 + 3);
      lVar5 = param_1[2];
      uVar10 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar1;
    }
    uVar10 = ((ulong)((long)puVar1 - lVar5) >> 3) + 1 & uVar10;
  }
  param_2[1] = 0xffffffff;
  return;
}


