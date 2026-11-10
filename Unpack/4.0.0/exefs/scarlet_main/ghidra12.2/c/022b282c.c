/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022b282c; name: FUN_022b282c
 */


void FUN_022b282c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 double param_5,undefined8 param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined4 local_84;
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
  
  fStack_4 = (float)param_4;
  local_8 = (float)param_5;
  puVar1 = PTR_LAB_047dde78;
  if (DAT_04843c18 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_84 = param_7;
  local_80[0] = param_3;
  auStack_70[0] = param_2;
  FUN_022b3454(&local_60,param_6,puVar1,0,auStack_70,local_80,&fStack_4,&local_8,&local_84);
  *param_1 = 1;
  local_40 = local_60;
  uStack_38 = uStack_58;
  local_30 = local_50;
  uStack_28 = uStack_48;
  FUN_022b3140(param_1 + 8,&local_40);
  return;
}


