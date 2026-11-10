/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0221098c; name: FUN_0221098c
 */


void FUN_0221098c(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined8 *param_6,undefined8 *param_7,undefined4 *param_8)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = param_6[1];
  local_20 = *param_6;
  uStack_28 = param_7[1];
  local_30 = *param_7;
  local_38 = *param_2;
  uStack_3c = *param_3;
  local_40 = *param_4;
  uStack_44 = *param_5;
  local_48 = *param_8;
  (*(code *)*param_1)(param_1 + 4,&local_38,&uStack_3c,&local_40,&uStack_44,&local_20,&local_30,
                      &local_48);
  return;
}


