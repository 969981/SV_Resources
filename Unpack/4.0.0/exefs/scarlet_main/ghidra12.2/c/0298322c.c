/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298322c; name: FUN_0298322c
 */


void FUN_0298322c(undefined8 param_1,undefined8 param_2,uint *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  uVar1 = FUN_01243680();
  uVar2 = FUN_01238c2c(param_1);
  FUN_01582534(param_1);
  uVar5 = FUN_014813ec();
  uVar3 = FUN_010e161c(uVar5,param_4);
  FUN_011e244c(auStack_48,9,uVar3);
  FUN_01582534(param_1);
  uVar5 = FUN_00f7e284();
  uVar4 = FUN_010e171c(auStack_48,uVar1,uVar2,uVar5,param_2);
  *param_3 = uVar4 & 0xff;
  return;
}


