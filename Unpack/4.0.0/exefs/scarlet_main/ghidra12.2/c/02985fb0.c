/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02985fb0; name: FUN_02985fb0
 */


undefined4 FUN_02985fb0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_18 [2];
  
  uVar1 = FUN_0124e498();
  local_40 = FUN_0124c614(uVar1,param_3);
  local_38 = param_4;
  FUN_01461214(param_1);
  uVar1 = FUN_01247fd8();
  FUN_01247fe0(uVar1,local_18,&local_40);
  return local_18[0];
}


