/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02983cc0; name: FUN_02983cc0
 */


undefined1 FUN_02983cc0(long param_1,undefined4 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  
  local_30 = param_2;
  local_2c = (**(code **)(*param_3 + 0xb0))(param_3,1);
  local_2b = (**(code **)(*param_3 + 0xb0))(param_3,2);
  local_2a = (**(code **)(*param_3 + 0xb0))(param_3,3);
  local_29 = (**(code **)(*param_3 + 0xb0))(param_3,4);
  local_28 = (**(code **)(*param_3 + 0xb0))(param_3,5);
  local_27 = (**(code **)(*param_3 + 0xb0))(param_3,6);
  local_26 = (**(code **)(*param_3 + 0xb0))(param_3,7);
  local_25 = (**(code **)(*param_3 + 0x298))(param_3);
  uVar1 = FUN_0293e2e4(*(undefined8 *)(param_1 + 0x78));
  FUN_0293e2ec(uVar1,local_38,&local_30);
  return local_38[0];
}


