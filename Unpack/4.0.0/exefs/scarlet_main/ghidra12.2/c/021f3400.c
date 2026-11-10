/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f3400; name: FUN_021f3400
 */


void FUN_021f3400(long param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if ((param_2 & 0xff) != (param_3 & 0xff)) {
    if (((param_3 | param_2) & 0xff) < 4) {
      uVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),param_2);
      uVar2 = FUN_00eee950(*(undefined8 *)(param_1 + 0x70),param_2);
      uVar3 = FUN_00cf61d4(*(undefined8 *)(param_1 + 0x70),param_2);
      uVar5 = *(undefined8 *)(param_1 + 0x70);
      uVar4 = FUN_00eedbc8(uVar5,param_3);
      FUN_00eee5f0(uVar5,param_2,uVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x70);
      uVar4 = FUN_00eee950(uVar5,param_3);
      FUN_00eedf30(uVar5,param_2,uVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x70);
      uVar4 = FUN_00cf61d4(uVar5,param_3);
      FUN_00eee290(uVar5,param_2,uVar4);
      FUN_00eee5f0(*(undefined8 *)(param_1 + 0x70),param_3,uVar1);
      FUN_00eee290(*(undefined8 *)(param_1 + 0x70),param_3,uVar3);
      FUN_00eedf30(*(undefined8 *)(param_1 + 0x70),param_3,uVar2);
      return;
    }
  }
  return;
}


