/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016b3f38; name: FUN_016b3f38
 */


void FUN_016b3f38(undefined1 *param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 double param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  code *pcVar1;
  float local_94;
  undefined8 local_90 [2];
  float local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_8;
  
  local_7c = (float)param_3;
  local_94 = (float)param_5;
  pcVar1 = FUN_01956584;
  if (DAT_0480be50 == '\0') {
    pcVar1 = (code *)0x0;
  }
  local_90[0] = param_4;
  local_78 = param_9;
  uStack_74 = param_8;
  local_70[0] = param_2;
  local_8 = param_7;
  FUN_016b3fe4(&local_60,param_6,pcVar1,0,local_70,&local_8,&uStack_74,&local_78,&local_7c,local_90,
               &local_94);
  *param_1 = 1;
  local_40 = local_60;
  uStack_38 = uStack_58;
  local_30 = local_50;
  uStack_28 = uStack_48;
  FUN_016b4318(param_1 + 8,&local_40);
  return;
}


