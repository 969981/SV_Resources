/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0143b218; name: FUN_0143b218
 */


void FUN_0143b218(long param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  uVar2 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
  if ((uVar2 & 0xffff) == (param_2 & 0xffff)) {
    return;
  }
  FUN_0143ba0c(param_1,param_2,param_3);
  FUN_00ef289c(*(undefined8 *)(param_1 + 0x70),param_2);
  uVar3 = FUN_00e99784(param_1);
  uVar3 = FUN_0143b78c(uVar1,param_2,uVar3);
  FUN_00ef2550(*(undefined8 *)(param_1 + 0x70),uVar3);
  uVar3 = FUN_00cec030(*(undefined8 *)(param_1 + 0x70));
  uVar1 = FUN_0143b4b4(uVar1,param_2,uVar3);
  FUN_00ef644c(*(undefined8 *)(param_1 + 0x70),uVar1);
  FUN_00f13b9c(param_1,1);
  return;
}


