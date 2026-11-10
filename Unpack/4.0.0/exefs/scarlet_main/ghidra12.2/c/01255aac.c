/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01255aac; name: FUN_01255aac
 */


undefined8 FUN_01255aac(undefined8 param_1,char *param_2,undefined1 *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  *param_2 = '\0';
  *param_3 = 10;
  if (param_4 == 0) {
    return 0;
  }
  uVar4 = FUN_01689a40(param_1,param_4);
  uVar5 = FUN_0124e498(param_1,uVar4);
  bVar1 = FUN_01255b6c(uVar5,param_4);
  FUN_01582534(param_1);
  uVar5 = FUN_014813ec();
  bVar2 = FUN_019a7b1c(uVar5,uVar4);
  uVar3 = FUN_018d31e0(param_1,param_4);
  *param_3 = uVar3;
  *param_2 = (bVar2 <= bVar1) << 1;
  uVar5 = FUN_014813f4(param_1,param_4);
  return uVar5;
}


