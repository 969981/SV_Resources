/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7af68; name: FUN_01f7af68
 */


void FUN_01f7af68(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = (param_3 - param_2 >> 5) * -0x1111111111111111;
  puVar3 = (undefined8 *)*param_1;
  if ((ulong)((param_1[2] - (long)puVar3 >> 5) * -0x1111111111111111) < uVar5) {
    FUN_01f7b25c(param_1);
    uVar1 = FUN_01f7b2e0(param_1,uVar5);
    FUN_01f7b33c(param_1,uVar1);
  }
  else {
    uVar6 = (param_1[1] - (long)puVar3 >> 5) * -0x1111111111111111;
    lVar4 = param_2;
    param_2 = param_2 + (param_1[1] - (long)puVar3);
    if (uVar5 <= uVar6) {
      param_2 = param_3;
    }
    while (param_2 != lVar4) {
      FUN_01f7aabc(puVar3,lVar4);
      puVar3 = puVar3 + 0x3c;
      lVar4 = lVar4 + 0x1e0;
    }
    if (uVar5 <= uVar6) {
      puVar2 = (undefined8 *)param_1[1];
      while (puVar2 != puVar3) {
        puVar2 = puVar2 + -0x3c;
        (**(code **)*puVar2)(puVar2);
      }
      param_1[1] = puVar3;
      return;
    }
  }
  FUN_01f7b0f8(param_1,param_2,param_3);
  return;
}


