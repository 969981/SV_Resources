/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0157184c; name: FUN_0157184c
 */


void FUN_0157184c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  ulong uVar7;
  
  uVar1 = param_1[4];
  lVar3 = param_1[5];
  lVar2 = param_1[6];
  lVar4 = param_1[7];
  if (uVar1 == 0) {
    uVar7 = param_1[2];
  }
  else {
    uVar7 = uVar1 >> 1;
  }
  if (uVar7 <= param_2) {
    uVar7 = param_2;
  }
  plVar5 = (long *)*param_1;
  uVar7 = (uVar1 + param_1[3] + uVar7) - 1 & -param_1[3];
  param_1[4] = uVar7;
  if (lVar3 == 0) {
    if (plVar5 == (long *)0x0) {
      pvVar6 = operator_new__(uVar7);
    }
    else {
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar7);
    }
  }
  else {
    pvVar6 = (void *)FUN_01572030();
  }
  param_1[5] = (long)pvVar6;
  param_1[6] = (long)pvVar6 + (param_1[4] - ((uVar1 - lVar2) + lVar3 & 0xffffffff));
  param_1[7] = (long)pvVar6 + (lVar4 - lVar3 & 0xffffffffU);
  return;
}


