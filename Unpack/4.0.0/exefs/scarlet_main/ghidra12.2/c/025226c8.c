/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025226c8; name: FUN_025226c8
 */


void FUN_025226c8(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = &LAB_02523c04;
  if (DAT_0484f2c8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_70[0] = param_2;
  FUN_02523c94(&local_60,param_3,puVar1,0,local_70);
  *param_1 = 1;
  local_40 = local_60;
  uStack_38 = uStack_58;
  local_30 = local_50;
  uStack_28 = uStack_48;
  FUN_02523cd0(param_1 + 8,&local_40);
  return;
}


