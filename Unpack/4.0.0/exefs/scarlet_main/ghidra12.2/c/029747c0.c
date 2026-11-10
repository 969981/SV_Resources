/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029747c0; name: FUN_029747c0
 */


uint FUN_029747c0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long *local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined1 local_50 [16];
  undefined1 local_40;
  undefined8 local_3c;
  
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  local_58 = 0;
  local_68 = (long *)0x0;
  uStack_60 = 0;
  FUN_0189372c(local_50);
  local_40 = 0;
  local_3c = 0;
  local_58 = 0x16;
  local_68 = param_2;
  uStack_60 = param_3;
  local_50 = FUN_02923b90(uVar1,uVar1);
  uVar2 = FUN_0293e160(param_1,&local_68);
  return uVar2 & 1;
}


