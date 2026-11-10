/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01854a84; name: FUN_01854a84
 */


void FUN_01854a84(undefined1 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  undefined1 local_60 [16];
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_30;
  
  local_60 = (*(code *)*param_6)();
  *param_1 = 1;
  uStack_50 = param_3;
  local_40 = param_4;
  uStack_30 = param_5;
  FUN_00d319d0(param_1 + 8,local_60);
  return;
}


