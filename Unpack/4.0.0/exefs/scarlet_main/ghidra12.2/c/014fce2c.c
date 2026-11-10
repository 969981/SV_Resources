/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014fce2c; name: FUN_014fce2c
 */


void FUN_014fce2c(long param_1,long *param_2,uint param_3,ulong param_4,uint param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_014fced4(uVar3,uVar1,param_3,param_5,param_6);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar1 = 1;
  if ((param_4 & 1) != 0) {
    uVar1 = 2;
  }
  FUN_0129aff0(uVar3,uVar1,uVar2,param_6,param_3 & 0xffff,param_5 & 0xff);
  return;
}


