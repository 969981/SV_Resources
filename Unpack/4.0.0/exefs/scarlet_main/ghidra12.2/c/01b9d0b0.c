/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b9d0b0; name: FUN_01b9d0b0
 */


void FUN_01b9d0b0(undefined1 *param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 double param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined8 local_80 [2];
  undefined8 auStack_70 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  float local_8;
  float fStack_4;
  
  fStack_4 = (float)param_3;
  local_8 = (float)param_5;
  pcVar1 = FUN_01b9fdd8;
  if (DAT_0480be58 == '\0') {
    pcVar1 = (code *)0x0;
  }
  local_80[0] = param_4;
  auStack_70[0] = param_2;
  FUN_01ba0278(&local_60,param_6,pcVar1,0,auStack_70,&fStack_4,local_80,&local_8);
  *param_1 = 1;
  local_40 = local_60;
  uStack_38 = uStack_58;
  local_30 = local_50;
  uStack_28 = uStack_48;
  FUN_016b4318(param_1 + 8,&local_40);
  return;
}


