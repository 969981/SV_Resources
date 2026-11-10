/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124ac3c; name: FUN_0124ac3c
 */


void FUN_0124ac3c(long param_1,long *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 auStack_18 [8];
  
  FUN_029889d4(param_1,param_2,0);
  local_64 = (**(code **)(*param_2 + 0x98))(param_2);
  local_68 = *param_3;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  local_5c = 0x2a;
  local_48 = 0;
  uStack_40 = 0;
  uVar1 = FUN_0293e844(*(undefined8 *)(param_1 + 0x78));
  FUN_0293e84c(uVar1,auStack_18,&local_68);
  return;
}


