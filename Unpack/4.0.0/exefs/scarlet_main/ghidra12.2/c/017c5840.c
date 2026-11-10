/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017c5840; name: FUN_017c5840
 */


void FUN_017c5840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined4 local_44;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  undefined8 local_8;
  
  local_44 = param_6;
  local_40[0] = param_3;
  local_30[0] = param_2;
  local_8 = param_4;
  uVar1 = FUN_017c7574(param_5,local_30,local_40,&local_8,&local_44);
  FUN_017c5890(param_1,uVar1);
  return;
}


