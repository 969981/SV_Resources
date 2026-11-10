/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027de880; name: FUN_027de880
 */


void FUN_027de880(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = param_3 - param_2 >> 5;
  lVar6 = *param_1;
  if ((ulong)(param_1[2] - lVar6 >> 5) < uVar5) {
    FUN_027df0b8(param_1);
    uVar4 = FUN_027df104(param_1,uVar5);
    FUN_027df148(param_1,uVar4);
    lVar6 = param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 0x20) {
      FUN_01cfa5b0(lVar6,param_2);
      lVar6 = lVar6 + 0x20;
    }
    param_1[1] = lVar6;
  }
  else {
    lVar2 = param_2 + (param_1[1] - lVar6);
    uVar1 = param_1[1] - lVar6 >> 5;
    lVar3 = lVar2;
    if (uVar5 <= uVar1) {
      lVar3 = param_3;
    }
    for (; lVar3 != param_2; param_2 = param_2 + 0x20) {
      FUN_01d0e1a8(lVar6,param_2);
      lVar6 = lVar6 + 0x20;
    }
    if (uVar5 <= uVar1) {
      FUN_027df04c(param_1,lVar6);
      return;
    }
    lVar6 = param_1[1];
    while (lVar3 != param_3) {
      FUN_01cfa5b0(lVar6,lVar2);
      lVar6 = lVar6 + 0x20;
      lVar2 = lVar2 + 0x20;
      lVar3 = lVar2;
    }
    param_1[1] = lVar6;
  }
  return;
}


