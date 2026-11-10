/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022cd350; name: FUN_022cd350
 */


void FUN_022cd350(undefined1 *param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_30;
  float local_4;
  
  local_4 = (float)param_2;
  puVar1 = PTR_LAB_047de0a0;
  if (DAT_048463b8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_022cda28(param_5,puVar1,0,&local_4);
  *param_1 = 1;
  local_50 = CONCAT44(extraout_var,extraout_s0);
  uStack_48 = extraout_var_00;
  uStack_40 = param_3;
  local_30 = param_4;
  FUN_019b8824(param_1 + 8,&local_50);
  return;
}


