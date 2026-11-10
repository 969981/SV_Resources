/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012481b0; name: FUN_012481b0
 */


undefined4 FUN_012481b0(undefined8 param_1,long *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_40 [2];
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_01582534(param_1);
  uVar2 = FUN_014813e4();
  uVar1 = FUN_01248268(uVar2,uVar1);
  FUN_01582534(param_1);
  uVar2 = FUN_014813ec();
  FUN_01253868(uVar2,uVar1,local_14,local_18);
  local_38 = local_14[0];
  local_37 = local_18[0];
  local_35 = 1;
  local_36 = param_3;
  FUN_01461214(param_1);
  uVar2 = FUN_01248260();
  FUN_012482a0(uVar2,local_40,&local_38);
  return local_40[0];
}


