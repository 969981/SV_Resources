/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01680064; name: FUN_01680064
 */


void FUN_01680064(undefined8 param_1,undefined1 *param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_24;
  
  local_24 = 1;
  local_40 = param_6;
  local_38 = param_4;
  uStack_30 = param_5;
  local_28 = param_7;
  FUN_01461214();
  uVar1 = FUN_016800c4();
  FUN_01680554(uVar1,local_48,&local_40);
  *param_2 = local_48[0];
  *param_3 = local_44;
  return;
}


