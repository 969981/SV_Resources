/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027de734; name: FUN_027de734
 */


void FUN_027de734(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar4 = (param_3 - param_2 >> 3) * -0xf0f0f0f0f0f0f0f;
  lVar5 = *param_1;
  if ((ulong)((param_1[2] - lVar5 >> 3) * -0xf0f0f0f0f0f0f0f) < uVar4) {
    FUN_027deb8c(param_1);
    uVar3 = FUN_027debd8(param_1,uVar4);
    FUN_027dec34(param_1,uVar3);
    lVar5 = param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 0x88) {
      FUN_027deb28(lVar5,param_2);
      lVar5 = lVar5 + 0x88;
    }
    param_1[1] = lVar5;
  }
  else {
    uVar6 = (param_1[1] - lVar5 >> 3) * -0xf0f0f0f0f0f0f0f;
    lVar1 = param_2 + (param_1[1] - lVar5);
    lVar2 = lVar1;
    if (uVar4 <= uVar6) {
      lVar2 = param_3;
    }
    for (; lVar2 != param_2; param_2 = param_2 + 0x88) {
      FUN_027deab8(lVar5,param_2);
      lVar5 = lVar5 + 0x88;
    }
    if (uVar4 <= uVar6) {
      FUN_027de478(param_1,lVar5);
      return;
    }
    lVar5 = param_1[1];
    while (lVar2 != param_3) {
      FUN_027deb28(lVar5,lVar1);
      lVar5 = lVar5 + 0x88;
      lVar1 = lVar1 + 0x88;
      lVar2 = lVar1;
    }
    param_1[1] = lVar5;
  }
  return;
}


