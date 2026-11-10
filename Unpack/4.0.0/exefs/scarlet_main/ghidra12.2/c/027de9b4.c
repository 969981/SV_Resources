/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027de9b4; name: FUN_027de9b4
 */


void FUN_027de9b4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = FUN_01cf7e20();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = uVar3;
  if (param_2[1] - *param_2 != 0) {
    FUN_027dec34(param_1,(param_2[1] - *param_2 >> 3) * -0xf0f0f0f0f0f0f0f);
    lVar2 = param_2[1];
    lVar4 = param_1[1];
    for (lVar1 = *param_2; lVar1 != lVar2; lVar1 = lVar1 + 0x88) {
      FUN_027deb28(lVar4,lVar1);
      lVar4 = lVar4 + 0x88;
    }
    param_1[1] = lVar4;
  }
  return;
}


