/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01680f20; name: FUN_01680f20
 */


uint FUN_01680f20(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_28;
  char local_24 [4];
  
  local_24[0] = '\0';
  local_28 = 0;
  uVar3 = FUN_01246e90();
  uVar1 = FUN_016829a8(uVar3,param_2,param_4,param_3,&local_28,local_24);
  if ((uVar1 & 1) == 0) {
    if (local_24[0] == '\0') {
      uVar3 = FUN_01243584(param_1);
      uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
      FUN_0167a95c(uVar3,uVar2);
    }
  }
  else {
    FUN_01681170(param_1,param_2,param_3,param_4);
    uVar3 = FUN_01246e90(param_1);
    FUN_01681808(uVar3,param_2);
    FUN_01680ff0(param_1,param_2,local_28);
  }
  return uVar1 & 1;
}


