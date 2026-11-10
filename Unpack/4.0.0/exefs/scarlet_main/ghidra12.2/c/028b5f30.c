/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b5f30; name: FUN_028b5f30
 */


undefined4 FUN_028b5f30(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_68;
  long *plStack_60;
  undefined8 local_58;
  
  local_58 = 0;
  local_68 = param_1;
  plStack_60 = param_2;
  uVar1 = FUN_028b69a8(param_1,param_2[1] - *param_2 >> 3,&local_68);
  uVar2 = FUN_028b6b10(param_1,param_2[4] - param_2[3] >> 3,&local_68);
  uVar3 = FUN_028b6c78(param_1,param_2[7] - param_2[6] >> 3,&local_68);
  uVar4 = FUN_028b6de0(param_1,param_2[10] - param_2[9] >> 3,&local_68);
  uVar5 = FUN_028b6f48(param_1,param_2[0xd] - param_2[0xc] >> 3,&local_68);
  uVar6 = FUN_028b70b0(param_1,param_2[0x10] - param_2[0xf] >> 3,&local_68);
  uVar1 = FUN_028b7220(param_1,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  return uVar1;
}


